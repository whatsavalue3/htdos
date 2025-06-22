#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include <rp2350/pwm.h>
#include <rp2350/spi.h>
#include <rp2350/clocks.h>
#include <rp2350/xip.h>
#include <rp2350/qmi.h>
#include <usbcdc.h>
#include "fat.h"
#include <stddef.h>

#define GPIO_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK | RESETS_RESET_PWM_MASK)


extern unsigned char _binary_8_GFX_F08_start[];

void DEV_Digital_Write(uint8_t Pin, uint8_t Value)
{
	if(Value)
	{
		sio.gpio_out_set = (1<<Pin);
	}
	else
	{
		sio.gpio_out_clr = (1<<Pin);
	}
}

uint8_t par = 0;
uint8_t prev = 0;

void DEV_SPI_WriteByte(uint8_t Value)
{
	/*
	if(par == 0)
	{
		prev = Value;
		par = 1;
		return;
	}
	par = 0;
	*/
	while (!(spi1.sspsr&SPI1_SSPSR_TNF_MASK))
		continue;
	spi1.sspdr = (uint32_t)Value;// | (((uint32_t)prev)<<8);
	
	
	//while (spi1.sspsr&SPI1_SSPSR_RNE_MASK)
	//	(void)spi1.sspdr;
	while (spi1.sspsr&SPI1_SSPSR_BSY_MASK)
		continue;
	//while (spi1.sspsr&SPI1_SSPSR_RNE_MASK)
	//	(void)spi1.sspdr;
	
	// Don't leave overrun flag set
	spi1.sspicr = SPI1_SSPICR_RORIC_MASK;
}


void DEV_SPI_WriteWord(uint16_t Value)
{
	while (!(spi1.sspsr&SPI1_SSPSR_TNF_MASK))
		continue;
	spi1.sspdr = (uint32_t)Value;
	
	
	//while (spi1.sspsr&SPI1_SSPSR_RNE_MASK)
	//	(void)spi1.sspdr;
	while (spi1.sspsr&SPI1_SSPSR_BSY_MASK)
		continue;
	//while (spi1.sspsr&SPI1_SSPSR_RNE_MASK)
	//	(void)spi1.sspdr;
	
	// Don't leave overrun flag set
	spi1.sspicr = SPI1_SSPICR_RORIC_MASK;
}


void LCD_2IN_SendCommand(uint8_t Reg)
{
	DEV_Digital_Write(8, 0);
	DEV_Digital_Write(9, 0);
	DEV_SPI_WriteByte(Reg);
	DEV_Digital_Write(9, 1);
}

/******************************************************************************
function :	send data
parameter:
	Data : Write data
******************************************************************************/
void LCD_2IN_SendData_8Bit(uint8_t Data)
{
	DEV_Digital_Write(8, 1);
	DEV_Digital_Write(9, 0);
	DEV_SPI_WriteByte(Data);
	DEV_Digital_Write(9, 1);
}



