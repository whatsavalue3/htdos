
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

#ifndef RP2350_PADS_QSPI_H
#define RP2350_PADS_QSPI_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t voltage_select;
		uint32_t gpio_qspi_sclk;
		uint32_t gpio_qspi_sd0;
		uint32_t gpio_qspi_sd1;
		uint32_t gpio_qspi_sd2;
		uint32_t gpio_qspi_sd3;
		uint32_t gpio_qspi_ss;
		uint32_t RSVD0[1017];
		uint32_t voltage_select_xor;
		uint32_t gpio_qspi_sclk_xor;
		uint32_t gpio_qspi_sd0_xor;
		uint32_t gpio_qspi_sd1_xor;
		uint32_t gpio_qspi_sd2_xor;
		uint32_t gpio_qspi_sd3_xor;
		uint32_t gpio_qspi_ss_xor;
		uint32_t RSVDxor_0[1017];
		uint32_t voltage_select_set;
		uint32_t gpio_qspi_sclk_set;
		uint32_t gpio_qspi_sd0_set;
		uint32_t gpio_qspi_sd1_set;
		uint32_t gpio_qspi_sd2_set;
		uint32_t gpio_qspi_sd3_set;
		uint32_t gpio_qspi_ss_set;
		uint32_t RSVDset_0[1017];
		uint32_t voltage_select_clr;
		uint32_t gpio_qspi_sclk_clr;
		uint32_t gpio_qspi_sd0_clr;
		uint32_t gpio_qspi_sd1_clr;
		uint32_t gpio_qspi_sd2_clr;
		uint32_t gpio_qspi_sd3_clr;
		uint32_t gpio_qspi_ss_clr;
		uint32_t RSVDclr_0[1017];
} PADS_QSPI_REG_BLOCKS;


/*IO Registers as struct*/

#define pads_qspi (*(PADS_QSPI_REG_BLOCKS volatile *)0x40040000)


/*IO Registers AS MACROS*/

#define PADS_QSPI_VOLTAGE_SELECT (*(volatile uint32_t *)0x40040000)
#define PADS_QSPI_GPIO_QSPI_SCLK (*(volatile uint32_t *)0x40040004)
#define PADS_QSPI_GPIO_QSPI_SD0 (*(volatile uint32_t *)0x40040008)
#define PADS_QSPI_GPIO_QSPI_SD1 (*(volatile uint32_t *)0x4004000c)
#define PADS_QSPI_GPIO_QSPI_SD2 (*(volatile uint32_t *)0x40040010)
#define PADS_QSPI_GPIO_QSPI_SD3 (*(volatile uint32_t *)0x40040014)
#define PADS_QSPI_GPIO_QSPI_SS (*(volatile uint32_t *)0x40040018)
#define PADS_QSPI_VOLTAGE_SELECT_XOR (*(volatile uint32_t *)0x40041000)
#define PADS_QSPI_GPIO_QSPI_SCLK_XOR (*(volatile uint32_t *)0x40041004)
#define PADS_QSPI_GPIO_QSPI_SD0_XOR (*(volatile uint32_t *)0x40041008)
#define PADS_QSPI_GPIO_QSPI_SD1_XOR (*(volatile uint32_t *)0x4004100c)
#define PADS_QSPI_GPIO_QSPI_SD2_XOR (*(volatile uint32_t *)0x40041010)
#define PADS_QSPI_GPIO_QSPI_SD3_XOR (*(volatile uint32_t *)0x40041014)
#define PADS_QSPI_GPIO_QSPI_SS_XOR (*(volatile uint32_t *)0x40041018)
#define PADS_QSPI_VOLTAGE_SELECT_SET (*(volatile uint32_t *)0x40042000)
#define PADS_QSPI_GPIO_QSPI_SCLK_SET (*(volatile uint32_t *)0x40042004)
#define PADS_QSPI_GPIO_QSPI_SD0_SET (*(volatile uint32_t *)0x40042008)
#define PADS_QSPI_GPIO_QSPI_SD1_SET (*(volatile uint32_t *)0x4004200c)
#define PADS_QSPI_GPIO_QSPI_SD2_SET (*(volatile uint32_t *)0x40042010)
#define PADS_QSPI_GPIO_QSPI_SD3_SET (*(volatile uint32_t *)0x40042014)
#define PADS_QSPI_GPIO_QSPI_SS_SET (*(volatile uint32_t *)0x40042018)
#define PADS_QSPI_VOLTAGE_SELECT_CLR (*(volatile uint32_t *)0x40043000)
#define PADS_QSPI_GPIO_QSPI_SCLK_CLR (*(volatile uint32_t *)0x40043004)
#define PADS_QSPI_GPIO_QSPI_SD0_CLR (*(volatile uint32_t *)0x40043008)
#define PADS_QSPI_GPIO_QSPI_SD1_CLR (*(volatile uint32_t *)0x4004300c)
#define PADS_QSPI_GPIO_QSPI_SD2_CLR (*(volatile uint32_t *)0x40043010)
#define PADS_QSPI_GPIO_QSPI_SD3_CLR (*(volatile uint32_t *)0x40043014)
#define PADS_QSPI_GPIO_QSPI_SS_CLR (*(volatile uint32_t *)0x40043018)

