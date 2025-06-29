
/* Copyright (c) 2024-2025 Douglas H. Summerville (dsummer@binghamton.edu) 
 *
 * Created from scraped data which is Copyright (c) 2024 Raspberry Pi
 * (Trading) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef RP2350_RESETS_H
#define RP2350_RESETS_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t reset;
		uint32_t wdsel;
		uint32_t reset_done;
		uint32_t RSVD0[1021];
		uint32_t reset_xor;
		uint32_t wdsel_xor;
		uint32_t reset_done_xor;
		uint32_t RSVDxor_0[1021];
		uint32_t reset_set;
		uint32_t wdsel_set;
		uint32_t reset_done_set;
		uint32_t RSVDset_0[1021];
		uint32_t reset_clr;
		uint32_t wdsel_clr;
		uint32_t reset_done_clr;
		uint32_t RSVDclr_0[1021];
} RESETS_REG_BLOCKS;


/*IO Registers as struct*/

#define resets (*(RESETS_REG_BLOCKS volatile *)0x40020000)


/*IO Registers AS MACROS*/

#define RESETS_RESET (*(volatile uint32_t *)0x40020000)
#define RESETS_WDSEL (*(volatile uint32_t *)0x40020004)
#define RESETS_RESET_DONE (*(volatile uint32_t *)0x40020008)
#define RESETS_RESET_XOR (*(volatile uint32_t *)0x40021000)
#define RESETS_WDSEL_XOR (*(volatile uint32_t *)0x40021004)
#define RESETS_RESET_DONE_XOR (*(volatile uint32_t *)0x40021008)
#define RESETS_RESET_SET (*(volatile uint32_t *)0x40022000)
#define RESETS_WDSEL_SET (*(volatile uint32_t *)0x40022004)
#define RESETS_RESET_DONE_SET (*(volatile uint32_t *)0x40022008)
#define RESETS_RESET_CLR (*(volatile uint32_t *)0x40023000)
#define RESETS_WDSEL_CLR (*(volatile uint32_t *)0x40023004)
#define RESETS_RESET_DONE_CLR (*(volatile uint32_t *)0x40023008)

/*RESET Register macros*/