/******************************************************************************
function :	Initialize the lcd register
parameter:
******************************************************************************/
void LCD_2IN_InitReg(void)
{
	LCD_2IN_SendCommand(0x36);
	LCD_2IN_SendData_8Bit(0x00); 

	LCD_2IN_SendCommand(0x3A); 
	LCD_2IN_SendData_8Bit(0x05);

	LCD_2IN_SendCommand(0x21); 

	LCD_2IN_SendCommand(0x2A);
	LCD_2IN_SendData_8Bit(0x00);
	LCD_2IN_SendData_8Bit(0x00);
	LCD_2IN_SendData_8Bit(0x01);
	LCD_2IN_SendData_8Bit(0x3F);

	LCD_2IN_SendCommand(0x2B);
	LCD_2IN_SendData_8Bit(0x00);
	LCD_2IN_SendData_8Bit(0x00);
	LCD_2IN_SendData_8Bit(0x00);
	LCD_2IN_SendData_8Bit(0xEF);

	LCD_2IN_SendCommand(0xB2);
	LCD_2IN_SendData_8Bit(0x0C);
	LCD_2IN_SendData_8Bit(0x0C);
	LCD_2IN_SendData_8Bit(0x00);
	LCD_2IN_SendData_8Bit(0x33);
	LCD_2IN_SendData_8Bit(0x33);

	LCD_2IN_SendCommand(0xB7);
	LCD_2IN_SendData_8Bit(0x35); 

	LCD_2IN_SendCommand(0xBB);
	LCD_2IN_SendData_8Bit(0x1F);

	LCD_2IN_SendCommand(0xC0);
	LCD_2IN_SendData_8Bit(0x2C);

	LCD_2IN_SendCommand(0xC2);
	LCD_2IN_SendData_8Bit(0x01);

	LCD_2IN_SendCommand(0xC3);
	LCD_2IN_SendData_8Bit(0x12);   

	LCD_2IN_SendCommand(0xC4);
	LCD_2IN_SendData_8Bit(0x20);

	LCD_2IN_SendCommand(0xC6);
	LCD_2IN_SendData_8Bit(0x0F); 

	LCD_2IN_SendCommand(0xD0);
	LCD_2IN_SendData_8Bit(0xA4);
	LCD_2IN_SendData_8Bit(0xA1);

	LCD_2IN_SendCommand(0xE0);
	LCD_2IN_SendData_8Bit(0xD0);
	LCD_2IN_SendData_8Bit(0x08);
	LCD_2IN_SendData_8Bit(0x11);
	LCD_2IN_SendData_8Bit(0x08);
	LCD_2IN_SendData_8Bit(0x0C);
	LCD_2IN_SendData_8Bit(0x15);
	LCD_2IN_SendData_8Bit(0x39);
	LCD_2IN_SendData_8Bit(0x33);
	LCD_2IN_SendData_8Bit(0x50);
	LCD_2IN_SendData_8Bit(0x36);
	LCD_2IN_SendData_8Bit(0x13);
	LCD_2IN_SendData_8Bit(0x14);
	LCD_2IN_SendData_8Bit(0x29);
	LCD_2IN_SendData_8Bit(0x2D);

	LCD_2IN_SendCommand(0xE1);
	LCD_2IN_SendData_8Bit(0xD0);
	LCD_2IN_SendData_8Bit(0x08);
	LCD_2IN_SendData_8Bit(0x10);
	LCD_2IN_SendData_8Bit(0x08);
	LCD_2IN_SendData_8Bit(0x06);
	LCD_2IN_SendData_8Bit(0x06);
	LCD_2IN_SendData_8Bit(0x39);
	LCD_2IN_SendData_8Bit(0x44);
	LCD_2IN_SendData_8Bit(0x51);
	LCD_2IN_SendData_8Bit(0x0B);
	LCD_2IN_SendData_8Bit(0x16);
	LCD_2IN_SendData_8Bit(0x14);
	LCD_2IN_SendData_8Bit(0x2F);
	LCD_2IN_SendData_8Bit(0x31);
	LCD_2IN_SendCommand(0x21);

	LCD_2IN_SendCommand(0x11);

	LCD_2IN_SendCommand(0x29);
}
typedef uint16_t UWORD;
typedef uint8_t UBYTE;
/********************************************************************************
function:	Sets the start position and size of the display area
parameter:
		Xstart 	:   X direction Start coordinates
		Ystart  :   Y direction Start coordinates
		Xend	:   X direction end coordinates
		Yend	:   Y direction end coordinates
********************************************************************************/
void LCD_2IN_SetWindows(UWORD Xstart, UWORD Ystart, UWORD Xend, UWORD Yend)
{
	//set the X coordinates
	LCD_2IN_SendCommand(0x2A);
	LCD_2IN_SendData_8Bit(Xstart >>8);
	LCD_2IN_SendData_8Bit(Xstart & 0xff);
	LCD_2IN_SendData_8Bit((Xend - 1) >> 8);
	LCD_2IN_SendData_8Bit((Xend-1) & 0xFF);

	//set the Y coordinates
	LCD_2IN_SendCommand(0x2B);
	LCD_2IN_SendData_8Bit(Ystart >>8);
	LCD_2IN_SendData_8Bit(Ystart & 0xff);
	LCD_2IN_SendData_8Bit((Yend - 1) >> 8);
	LCD_2IN_SendData_8Bit((Yend - 1) & 0xff);

	LCD_2IN_SendCommand(0X2C);
	// printf("%d %d\r\n",x,y);
}

#define LCD_2IN_HEIGHT 320
#define LCD_2IN_WIDTH 240

#define LCD_RST_PIN  12
#define LCD_DC_PIN   8
#define LCD_BL_PIN   13
	
#define LCD_CS_PIN   9
#define LCD_CLK_PIN  10
#define LCD_MOSI_PIN 11

/******************************************************************************
function :	Clear screen
parameter:
******************************************************************************/
void LCD_2IN_Clear(UWORD Color)
{
	LCD_2IN_SetWindows(0, 0, LCD_2IN_HEIGHT,LCD_2IN_WIDTH);
	DEV_Digital_Write(LCD_DC_PIN, 1);
	DEV_Digital_Write(LCD_CS_PIN, 0);
	
	for(int i = 0; i < LCD_2IN_WIDTH; i++)
	{
		for(int j = 0; j < LCD_2IN_HEIGHT; j++)
		{
			DEV_SPI_WriteByte(Color>>8);
			DEV_SPI_WriteByte(Color&0xff);
		}
	}
	DEV_Digital_Write(LCD_CS_PIN, 1);
}

/********************************************************************************
function:	Set the resolution and scanning method of the screen
parameter:
		Scan_dir:   Scan direction
********************************************************************************/
void LCD_2IN_SetAttributes(UBYTE Scan_dir)
{
	UBYTE MemoryAccessReg = 0x00;

	//Get GRAM and LCD width and height
	if(Scan_dir == 1) {
		MemoryAccessReg = 0X70;
	} else {
		MemoryAccessReg = 0X00;
	}

	// Set the read / write scan direction of the frame memory
	LCD_2IN_SendCommand(0x36); //MX, MY, RGB mode
	LCD_2IN_SendData_8Bit(MemoryAccessReg);	//0x08 set RGB
}

uint8_t pix[240*320/8];

void renderChar(unsigned short x, unsigned short y, char c, char f)
{
	int sx = x;
	int sy = y << 3;
	//LCD_2IN_SetWindows(sx,sy,sx+8,sy+8);
	//DEV_Digital_Write(LCD_DC_PIN, 1);
	//DEV_Digital_Write(LCD_CS_PIN, 0);
	for(unsigned int i = 0; i < 8; i++)
	{
		unsigned char b = _binary_8_GFX_F08_start[i+((((unsigned int)c)&0xff)<<3)];
		int pos = (sy+i)*40+sx;
		pix[pos] = b^f;
	}
	//DEV_Digital_Write(LCD_CS_PIN, 1);
}

