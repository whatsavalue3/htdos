#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include <rp2350/pwm.h>
#include <rp2350/spi.h>
#include <rp2350/clocks.h>
#include <usbcdc.h>

#define GPIO_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK | RESETS_RESET_PWM_MASK)


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
	
	while (spi1.sspsr&SPI1_SSPSR_RNE_MASK)
		(void)spi1.sspdr;
	while (spi1.sspsr&SPI1_SSPSR_BSY_MASK)
		continue;
	while (spi1.sspsr&SPI1_SSPSR_RNE_MASK)
		(void)spi1.sspdr;

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

#define LCD_2IN_HEIGHT 240
#define LCD_2IN_WIDTH 320

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
			LCD_2IN_SendData_8Bit(Color>>8);
			LCD_2IN_SendData_8Bit(Color&0xff);
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


void main()
{
	char c;
	
	__asm__ volatile ("cpsid i");
	configure_usbcdc();
	__asm__ volatile ("cpsie i");

	
	while(1){
		if( usbcdc_getchar(&c)){
			usbcdc_putchar(c);
			if(c == '.')
			{
				break;
			}
		}
	}
	
	clocks.clk_peri_ctrl = CLOCKS_CLK_PERI_CTRL_AUXSRC(0) |
	CLOCKS_CLK_PERI_CTRL_ENABLE_MASK;
	//Change divider to 1.0
	clocks.clk_peri_div = CLOCKS_CLK_PERI_DIV_INT(1);
	
	usbcdc_putchar('f');
	
	
	resets.reset_clr = RESETS_RESET_SPI1_MASK;
	while( (resets.reset_done & RESETS_RESET_SPI1_MASK) != RESETS_RESET_SPI1_MASK)
		continue;
	usbcdc_putchar('u');
	
	resets.reset_clr = GPIO_RESETS;
	while( (resets.reset_done & GPIO_RESETS) != GPIO_RESETS)
		continue;
	usbcdc_putchar('c');
	
	
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
	
	spi1.sspcpsr = 150;
	spi1.sspcr0 = (1<<8) | 0b0111;
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
	
	LCD_2IN_SetAttributes(1);
	LCD_2IN_InitReg();
	while(1)
	{
		usbcdc_putchar('k');
		LCD_2IN_Clear(0xffff);
		usbcdc_putchar('i');
		for(volatile int i = 0; i < 100000; i++)
		{
			
		}
		usbcdc_putchar('n');
		LCD_2IN_Clear(0x0000);
		usbcdc_putchar('g');
		for(volatile int i = 0; i < 100000; i++)
		{
			
		}
		usbcdc_putchar('!');
	}
}