/*VOLTAGE_SELECT Register macros*/


/*GPIO_QSPI_SCLK Register macros*/

#define PADS_QSPI_GPIO_QSPI_SCLK_ISO(v) (((v)&0x1)<<8)
#define PADS_QSPI_GPIO_QSPI_SCLK_ISO_MASK PADS_QSPI_GPIO_QSPI_SCLK_ISO(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SCLK_OD_MASK PADS_QSPI_GPIO_QSPI_SCLK_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SCLK_IE_MASK PADS_QSPI_GPIO_QSPI_SCLK_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SCLK_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SCLK_PUE_MASK PADS_QSPI_GPIO_QSPI_SCLK_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SCLK_PDE_MASK PADS_QSPI_GPIO_QSPI_SCLK_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST(ALL1)

/*GPIO_QSPI_SD0 Register macros*/

#define PADS_QSPI_GPIO_QSPI_SD0_ISO(v) (((v)&0x1)<<8)
#define PADS_QSPI_GPIO_QSPI_SD0_ISO_MASK PADS_QSPI_GPIO_QSPI_SD0_ISO(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SD0_OD_MASK PADS_QSPI_GPIO_QSPI_SD0_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SD0_IE_MASK PADS_QSPI_GPIO_QSPI_SD0_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SD0_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SD0_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SD0_PUE_MASK PADS_QSPI_GPIO_QSPI_SD0_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SD0_PDE_MASK PADS_QSPI_GPIO_QSPI_SD0_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SD0_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SD0_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SD0_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SD0_SLEWFAST(ALL1)

/*GPIO_QSPI_SD1 Register macros*/

#define PADS_QSPI_GPIO_QSPI_SD1_ISO(v) (((v)&0x1)<<8)
#define PADS_QSPI_GPIO_QSPI_SD1_ISO_MASK PADS_QSPI_GPIO_QSPI_SD1_ISO(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SD1_OD_MASK PADS_QSPI_GPIO_QSPI_SD1_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SD1_IE_MASK PADS_QSPI_GPIO_QSPI_SD1_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SD1_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SD1_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SD1_PUE_MASK PADS_QSPI_GPIO_QSPI_SD1_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SD1_PDE_MASK PADS_QSPI_GPIO_QSPI_SD1_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SD1_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SD1_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SD1_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SD1_SLEWFAST(ALL1)

/*GPIO_QSPI_SD2 Register macros*/

#define PADS_QSPI_GPIO_QSPI_SD2_ISO(v) (((v)&0x1)<<8)
#define PADS_QSPI_GPIO_QSPI_SD2_ISO_MASK PADS_QSPI_GPIO_QSPI_SD2_ISO(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SD2_OD_MASK PADS_QSPI_GPIO_QSPI_SD2_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SD2_IE_MASK PADS_QSPI_GPIO_QSPI_SD2_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SD2_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SD2_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SD2_PUE_MASK PADS_QSPI_GPIO_QSPI_SD2_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SD2_PDE_MASK PADS_QSPI_GPIO_QSPI_SD2_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SD2_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SD2_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SD2_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SD2_SLEWFAST(ALL1)

/*GPIO_QSPI_SD3 Register macros*/

#define PADS_QSPI_GPIO_QSPI_SD3_ISO(v) (((v)&0x1)<<8)
#define PADS_QSPI_GPIO_QSPI_SD3_ISO_MASK PADS_QSPI_GPIO_QSPI_SD3_ISO(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SD3_OD_MASK PADS_QSPI_GPIO_QSPI_SD3_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SD3_IE_MASK PADS_QSPI_GPIO_QSPI_SD3_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SD3_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SD3_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SD3_PUE_MASK PADS_QSPI_GPIO_QSPI_SD3_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SD3_PDE_MASK PADS_QSPI_GPIO_QSPI_SD3_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SD3_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SD3_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SD3_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SD3_SLEWFAST(ALL1)

/*GPIO_QSPI_SS Register macros*/

#define PADS_QSPI_GPIO_QSPI_SS_ISO(v) (((v)&0x1)<<8)
#define PADS_QSPI_GPIO_QSPI_SS_ISO_MASK PADS_QSPI_GPIO_QSPI_SS_ISO(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SS_OD_MASK PADS_QSPI_GPIO_QSPI_SS_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SS_IE_MASK PADS_QSPI_GPIO_QSPI_SS_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SS_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SS_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SS_PUE_MASK PADS_QSPI_GPIO_QSPI_SS_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SS_PDE_MASK PADS_QSPI_GPIO_QSPI_SS_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SS_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SS_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SS_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SS_SLEWFAST(ALL1)

#endif