void renderCharInv(unsigned short x, unsigned short y, char c)
{
	int sx = x << 3;
	int sy = y << 3;
	LCD_2IN_SetWindows(sx,sy,sx+8,sy+8);
	DEV_Digital_Write(LCD_DC_PIN, 1);
	DEV_Digital_Write(LCD_CS_PIN, 0);
	for(unsigned int i = 0; i < 8; i++)
	{
		unsigned char b = _binary_8_GFX_F08_start[i+((((unsigned int)c)&0xff)<<3)];
		
		for(int x = 0; x < 8; x++)
		{
			if(b&0x80)
			{
				DEV_SPI_WriteByte(0xff);
				DEV_SPI_WriteByte(0x00);
			}
			else
			{
				DEV_SPI_WriteByte(0x00);
				DEV_SPI_WriteByte(0x44);
			}
			b <<= 1;
		}
	}
	DEV_Digital_Write(LCD_CS_PIN, 1);
}



void render(const char* msg)
{
	unsigned short o = 0;
	while(msg[o] != 0)
	{
		renderChar(o,0,msg[o],'\x00');
		++o;
	}
}

void renderDword(uint32_t v, uint16_t y)
{
	unsigned short o = 0;
	while(o < 8)
	{
		uint32_t h = v>>28;
		if(h < 0xa)
		{
			renderChar(o,y,h+'0','\x00');
		}
		else
		{
			renderChar(o,y,h+'A'-0xa,'\x00');
		}
		v <<= 4;
		++o;
	}
}
char terminal[1200];
char terminalFlags[1200];
Fat fatass;

void draw()
{
	for(unsigned short y = 0; y < 30; y++)
	{
		for(unsigned short x = 0; x < 40; x++)
		{
			renderChar(x,y,terminal[(y*40)+x],terminalFlags[(y*40)+x]);
		}
	}
}

void blit()
{
	LCD_2IN_SetWindows(0,0,LCD_2IN_HEIGHT,LCD_2IN_WIDTH);
	DEV_Digital_Write(LCD_DC_PIN, 1);
	DEV_Digital_Write(LCD_CS_PIN, 0);
	for(unsigned int i = 0; i < 240*40; i++)
	{
		uint16_t b = pix[i];
		for(int j = 0; j < 8; j++)
		{
			if(b&0x80)
			{
				DEV_SPI_WriteByte(0xff);
				DEV_SPI_WriteByte(0xff);
			}
			else
			{
				DEV_SPI_WriteByte(0x00);
				DEV_SPI_WriteByte(0x00);
			}
			b <<= 1;
		}
	}
	
	DEV_Digital_Write(LCD_CS_PIN, 1);
}

unsigned short printptr = 0;

void scroll()
{
	for(int i = 0; i < 1200-160; i++)
	{
		terminal[i] = terminal[i+40];
		terminalFlags[i] = terminalFlags[i+40];
	}
	for(int i = 1200-160; i < 1200; i++)
	{
		terminal[i] = 0;
		terminalFlags[i] = 0;
	}
}

void print(const char* text)
{
	unsigned short o = 0;
	while(text[o] != 0)
	{
		usbcdc_putchar(text[o]);
		if(text[o] == '\n')
		{
			printptr = printptr + 40-(printptr%40);
		}
		else
		{
			terminal[printptr] = text[o];
			++printptr;
		}
		++o;
		if(printptr >= 1200-120)
		{
			scroll();
			printptr = 1200-160;
		}
	}
}

void printFlags(const char* text,const char* flags)
{
	unsigned short o = 0;
	while(text[o] != 0)
	{
		usbcdc_putchar(text[o]);
		if(text[o] == '\n')
		{
			printptr = printptr + 40-(printptr%40);
		}
		else
		{
			terminal[printptr] = text[o];
			terminalFlags[printptr] = flags[o];
			++printptr;
		}
		++o;
		if(printptr >= 1200-120)
		{
			scroll();
			printptr = 1200-160;
		}
	}
}


void printDword(uint32_t v)
{
	unsigned short o = 0;
	while(o < 8)
	{
		uint32_t h = v>>28;
		char c[2] = {0,0};
		if(h < 0xa)
		{
			c[0] = h+'0';
		}
		else
		{
			c[0] = h+'A'-0xa;
		}
		print(c);
		v <<= 4;
		++o;
	}
}

void printInt(uint32_t v)
{
	unsigned short o = 0;
	while(o < 8)
	{
		uint32_t h = v/10000000;
		char c[2] = {0,0};
		if(h < 0xa)
		{
			c[0] = h+'0';
		}
		print(c);
		v -= h*10000000;
		v*=10;
		++o;
	}
}


void* malloc(uint32_t size);
extern char __userspace_begin[];

char currentcmd[256];
int currentcmdpos = 0;

bool StringEquals(const char* a, const char* b)
{
	unsigned short o = 0;
	while(a[o] == b[o])
	{
		if(a[o] == 0)
		{
			return true;
		}
		++o;
	}
	return false;
}

bool StringStartsWith(const char* a, const char* b)
{
	unsigned short o = 0;
	while((a[o] == b[o]) || (b[o] == 0))
	{
		if(b[o] == 0)
		{
			return true;
		}
		++o;
	}
	return false;
}

void StringConcat(char* out, const char* a, const char* b)
{
	unsigned short o = 0;
	while(a[o] != 0)
	{
		out[o] = a[o];
		++o;
	}
	unsigned short i = 0;
	while(b[i] != 0)
	{
		out[o] = b[i];
		++i;
		++o;
	}
	out[o] = '\x00';
}