#define RESETS_RESET_USBCTRL(v) (((v)&0x1)<<28)
#define RESETS_RESET_USBCTRL_MASK RESETS_RESET_USBCTRL(ALL1)
#define RESETS_RESET_UART1(v) (((v)&0x1)<<27)
#define RESETS_RESET_UART1_MASK RESETS_RESET_UART1(ALL1)
#define RESETS_RESET_UART0(v) (((v)&0x1)<<26)
#define RESETS_RESET_UART0_MASK RESETS_RESET_UART0(ALL1)
#define RESETS_RESET_TRNG(v) (((v)&0x1)<<25)
#define RESETS_RESET_TRNG_MASK RESETS_RESET_TRNG(ALL1)
#define RESETS_RESET_TIMER1(v) (((v)&0x1)<<24)
#define RESETS_RESET_TIMER1_MASK RESETS_RESET_TIMER1(ALL1)
#define RESETS_RESET_TIMER0(v) (((v)&0x1)<<23)
#define RESETS_RESET_TIMER0_MASK RESETS_RESET_TIMER0(ALL1)
#define RESETS_RESET_TBMAN(v) (((v)&0x1)<<22)
#define RESETS_RESET_TBMAN_MASK RESETS_RESET_TBMAN(ALL1)
#define RESETS_RESET_SYSINFO(v) (((v)&0x1)<<21)
#define RESETS_RESET_SYSINFO_MASK RESETS_RESET_SYSINFO(ALL1)
#define RESETS_RESET_SYSCFG(v) (((v)&0x1)<<20)
#define RESETS_RESET_SYSCFG_MASK RESETS_RESET_SYSCFG(ALL1)
#define RESETS_RESET_SPI1(v) (((v)&0x1)<<19)
#define RESETS_RESET_SPI1_MASK RESETS_RESET_SPI1(ALL1)
#define RESETS_RESET_SPI0(v) (((v)&0x1)<<18)
#define RESETS_RESET_SPI0_MASK RESETS_RESET_SPI0(ALL1)
#define RESETS_RESET_SHA256(v) (((v)&0x1)<<17)
#define RESETS_RESET_SHA256_MASK RESETS_RESET_SHA256(ALL1)
#define RESETS_RESET_PWM(v) (((v)&0x1)<<16)
#define RESETS_RESET_PWM_MASK RESETS_RESET_PWM(ALL1)
#define RESETS_RESET_PLL_USB(v) (((v)&0x1)<<15)
#define RESETS_RESET_PLL_USB_MASK RESETS_RESET_PLL_USB(ALL1)
#define RESETS_RESET_PLL_SYS(v) (((v)&0x1)<<14)
#define RESETS_RESET_PLL_SYS_MASK RESETS_RESET_PLL_SYS(ALL1)
#define RESETS_RESET_PIO2(v) (((v)&0x1)<<13)
#define RESETS_RESET_PIO2_MASK RESETS_RESET_PIO2(ALL1)
#define RESETS_RESET_PIO1(v) (((v)&0x1)<<12)
#define RESETS_RESET_PIO1_MASK RESETS_RESET_PIO1(ALL1)
#define RESETS_RESET_PIO0(v) (((v)&0x1)<<11)
#define RESETS_RESET_PIO0_MASK RESETS_RESET_PIO0(ALL1)
#define RESETS_RESET_PADS_QSPI(v) (((v)&0x1)<<10)
#define RESETS_RESET_PADS_QSPI_MASK RESETS_RESET_PADS_QSPI(ALL1)
#define RESETS_RESET_PADS_BANK0(v) (((v)&0x1)<<9)
#define RESETS_RESET_PADS_BANK0_MASK RESETS_RESET_PADS_BANK0(ALL1)
#define RESETS_RESET_JTAG(v) (((v)&0x1)<<8)
#define RESETS_RESET_JTAG_MASK RESETS_RESET_JTAG(ALL1)
#define RESETS_RESET_IO_QSPI(v) (((v)&0x1)<<7)
#define RESETS_RESET_IO_QSPI_MASK RESETS_RESET_IO_QSPI(ALL1)
#define RESETS_RESET_IO_BANK0(v) (((v)&0x1)<<6)
#define RESETS_RESET_IO_BANK0_MASK RESETS_RESET_IO_BANK0(ALL1)
#define RESETS_RESET_I2C1(v) (((v)&0x1)<<5)
#define RESETS_RESET_I2C1_MASK RESETS_RESET_I2C1(ALL1)
#define RESETS_RESET_I2C0(v) (((v)&0x1)<<4)
#define RESETS_RESET_I2C0_MASK RESETS_RESET_I2C0(ALL1)
#define RESETS_RESET_HSTX(v) (((v)&0x1)<<3)
#define RESETS_RESET_HSTX_MASK RESETS_RESET_HSTX(ALL1)
#define RESETS_RESET_DMA(v) (((v)&0x1)<<2)
#define RESETS_RESET_DMA_MASK RESETS_RESET_DMA(ALL1)
#define RESETS_RESET_BUSCTRL(v) (((v)&0x1)<<1)
#define RESETS_RESET_BUSCTRL_MASK RESETS_RESET_BUSCTRL(ALL1)
#define RESETS_RESET_ADC(v) (((v)&0x1)<<0)
#define RESETS_RESET_ADC_MASK RESETS_RESET_ADC(ALL1)
#define RESETS_RESET_DONE_USBCTRL(v) (((v)&0x1)<<28)
#define RESETS_RESET_DONE_USBCTRL_MASK RESETS_RESET_DONE_USBCTRL(ALL1)
#define RESETS_RESET_DONE_UART1(v) (((v)&0x1)<<27)
#define RESETS_RESET_DONE_UART1_MASK RESETS_RESET_DONE_UART1(ALL1)
#define RESETS_RESET_DONE_UART0(v) (((v)&0x1)<<26)
#define RESETS_RESET_DONE_UART0_MASK RESETS_RESET_DONE_UART0(ALL1)
#define RESETS_RESET_DONE_TRNG(v) (((v)&0x1)<<25)
#define RESETS_RESET_DONE_TRNG_MASK RESETS_RESET_DONE_TRNG(ALL1)
#define RESETS_RESET_DONE_TIMER1(v) (((v)&0x1)<<24)
#define RESETS_RESET_DONE_TIMER1_MASK RESETS_RESET_DONE_TIMER1(ALL1)
#define RESETS_RESET_DONE_TIMER0(v) (((v)&0x1)<<23)
#define RESETS_RESET_DONE_TIMER0_MASK RESETS_RESET_DONE_TIMER0(ALL1)
#define RESETS_RESET_DONE_TBMAN(v) (((v)&0x1)<<22)
#define RESETS_RESET_DONE_TBMAN_MASK RESETS_RESET_DONE_TBMAN(ALL1)
#define RESETS_RESET_DONE_SYSINFO(v) (((v)&0x1)<<21)
#define RESETS_RESET_DONE_SYSINFO_MASK RESETS_RESET_DONE_SYSINFO(ALL1)
#define RESETS_RESET_DONE_SYSCFG(v) (((v)&0x1)<<20)
#define RESETS_RESET_DONE_SYSCFG_MASK RESETS_RESET_DONE_SYSCFG(ALL1)
#define RESETS_RESET_DONE_SPI1(v) (((v)&0x1)<<19)
#define RESETS_RESET_DONE_SPI1_MASK RESETS_RESET_DONE_SPI1(ALL1)
#define RESETS_RESET_DONE_SPI0(v) (((v)&0x1)<<18)
#define RESETS_RESET_DONE_SPI0_MASK RESETS_RESET_DONE_SPI0(ALL1)
#define RESETS_RESET_DONE_SHA256(v) (((v)&0x1)<<17)
#define RESETS_RESET_DONE_SHA256_MASK RESETS_RESET_DONE_SHA256(ALL1)
#define RESETS_RESET_DONE_PWM(v) (((v)&0x1)<<16)
#define RESETS_RESET_DONE_PWM_MASK RESETS_RESET_DONE_PWM(ALL1)
#define RESETS_RESET_DONE_PLL_USB(v) (((v)&0x1)<<15)
#define RESETS_RESET_DONE_PLL_USB_MASK RESETS_RESET_DONE_PLL_USB(ALL1)
#define RESETS_RESET_DONE_PLL_SYS(v) (((v)&0x1)<<14)
#define RESETS_RESET_DONE_PLL_SYS_MASK RESETS_RESET_DONE_PLL_SYS(ALL1)
#define RESETS_RESET_DONE_PIO2(v) (((v)&0x1)<<13)
#define RESETS_RESET_DONE_PIO2_MASK RESETS_RESET_DONE_PIO2(ALL1)
#define RESETS_RESET_DONE_PIO1(v) (((v)&0x1)<<12)
#define RESETS_RESET_DONE_PIO1_MASK RESETS_RESET_DONE_PIO1(ALL1)
#define RESETS_RESET_DONE_PIO0(v) (((v)&0x1)<<11)
#define RESETS_RESET_DONE_PIO0_MASK RESETS_RESET_DONE_PIO0(ALL1)
#define RESETS_RESET_DONE_PADS_QSPI(v) (((v)&0x1)<<10)
#define RESETS_RESET_DONE_PADS_QSPI_MASK RESETS_RESET_DONE_PADS_QSPI(ALL1)
#define RESETS_RESET_DONE_PADS_BANK0(v) (((v)&0x1)<<9)
#define RESETS_RESET_DONE_PADS_BANK0_MASK RESETS_RESET_DONE_PADS_BANK0(ALL1)
#define RESETS_RESET_DONE_JTAG(v) (((v)&0x1)<<8)
#define RESETS_RESET_DONE_JTAG_MASK RESETS_RESET_DONE_JTAG(ALL1)
#define RESETS_RESET_DONE_IO_QSPI(v) (((v)&0x1)<<7)
#define RESETS_RESET_DONE_IO_QSPI_MASK RESETS_RESET_DONE_IO_QSPI(ALL1)
#define RESETS_RESET_DONE_IO_BANK0(v) (((v)&0x1)<<6)
#define RESETS_RESET_DONE_IO_BANK0_MASK RESETS_RESET_DONE_IO_BANK0(ALL1)
#define RESETS_RESET_DONE_I2C1(v) (((v)&0x1)<<5)
#define RESETS_RESET_DONE_I2C1_MASK RESETS_RESET_DONE_I2C1(ALL1)
#define RESETS_RESET_DONE_I2C0(v) (((v)&0x1)<<4)
#define RESETS_RESET_DONE_I2C0_MASK RESETS_RESET_DONE_I2C0(ALL1)
#define RESETS_RESET_DONE_HSTX(v) (((v)&0x1)<<3)
#define RESETS_RESET_DONE_HSTX_MASK RESETS_RESET_DONE_HSTX(ALL1)
#define RESETS_RESET_DONE_DMA(v) (((v)&0x1)<<2)
#define RESETS_RESET_DONE_DMA_MASK RESETS_RESET_DONE_DMA(ALL1)
#define RESETS_RESET_DONE_BUSCTRL(v) (((v)&0x1)<<1)
#define RESETS_RESET_DONE_BUSCTRL_MASK RESETS_RESET_DONE_BUSCTRL(ALL1)
#define RESETS_RESET_DONE_ADC(v) (((v)&0x1)<<0)
#define RESETS_RESET_DONE_ADC_MASK RESETS_RESET_DONE_ADC(ALL1)

