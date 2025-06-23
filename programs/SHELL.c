#include "sys.h"
#include "fat.h"
#include "baremetal/include/rp2350/sio.h"

Dir dir;
DirInfo dirinfo;
char curdir[256] = "/drv/";
char currentcmd[256] = "";
unsigned short currentcmdpos;
void Exec(const char* cmd)
{
	if(StringEquals(cmd, "hi"))
	{
		sys->print("\nhello\n");
	}
	else if (StringEquals(cmd, "fuck"))
	{
		sys->print("\n\n ###### #     #  #####  #    # \n #      #     # #     # #   #  \n #      #     # #       #  #   \n #      #     # #       ###    \n #####  #     # #       # #    \n #      #     # #       #  #   \n #      #     # #       #   #  \n #      #     # #     # #    # \n #       #####   #####  #     #\n\n");
	}
	else if(StringStartsWith(cmd, "md "))
	{
		sys->dopen(&dir,curdir);
		char foldername[256];
		StringConcat(foldername,curdir,cmd+3);
		int err = sys->dcreate(&dir,foldername);
		if(err == 0)
		{
			sys->print("SUCC\n");
		}
		else
		{
			sys->print(sys->gerror(err));
			sys->print("\n");
		}
	}
	else if(StringStartsWith(cmd, "wr "))
	{
		unsigned short len = StringLength(curdir);
		char* content = StringRemoveFirst(cmd+3,' ',len);
		char filepath[256];
		StringConcat(filepath,curdir,cmd+3);
		File file;
		sys->fopen(&file,filepath,FAT_WRITE | FAT_CREATE);
		int l;
		sys->fwrite(&file,content,StringLength(content), &l);
		sys->fclose(&file);
	}
	else if(StringStartsWith(cmd, "cat "))
	{
		unsigned short len = StringLength(curdir);
		char filepath[256];
		StringConcat(filepath,curdir,cmd+4);
		File file;
		sys->fopen(&file,filepath,FAT_READ | FAT_CREATE);
		int l;
		sys->fread(&file,filepath,256, &l);
		filepath[l] = '\x00';
		sys->fclose(&file);
		sys->print(filepath);
		sys->print("\n");
	}
	else if(StringStartsWith(cmd, "cd "))
	{
		sys->dopen(&dir,curdir);
		unsigned short len = StringLength(curdir);
		const char* cdir = cmd+3;
		if(StringEquals(cdir,".."))
		{
			StringRemoveAfterLast(curdir,'/',len-1);
			return;
		}
		StringConcat(curdir,curdir,cdir);
		StringConcat(curdir,curdir,"/");
		int err = sys->dopen(&dir,curdir);
		if(err != 0)
		{
			sys->print("invalid directory");
			curdir[len] = '\x00';
		}
	}
	
	else if(StringEquals(cmd,"clr"))
	{
		for(int i = 0; i < 1200; i++)
		{
			sys->terminal[i] = '\x00';
			sys->terminalFlags[i] = '\x00';
		}
		for(int i = 0; i < 256; i++)
		{
			currentcmd[i] = '\x00';
		}
		currentcmdpos = 0;
		sys->printptr = 0;
	}
	else if(StringEquals(cmd, "ls"))
	{
		int ret = sys->dopen(&dir,curdir);
		while(ret == 0)
		{
			ret = sys->dread(&dir,&dirinfo);
			dirinfo.name[dirinfo.name_len] = '\x00';
			if(dirinfo.attr&FAT_ATTR_DIR)
			{
				sys->printFlags("\xfe\xee","\xff\x00");
			}
			else
			{
				sys->print("\xda ");
			}
			sys->print(dirinfo.name);
			sys->print("\n");
			ret |= sys->dnext(&dir);
		}
		sys->drewind(&dir);
	}
	
	else if(StringStartsWith(cmd, "./"))
	{
		char filepath[256];
		StringConcat(filepath,curdir,cmd+2);
		DirInfo di;
		sys->stat(filepath,&di);
		File file;
		int err = sys->fopen(&file,filepath,FAT_READ);
		if(err)
		{
			sys->print(sys->gerror(err));
			sys->print("\n");
			return;
		}
		void* program = sys->malloc(di.size);
		int l;
		sys->fread(&file,program,di.size, &l);
		sys->fclose(&file);
		sys->run(program);
		sys->free(program);
	}
	
	else
	{
		sys->print("\ninvalid command: ");
		sys->print(cmd);
		sys->print("\n");
	}
}