unsigned short StringLength(const char* a)
{
	unsigned short o = 0;
	while(a[o] != 0)
	{
		++o;
	}
	return o;
}

void StringRemoveAfterLast(char* a, char chr, unsigned short start)
{
	unsigned short o = start;
	while(o > 0)
	{
		--o;
		if(a[o] == chr)
		{
			a[o+1] = '\x00';
			return;
		}
	}
}

char* StringRemoveFirst(char* a, char chr, unsigned short len)
{
	unsigned short o = 0;
	while(o < len)
	{
		++o;
		if(a[o] == chr)
		{
			a[o] = '\x00';
			return &a[o+1];
		}
	}
}
extern void Run(void* data);


Dir dir;
DirInfo dirinfo;
char curdir[256] = "/drv/";
void Exec(const char* cmd)
{
	if(StringEquals(cmd, "hi"))
	{
		print("\nhello\n");
	}
	else if (StringEquals(cmd, "fuck"))
	{
		print("\n\n ###### #     #  #####  #    # \n #      #     # #     # #   #  \n #      #     # #       #  #   \n #      #     # #       ###    \n #####  #     # #       # #    \n #      #     # #       #  #   \n #      #     # #       #   #  \n #      #     # #     # #    # \n #       #####   #####  #     #\n\n");
	}
	else if(StringStartsWith(cmd, "md "))
	{
		fat_dir_open(&dir,curdir);
		char foldername[256];
		StringConcat(foldername,curdir,cmd+3);
		int err = fat_dir_create(&dir,foldername);
		if(err == 0)
		{
			print("SUCC\n");
		}
		else
		{
			print(fat_get_error(err));
			print("\n");
		}
		fat_sync(&fatass);
	}
	else if(StringStartsWith(cmd, "wr "))
	{
		unsigned short len = StringLength(curdir);
		char* content = StringRemoveFirst(cmd+3,' ',len);
		char filepath[256];
		StringConcat(filepath,curdir,cmd+3);
		File file;
		fat_file_open(&file,filepath,FAT_WRITE | FAT_CREATE);
		int l;
		fat_file_write(&file,content,StringLength(content), &l);
		fat_file_close(&file);
		fat_sync(&fatass);
	}
	else if(StringStartsWith(cmd, "cat "))
	{
		unsigned short len = StringLength(curdir);
		char filepath[256];
		StringConcat(filepath,curdir,cmd+4);
		File file;
		fat_file_open(&file,filepath,FAT_READ | FAT_CREATE);
		int l;
		fat_file_read(&file,filepath,256, &l);
		filepath[l] = '\x00';
		fat_file_close(&file);
		fat_sync(&fatass);
		print(filepath);
		print("\n");
	}
	else if(StringStartsWith(cmd, "cd "))
	{
		fat_dir_open(&dir,curdir);
		unsigned short len = StringLength(curdir);
		const char* dir = cmd+3;
		if(StringEquals(dir,".."))
		{
			StringRemoveAfterLast(curdir,'/',len-1);
			return;
		}
		StringConcat(curdir,curdir,dir);
		StringConcat(curdir,curdir,"/");
		int err = fat_dir_open(&dir,curdir);
		if(err != 0)
		{
			print("invalid directory");
			curdir[len] = '\x00';
		}
	}
	
	else if(StringEquals(cmd,"clr"))
	{
		for(int i = 0; i < 1200; i++)
		{
			terminal[i] = '\x00';
			terminalFlags[i] = '\x00';
		}
		for(int i = 0; i < 256; i++)
		{
			currentcmd[i] = '\x00';
		}
		currentcmdpos = 0;
		printptr = 0;
	}
	else if(StringEquals(cmd, "ls"))
	{
		int ret = fat_dir_open(&dir,curdir);
		while(ret == 0)
		{
			ret = fat_dir_next(&dir);
			ret |= fat_dir_read(&dir,&dirinfo);
			dirinfo.name[dirinfo.name_len] = '\x00';
			if(dirinfo.attr&FAT_ATTR_DIR)
			{
				printFlags("\xfe\xee","\xff\x00");
			}
			else
			{
				print("\xda ");
			}
			print(dirinfo.name);
			print("\n");
		}
		fat_dir_rewind(&dir);
	}
	
	else if(StringStartsWith(cmd, "./"))
	{
		char filepath[256];
		StringConcat(filepath,curdir,cmd+2);
		File file;
		int err = fat_file_open(&file,filepath,FAT_READ);
		if(err)
		{
			print(fat_get_error(err));
			print("\n");
			return;
		}
		DirInfo di;
		fat_stat(filepath,&di);
		void* program = malloc(di.size);
		int l;
		fat_file_read(&file,program,di.size, &l);
		fat_file_close(&file);
		for(volatile int i = 0; i < 10000000; i++)
		{
			continue;
		}
		Run(program);
		free(program);
	}
	
	else
	{
		print("\ninvalid command: ");
		print(cmd);
		print("\n");
	}
}

extern volatile uint8_t _binary___disk_img_start[];


bool read(uint8_t* buf, uint32_t sect)
{
	for(int i = 0; i < 128; i++)
	{
		((uint32_t*)buf)[i] = ((uint32_t*)(_binary___disk_img_start + 0x00000000))[(sect<<7) + i];
	}
	return true;
}

typedef void *(*rom_table_lookup_fn)(uint32_t code, uint32_t mask);
typedef void (*rom_flash_range_program_fn)(uint32_t addr, const uint8_t *data, size_t count);

#define BOOT2_SIZE_WORDS 64