/*WDSEL Register macros*/

#define RESETS_WDSEL_USBCTRL(v) (((v)&0x1)<<28)
#define RESETS_WDSEL_USBCTRL_MASK RESETS_WDSEL_USBCTRL(ALL1)
#define RESETS_WDSEL_UART1(v) (((v)&0x1)<<27)
#define RESETS_WDSEL_UART1_MASK RESETS_WDSEL_UART1(ALL1)
#define RESETS_WDSEL_UART0(v) (((v)&0x1)<<26)
#define RESETS_WDSEL_UART0_MASK RESETS_WDSEL_UART0(ALL1)
#define RESETS_WDSEL_TRNG(v) (((v)&0x1)<<25)
#define RESETS_WDSEL_TRNG_MASK RESETS_WDSEL_TRNG(ALL1)
#define RESETS_WDSEL_TIMER1(v) (((v)&0x1)<<24)
#define RESETS_WDSEL_TIMER1_MASK RESETS_WDSEL_TIMER1(ALL1)
#define RESETS_WDSEL_TIMER0(v) (((v)&0x1)<<23)
#define RESETS_WDSEL_TIMER0_MASK RESETS_WDSEL_TIMER0(ALL1)
#define RESETS_WDSEL_TBMAN(v) (((v)&0x1)<<22)
#define RESETS_WDSEL_TBMAN_MASK RESETS_WDSEL_TBMAN(ALL1)
#define RESETS_WDSEL_SYSINFO(v) (((v)&0x1)<<21)
#define RESETS_WDSEL_SYSINFO_MASK RESETS_WDSEL_SYSINFO(ALL1)
#define RESETS_WDSEL_SYSCFG(v) (((v)&0x1)<<20)
#define RESETS_WDSEL_SYSCFG_MASK RESETS_WDSEL_SYSCFG(ALL1)
#define RESETS_WDSEL_SPI1(v) (((v)&0x1)<<19)
#define RESETS_WDSEL_SPI1_MASK RESETS_WDSEL_SPI1(ALL1)
#define RESETS_WDSEL_SPI0(v) (((v)&0x1)<<18)
#define RESETS_WDSEL_SPI0_MASK RESETS_WDSEL_SPI0(ALL1)
#define RESETS_WDSEL_SHA256(v) (((v)&0x1)<<17)
#define RESETS_WDSEL_SHA256_MASK RESETS_WDSEL_SHA256(ALL1)
#define RESETS_WDSEL_PWM(v) (((v)&0x1)<<16)
#define RESETS_WDSEL_PWM_MASK RESETS_WDSEL_PWM(ALL1)
#define RESETS_WDSEL_PLL_USB(v) (((v)&0x1)<<15)
#define RESETS_WDSEL_PLL_USB_MASK RESETS_WDSEL_PLL_USB(ALL1)
#define RESETS_WDSEL_PLL_SYS(v) (((v)&0x1)<<14)
#define RESETS_WDSEL_PLL_SYS_MASK RESETS_WDSEL_PLL_SYS(ALL1)
#define RESETS_WDSEL_PIO2(v) (((v)&0x1)<<13)
#define RESETS_WDSEL_PIO2_MASK RESETS_WDSEL_PIO2(ALL1)
#define RESETS_WDSEL_PIO1(v) (((v)&0x1)<<12)
#define RESETS_WDSEL_PIO1_MASK RESETS_WDSEL_PIO1(ALL1)
#define RESETS_WDSEL_PIO0(v) (((v)&0x1)<<11)
#define RESETS_WDSEL_PIO0_MASK RESETS_WDSEL_PIO0(ALL1)
#define RESETS_WDSEL_PADS_QSPI(v) (((v)&0x1)<<10)
#define RESETS_WDSEL_PADS_QSPI_MASK RESETS_WDSEL_PADS_QSPI(ALL1)
#define RESETS_WDSEL_PADS_BANK0(v) (((v)&0x1)<<9)
#define RESETS_WDSEL_PADS_BANK0_MASK RESETS_WDSEL_PADS_BANK0(ALL1)
#define RESETS_WDSEL_JTAG(v) (((v)&0x1)<<8)
#define RESETS_WDSEL_JTAG_MASK RESETS_WDSEL_JTAG(ALL1)
#define RESETS_WDSEL_IO_QSPI(v) (((v)&0x1)<<7)
#define RESETS_WDSEL_IO_QSPI_MASK RESETS_WDSEL_IO_QSPI(ALL1)
#define RESETS_WDSEL_IO_BANK0(v) (((v)&0x1)<<6)
#define RESETS_WDSEL_IO_BANK0_MASK RESETS_WDSEL_IO_BANK0(ALL1)
#define RESETS_WDSEL_I2C1(v) (((v)&0x1)<<5)
#define RESETS_WDSEL_I2C1_MASK RESETS_WDSEL_I2C1(ALL1)
#define RESETS_WDSEL_I2C0(v) (((v)&0x1)<<4)
#define RESETS_WDSEL_I2C0_MASK RESETS_WDSEL_I2C0(ALL1)
#define RESETS_WDSEL_HSTX(v) (((v)&0x1)<<3)
#define RESETS_WDSEL_HSTX_MASK RESETS_WDSEL_HSTX(ALL1)
#define RESETS_WDSEL_DMA(v) (((v)&0x1)<<2)
#define RESETS_WDSEL_DMA_MASK RESETS_WDSEL_DMA(ALL1)
#define RESETS_WDSEL_BUSCTRL(v) (((v)&0x1)<<1)
#define RESETS_WDSEL_BUSCTRL_MASK RESETS_WDSEL_BUSCTRL(ALL1)
#define RESETS_WDSEL_ADC(v) (((v)&0x1)<<0)
#define RESETS_WDSEL_ADC_MASK RESETS_WDSEL_ADC(ALL1)

