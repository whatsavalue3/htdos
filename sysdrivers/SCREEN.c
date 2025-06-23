#include "sys.h"
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include <rp2350/pwm.h>
#include <rp2350/spi.h>

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


void DEV_SPI_WriteByte(uint8_t Value)
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
	for(unsigned int i = 0; i < 8; i++)
	{
		unsigned char b = _binary_8_GFX_F08_start[i+((((unsigned int)c)&0xff)<<3)];
		int pos = (sy+i)*40+sx;
		pix[pos] = b^f;
	}
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

void draw()
{
	for(unsigned short y = 0; y < 30; y++)
	{
		for(unsigned short x = 0; x < 40; x++)
		{
			renderChar(x,y,sys->terminal[(y*40)+x],sys->terminalFlags[(y*40)+x]);
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

void DrawScreen()
{
	draw();
	blit();
}



void* main()
{
	DEV_Digital_Write(LCD_RST_PIN, 1);
	for(volatile int i = 0; i < 100000; i++)
	{
		
	}
	DEV_Digital_Write(LCD_RST_PIN, 0);
	for(volatile int i = 0; i < 100000; i++)
	{
		
	}
	DEV_Digital_Write(LCD_RST_PIN, 1);
	for(volatile int i = 0; i < 100000; i++)
	{
		
	}
	
	LCD_2IN_InitReg();
	LCD_2IN_SetAttributes(1);
	LCD_2IN_Clear(0x0000);
	sys->AddSystickHandler(DrawScreen);
	return 0;
}