static uint32_t boot2_copyout[BOOT2_SIZE_WORDS];
static bool boot2_copyout_valid = false;

static void flash_init_boot2_copyout(void) {
    if (boot2_copyout_valid)
        return;
    // todo we may want the option of boot2 just being a free function in
    //      user RAM, e.g. if it is larger than 256 bytes
    const volatile uint32_t *copy_from = (uint32_t *)(0x400e0000);
	
    for (int i = 0; i < BOOT2_SIZE_WORDS; ++i)
        boot2_copyout[i] = copy_from[i];
	
    boot2_copyout_valid = true;
}


static void flash_enable_xip_via_boot2(void) {
    ((void (*)(void))((intptr_t)boot2_copyout+1))();
}


#define ROM_TABLE_CODE(c1, c2) ((c1) | ((c2) << 8))
#define ROM_FUNC_FLASH_RANGE_PROGRAM            ROM_TABLE_CODE('R', 'P')
#define ROM_FUNC_FLASH_ENTER_CMD_XIP            ROM_TABLE_CODE('C', 'X')
#define ROM_FUNC_FLASH_EXIT_XIP                 ROM_TABLE_CODE('E', 'X')
#define ROM_FUNC_FLASH_FLUSH_CACHE              ROM_TABLE_CODE('F', 'C')
#define ROM_FUNC_CONNECT_INTERNAL_FLASH         ROM_TABLE_CODE('I', 'F')
#define ROM_FUNC_FLASH_RANGE_ERASE              ROM_TABLE_CODE('R', 'E')
#define ROM_DATA_FLASH_DEVINFO16_PTR            ROM_TABLE_CODE('F', 'D')

typedef enum {
    FLASH_DEVINFO_SIZE_NONE = 0x0,
    FLASH_DEVINFO_SIZE_8K = 0x1,
    FLASH_DEVINFO_SIZE_16K = 0x2,
    FLASH_DEVINFO_SIZE_32K = 0x3,
    FLASH_DEVINFO_SIZE_64K = 0x4,
    FLASH_DEVINFO_SIZE_128K = 0x5,
    FLASH_DEVINFO_SIZE_256K = 0x6,
    FLASH_DEVINFO_SIZE_512K = 0x7,
    FLASH_DEVINFO_SIZE_1M = 0x8,
    FLASH_DEVINFO_SIZE_2M = 0x9,
    FLASH_DEVINFO_SIZE_4M = 0xa,
    FLASH_DEVINFO_SIZE_8M = 0xb,
    FLASH_DEVINFO_SIZE_16M = 0xc,
    FLASH_DEVINFO_SIZE_MAX = 0xc
} flash_devinfo_size_t;

typedef void (*rom_connect_internal_flash_fn)(void);
typedef void (*rom_flash_exit_xip_fn)(void);
typedef void (*rom_flash_flush_cache_fn)(void);
typedef void (*rom_flash_range_erase_fn)(uint32_t, size_t, uint32_t, uint8_t);
rom_table_lookup_fn rom_func_lookup_inline;

// This is a static symbol because the layout of FLASH_DEVINFO is liable to change from device to
// device, so fields must have getters/setters.
static uint16_t * flash_devinfo_ptr(void) {
    // Note the lookup returns a pointer to a 32-bit pointer literal in the ROM
    uint16_t **p = (uint16_t **) rom_func_lookup_inline(ROM_DATA_FLASH_DEVINFO16_PTR,0x0040);
    return *p;
}

// This is a RAM function because may be called during flash programming to enable save/restore of
// QMI window 1 registers on RP2350:
flash_devinfo_size_t flash_devinfo_get_cs1_size() {
    uint16_t *devinfo = (uint16_t *) flash_devinfo_ptr();
	return (flash_devinfo_size_t) (
		(*devinfo & (0x0000f000)) >> 12
	);
}

// This is specifically for saving/restoring the registers modified by RP2350
// flash_exit_xip() ROM func, not the entirety of the QMI window state.
typedef struct flash_rp2350_qmi_save_state {
    uint32_t timing;
    uint32_t rcmd;
    uint32_t rfmt;
} flash_rp2350_qmi_save_state_t;

static void flash_rp2350_save_qmi_cs1(flash_rp2350_qmi_save_state_t *state) {
    state->timing = qmi.m1_timing;
    state->rcmd = qmi.m1_rcmd;
    state->rfmt = qmi.m1_rfmt;
}

static void flash_rp2350_restore_qmi_cs1(const flash_rp2350_qmi_save_state_t *state) {
	flash_devinfo_size_t s = flash_devinfo_get_cs1_size();
    if (s == FLASH_DEVINFO_SIZE_NONE) {
        // Case 1: The RP2350 ROM sets QMI to a clean (03h read) configuration
        // during flash_exit_xip(), even though when CS1 is not enabled via
        // FLASH_DEVINFO it does not issue an XIP exit sequence to CS1. In
        // this case, restore the original register config for CS1 as it is
        // still the correct config.
        qmi.m1_timing = state->timing;
        qmi.m1_rcmd = state->rcmd;
        qmi.m1_rfmt = state->rfmt;
    } else {
        // Case 2: If RAM is attached to CS1, and the ROM has issued an XIP
        // exit sequence to it, then the ROM re-initialisation of the QMI
        // registers has actually not gone far enough. The old XIP write mode
        // is no longer valid when the QSPI RAM is returned to a serial
        // command state. Restore the default 02h serial write command config.
        qmi.m1_wfmt = 0x00001000;
        qmi.m1_wcmd = 0x0000a002;
    }
}