/*RESET_DONE Register macros*/

#define RESETS_RESET_DONE_USBCTRL(v) (((v)&0x1)<<28)
#define RESETS_RESET_DONE_USBCTRL_MASK RESETS_RESET_DONE_USBCTRL(ALL1)
#define RESETS_RESET_DONE_UART1(v) (((v)&0x1)<<27)
#define RESETS_RESET_DONE_UART1_MASK RESETS_RESET_DONE_UART1(ALL1)
#define RESETS_RESET_DONE_UART0(v) (((v)&0x1)<<26)
#define RESETS_RESET_DONE_UART0_MASK RESETS_RESET_DONE_UART0(ALL1)
#define RESETS_RESET_DONE_TRNG(v) (((v)&0x1)<<25)
#define RESETS_RESET_DONE_TRNG_MASK RESETS_RESET_DONE_TRNG(ALL1)
#define RESETS_RESET_DONE_TIMER1(v) (((v)&0x1)<<24)
#define RESETS_RESET_DONE_TIMER1_MASK RESETS_RESET_DONE_TIMER1(ALL1)
#define RESETS_RESET_DONE_TIMER0(v) (((v)&0x1)<<23)
#define RESETS_RESET_DONE_TIMER0_MASK RESETS_RESET_DONE_TIMER0(ALL1)
#define RESETS_RESET_DONE_TBMAN(v) (((v)&0x1)<<22)
#define RESETS_RESET_DONE_TBMAN_MASK RESETS_RESET_DONE_TBMAN(ALL1)
#define RESETS_RESET_DONE_SYSINFO(v) (((v)&0x1)<<21)
#define RESETS_RESET_DONE_SYSINFO_MASK RESETS_RESET_DONE_SYSINFO(ALL1)
#define RESETS_RESET_DONE_SYSCFG(v) (((v)&0x1)<<20)
#define RESETS_RESET_DONE_SYSCFG_MASK RESETS_RESET_DONE_SYSCFG(ALL1)
#define RESETS_RESET_DONE_SPI1(v) (((v)&0x1)<<19)
#define RESETS_RESET_DONE_SPI1_MASK RESETS_RESET_DONE_SPI1(ALL1)
#define RESETS_RESET_DONE_SPI0(v) (((v)&0x1)<<18)
#define RESETS_RESET_DONE_SPI0_MASK RESETS_RESET_DONE_SPI0(ALL1)
#define RESETS_RESET_DONE_SHA256(v) (((v)&0x1)<<17)
#define RESETS_RESET_DONE_SHA256_MASK RESETS_RESET_DONE_SHA256(ALL1)
#define RESETS_RESET_DONE_PWM(v) (((v)&0x1)<<16)
#define RESETS_RESET_DONE_PWM_MASK RESETS_RESET_DONE_PWM(ALL1)
#define RESETS_RESET_DONE_PLL_USB(v) (((v)&0x1)<<15)
#define RESETS_RESET_DONE_PLL_USB_MASK RESETS_RESET_DONE_PLL_USB(ALL1)
#define RESETS_RESET_DONE_PLL_SYS(v) (((v)&0x1)<<14)
#define RESETS_RESET_DONE_PLL_SYS_MASK RESETS_RESET_DONE_PLL_SYS(ALL1)
#define RESETS_RESET_DONE_PIO2(v) (((v)&0x1)<<13)
#define RESETS_RESET_DONE_PIO2_MASK RESETS_RESET_DONE_PIO2(ALL1)
#define RESETS_RESET_DONE_PIO1(v) (((v)&0x1)<<12)
#define RESETS_RESET_DONE_PIO1_MASK RESETS_RESET_DONE_PIO1(ALL1)
#define RESETS_RESET_DONE_PIO0(v) (((v)&0x1)<<11)
#define RESETS_RESET_DONE_PIO0_MASK RESETS_RESET_DONE_PIO0(ALL1)
#define RESETS_RESET_DONE_PADS_QSPI(v) (((v)&0x1)<<10)
#define RESETS_RESET_DONE_PADS_QSPI_MASK RESETS_RESET_DONE_PADS_QSPI(ALL1)
#define RESETS_RESET_DONE_PADS_BANK0(v) (((v)&0x1)<<9)
#define RESETS_RESET_DONE_PADS_BANK0_MASK RESETS_RESET_DONE_PADS_BANK0(ALL1)
#define RESETS_RESET_DONE_JTAG(v) (((v)&0x1)<<8)
#define RESETS_RESET_DONE_JTAG_MASK RESETS_RESET_DONE_JTAG(ALL1)
#define RESETS_RESET_DONE_IO_QSPI(v) (((v)&0x1)<<7)
#define RESETS_RESET_DONE_IO_QSPI_MASK RESETS_RESET_DONE_IO_QSPI(ALL1)
#define RESETS_RESET_DONE_IO_BANK0(v) (((v)&0x1)<<6)
#define RESETS_RESET_DONE_IO_BANK0_MASK RESETS_RESET_DONE_IO_BANK0(ALL1)
#define RESETS_RESET_DONE_I2C1(v) (((v)&0x1)<<5)
#define RESETS_RESET_DONE_I2C1_MASK RESETS_RESET_DONE_I2C1(ALL1)
#define RESETS_RESET_DONE_I2C0(v) (((v)&0x1)<<4)
#define RESETS_RESET_DONE_I2C0_MASK RESETS_RESET_DONE_I2C0(ALL1)
#define RESETS_RESET_DONE_HSTX(v) (((v)&0x1)<<3)
#define RESETS_RESET_DONE_HSTX_MASK RESETS_RESET_DONE_HSTX(ALL1)
#define RESETS_RESET_DONE_DMA(v) (((v)&0x1)<<2)
#define RESETS_RESET_DONE_DMA_MASK RESETS_RESET_DONE_DMA(ALL1)
#define RESETS_RESET_DONE_BUSCTRL(v) (((v)&0x1)<<1)
#define RESETS_RESET_DONE_BUSCTRL_MASK RESETS_RESET_DONE_BUSCTRL(ALL1)
#define RESETS_RESET_DONE_ADC(v) (((v)&0x1)<<0)
#define RESETS_RESET_DONE_ADC_MASK RESETS_RESET_DONE_ADC(ALL1)

#endif