void main()
{
	currentcmdpos = 0;
	int progress = 0;
	char curchar = 0;
	uint32_t previn = 0;
	while(1)
	{
		if((sio.gpio_in&(1<<2)) == 0)
		{
			if((previn&(1<<2)) == 0)
			{
				curchar <<= 2;
				curchar |= 0b11;
				progress++;
				previn |= 1<<2;
			}
		}
		else
		{
			previn &= ~(1<<2);
		}
		if((sio.gpio_in&(1<<17)) == 0)
		{
			if((previn&(1<<17)) == 0)
			{
				curchar <<= 2;
				curchar |= 0b01;
				progress++;
				previn |= 1<<17;
			}
		}
		else
		{
			previn &= ~(1<<17);
		}
		
		
		if((sio.gpio_in&(1<<15)) == 0)
		{
			if((previn&(1<<15)) == 0)
			{
				curchar <<= 2;
				curchar |= 0b00;
				progress++;
				previn |= 1<<15;
			}
		}
		else
		{
			previn &= ~(1<<15);
		}
		if((sio.gpio_in&(1<<3)) == 0)
		{
			if((previn&(1<<3)) == 0)
			{
				curchar <<= 2;
				curchar |= 0b10;
				progress++;
				previn |= 1<<3;
			}
		}
		else
		{
			previn &= ~(1<<3);
		}
		sys->terminal[*sys->printptr] = curchar;
		currentcmd[currentcmdpos] = curchar;
		
		if(progress >= 4)
		{
			if((curchar == 0) || (curchar == '\b'))
			{
				(*sys->printptr)--;
				currentcmdpos--;
				sys->terminal[*sys->printptr] = 0;
				currentcmd[currentcmdpos] = 0;
			}
			else if((curchar == 0xff) || (curchar == '\r') || (curchar == '\n'))
			{
				currentcmd[currentcmdpos] = 0;
				sys->terminal[*sys->printptr] = 0;
				(*sys->printptr) = (*sys->printptr) + 40-((*sys->printptr)%40);
				Exec(currentcmd);
				currentcmdpos = 0;
				for(int i = 0; i < 256; i++)
				{
					currentcmd[i] = 0;
				}
				sys->print(curdir);
				sys->print(">");
			}
			else
			{
				currentcmdpos++;
				(*sys->printptr)++;
			}
			curchar = 0;
			progress = 0;
		}
		if((*sys->printptr) >= 1200-120)
		{
			sys->scroll();
			(*sys->printptr) = 1200-160;
		}
		if(currentcmdpos > 254)
		{
			curchar = 0x0;
			currentcmdpos = 0;
		}
		
		
		char next00 = curchar<<2;
		char next01 = (curchar<<2) | 0b01;
		char next10 = (curchar<<2) | 0b10;
		char next11 = (curchar<<2) | 0b11;
		int shift = ((3-progress)<<1);
		char hchar = next00<<shift;
		
		int amnt = 1<<((3-progress)<<1);
		if(amnt > 18)
		{
			amnt = 18;
		}
		
		for(int i = 0; i < 40; i++)
		{
			if(i < amnt)
			{
				sys->renderChar(i,27,hchar+i,'\x00');
			}
			else
			{
				sys->renderChar(i,27,'\x00','\x00');
			}
		}
		hchar = next01<<shift;
		
		for(int i = 0; i < 40; i++)
		{
			if(i < amnt)
			{
				sys->renderChar(i+21,27,hchar+i,'\x00');
			}
			else
			{
				sys->renderChar(i+21,27,'\x00','\x00');
			}
		}
		hchar = next10<<shift;
		for(int i = 0; i < 40; i++)
		{
			if(i < amnt)
			{
				sys->renderChar(i,29,hchar+i,'\x00');
			}
			else
			{
				sys->renderChar(i,29,'\x00','\x00');
			}
		}
		hchar = next11<<shift;
		for(int i = 0; i < 40; i++)
		{
			if(i < amnt)
			{
				sys->renderChar(i+21,29,hchar+i,'\x00');
			}
			else
			{
				sys->renderChar(i+21,29,'\x00','\x00');
			}
		}
	}
}