void flash_range_program(uint32_t flash_offs, const uint8_t *data, size_t count) {
	rom_flash_range_erase_fn flash_range_erase_func = (rom_flash_range_erase_fn)rom_func_lookup_inline(ROM_FUNC_FLASH_RANGE_ERASE,0x0004);
	rom_connect_internal_flash_fn connect_internal_flash_func = (rom_connect_internal_flash_fn)rom_func_lookup_inline(ROM_FUNC_CONNECT_INTERNAL_FLASH,0x0004);
	rom_flash_exit_xip_fn flash_exit_xip_func = (rom_flash_exit_xip_fn)rom_func_lookup_inline(ROM_FUNC_FLASH_EXIT_XIP,0x0004);
	rom_flash_range_program_fn flash_range_program_func = (rom_flash_range_program_fn)rom_func_lookup_inline(ROM_FUNC_FLASH_RANGE_PROGRAM,0x0004);
	rom_flash_flush_cache_fn flash_flush_cache_func = (rom_flash_flush_cache_fn)rom_func_lookup_inline(ROM_FUNC_FLASH_FLUSH_CACHE,0x0004);
	
	
	flash_init_boot2_copyout();
	flash_rp2350_qmi_save_state_t qmi_save;
	flash_rp2350_save_qmi_cs1(&qmi_save);
	connect_internal_flash_func();
	flash_exit_xip_func();
	flash_range_erase_func(flash_offs, count, (1u << 16), 0xd8);
	flash_range_program_func(flash_offs, data, count);
	flash_flush_cache_func();
	flash_enable_xip_via_boot2();
	flash_rp2350_restore_qmi_cs1(&qmi_save);
	for (uintptr_t offset = 0; offset < count; offset += 8) {
        *(volatile uint8_t *) (0x18000001 + offset + flash_offs) = 0;
    }
}


uint32_t ass[1024];

bool write(const uint8_t* buf, uint32_t sect)
{
	for(int i = 0; i < 1024; i++)
	{
		ass[i] = ((uint32_t*)_binary___disk_img_start)[((sect&0xfffffff8)<<7) + i];
	}
	for(int i = 0; i < 128; i++)
	{
		ass[i+((sect&0x7)<<7)] = ((uint32_t*)buf)[i];
	}
	flash_range_program(_binary___disk_img_start-0x10000000+((sect&0xfffffff8)<<9),ass,4096);
	/*
	for(int i = 0; i < 128; i++)
	{
		((uint32_t*)(_binary___disk_img_start + 0x00000000))[(sect<<7) + i] = ((uint32_t*)buf)[i];
	}
	*/
	/*
	for(int i = 0; i < 128; i++)
	{
		if(((uint32_t*)(_binary___disk_img_start + 0x00000000))[(sect<<7) + i] != ((uint32_t*)buf)[i])
		{
			return false;
		}
	}
	*/
	return true;
}

DiskOps disk = {.read=read,.write=write};

void main()
{
	rom_func_lookup_inline = (rom_table_lookup_fn) (uintptr_t)*(uint16_t*)(0x16);
	
	int mounterr = fat_mount(&disk,0,&fatass,"drv");
	__asm__ volatile ("cpsid i");
	configure_usbcdc();
	__asm__ volatile ("cpsie i");
	
	
	
	clocks.clk_peri_ctrl = CLOCKS_CLK_PERI_CTRL_AUXSRC(0) |
	CLOCKS_CLK_PERI_CTRL_ENABLE_MASK;
	//Change divider to 1.0
	clocks.clk_peri_div = CLOCKS_CLK_PERI_DIV_INT(1);
	
	
	resets.reset_clr = RESETS_RESET_SPI1_MASK;
	while( (resets.reset_done & RESETS_RESET_SPI1_MASK) != RESETS_RESET_SPI1_MASK)
		continue;
	
	resets.reset_clr = GPIO_RESETS;
	while( (resets.reset_done & GPIO_RESETS) != GPIO_RESETS)
		continue;
	
	
	pwm.ch6_top = 100;
	pwm.ch6_cc = 20<<16;
	pwm.ch6_div = 50<<4;
	pwm.ch6_csr = PWM_CH6_CSR_EN(1);
	
	io_bank0.gpio13_ctrl = 
	IO_BANK0_GPIO13_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO13_CTRL_INOVER(0)  |
	IO_BANK0_GPIO13_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO13_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO13_CTRL_FUNCSEL(4);
	  pads_bank0.gpio13 = 
 	  PADS_BANK0_GPIO13_OD(0) 
	| PADS_BANK0_GPIO13_IE(0) 
	| PADS_BANK0_GPIO13_DRIVE(0) 
	| PADS_BANK0_GPIO13_PUE(0) 
	| PADS_BANK0_GPIO13_PDE(0) 
	| PADS_BANK0_GPIO13_SCHMITT(0) 
	| PADS_BANK0_GPIO13_SLEWFAST(0);
		
	
	
	
	io_bank0.gpio12_ctrl = 
	IO_BANK0_GPIO12_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO12_CTRL_INOVER(0)  |
	IO_BANK0_GPIO12_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO12_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO12_CTRL_FUNCSEL(5);
	
	sio.gpio_oe_set = (1<<12);
	
	  pads_bank0.gpio12 = 
 	  PADS_BANK0_GPIO12_OD(0) 
	| PADS_BANK0_GPIO12_IE(0) 
	| PADS_BANK0_GPIO12_DRIVE(0) 
	| PADS_BANK0_GPIO12_PUE(0) 
	| PADS_BANK0_GPIO12_PDE(0) 
	| PADS_BANK0_GPIO12_SCHMITT(0) 
	| PADS_BANK0_GPIO12_SLEWFAST(0);
	
	
	io_bank0.gpio8_ctrl = 
	IO_BANK0_GPIO8_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO8_CTRL_INOVER(0)  |
	IO_BANK0_GPIO8_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO8_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO8_CTRL_FUNCSEL(5);
	
	sio.gpio_oe_set = (1<<8);
	//sio.gpio_out_set = (1<<8);
	
	  pads_bank0.gpio8 = 
 	  PADS_BANK0_GPIO8_OD(0) 
	| PADS_BANK0_GPIO8_IE(0) 
	| PADS_BANK0_GPIO8_DRIVE(0) 
	| PADS_BANK0_GPIO8_PUE(0) 
	| PADS_BANK0_GPIO8_PDE(0) 
	| PADS_BANK0_GPIO8_SCHMITT(0) 
	| PADS_BANK0_GPIO8_SLEWFAST(0);
	
	
	io_bank0.gpio9_ctrl = 
	IO_BANK0_GPIO9_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO9_CTRL_INOVER(0)  |
	IO_BANK0_GPIO9_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO9_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO9_CTRL_FUNCSEL(5);
	
	sio.gpio_oe_set = (1<<9);
	//sio.gpio_out_set = (1<<9);
	
	  pads_bank0.gpio9 = 
 	  PADS_BANK0_GPIO9_OD(0) 
	| PADS_BANK0_GPIO9_IE(0) 
	| PADS_BANK0_GPIO9_DRIVE(0) 
	| PADS_BANK0_GPIO9_PUE(0) 
	| PADS_BANK0_GPIO9_PDE(0) 
	| PADS_BANK0_GPIO9_SCHMITT(0) 
	| PADS_BANK0_GPIO9_SLEWFAST(0);

	
	
	
	
	io_bank0.gpio10_ctrl = 
	IO_BANK0_GPIO10_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO10_CTRL_INOVER(0)  |
	IO_BANK0_GPIO10_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO10_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO10_CTRL_FUNCSEL(1);
	
	
	
	
	io_bank0.gpio11_ctrl = 
	IO_BANK0_GPIO11_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO11_CTRL_INOVER(0)  |
	IO_BANK0_GPIO11_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO11_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO11_CTRL_FUNCSEL(1);
	
	spi1.sspcpsr = 2;
	spi1.sspcr0 = (0<<8) | 0b0111;
	spi1.sspcr1 = 0b0010;
	
	  pads_bank0.gpio10 = 
 	  PADS_BANK0_GPIO10_OD(0) 
	| PADS_BANK0_GPIO10_IE(0) 
	| PADS_BANK0_GPIO10_DRIVE(0) 
	| PADS_BANK0_GPIO10_PUE(0) 
	| PADS_BANK0_GPIO10_PDE(0) 
	| PADS_BANK0_GPIO10_SCHMITT(0) 
	| PADS_BANK0_GPIO10_SLEWFAST(0);
	
	  pads_bank0.gpio11 = 
 	  PADS_BANK0_GPIO11_OD(0) 
	| PADS_BANK0_GPIO11_IE(0) 
	| PADS_BANK0_GPIO11_DRIVE(0) 
	| PADS_BANK0_GPIO11_PUE(0) 
	| PADS_BANK0_GPIO11_PDE(0) 
	| PADS_BANK0_GPIO11_SCHMITT(0) 
	| PADS_BANK0_GPIO11_SLEWFAST(0);
	
	DEV_Digital_Write(LCD_RST_PIN, 1);
	for(volatile int i = 0; i < 1000000; i++)
	{
		
	}
	DEV_Digital_Write(LCD_RST_PIN, 0);
	for(volatile int i = 0; i < 1000000; i++)
	{
		
	}
	DEV_Digital_Write(LCD_RST_PIN, 1);
	for(volatile int i = 0; i < 10000000; i++)
	{
		
	}
	
	int key0 = 15;
	int key1 = 17;
	int key2 = 2;
	int key3 = 3;
	
	printDword(xip_ctrl.ctrl);
	io_bank0.gpio15_ctrl = 
	IO_BANK0_GPIO15_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO15_CTRL_INOVER(0)  |
	IO_BANK0_GPIO15_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO15_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO15_CTRL_FUNCSEL(5);
	
	  pads_bank0.gpio15 = 
 	  PADS_BANK0_GPIO15_OD(1) 
	| PADS_BANK0_GPIO15_IE(1) 
	| PADS_BANK0_GPIO15_DRIVE(0) 
	| PADS_BANK0_GPIO15_PUE(1) 
	| PADS_BANK0_GPIO15_PDE(0) 
	| PADS_BANK0_GPIO15_SCHMITT(0) 
	| PADS_BANK0_GPIO15_SLEWFAST(0);
	
	io_bank0.gpio17_ctrl = 
	IO_BANK0_GPIO17_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO17_CTRL_INOVER(0)  |
	IO_BANK0_GPIO17_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO17_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO17_CTRL_FUNCSEL(5);
	
	  pads_bank0.gpio17 = 
 	  PADS_BANK0_GPIO17_OD(1) 
	| PADS_BANK0_GPIO17_IE(1) 
	| PADS_BANK0_GPIO17_DRIVE(0) 
	| PADS_BANK0_GPIO17_PUE(1) 
	| PADS_BANK0_GPIO17_PDE(0) 
	| PADS_BANK0_GPIO17_SCHMITT(0) 
	| PADS_BANK0_GPIO17_SLEWFAST(0);
	
	io_bank0.gpio2_ctrl = 
	IO_BANK0_GPIO2_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO2_CTRL_INOVER(0)  |
	IO_BANK0_GPIO2_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO2_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO2_CTRL_FUNCSEL(5);
	
	  pads_bank0.gpio2 = 
 	  PADS_BANK0_GPIO2_OD(1) 
	| PADS_BANK0_GPIO2_IE(1) 
	| PADS_BANK0_GPIO2_DRIVE(0) 
	| PADS_BANK0_GPIO2_PUE(1) 
	| PADS_BANK0_GPIO2_PDE(0) 
	| PADS_BANK0_GPIO2_SCHMITT(0) 
	| PADS_BANK0_GPIO2_SLEWFAST(0);
	
	io_bank0.gpio3_ctrl = 
	IO_BANK0_GPIO3_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO3_CTRL_INOVER(0)  |
	IO_BANK0_GPIO3_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO3_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO3_CTRL_FUNCSEL(5);
	
	  pads_bank0.gpio3 = 
 	  PADS_BANK0_GPIO3_OD(1) 
	| PADS_BANK0_GPIO3_IE(1) 
	| PADS_BANK0_GPIO3_DRIVE(0) 
	| PADS_BANK0_GPIO3_PUE(1) 
	| PADS_BANK0_GPIO3_PDE(0) 
	| PADS_BANK0_GPIO3_SCHMITT(0) 
	| PADS_BANK0_GPIO3_SLEWFAST(0);
	
	
	LCD_2IN_InitReg();
	LCD_2IN_SetAttributes(1);
	LCD_2IN_Clear(0x0000);
	char curchar = 0;
	int progress = 0;
	uint32_t previn = 0;
	
	print("\nrom_func_lookup_inline:");
	printDword(rom_func_lookup_inline);
	print("\n_binary___disk_img_start:");
	printDword(_binary___disk_img_start);
	print("\n");
	
	print("available ram:  ");
	printInt((0x20080000 - (uint32_t)__userspace_begin)>>10);
	print(" KB\n__userspace_begin: ");
	printDword(__userspace_begin);
	print("\n");
	print(curdir);
	print(">");
	while(1)
	{
		char typed = 0;	
		if (usbcdc_getchar(&typed))
		{
			curchar = typed;
			progress = 4;
		}
		
		//LCD_2IN_Clear(0xffff);
		//render("HT-DOS v0.00");
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
		terminal[printptr] = curchar;
		currentcmd[currentcmdpos] = curchar;
		
		if(progress >= 4)
		{
			usbcdc_putchar(typed);
			
			if((curchar == 0) || (curchar == '\b'))
			{
				printptr--;
				currentcmdpos--;
				terminal[printptr] = 0;
				currentcmd[currentcmdpos] = 0;
			}
			else if((curchar == 0xff) || (curchar == '\r') || (curchar == '\n'))
			{
				currentcmd[currentcmdpos] = 0;
				terminal[printptr] = 0;
				printptr = printptr + 40-(printptr%40);
				Exec(currentcmd);
				currentcmdpos = 0;
				for(int i = 0; i < 256; i++)
				{
					currentcmd[i] = 0;
				}
				print(curdir);
				print(">");
			}
			else
			{
				currentcmdpos++;
				printptr++;
			}
			curchar = 0;
			progress = 0;
		}
		if(printptr >= 1200-120)
		{
			scroll();
			printptr = 1200-160;
		}
		if(currentcmdpos > 254)
		{
			curchar = 0x0;
		}
		
		draw();
		
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
		
		for(int i = 0; i < amnt; i++)
		{
			renderChar(i,27,hchar+i,'\x00');
		}
		hchar = next01<<shift;
		
		for(int i = 0; i < amnt; i++)
		{
			renderChar(i+21,27,hchar+i,'\x00');
		}
		hchar = next10<<shift;
		for(int i = 0; i < amnt; i++)
		{
			renderChar(i,29,hchar+i,'\x00');
		}
		hchar = next11<<shift;
		for(int i = 0; i < amnt; i++)
		{
			renderChar(i+21,29,hchar+i,'\x00');
		}
		
		blit();
	}
}



unsigned char allocated[8192];

void* malloc(uint32_t size)
{
	if(size == 0)
	{
		return 0;
	}
	if(size < 8)
	{
		size = 8;
	}
	size += 7;
	size >>= 3;
	int space = 0;
	int begin = 0;
	for(int i = 0; i < 65536; i++)
	{
		int spot = i>>3;
		int bit = i&0x7;
		if(allocated[spot]&(1<<bit))
		{
			space = 0;
			begin = i+1;
		}
		else
		{
			++space;
			if(space > size)
			{
				for(int j = begin; j <= i; j++)
				{
					int setspot = j>>3;
					int setbit = j&0x7;
					allocated[setspot] |= 1<<setbit;
				}
				*(uint32_t*)(__userspace_begin + (begin<<3)) = size;
				return __userspace_begin + (begin<<3) + 8;
			}
		}
	}
	return 0;
}

void free(void* ptr)
{
	uint32_t size = (*(uint32_t*)(((char*)ptr)-8));
	int begin = ((int)((char*)ptr-__userspace_begin-8))>>3;
	for(int i = begin; i < begin+size; i++)
	{
		int spot = i>>3;
		int bit = i&0x7;
		allocated[spot] &= ~(1<<bit);
	}
}

