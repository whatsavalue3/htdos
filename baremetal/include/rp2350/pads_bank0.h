
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

#ifndef RP2350_PADS_BANK0_H
#define RP2350_PADS_BANK0_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t voltage_select;
		uint32_t gpio0;
		uint32_t gpio1;
		uint32_t gpio2;
		uint32_t gpio3;
		uint32_t gpio4;
		uint32_t gpio5;
		uint32_t gpio6;
		uint32_t gpio7;
		uint32_t gpio8;
		uint32_t gpio9;
		uint32_t gpio10;
		uint32_t gpio11;
		uint32_t gpio12;
		uint32_t gpio13;
		uint32_t gpio14;
		uint32_t gpio15;
		uint32_t gpio16;
		uint32_t gpio17;
		uint32_t gpio18;
		uint32_t gpio19;
		uint32_t gpio20;
		uint32_t gpio21;
		uint32_t gpio22;
		uint32_t gpio23;
		uint32_t gpio24;
		uint32_t gpio25;
		uint32_t gpio26;
		uint32_t gpio27;
		uint32_t gpio28;
		uint32_t gpio29;
		uint32_t gpio30;
		uint32_t gpio31;
		uint32_t gpio32;
		uint32_t gpio33;
		uint32_t gpio34;
		uint32_t gpio35;
		uint32_t gpio36;
		uint32_t gpio37;
		uint32_t gpio38;
		uint32_t gpio39;
		uint32_t gpio40;
		uint32_t gpio41;
		uint32_t gpio42;
		uint32_t gpio43;
		uint32_t gpio44;
		uint32_t gpio45;
		uint32_t gpio46;
		uint32_t gpio47;
		uint32_t swclk;
		uint32_t swd;
		uint32_t RSVD0[973];
		uint32_t voltage_select_xor;
		uint32_t gpio0_xor;
		uint32_t gpio1_xor;
		uint32_t gpio2_xor;
		uint32_t gpio3_xor;
		uint32_t gpio4_xor;
		uint32_t gpio5_xor;
		uint32_t gpio6_xor;
		uint32_t gpio7_xor;
		uint32_t gpio8_xor;
		uint32_t gpio9_xor;
		uint32_t gpio10_xor;
		uint32_t gpio11_xor;
		uint32_t gpio12_xor;
		uint32_t gpio13_xor;
		uint32_t gpio14_xor;
		uint32_t gpio15_xor;
		uint32_t gpio16_xor;
		uint32_t gpio17_xor;
		uint32_t gpio18_xor;
		uint32_t gpio19_xor;
		uint32_t gpio20_xor;
		uint32_t gpio21_xor;
		uint32_t gpio22_xor;
		uint32_t gpio23_xor;
		uint32_t gpio24_xor;
		uint32_t gpio25_xor;
		uint32_t gpio26_xor;
		uint32_t gpio27_xor;
		uint32_t gpio28_xor;
		uint32_t gpio29_xor;
		uint32_t gpio30_xor;
		uint32_t gpio31_xor;
		uint32_t gpio32_xor;
		uint32_t gpio33_xor;
		uint32_t gpio34_xor;
		uint32_t gpio35_xor;
		uint32_t gpio36_xor;
		uint32_t gpio37_xor;
		uint32_t gpio38_xor;
		uint32_t gpio39_xor;
		uint32_t gpio40_xor;
		uint32_t gpio41_xor;
		uint32_t gpio42_xor;
		uint32_t gpio43_xor;
		uint32_t gpio44_xor;
		uint32_t gpio45_xor;
		uint32_t gpio46_xor;
		uint32_t gpio47_xor;
		uint32_t swclk_xor;
		uint32_t swd_xor;
		uint32_t RSVDxor_0[973];
		uint32_t voltage_select_set;
		uint32_t gpio0_set;
		uint32_t gpio1_set;
		uint32_t gpio2_set;
		uint32_t gpio3_set;
		uint32_t gpio4_set;
		uint32_t gpio5_set;
		uint32_t gpio6_set;
		uint32_t gpio7_set;
		uint32_t gpio8_set;
		uint32_t gpio9_set;
		uint32_t gpio10_set;
		uint32_t gpio11_set;
		uint32_t gpio12_set;
		uint32_t gpio13_set;
		uint32_t gpio14_set;
		uint32_t gpio15_set;
		uint32_t gpio16_set;
		uint32_t gpio17_set;
		uint32_t gpio18_set;
		uint32_t gpio19_set;
		uint32_t gpio20_set;
		uint32_t gpio21_set;
		uint32_t gpio22_set;
		uint32_t gpio23_set;
		uint32_t gpio24_set;
		uint32_t gpio25_set;
		uint32_t gpio26_set;
		uint32_t gpio27_set;
		uint32_t gpio28_set;
		uint32_t gpio29_set;
		uint32_t gpio30_set;
		uint32_t gpio31_set;
		uint32_t gpio32_set;
		uint32_t gpio33_set;
		uint32_t gpio34_set;
		uint32_t gpio35_set;
		uint32_t gpio36_set;
		uint32_t gpio37_set;
		uint32_t gpio38_set;
		uint32_t gpio39_set;
		uint32_t gpio40_set;
		uint32_t gpio41_set;
		uint32_t gpio42_set;
		uint32_t gpio43_set;
		uint32_t gpio44_set;
		uint32_t gpio45_set;
		uint32_t gpio46_set;
		uint32_t gpio47_set;
		uint32_t swclk_set;
		uint32_t swd_set;
		uint32_t RSVDset_0[973];
		uint32_t voltage_select_clr;
		uint32_t gpio0_clr;
		uint32_t gpio1_clr;
		uint32_t gpio2_clr;
		uint32_t gpio3_clr;
		uint32_t gpio4_clr;
		uint32_t gpio5_clr;
		uint32_t gpio6_clr;
		uint32_t gpio7_clr;
		uint32_t gpio8_clr;
		uint32_t gpio9_clr;
		uint32_t gpio10_clr;
		uint32_t gpio11_clr;
		uint32_t gpio12_clr;
		uint32_t gpio13_clr;
		uint32_t gpio14_clr;
		uint32_t gpio15_clr;
		uint32_t gpio16_clr;
		uint32_t gpio17_clr;
		uint32_t gpio18_clr;
		uint32_t gpio19_clr;
		uint32_t gpio20_clr;
		uint32_t gpio21_clr;
		uint32_t gpio22_clr;
		uint32_t gpio23_clr;
		uint32_t gpio24_clr;
		uint32_t gpio25_clr;
		uint32_t gpio26_clr;
		uint32_t gpio27_clr;
		uint32_t gpio28_clr;
		uint32_t gpio29_clr;
		uint32_t gpio30_clr;
		uint32_t gpio31_clr;
		uint32_t gpio32_clr;
		uint32_t gpio33_clr;
		uint32_t gpio34_clr;
		uint32_t gpio35_clr;
		uint32_t gpio36_clr;
		uint32_t gpio37_clr;
		uint32_t gpio38_clr;
		uint32_t gpio39_clr;
		uint32_t gpio40_clr;
		uint32_t gpio41_clr;
		uint32_t gpio42_clr;
		uint32_t gpio43_clr;
		uint32_t gpio44_clr;
		uint32_t gpio45_clr;
		uint32_t gpio46_clr;
		uint32_t gpio47_clr;
		uint32_t swclk_clr;
		uint32_t swd_clr;
		uint32_t RSVDclr_0[973];
} PADS_BANK0_REG_BLOCKS;


/*IO Registers as struct*/

#define pads_bank0 (*(PADS_BANK0_REG_BLOCKS volatile *)0x40038000)


/*IO Registers AS MACROS*/

#define PADS_BANK0_VOLTAGE_SELECT (*(volatile uint32_t *)0x40038000)
#define PADS_BANK0_GPIO0 (*(volatile uint32_t *)0x40038004)
#define PADS_BANK0_GPIO1 (*(volatile uint32_t *)0x40038008)
#define PADS_BANK0_GPIO2 (*(volatile uint32_t *)0x4003800c)
#define PADS_BANK0_GPIO3 (*(volatile uint32_t *)0x40038010)
#define PADS_BANK0_GPIO4 (*(volatile uint32_t *)0x40038014)
#define PADS_BANK0_GPIO5 (*(volatile uint32_t *)0x40038018)
#define PADS_BANK0_GPIO6 (*(volatile uint32_t *)0x4003801c)
#define PADS_BANK0_GPIO7 (*(volatile uint32_t *)0x40038020)
#define PADS_BANK0_GPIO8 (*(volatile uint32_t *)0x40038024)
#define PADS_BANK0_GPIO9 (*(volatile uint32_t *)0x40038028)
#define PADS_BANK0_GPIO10 (*(volatile uint32_t *)0x4003802c)
#define PADS_BANK0_GPIO11 (*(volatile uint32_t *)0x40038030)
#define PADS_BANK0_GPIO12 (*(volatile uint32_t *)0x40038034)
#define PADS_BANK0_GPIO13 (*(volatile uint32_t *)0x40038038)
#define PADS_BANK0_GPIO14 (*(volatile uint32_t *)0x4003803c)
#define PADS_BANK0_GPIO15 (*(volatile uint32_t *)0x40038040)
#define PADS_BANK0_GPIO16 (*(volatile uint32_t *)0x40038044)
#define PADS_BANK0_GPIO17 (*(volatile uint32_t *)0x40038048)
#define PADS_BANK0_GPIO18 (*(volatile uint32_t *)0x4003804c)
#define PADS_BANK0_GPIO19 (*(volatile uint32_t *)0x40038050)
#define PADS_BANK0_GPIO20 (*(volatile uint32_t *)0x40038054)
#define PADS_BANK0_GPIO21 (*(volatile uint32_t *)0x40038058)
#define PADS_BANK0_GPIO22 (*(volatile uint32_t *)0x4003805c)
#define PADS_BANK0_GPIO23 (*(volatile uint32_t *)0x40038060)
#define PADS_BANK0_GPIO24 (*(volatile uint32_t *)0x40038064)
#define PADS_BANK0_GPIO25 (*(volatile uint32_t *)0x40038068)
#define PADS_BANK0_GPIO26 (*(volatile uint32_t *)0x4003806c)
#define PADS_BANK0_GPIO27 (*(volatile uint32_t *)0x40038070)
#define PADS_BANK0_GPIO28 (*(volatile uint32_t *)0x40038074)
#define PADS_BANK0_GPIO29 (*(volatile uint32_t *)0x40038078)
#define PADS_BANK0_GPIO30 (*(volatile uint32_t *)0x4003807c)
#define PADS_BANK0_GPIO31 (*(volatile uint32_t *)0x40038080)
#define PADS_BANK0_GPIO32 (*(volatile uint32_t *)0x40038084)
#define PADS_BANK0_GPIO33 (*(volatile uint32_t *)0x40038088)
#define PADS_BANK0_GPIO34 (*(volatile uint32_t *)0x4003808c)
#define PADS_BANK0_GPIO35 (*(volatile uint32_t *)0x40038090)
#define PADS_BANK0_GPIO36 (*(volatile uint32_t *)0x40038094)
#define PADS_BANK0_GPIO37 (*(volatile uint32_t *)0x40038098)
#define PADS_BANK0_GPIO38 (*(volatile uint32_t *)0x4003809c)
#define PADS_BANK0_GPIO39 (*(volatile uint32_t *)0x400380a0)
#define PADS_BANK0_GPIO40 (*(volatile uint32_t *)0x400380a4)
#define PADS_BANK0_GPIO41 (*(volatile uint32_t *)0x400380a8)
#define PADS_BANK0_GPIO42 (*(volatile uint32_t *)0x400380ac)
#define PADS_BANK0_GPIO43 (*(volatile uint32_t *)0x400380b0)
#define PADS_BANK0_GPIO44 (*(volatile uint32_t *)0x400380b4)
#define PADS_BANK0_GPIO45 (*(volatile uint32_t *)0x400380b8)
#define PADS_BANK0_GPIO46 (*(volatile uint32_t *)0x400380bc)
#define PADS_BANK0_GPIO47 (*(volatile uint32_t *)0x400380c0)
#define PADS_BANK0_SWCLK (*(volatile uint32_t *)0x400380c4)
#define PADS_BANK0_SWD (*(volatile uint32_t *)0x400380c8)
#define PADS_BANK0_VOLTAGE_SELECT_XOR (*(volatile uint32_t *)0x40039000)
#define PADS_BANK0_GPIO0_XOR (*(volatile uint32_t *)0x40039004)
#define PADS_BANK0_GPIO1_XOR (*(volatile uint32_t *)0x40039008)
#define PADS_BANK0_GPIO2_XOR (*(volatile uint32_t *)0x4003900c)
#define PADS_BANK0_GPIO3_XOR (*(volatile uint32_t *)0x40039010)
#define PADS_BANK0_GPIO4_XOR (*(volatile uint32_t *)0x40039014)
#define PADS_BANK0_GPIO5_XOR (*(volatile uint32_t *)0x40039018)
#define PADS_BANK0_GPIO6_XOR (*(volatile uint32_t *)0x4003901c)
#define PADS_BANK0_GPIO7_XOR (*(volatile uint32_t *)0x40039020)
#define PADS_BANK0_GPIO8_XOR (*(volatile uint32_t *)0x40039024)
#define PADS_BANK0_GPIO9_XOR (*(volatile uint32_t *)0x40039028)
#define PADS_BANK0_GPIO10_XOR (*(volatile uint32_t *)0x4003902c)
#define PADS_BANK0_GPIO11_XOR (*(volatile uint32_t *)0x40039030)
#define PADS_BANK0_GPIO12_XOR (*(volatile uint32_t *)0x40039034)
#define PADS_BANK0_GPIO13_XOR (*(volatile uint32_t *)0x40039038)
#define PADS_BANK0_GPIO14_XOR (*(volatile uint32_t *)0x4003903c)
#define PADS_BANK0_GPIO15_XOR (*(volatile uint32_t *)0x40039040)
#define PADS_BANK0_GPIO16_XOR (*(volatile uint32_t *)0x40039044)
#define PADS_BANK0_GPIO17_XOR (*(volatile uint32_t *)0x40039048)
#define PADS_BANK0_GPIO18_XOR (*(volatile uint32_t *)0x4003904c)
#define PADS_BANK0_GPIO19_XOR (*(volatile uint32_t *)0x40039050)
#define PADS_BANK0_GPIO20_XOR (*(volatile uint32_t *)0x40039054)
#define PADS_BANK0_GPIO21_XOR (*(volatile uint32_t *)0x40039058)
#define PADS_BANK0_GPIO22_XOR (*(volatile uint32_t *)0x4003905c)
#define PADS_BANK0_GPIO23_XOR (*(volatile uint32_t *)0x40039060)
#define PADS_BANK0_GPIO24_XOR (*(volatile uint32_t *)0x40039064)
#define PADS_BANK0_GPIO25_XOR (*(volatile uint32_t *)0x40039068)
#define PADS_BANK0_GPIO26_XOR (*(volatile uint32_t *)0x4003906c)
#define PADS_BANK0_GPIO27_XOR (*(volatile uint32_t *)0x40039070)
#define PADS_BANK0_GPIO28_XOR (*(volatile uint32_t *)0x40039074)
#define PADS_BANK0_GPIO29_XOR (*(volatile uint32_t *)0x40039078)
#define PADS_BANK0_GPIO30_XOR (*(volatile uint32_t *)0x4003907c)
#define PADS_BANK0_GPIO31_XOR (*(volatile uint32_t *)0x40039080)
#define PADS_BANK0_GPIO32_XOR (*(volatile uint32_t *)0x40039084)
#define PADS_BANK0_GPIO33_XOR (*(volatile uint32_t *)0x40039088)
#define PADS_BANK0_GPIO34_XOR (*(volatile uint32_t *)0x4003908c)
#define PADS_BANK0_GPIO35_XOR (*(volatile uint32_t *)0x40039090)
#define PADS_BANK0_GPIO36_XOR (*(volatile uint32_t *)0x40039094)
#define PADS_BANK0_GPIO37_XOR (*(volatile uint32_t *)0x40039098)
#define PADS_BANK0_GPIO38_XOR (*(volatile uint32_t *)0x4003909c)
#define PADS_BANK0_GPIO39_XOR (*(volatile uint32_t *)0x400390a0)
#define PADS_BANK0_GPIO40_XOR (*(volatile uint32_t *)0x400390a4)
#define PADS_BANK0_GPIO41_XOR (*(volatile uint32_t *)0x400390a8)
#define PADS_BANK0_GPIO42_XOR (*(volatile uint32_t *)0x400390ac)
#define PADS_BANK0_GPIO43_XOR (*(volatile uint32_t *)0x400390b0)
#define PADS_BANK0_GPIO44_XOR (*(volatile uint32_t *)0x400390b4)
#define PADS_BANK0_GPIO45_XOR (*(volatile uint32_t *)0x400390b8)
#define PADS_BANK0_GPIO46_XOR (*(volatile uint32_t *)0x400390bc)
#define PADS_BANK0_GPIO47_XOR (*(volatile uint32_t *)0x400390c0)
#define PADS_BANK0_SWCLK_XOR (*(volatile uint32_t *)0x400390c4)
#define PADS_BANK0_SWD_XOR (*(volatile uint32_t *)0x400390c8)
#define PADS_BANK0_VOLTAGE_SELECT_SET (*(volatile uint32_t *)0x4003a000)
#define PADS_BANK0_GPIO0_SET (*(volatile uint32_t *)0x4003a004)
#define PADS_BANK0_GPIO1_SET (*(volatile uint32_t *)0x4003a008)
#define PADS_BANK0_GPIO2_SET (*(volatile uint32_t *)0x4003a00c)
#define PADS_BANK0_GPIO3_SET (*(volatile uint32_t *)0x4003a010)
#define PADS_BANK0_GPIO4_SET (*(volatile uint32_t *)0x4003a014)
#define PADS_BANK0_GPIO5_SET (*(volatile uint32_t *)0x4003a018)
#define PADS_BANK0_GPIO6_SET (*(volatile uint32_t *)0x4003a01c)
#define PADS_BANK0_GPIO7_SET (*(volatile uint32_t *)0x4003a020)
#define PADS_BANK0_GPIO8_SET (*(volatile uint32_t *)0x4003a024)
#define PADS_BANK0_GPIO9_SET (*(volatile uint32_t *)0x4003a028)
#define PADS_BANK0_GPIO10_SET (*(volatile uint32_t *)0x4003a02c)
#define PADS_BANK0_GPIO11_SET (*(volatile uint32_t *)0x4003a030)
#define PADS_BANK0_GPIO12_SET (*(volatile uint32_t *)0x4003a034)
#define PADS_BANK0_GPIO13_SET (*(volatile uint32_t *)0x4003a038)
#define PADS_BANK0_GPIO14_SET (*(volatile uint32_t *)0x4003a03c)
#define PADS_BANK0_GPIO15_SET (*(volatile uint32_t *)0x4003a040)
#define PADS_BANK0_GPIO16_SET (*(volatile uint32_t *)0x4003a044)
#define PADS_BANK0_GPIO17_SET (*(volatile uint32_t *)0x4003a048)
#define PADS_BANK0_GPIO18_SET (*(volatile uint32_t *)0x4003a04c)
#define PADS_BANK0_GPIO19_SET (*(volatile uint32_t *)0x4003a050)
#define PADS_BANK0_GPIO20_SET (*(volatile uint32_t *)0x4003a054)
#define PADS_BANK0_GPIO21_SET (*(volatile uint32_t *)0x4003a058)
#define PADS_BANK0_GPIO22_SET (*(volatile uint32_t *)0x4003a05c)
#define PADS_BANK0_GPIO23_SET (*(volatile uint32_t *)0x4003a060)
#define PADS_BANK0_GPIO24_SET (*(volatile uint32_t *)0x4003a064)
#define PADS_BANK0_GPIO25_SET (*(volatile uint32_t *)0x4003a068)
#define PADS_BANK0_GPIO26_SET (*(volatile uint32_t *)0x4003a06c)
#define PADS_BANK0_GPIO27_SET (*(volatile uint32_t *)0x4003a070)
#define PADS_BANK0_GPIO28_SET (*(volatile uint32_t *)0x4003a074)
#define PADS_BANK0_GPIO29_SET (*(volatile uint32_t *)0x4003a078)
#define PADS_BANK0_GPIO30_SET (*(volatile uint32_t *)0x4003a07c)
#define PADS_BANK0_GPIO31_SET (*(volatile uint32_t *)0x4003a080)
#define PADS_BANK0_GPIO32_SET (*(volatile uint32_t *)0x4003a084)
#define PADS_BANK0_GPIO33_SET (*(volatile uint32_t *)0x4003a088)
#define PADS_BANK0_GPIO34_SET (*(volatile uint32_t *)0x4003a08c)
#define PADS_BANK0_GPIO35_SET (*(volatile uint32_t *)0x4003a090)
#define PADS_BANK0_GPIO36_SET (*(volatile uint32_t *)0x4003a094)
#define PADS_BANK0_GPIO37_SET (*(volatile uint32_t *)0x4003a098)
#define PADS_BANK0_GPIO38_SET (*(volatile uint32_t *)0x4003a09c)
#define PADS_BANK0_GPIO39_SET (*(volatile uint32_t *)0x4003a0a0)
#define PADS_BANK0_GPIO40_SET (*(volatile uint32_t *)0x4003a0a4)
#define PADS_BANK0_GPIO41_SET (*(volatile uint32_t *)0x4003a0a8)
#define PADS_BANK0_GPIO42_SET (*(volatile uint32_t *)0x4003a0ac)
#define PADS_BANK0_GPIO43_SET (*(volatile uint32_t *)0x4003a0b0)
#define PADS_BANK0_GPIO44_SET (*(volatile uint32_t *)0x4003a0b4)
#define PADS_BANK0_GPIO45_SET (*(volatile uint32_t *)0x4003a0b8)
#define PADS_BANK0_GPIO46_SET (*(volatile uint32_t *)0x4003a0bc)
#define PADS_BANK0_GPIO47_SET (*(volatile uint32_t *)0x4003a0c0)
#define PADS_BANK0_SWCLK_SET (*(volatile uint32_t *)0x4003a0c4)
#define PADS_BANK0_SWD_SET (*(volatile uint32_t *)0x4003a0c8)
#define PADS_BANK0_VOLTAGE_SELECT_CLR (*(volatile uint32_t *)0x4003b000)
#define PADS_BANK0_GPIO0_CLR (*(volatile uint32_t *)0x4003b004)
#define PADS_BANK0_GPIO1_CLR (*(volatile uint32_t *)0x4003b008)
#define PADS_BANK0_GPIO2_CLR (*(volatile uint32_t *)0x4003b00c)
#define PADS_BANK0_GPIO3_CLR (*(volatile uint32_t *)0x4003b010)
#define PADS_BANK0_GPIO4_CLR (*(volatile uint32_t *)0x4003b014)
#define PADS_BANK0_GPIO5_CLR (*(volatile uint32_t *)0x4003b018)
#define PADS_BANK0_GPIO6_CLR (*(volatile uint32_t *)0x4003b01c)
#define PADS_BANK0_GPIO7_CLR (*(volatile uint32_t *)0x4003b020)
#define PADS_BANK0_GPIO8_CLR (*(volatile uint32_t *)0x4003b024)
#define PADS_BANK0_GPIO9_CLR (*(volatile uint32_t *)0x4003b028)
#define PADS_BANK0_GPIO10_CLR (*(volatile uint32_t *)0x4003b02c)
#define PADS_BANK0_GPIO11_CLR (*(volatile uint32_t *)0x4003b030)
#define PADS_BANK0_GPIO12_CLR (*(volatile uint32_t *)0x4003b034)
#define PADS_BANK0_GPIO13_CLR (*(volatile uint32_t *)0x4003b038)
#define PADS_BANK0_GPIO14_CLR (*(volatile uint32_t *)0x4003b03c)
#define PADS_BANK0_GPIO15_CLR (*(volatile uint32_t *)0x4003b040)
#define PADS_BANK0_GPIO16_CLR (*(volatile uint32_t *)0x4003b044)
#define PADS_BANK0_GPIO17_CLR (*(volatile uint32_t *)0x4003b048)
#define PADS_BANK0_GPIO18_CLR (*(volatile uint32_t *)0x4003b04c)
#define PADS_BANK0_GPIO19_CLR (*(volatile uint32_t *)0x4003b050)
#define PADS_BANK0_GPIO20_CLR (*(volatile uint32_t *)0x4003b054)
#define PADS_BANK0_GPIO21_CLR (*(volatile uint32_t *)0x4003b058)
#define PADS_BANK0_GPIO22_CLR (*(volatile uint32_t *)0x4003b05c)
#define PADS_BANK0_GPIO23_CLR (*(volatile uint32_t *)0x4003b060)
#define PADS_BANK0_GPIO24_CLR (*(volatile uint32_t *)0x4003b064)
#define PADS_BANK0_GPIO25_CLR (*(volatile uint32_t *)0x4003b068)
#define PADS_BANK0_GPIO26_CLR (*(volatile uint32_t *)0x4003b06c)
#define PADS_BANK0_GPIO27_CLR (*(volatile uint32_t *)0x4003b070)
#define PADS_BANK0_GPIO28_CLR (*(volatile uint32_t *)0x4003b074)
#define PADS_BANK0_GPIO29_CLR (*(volatile uint32_t *)0x4003b078)
#define PADS_BANK0_GPIO30_CLR (*(volatile uint32_t *)0x4003b07c)
#define PADS_BANK0_GPIO31_CLR (*(volatile uint32_t *)0x4003b080)
#define PADS_BANK0_GPIO32_CLR (*(volatile uint32_t *)0x4003b084)
#define PADS_BANK0_GPIO33_CLR (*(volatile uint32_t *)0x4003b088)
#define PADS_BANK0_GPIO34_CLR (*(volatile uint32_t *)0x4003b08c)
#define PADS_BANK0_GPIO35_CLR (*(volatile uint32_t *)0x4003b090)
#define PADS_BANK0_GPIO36_CLR (*(volatile uint32_t *)0x4003b094)
#define PADS_BANK0_GPIO37_CLR (*(volatile uint32_t *)0x4003b098)
#define PADS_BANK0_GPIO38_CLR (*(volatile uint32_t *)0x4003b09c)
#define PADS_BANK0_GPIO39_CLR (*(volatile uint32_t *)0x4003b0a0)
#define PADS_BANK0_GPIO40_CLR (*(volatile uint32_t *)0x4003b0a4)
#define PADS_BANK0_GPIO41_CLR (*(volatile uint32_t *)0x4003b0a8)
#define PADS_BANK0_GPIO42_CLR (*(volatile uint32_t *)0x4003b0ac)
#define PADS_BANK0_GPIO43_CLR (*(volatile uint32_t *)0x4003b0b0)
#define PADS_BANK0_GPIO44_CLR (*(volatile uint32_t *)0x4003b0b4)
#define PADS_BANK0_GPIO45_CLR (*(volatile uint32_t *)0x4003b0b8)
#define PADS_BANK0_GPIO46_CLR (*(volatile uint32_t *)0x4003b0bc)
#define PADS_BANK0_GPIO47_CLR (*(volatile uint32_t *)0x4003b0c0)
#define PADS_BANK0_SWCLK_CLR (*(volatile uint32_t *)0x4003b0c4)
#define PADS_BANK0_SWD_CLR (*(volatile uint32_t *)0x4003b0c8)

/*VOLTAGE_SELECT Register macros*/


/*GPIO0 Register macros*/

#define PADS_BANK0_GPIO0_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO0_ISO_MASK PADS_BANK0_GPIO0_ISO(ALL1)
#define PADS_BANK0_GPIO0_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO0_OD_MASK PADS_BANK0_GPIO0_OD(ALL1)
#define PADS_BANK0_GPIO0_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO0_IE_MASK PADS_BANK0_GPIO0_IE(ALL1)
#define PADS_BANK0_GPIO0_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO0_DRIVE_MASK PADS_BANK0_GPIO0_DRIVE(ALL1)
#define PADS_BANK0_GPIO0_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO0_PUE_MASK PADS_BANK0_GPIO0_PUE(ALL1)
#define PADS_BANK0_GPIO0_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO0_PDE_MASK PADS_BANK0_GPIO0_PDE(ALL1)
#define PADS_BANK0_GPIO0_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO0_SCHMITT_MASK PADS_BANK0_GPIO0_SCHMITT(ALL1)
#define PADS_BANK0_GPIO0_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO0_SLEWFAST_MASK PADS_BANK0_GPIO0_SLEWFAST(ALL1)

/*GPIO1 Register macros*/

#define PADS_BANK0_GPIO1_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO1_ISO_MASK PADS_BANK0_GPIO1_ISO(ALL1)
#define PADS_BANK0_GPIO1_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO1_OD_MASK PADS_BANK0_GPIO1_OD(ALL1)
#define PADS_BANK0_GPIO1_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO1_IE_MASK PADS_BANK0_GPIO1_IE(ALL1)
#define PADS_BANK0_GPIO1_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO1_DRIVE_MASK PADS_BANK0_GPIO1_DRIVE(ALL1)
#define PADS_BANK0_GPIO1_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO1_PUE_MASK PADS_BANK0_GPIO1_PUE(ALL1)
#define PADS_BANK0_GPIO1_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO1_PDE_MASK PADS_BANK0_GPIO1_PDE(ALL1)
#define PADS_BANK0_GPIO1_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO1_SCHMITT_MASK PADS_BANK0_GPIO1_SCHMITT(ALL1)
#define PADS_BANK0_GPIO1_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO1_SLEWFAST_MASK PADS_BANK0_GPIO1_SLEWFAST(ALL1)

/*GPIO2 Register macros*/

#define PADS_BANK0_GPIO2_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO2_ISO_MASK PADS_BANK0_GPIO2_ISO(ALL1)
#define PADS_BANK0_GPIO2_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO2_OD_MASK PADS_BANK0_GPIO2_OD(ALL1)
#define PADS_BANK0_GPIO2_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO2_IE_MASK PADS_BANK0_GPIO2_IE(ALL1)
#define PADS_BANK0_GPIO2_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO2_DRIVE_MASK PADS_BANK0_GPIO2_DRIVE(ALL1)
#define PADS_BANK0_GPIO2_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO2_PUE_MASK PADS_BANK0_GPIO2_PUE(ALL1)
#define PADS_BANK0_GPIO2_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO2_PDE_MASK PADS_BANK0_GPIO2_PDE(ALL1)
#define PADS_BANK0_GPIO2_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO2_SCHMITT_MASK PADS_BANK0_GPIO2_SCHMITT(ALL1)
#define PADS_BANK0_GPIO2_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO2_SLEWFAST_MASK PADS_BANK0_GPIO2_SLEWFAST(ALL1)

/*GPIO3 Register macros*/

#define PADS_BANK0_GPIO3_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO3_ISO_MASK PADS_BANK0_GPIO3_ISO(ALL1)
#define PADS_BANK0_GPIO3_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO3_OD_MASK PADS_BANK0_GPIO3_OD(ALL1)
#define PADS_BANK0_GPIO3_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO3_IE_MASK PADS_BANK0_GPIO3_IE(ALL1)
#define PADS_BANK0_GPIO3_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO3_DRIVE_MASK PADS_BANK0_GPIO3_DRIVE(ALL1)
#define PADS_BANK0_GPIO3_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO3_PUE_MASK PADS_BANK0_GPIO3_PUE(ALL1)
#define PADS_BANK0_GPIO3_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO3_PDE_MASK PADS_BANK0_GPIO3_PDE(ALL1)
#define PADS_BANK0_GPIO3_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO3_SCHMITT_MASK PADS_BANK0_GPIO3_SCHMITT(ALL1)
#define PADS_BANK0_GPIO3_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO3_SLEWFAST_MASK PADS_BANK0_GPIO3_SLEWFAST(ALL1)

/*GPIO4 Register macros*/

#define PADS_BANK0_GPIO4_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO4_ISO_MASK PADS_BANK0_GPIO4_ISO(ALL1)
#define PADS_BANK0_GPIO4_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO4_OD_MASK PADS_BANK0_GPIO4_OD(ALL1)
#define PADS_BANK0_GPIO4_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO4_IE_MASK PADS_BANK0_GPIO4_IE(ALL1)
#define PADS_BANK0_GPIO4_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO4_DRIVE_MASK PADS_BANK0_GPIO4_DRIVE(ALL1)
#define PADS_BANK0_GPIO4_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO4_PUE_MASK PADS_BANK0_GPIO4_PUE(ALL1)
#define PADS_BANK0_GPIO4_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO4_PDE_MASK PADS_BANK0_GPIO4_PDE(ALL1)
#define PADS_BANK0_GPIO4_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO4_SCHMITT_MASK PADS_BANK0_GPIO4_SCHMITT(ALL1)
#define PADS_BANK0_GPIO4_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO4_SLEWFAST_MASK PADS_BANK0_GPIO4_SLEWFAST(ALL1)

/*GPIO5 Register macros*/

#define PADS_BANK0_GPIO5_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO5_ISO_MASK PADS_BANK0_GPIO5_ISO(ALL1)
#define PADS_BANK0_GPIO5_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO5_OD_MASK PADS_BANK0_GPIO5_OD(ALL1)
#define PADS_BANK0_GPIO5_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO5_IE_MASK PADS_BANK0_GPIO5_IE(ALL1)
#define PADS_BANK0_GPIO5_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO5_DRIVE_MASK PADS_BANK0_GPIO5_DRIVE(ALL1)
#define PADS_BANK0_GPIO5_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO5_PUE_MASK PADS_BANK0_GPIO5_PUE(ALL1)
#define PADS_BANK0_GPIO5_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO5_PDE_MASK PADS_BANK0_GPIO5_PDE(ALL1)
#define PADS_BANK0_GPIO5_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO5_SCHMITT_MASK PADS_BANK0_GPIO5_SCHMITT(ALL1)
#define PADS_BANK0_GPIO5_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO5_SLEWFAST_MASK PADS_BANK0_GPIO5_SLEWFAST(ALL1)

/*GPIO6 Register macros*/

#define PADS_BANK0_GPIO6_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO6_ISO_MASK PADS_BANK0_GPIO6_ISO(ALL1)
#define PADS_BANK0_GPIO6_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO6_OD_MASK PADS_BANK0_GPIO6_OD(ALL1)
#define PADS_BANK0_GPIO6_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO6_IE_MASK PADS_BANK0_GPIO6_IE(ALL1)
#define PADS_BANK0_GPIO6_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO6_DRIVE_MASK PADS_BANK0_GPIO6_DRIVE(ALL1)
#define PADS_BANK0_GPIO6_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO6_PUE_MASK PADS_BANK0_GPIO6_PUE(ALL1)
#define PADS_BANK0_GPIO6_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO6_PDE_MASK PADS_BANK0_GPIO6_PDE(ALL1)
#define PADS_BANK0_GPIO6_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO6_SCHMITT_MASK PADS_BANK0_GPIO6_SCHMITT(ALL1)
#define PADS_BANK0_GPIO6_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO6_SLEWFAST_MASK PADS_BANK0_GPIO6_SLEWFAST(ALL1)

/*GPIO7 Register macros*/

#define PADS_BANK0_GPIO7_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO7_ISO_MASK PADS_BANK0_GPIO7_ISO(ALL1)
#define PADS_BANK0_GPIO7_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO7_OD_MASK PADS_BANK0_GPIO7_OD(ALL1)
#define PADS_BANK0_GPIO7_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO7_IE_MASK PADS_BANK0_GPIO7_IE(ALL1)
#define PADS_BANK0_GPIO7_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO7_DRIVE_MASK PADS_BANK0_GPIO7_DRIVE(ALL1)
#define PADS_BANK0_GPIO7_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO7_PUE_MASK PADS_BANK0_GPIO7_PUE(ALL1)
#define PADS_BANK0_GPIO7_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO7_PDE_MASK PADS_BANK0_GPIO7_PDE(ALL1)
#define PADS_BANK0_GPIO7_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO7_SCHMITT_MASK PADS_BANK0_GPIO7_SCHMITT(ALL1)
#define PADS_BANK0_GPIO7_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO7_SLEWFAST_MASK PADS_BANK0_GPIO7_SLEWFAST(ALL1)

/*GPIO8 Register macros*/

#define PADS_BANK0_GPIO8_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO8_ISO_MASK PADS_BANK0_GPIO8_ISO(ALL1)
#define PADS_BANK0_GPIO8_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO8_OD_MASK PADS_BANK0_GPIO8_OD(ALL1)
#define PADS_BANK0_GPIO8_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO8_IE_MASK PADS_BANK0_GPIO8_IE(ALL1)
#define PADS_BANK0_GPIO8_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO8_DRIVE_MASK PADS_BANK0_GPIO8_DRIVE(ALL1)
#define PADS_BANK0_GPIO8_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO8_PUE_MASK PADS_BANK0_GPIO8_PUE(ALL1)
#define PADS_BANK0_GPIO8_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO8_PDE_MASK PADS_BANK0_GPIO8_PDE(ALL1)
#define PADS_BANK0_GPIO8_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO8_SCHMITT_MASK PADS_BANK0_GPIO8_SCHMITT(ALL1)
#define PADS_BANK0_GPIO8_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO8_SLEWFAST_MASK PADS_BANK0_GPIO8_SLEWFAST(ALL1)

/*GPIO9 Register macros*/

#define PADS_BANK0_GPIO9_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO9_ISO_MASK PADS_BANK0_GPIO9_ISO(ALL1)
#define PADS_BANK0_GPIO9_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO9_OD_MASK PADS_BANK0_GPIO9_OD(ALL1)
#define PADS_BANK0_GPIO9_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO9_IE_MASK PADS_BANK0_GPIO9_IE(ALL1)
#define PADS_BANK0_GPIO9_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO9_DRIVE_MASK PADS_BANK0_GPIO9_DRIVE(ALL1)
#define PADS_BANK0_GPIO9_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO9_PUE_MASK PADS_BANK0_GPIO9_PUE(ALL1)
#define PADS_BANK0_GPIO9_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO9_PDE_MASK PADS_BANK0_GPIO9_PDE(ALL1)
#define PADS_BANK0_GPIO9_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO9_SCHMITT_MASK PADS_BANK0_GPIO9_SCHMITT(ALL1)
#define PADS_BANK0_GPIO9_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO9_SLEWFAST_MASK PADS_BANK0_GPIO9_SLEWFAST(ALL1)

/*GPIO10 Register macros*/

#define PADS_BANK0_GPIO10_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO10_ISO_MASK PADS_BANK0_GPIO10_ISO(ALL1)
#define PADS_BANK0_GPIO10_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO10_OD_MASK PADS_BANK0_GPIO10_OD(ALL1)
#define PADS_BANK0_GPIO10_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO10_IE_MASK PADS_BANK0_GPIO10_IE(ALL1)
#define PADS_BANK0_GPIO10_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO10_DRIVE_MASK PADS_BANK0_GPIO10_DRIVE(ALL1)
#define PADS_BANK0_GPIO10_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO10_PUE_MASK PADS_BANK0_GPIO10_PUE(ALL1)
#define PADS_BANK0_GPIO10_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO10_PDE_MASK PADS_BANK0_GPIO10_PDE(ALL1)
#define PADS_BANK0_GPIO10_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO10_SCHMITT_MASK PADS_BANK0_GPIO10_SCHMITT(ALL1)
#define PADS_BANK0_GPIO10_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO10_SLEWFAST_MASK PADS_BANK0_GPIO10_SLEWFAST(ALL1)

/*GPIO11 Register macros*/

#define PADS_BANK0_GPIO11_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO11_ISO_MASK PADS_BANK0_GPIO11_ISO(ALL1)
#define PADS_BANK0_GPIO11_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO11_OD_MASK PADS_BANK0_GPIO11_OD(ALL1)
#define PADS_BANK0_GPIO11_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO11_IE_MASK PADS_BANK0_GPIO11_IE(ALL1)
#define PADS_BANK0_GPIO11_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO11_DRIVE_MASK PADS_BANK0_GPIO11_DRIVE(ALL1)
#define PADS_BANK0_GPIO11_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO11_PUE_MASK PADS_BANK0_GPIO11_PUE(ALL1)
#define PADS_BANK0_GPIO11_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO11_PDE_MASK PADS_BANK0_GPIO11_PDE(ALL1)
#define PADS_BANK0_GPIO11_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO11_SCHMITT_MASK PADS_BANK0_GPIO11_SCHMITT(ALL1)
#define PADS_BANK0_GPIO11_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO11_SLEWFAST_MASK PADS_BANK0_GPIO11_SLEWFAST(ALL1)

/*GPIO12 Register macros*/

#define PADS_BANK0_GPIO12_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO12_ISO_MASK PADS_BANK0_GPIO12_ISO(ALL1)
#define PADS_BANK0_GPIO12_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO12_OD_MASK PADS_BANK0_GPIO12_OD(ALL1)
#define PADS_BANK0_GPIO12_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO12_IE_MASK PADS_BANK0_GPIO12_IE(ALL1)
#define PADS_BANK0_GPIO12_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO12_DRIVE_MASK PADS_BANK0_GPIO12_DRIVE(ALL1)
#define PADS_BANK0_GPIO12_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO12_PUE_MASK PADS_BANK0_GPIO12_PUE(ALL1)
#define PADS_BANK0_GPIO12_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO12_PDE_MASK PADS_BANK0_GPIO12_PDE(ALL1)
#define PADS_BANK0_GPIO12_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO12_SCHMITT_MASK PADS_BANK0_GPIO12_SCHMITT(ALL1)
#define PADS_BANK0_GPIO12_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO12_SLEWFAST_MASK PADS_BANK0_GPIO12_SLEWFAST(ALL1)

/*GPIO13 Register macros*/

#define PADS_BANK0_GPIO13_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO13_ISO_MASK PADS_BANK0_GPIO13_ISO(ALL1)
#define PADS_BANK0_GPIO13_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO13_OD_MASK PADS_BANK0_GPIO13_OD(ALL1)
#define PADS_BANK0_GPIO13_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO13_IE_MASK PADS_BANK0_GPIO13_IE(ALL1)
#define PADS_BANK0_GPIO13_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO13_DRIVE_MASK PADS_BANK0_GPIO13_DRIVE(ALL1)
#define PADS_BANK0_GPIO13_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO13_PUE_MASK PADS_BANK0_GPIO13_PUE(ALL1)
#define PADS_BANK0_GPIO13_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO13_PDE_MASK PADS_BANK0_GPIO13_PDE(ALL1)
#define PADS_BANK0_GPIO13_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO13_SCHMITT_MASK PADS_BANK0_GPIO13_SCHMITT(ALL1)
#define PADS_BANK0_GPIO13_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO13_SLEWFAST_MASK PADS_BANK0_GPIO13_SLEWFAST(ALL1)

/*GPIO14 Register macros*/

#define PADS_BANK0_GPIO14_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO14_ISO_MASK PADS_BANK0_GPIO14_ISO(ALL1)
#define PADS_BANK0_GPIO14_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO14_OD_MASK PADS_BANK0_GPIO14_OD(ALL1)
#define PADS_BANK0_GPIO14_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO14_IE_MASK PADS_BANK0_GPIO14_IE(ALL1)
#define PADS_BANK0_GPIO14_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO14_DRIVE_MASK PADS_BANK0_GPIO14_DRIVE(ALL1)
#define PADS_BANK0_GPIO14_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO14_PUE_MASK PADS_BANK0_GPIO14_PUE(ALL1)
#define PADS_BANK0_GPIO14_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO14_PDE_MASK PADS_BANK0_GPIO14_PDE(ALL1)
#define PADS_BANK0_GPIO14_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO14_SCHMITT_MASK PADS_BANK0_GPIO14_SCHMITT(ALL1)
#define PADS_BANK0_GPIO14_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO14_SLEWFAST_MASK PADS_BANK0_GPIO14_SLEWFAST(ALL1)

/*GPIO15 Register macros*/

#define PADS_BANK0_GPIO15_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO15_ISO_MASK PADS_BANK0_GPIO15_ISO(ALL1)
#define PADS_BANK0_GPIO15_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO15_OD_MASK PADS_BANK0_GPIO15_OD(ALL1)
#define PADS_BANK0_GPIO15_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO15_IE_MASK PADS_BANK0_GPIO15_IE(ALL1)
#define PADS_BANK0_GPIO15_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO15_DRIVE_MASK PADS_BANK0_GPIO15_DRIVE(ALL1)
#define PADS_BANK0_GPIO15_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO15_PUE_MASK PADS_BANK0_GPIO15_PUE(ALL1)
#define PADS_BANK0_GPIO15_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO15_PDE_MASK PADS_BANK0_GPIO15_PDE(ALL1)
#define PADS_BANK0_GPIO15_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO15_SCHMITT_MASK PADS_BANK0_GPIO15_SCHMITT(ALL1)
#define PADS_BANK0_GPIO15_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO15_SLEWFAST_MASK PADS_BANK0_GPIO15_SLEWFAST(ALL1)

/*GPIO16 Register macros*/

#define PADS_BANK0_GPIO16_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO16_ISO_MASK PADS_BANK0_GPIO16_ISO(ALL1)
#define PADS_BANK0_GPIO16_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO16_OD_MASK PADS_BANK0_GPIO16_OD(ALL1)
#define PADS_BANK0_GPIO16_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO16_IE_MASK PADS_BANK0_GPIO16_IE(ALL1)
#define PADS_BANK0_GPIO16_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO16_DRIVE_MASK PADS_BANK0_GPIO16_DRIVE(ALL1)
#define PADS_BANK0_GPIO16_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO16_PUE_MASK PADS_BANK0_GPIO16_PUE(ALL1)
#define PADS_BANK0_GPIO16_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO16_PDE_MASK PADS_BANK0_GPIO16_PDE(ALL1)
#define PADS_BANK0_GPIO16_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO16_SCHMITT_MASK PADS_BANK0_GPIO16_SCHMITT(ALL1)
#define PADS_BANK0_GPIO16_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO16_SLEWFAST_MASK PADS_BANK0_GPIO16_SLEWFAST(ALL1)

/*GPIO17 Register macros*/

#define PADS_BANK0_GPIO17_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO17_ISO_MASK PADS_BANK0_GPIO17_ISO(ALL1)
#define PADS_BANK0_GPIO17_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO17_OD_MASK PADS_BANK0_GPIO17_OD(ALL1)
#define PADS_BANK0_GPIO17_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO17_IE_MASK PADS_BANK0_GPIO17_IE(ALL1)
#define PADS_BANK0_GPIO17_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO17_DRIVE_MASK PADS_BANK0_GPIO17_DRIVE(ALL1)
#define PADS_BANK0_GPIO17_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO17_PUE_MASK PADS_BANK0_GPIO17_PUE(ALL1)
#define PADS_BANK0_GPIO17_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO17_PDE_MASK PADS_BANK0_GPIO17_PDE(ALL1)
#define PADS_BANK0_GPIO17_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO17_SCHMITT_MASK PADS_BANK0_GPIO17_SCHMITT(ALL1)
#define PADS_BANK0_GPIO17_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO17_SLEWFAST_MASK PADS_BANK0_GPIO17_SLEWFAST(ALL1)

/*GPIO18 Register macros*/

#define PADS_BANK0_GPIO18_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO18_ISO_MASK PADS_BANK0_GPIO18_ISO(ALL1)
#define PADS_BANK0_GPIO18_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO18_OD_MASK PADS_BANK0_GPIO18_OD(ALL1)
#define PADS_BANK0_GPIO18_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO18_IE_MASK PADS_BANK0_GPIO18_IE(ALL1)
#define PADS_BANK0_GPIO18_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO18_DRIVE_MASK PADS_BANK0_GPIO18_DRIVE(ALL1)
#define PADS_BANK0_GPIO18_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO18_PUE_MASK PADS_BANK0_GPIO18_PUE(ALL1)
#define PADS_BANK0_GPIO18_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO18_PDE_MASK PADS_BANK0_GPIO18_PDE(ALL1)
#define PADS_BANK0_GPIO18_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO18_SCHMITT_MASK PADS_BANK0_GPIO18_SCHMITT(ALL1)
#define PADS_BANK0_GPIO18_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO18_SLEWFAST_MASK PADS_BANK0_GPIO18_SLEWFAST(ALL1)

/*GPIO19 Register macros*/

#define PADS_BANK0_GPIO19_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO19_ISO_MASK PADS_BANK0_GPIO19_ISO(ALL1)
#define PADS_BANK0_GPIO19_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO19_OD_MASK PADS_BANK0_GPIO19_OD(ALL1)
#define PADS_BANK0_GPIO19_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO19_IE_MASK PADS_BANK0_GPIO19_IE(ALL1)
#define PADS_BANK0_GPIO19_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO19_DRIVE_MASK PADS_BANK0_GPIO19_DRIVE(ALL1)
#define PADS_BANK0_GPIO19_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO19_PUE_MASK PADS_BANK0_GPIO19_PUE(ALL1)
#define PADS_BANK0_GPIO19_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO19_PDE_MASK PADS_BANK0_GPIO19_PDE(ALL1)
#define PADS_BANK0_GPIO19_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO19_SCHMITT_MASK PADS_BANK0_GPIO19_SCHMITT(ALL1)
#define PADS_BANK0_GPIO19_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO19_SLEWFAST_MASK PADS_BANK0_GPIO19_SLEWFAST(ALL1)

/*GPIO20 Register macros*/

#define PADS_BANK0_GPIO20_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO20_ISO_MASK PADS_BANK0_GPIO20_ISO(ALL1)
#define PADS_BANK0_GPIO20_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO20_OD_MASK PADS_BANK0_GPIO20_OD(ALL1)
#define PADS_BANK0_GPIO20_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO20_IE_MASK PADS_BANK0_GPIO20_IE(ALL1)
#define PADS_BANK0_GPIO20_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO20_DRIVE_MASK PADS_BANK0_GPIO20_DRIVE(ALL1)
#define PADS_BANK0_GPIO20_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO20_PUE_MASK PADS_BANK0_GPIO20_PUE(ALL1)
#define PADS_BANK0_GPIO20_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO20_PDE_MASK PADS_BANK0_GPIO20_PDE(ALL1)
#define PADS_BANK0_GPIO20_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO20_SCHMITT_MASK PADS_BANK0_GPIO20_SCHMITT(ALL1)
#define PADS_BANK0_GPIO20_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO20_SLEWFAST_MASK PADS_BANK0_GPIO20_SLEWFAST(ALL1)

/*GPIO21 Register macros*/

#define PADS_BANK0_GPIO21_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO21_ISO_MASK PADS_BANK0_GPIO21_ISO(ALL1)
#define PADS_BANK0_GPIO21_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO21_OD_MASK PADS_BANK0_GPIO21_OD(ALL1)
#define PADS_BANK0_GPIO21_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO21_IE_MASK PADS_BANK0_GPIO21_IE(ALL1)
#define PADS_BANK0_GPIO21_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO21_DRIVE_MASK PADS_BANK0_GPIO21_DRIVE(ALL1)
#define PADS_BANK0_GPIO21_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO21_PUE_MASK PADS_BANK0_GPIO21_PUE(ALL1)
#define PADS_BANK0_GPIO21_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO21_PDE_MASK PADS_BANK0_GPIO21_PDE(ALL1)
#define PADS_BANK0_GPIO21_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO21_SCHMITT_MASK PADS_BANK0_GPIO21_SCHMITT(ALL1)
#define PADS_BANK0_GPIO21_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO21_SLEWFAST_MASK PADS_BANK0_GPIO21_SLEWFAST(ALL1)

/*GPIO22 Register macros*/

#define PADS_BANK0_GPIO22_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO22_ISO_MASK PADS_BANK0_GPIO22_ISO(ALL1)
#define PADS_BANK0_GPIO22_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO22_OD_MASK PADS_BANK0_GPIO22_OD(ALL1)
#define PADS_BANK0_GPIO22_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO22_IE_MASK PADS_BANK0_GPIO22_IE(ALL1)
#define PADS_BANK0_GPIO22_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO22_DRIVE_MASK PADS_BANK0_GPIO22_DRIVE(ALL1)
#define PADS_BANK0_GPIO22_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO22_PUE_MASK PADS_BANK0_GPIO22_PUE(ALL1)
#define PADS_BANK0_GPIO22_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO22_PDE_MASK PADS_BANK0_GPIO22_PDE(ALL1)
#define PADS_BANK0_GPIO22_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO22_SCHMITT_MASK PADS_BANK0_GPIO22_SCHMITT(ALL1)
#define PADS_BANK0_GPIO22_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO22_SLEWFAST_MASK PADS_BANK0_GPIO22_SLEWFAST(ALL1)

/*GPIO23 Register macros*/

#define PADS_BANK0_GPIO23_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO23_ISO_MASK PADS_BANK0_GPIO23_ISO(ALL1)
#define PADS_BANK0_GPIO23_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO23_OD_MASK PADS_BANK0_GPIO23_OD(ALL1)
#define PADS_BANK0_GPIO23_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO23_IE_MASK PADS_BANK0_GPIO23_IE(ALL1)
#define PADS_BANK0_GPIO23_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO23_DRIVE_MASK PADS_BANK0_GPIO23_DRIVE(ALL1)
#define PADS_BANK0_GPIO23_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO23_PUE_MASK PADS_BANK0_GPIO23_PUE(ALL1)
#define PADS_BANK0_GPIO23_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO23_PDE_MASK PADS_BANK0_GPIO23_PDE(ALL1)
#define PADS_BANK0_GPIO23_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO23_SCHMITT_MASK PADS_BANK0_GPIO23_SCHMITT(ALL1)
#define PADS_BANK0_GPIO23_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO23_SLEWFAST_MASK PADS_BANK0_GPIO23_SLEWFAST(ALL1)

/*GPIO24 Register macros*/

#define PADS_BANK0_GPIO24_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO24_ISO_MASK PADS_BANK0_GPIO24_ISO(ALL1)
#define PADS_BANK0_GPIO24_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO24_OD_MASK PADS_BANK0_GPIO24_OD(ALL1)
#define PADS_BANK0_GPIO24_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO24_IE_MASK PADS_BANK0_GPIO24_IE(ALL1)
#define PADS_BANK0_GPIO24_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO24_DRIVE_MASK PADS_BANK0_GPIO24_DRIVE(ALL1)
#define PADS_BANK0_GPIO24_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO24_PUE_MASK PADS_BANK0_GPIO24_PUE(ALL1)
#define PADS_BANK0_GPIO24_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO24_PDE_MASK PADS_BANK0_GPIO24_PDE(ALL1)
#define PADS_BANK0_GPIO24_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO24_SCHMITT_MASK PADS_BANK0_GPIO24_SCHMITT(ALL1)
#define PADS_BANK0_GPIO24_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO24_SLEWFAST_MASK PADS_BANK0_GPIO24_SLEWFAST(ALL1)

/*GPIO25 Register macros*/

#define PADS_BANK0_GPIO25_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO25_ISO_MASK PADS_BANK0_GPIO25_ISO(ALL1)
#define PADS_BANK0_GPIO25_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO25_OD_MASK PADS_BANK0_GPIO25_OD(ALL1)
#define PADS_BANK0_GPIO25_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO25_IE_MASK PADS_BANK0_GPIO25_IE(ALL1)
#define PADS_BANK0_GPIO25_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO25_DRIVE_MASK PADS_BANK0_GPIO25_DRIVE(ALL1)
#define PADS_BANK0_GPIO25_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO25_PUE_MASK PADS_BANK0_GPIO25_PUE(ALL1)
#define PADS_BANK0_GPIO25_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO25_PDE_MASK PADS_BANK0_GPIO25_PDE(ALL1)
#define PADS_BANK0_GPIO25_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO25_SCHMITT_MASK PADS_BANK0_GPIO25_SCHMITT(ALL1)
#define PADS_BANK0_GPIO25_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO25_SLEWFAST_MASK PADS_BANK0_GPIO25_SLEWFAST(ALL1)

/*GPIO26 Register macros*/

#define PADS_BANK0_GPIO26_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO26_ISO_MASK PADS_BANK0_GPIO26_ISO(ALL1)
#define PADS_BANK0_GPIO26_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO26_OD_MASK PADS_BANK0_GPIO26_OD(ALL1)
#define PADS_BANK0_GPIO26_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO26_IE_MASK PADS_BANK0_GPIO26_IE(ALL1)
#define PADS_BANK0_GPIO26_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO26_DRIVE_MASK PADS_BANK0_GPIO26_DRIVE(ALL1)
#define PADS_BANK0_GPIO26_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO26_PUE_MASK PADS_BANK0_GPIO26_PUE(ALL1)
#define PADS_BANK0_GPIO26_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO26_PDE_MASK PADS_BANK0_GPIO26_PDE(ALL1)
#define PADS_BANK0_GPIO26_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO26_SCHMITT_MASK PADS_BANK0_GPIO26_SCHMITT(ALL1)
#define PADS_BANK0_GPIO26_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO26_SLEWFAST_MASK PADS_BANK0_GPIO26_SLEWFAST(ALL1)

/*GPIO27 Register macros*/

#define PADS_BANK0_GPIO27_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO27_ISO_MASK PADS_BANK0_GPIO27_ISO(ALL1)
#define PADS_BANK0_GPIO27_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO27_OD_MASK PADS_BANK0_GPIO27_OD(ALL1)
#define PADS_BANK0_GPIO27_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO27_IE_MASK PADS_BANK0_GPIO27_IE(ALL1)
#define PADS_BANK0_GPIO27_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO27_DRIVE_MASK PADS_BANK0_GPIO27_DRIVE(ALL1)
#define PADS_BANK0_GPIO27_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO27_PUE_MASK PADS_BANK0_GPIO27_PUE(ALL1)
#define PADS_BANK0_GPIO27_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO27_PDE_MASK PADS_BANK0_GPIO27_PDE(ALL1)
#define PADS_BANK0_GPIO27_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO27_SCHMITT_MASK PADS_BANK0_GPIO27_SCHMITT(ALL1)
#define PADS_BANK0_GPIO27_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO27_SLEWFAST_MASK PADS_BANK0_GPIO27_SLEWFAST(ALL1)

/*GPIO28 Register macros*/

#define PADS_BANK0_GPIO28_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO28_ISO_MASK PADS_BANK0_GPIO28_ISO(ALL1)
#define PADS_BANK0_GPIO28_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO28_OD_MASK PADS_BANK0_GPIO28_OD(ALL1)
#define PADS_BANK0_GPIO28_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO28_IE_MASK PADS_BANK0_GPIO28_IE(ALL1)
#define PADS_BANK0_GPIO28_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO28_DRIVE_MASK PADS_BANK0_GPIO28_DRIVE(ALL1)
#define PADS_BANK0_GPIO28_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO28_PUE_MASK PADS_BANK0_GPIO28_PUE(ALL1)
#define PADS_BANK0_GPIO28_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO28_PDE_MASK PADS_BANK0_GPIO28_PDE(ALL1)
#define PADS_BANK0_GPIO28_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO28_SCHMITT_MASK PADS_BANK0_GPIO28_SCHMITT(ALL1)
#define PADS_BANK0_GPIO28_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO28_SLEWFAST_MASK PADS_BANK0_GPIO28_SLEWFAST(ALL1)

/*GPIO29 Register macros*/

#define PADS_BANK0_GPIO29_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO29_ISO_MASK PADS_BANK0_GPIO29_ISO(ALL1)
#define PADS_BANK0_GPIO29_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO29_OD_MASK PADS_BANK0_GPIO29_OD(ALL1)
#define PADS_BANK0_GPIO29_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO29_IE_MASK PADS_BANK0_GPIO29_IE(ALL1)
#define PADS_BANK0_GPIO29_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO29_DRIVE_MASK PADS_BANK0_GPIO29_DRIVE(ALL1)
#define PADS_BANK0_GPIO29_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO29_PUE_MASK PADS_BANK0_GPIO29_PUE(ALL1)
#define PADS_BANK0_GPIO29_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO29_PDE_MASK PADS_BANK0_GPIO29_PDE(ALL1)
#define PADS_BANK0_GPIO29_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO29_SCHMITT_MASK PADS_BANK0_GPIO29_SCHMITT(ALL1)
#define PADS_BANK0_GPIO29_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO29_SLEWFAST_MASK PADS_BANK0_GPIO29_SLEWFAST(ALL1)

/*GPIO30 Register macros*/

#define PADS_BANK0_GPIO30_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO30_ISO_MASK PADS_BANK0_GPIO30_ISO(ALL1)
#define PADS_BANK0_GPIO30_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO30_OD_MASK PADS_BANK0_GPIO30_OD(ALL1)
#define PADS_BANK0_GPIO30_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO30_IE_MASK PADS_BANK0_GPIO30_IE(ALL1)
#define PADS_BANK0_GPIO30_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO30_DRIVE_MASK PADS_BANK0_GPIO30_DRIVE(ALL1)
#define PADS_BANK0_GPIO30_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO30_PUE_MASK PADS_BANK0_GPIO30_PUE(ALL1)
#define PADS_BANK0_GPIO30_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO30_PDE_MASK PADS_BANK0_GPIO30_PDE(ALL1)
#define PADS_BANK0_GPIO30_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO30_SCHMITT_MASK PADS_BANK0_GPIO30_SCHMITT(ALL1)
#define PADS_BANK0_GPIO30_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO30_SLEWFAST_MASK PADS_BANK0_GPIO30_SLEWFAST(ALL1)

/*GPIO31 Register macros*/

#define PADS_BANK0_GPIO31_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO31_ISO_MASK PADS_BANK0_GPIO31_ISO(ALL1)
#define PADS_BANK0_GPIO31_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO31_OD_MASK PADS_BANK0_GPIO31_OD(ALL1)
#define PADS_BANK0_GPIO31_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO31_IE_MASK PADS_BANK0_GPIO31_IE(ALL1)
#define PADS_BANK0_GPIO31_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO31_DRIVE_MASK PADS_BANK0_GPIO31_DRIVE(ALL1)
#define PADS_BANK0_GPIO31_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO31_PUE_MASK PADS_BANK0_GPIO31_PUE(ALL1)
#define PADS_BANK0_GPIO31_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO31_PDE_MASK PADS_BANK0_GPIO31_PDE(ALL1)
#define PADS_BANK0_GPIO31_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO31_SCHMITT_MASK PADS_BANK0_GPIO31_SCHMITT(ALL1)
#define PADS_BANK0_GPIO31_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO31_SLEWFAST_MASK PADS_BANK0_GPIO31_SLEWFAST(ALL1)

/*GPIO32 Register macros*/

#define PADS_BANK0_GPIO32_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO32_ISO_MASK PADS_BANK0_GPIO32_ISO(ALL1)
#define PADS_BANK0_GPIO32_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO32_OD_MASK PADS_BANK0_GPIO32_OD(ALL1)
#define PADS_BANK0_GPIO32_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO32_IE_MASK PADS_BANK0_GPIO32_IE(ALL1)
#define PADS_BANK0_GPIO32_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO32_DRIVE_MASK PADS_BANK0_GPIO32_DRIVE(ALL1)
#define PADS_BANK0_GPIO32_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO32_PUE_MASK PADS_BANK0_GPIO32_PUE(ALL1)
#define PADS_BANK0_GPIO32_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO32_PDE_MASK PADS_BANK0_GPIO32_PDE(ALL1)
#define PADS_BANK0_GPIO32_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO32_SCHMITT_MASK PADS_BANK0_GPIO32_SCHMITT(ALL1)
#define PADS_BANK0_GPIO32_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO32_SLEWFAST_MASK PADS_BANK0_GPIO32_SLEWFAST(ALL1)

/*GPIO33 Register macros*/

#define PADS_BANK0_GPIO33_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO33_ISO_MASK PADS_BANK0_GPIO33_ISO(ALL1)
#define PADS_BANK0_GPIO33_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO33_OD_MASK PADS_BANK0_GPIO33_OD(ALL1)
#define PADS_BANK0_GPIO33_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO33_IE_MASK PADS_BANK0_GPIO33_IE(ALL1)
#define PADS_BANK0_GPIO33_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO33_DRIVE_MASK PADS_BANK0_GPIO33_DRIVE(ALL1)
#define PADS_BANK0_GPIO33_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO33_PUE_MASK PADS_BANK0_GPIO33_PUE(ALL1)
#define PADS_BANK0_GPIO33_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO33_PDE_MASK PADS_BANK0_GPIO33_PDE(ALL1)
#define PADS_BANK0_GPIO33_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO33_SCHMITT_MASK PADS_BANK0_GPIO33_SCHMITT(ALL1)
#define PADS_BANK0_GPIO33_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO33_SLEWFAST_MASK PADS_BANK0_GPIO33_SLEWFAST(ALL1)

/*GPIO34 Register macros*/

#define PADS_BANK0_GPIO34_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO34_ISO_MASK PADS_BANK0_GPIO34_ISO(ALL1)
#define PADS_BANK0_GPIO34_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO34_OD_MASK PADS_BANK0_GPIO34_OD(ALL1)
#define PADS_BANK0_GPIO34_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO34_IE_MASK PADS_BANK0_GPIO34_IE(ALL1)
#define PADS_BANK0_GPIO34_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO34_DRIVE_MASK PADS_BANK0_GPIO34_DRIVE(ALL1)
#define PADS_BANK0_GPIO34_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO34_PUE_MASK PADS_BANK0_GPIO34_PUE(ALL1)
#define PADS_BANK0_GPIO34_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO34_PDE_MASK PADS_BANK0_GPIO34_PDE(ALL1)
#define PADS_BANK0_GPIO34_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO34_SCHMITT_MASK PADS_BANK0_GPIO34_SCHMITT(ALL1)
#define PADS_BANK0_GPIO34_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO34_SLEWFAST_MASK PADS_BANK0_GPIO34_SLEWFAST(ALL1)

/*GPIO35 Register macros*/

#define PADS_BANK0_GPIO35_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO35_ISO_MASK PADS_BANK0_GPIO35_ISO(ALL1)
#define PADS_BANK0_GPIO35_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO35_OD_MASK PADS_BANK0_GPIO35_OD(ALL1)
#define PADS_BANK0_GPIO35_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO35_IE_MASK PADS_BANK0_GPIO35_IE(ALL1)
#define PADS_BANK0_GPIO35_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO35_DRIVE_MASK PADS_BANK0_GPIO35_DRIVE(ALL1)
#define PADS_BANK0_GPIO35_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO35_PUE_MASK PADS_BANK0_GPIO35_PUE(ALL1)
#define PADS_BANK0_GPIO35_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO35_PDE_MASK PADS_BANK0_GPIO35_PDE(ALL1)
#define PADS_BANK0_GPIO35_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO35_SCHMITT_MASK PADS_BANK0_GPIO35_SCHMITT(ALL1)
#define PADS_BANK0_GPIO35_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO35_SLEWFAST_MASK PADS_BANK0_GPIO35_SLEWFAST(ALL1)

/*GPIO36 Register macros*/

#define PADS_BANK0_GPIO36_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO36_ISO_MASK PADS_BANK0_GPIO36_ISO(ALL1)
#define PADS_BANK0_GPIO36_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO36_OD_MASK PADS_BANK0_GPIO36_OD(ALL1)
#define PADS_BANK0_GPIO36_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO36_IE_MASK PADS_BANK0_GPIO36_IE(ALL1)
#define PADS_BANK0_GPIO36_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO36_DRIVE_MASK PADS_BANK0_GPIO36_DRIVE(ALL1)
#define PADS_BANK0_GPIO36_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO36_PUE_MASK PADS_BANK0_GPIO36_PUE(ALL1)
#define PADS_BANK0_GPIO36_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO36_PDE_MASK PADS_BANK0_GPIO36_PDE(ALL1)
#define PADS_BANK0_GPIO36_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO36_SCHMITT_MASK PADS_BANK0_GPIO36_SCHMITT(ALL1)
#define PADS_BANK0_GPIO36_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO36_SLEWFAST_MASK PADS_BANK0_GPIO36_SLEWFAST(ALL1)

/*GPIO37 Register macros*/

#define PADS_BANK0_GPIO37_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO37_ISO_MASK PADS_BANK0_GPIO37_ISO(ALL1)
#define PADS_BANK0_GPIO37_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO37_OD_MASK PADS_BANK0_GPIO37_OD(ALL1)
#define PADS_BANK0_GPIO37_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO37_IE_MASK PADS_BANK0_GPIO37_IE(ALL1)
#define PADS_BANK0_GPIO37_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO37_DRIVE_MASK PADS_BANK0_GPIO37_DRIVE(ALL1)
#define PADS_BANK0_GPIO37_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO37_PUE_MASK PADS_BANK0_GPIO37_PUE(ALL1)
#define PADS_BANK0_GPIO37_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO37_PDE_MASK PADS_BANK0_GPIO37_PDE(ALL1)
#define PADS_BANK0_GPIO37_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO37_SCHMITT_MASK PADS_BANK0_GPIO37_SCHMITT(ALL1)
#define PADS_BANK0_GPIO37_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO37_SLEWFAST_MASK PADS_BANK0_GPIO37_SLEWFAST(ALL1)

/*GPIO38 Register macros*/

#define PADS_BANK0_GPIO38_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO38_ISO_MASK PADS_BANK0_GPIO38_ISO(ALL1)
#define PADS_BANK0_GPIO38_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO38_OD_MASK PADS_BANK0_GPIO38_OD(ALL1)
#define PADS_BANK0_GPIO38_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO38_IE_MASK PADS_BANK0_GPIO38_IE(ALL1)
#define PADS_BANK0_GPIO38_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO38_DRIVE_MASK PADS_BANK0_GPIO38_DRIVE(ALL1)
#define PADS_BANK0_GPIO38_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO38_PUE_MASK PADS_BANK0_GPIO38_PUE(ALL1)
#define PADS_BANK0_GPIO38_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO38_PDE_MASK PADS_BANK0_GPIO38_PDE(ALL1)
#define PADS_BANK0_GPIO38_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO38_SCHMITT_MASK PADS_BANK0_GPIO38_SCHMITT(ALL1)
#define PADS_BANK0_GPIO38_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO38_SLEWFAST_MASK PADS_BANK0_GPIO38_SLEWFAST(ALL1)

/*GPIO39 Register macros*/

#define PADS_BANK0_GPIO39_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO39_ISO_MASK PADS_BANK0_GPIO39_ISO(ALL1)
#define PADS_BANK0_GPIO39_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO39_OD_MASK PADS_BANK0_GPIO39_OD(ALL1)
#define PADS_BANK0_GPIO39_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO39_IE_MASK PADS_BANK0_GPIO39_IE(ALL1)
#define PADS_BANK0_GPIO39_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO39_DRIVE_MASK PADS_BANK0_GPIO39_DRIVE(ALL1)
#define PADS_BANK0_GPIO39_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO39_PUE_MASK PADS_BANK0_GPIO39_PUE(ALL1)
#define PADS_BANK0_GPIO39_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO39_PDE_MASK PADS_BANK0_GPIO39_PDE(ALL1)
#define PADS_BANK0_GPIO39_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO39_SCHMITT_MASK PADS_BANK0_GPIO39_SCHMITT(ALL1)
#define PADS_BANK0_GPIO39_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO39_SLEWFAST_MASK PADS_BANK0_GPIO39_SLEWFAST(ALL1)

/*GPIO40 Register macros*/

#define PADS_BANK0_GPIO40_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO40_ISO_MASK PADS_BANK0_GPIO40_ISO(ALL1)
#define PADS_BANK0_GPIO40_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO40_OD_MASK PADS_BANK0_GPIO40_OD(ALL1)
#define PADS_BANK0_GPIO40_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO40_IE_MASK PADS_BANK0_GPIO40_IE(ALL1)
#define PADS_BANK0_GPIO40_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO40_DRIVE_MASK PADS_BANK0_GPIO40_DRIVE(ALL1)
#define PADS_BANK0_GPIO40_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO40_PUE_MASK PADS_BANK0_GPIO40_PUE(ALL1)
#define PADS_BANK0_GPIO40_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO40_PDE_MASK PADS_BANK0_GPIO40_PDE(ALL1)
#define PADS_BANK0_GPIO40_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO40_SCHMITT_MASK PADS_BANK0_GPIO40_SCHMITT(ALL1)
#define PADS_BANK0_GPIO40_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO40_SLEWFAST_MASK PADS_BANK0_GPIO40_SLEWFAST(ALL1)

/*GPIO41 Register macros*/

#define PADS_BANK0_GPIO41_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO41_ISO_MASK PADS_BANK0_GPIO41_ISO(ALL1)
#define PADS_BANK0_GPIO41_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO41_OD_MASK PADS_BANK0_GPIO41_OD(ALL1)
#define PADS_BANK0_GPIO41_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO41_IE_MASK PADS_BANK0_GPIO41_IE(ALL1)
#define PADS_BANK0_GPIO41_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO41_DRIVE_MASK PADS_BANK0_GPIO41_DRIVE(ALL1)
#define PADS_BANK0_GPIO41_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO41_PUE_MASK PADS_BANK0_GPIO41_PUE(ALL1)
#define PADS_BANK0_GPIO41_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO41_PDE_MASK PADS_BANK0_GPIO41_PDE(ALL1)
#define PADS_BANK0_GPIO41_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO41_SCHMITT_MASK PADS_BANK0_GPIO41_SCHMITT(ALL1)
#define PADS_BANK0_GPIO41_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO41_SLEWFAST_MASK PADS_BANK0_GPIO41_SLEWFAST(ALL1)

/*GPIO42 Register macros*/

#define PADS_BANK0_GPIO42_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO42_ISO_MASK PADS_BANK0_GPIO42_ISO(ALL1)
#define PADS_BANK0_GPIO42_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO42_OD_MASK PADS_BANK0_GPIO42_OD(ALL1)
#define PADS_BANK0_GPIO42_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO42_IE_MASK PADS_BANK0_GPIO42_IE(ALL1)
#define PADS_BANK0_GPIO42_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO42_DRIVE_MASK PADS_BANK0_GPIO42_DRIVE(ALL1)
#define PADS_BANK0_GPIO42_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO42_PUE_MASK PADS_BANK0_GPIO42_PUE(ALL1)
#define PADS_BANK0_GPIO42_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO42_PDE_MASK PADS_BANK0_GPIO42_PDE(ALL1)
#define PADS_BANK0_GPIO42_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO42_SCHMITT_MASK PADS_BANK0_GPIO42_SCHMITT(ALL1)
#define PADS_BANK0_GPIO42_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO42_SLEWFAST_MASK PADS_BANK0_GPIO42_SLEWFAST(ALL1)

/*GPIO43 Register macros*/

#define PADS_BANK0_GPIO43_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO43_ISO_MASK PADS_BANK0_GPIO43_ISO(ALL1)
#define PADS_BANK0_GPIO43_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO43_OD_MASK PADS_BANK0_GPIO43_OD(ALL1)
#define PADS_BANK0_GPIO43_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO43_IE_MASK PADS_BANK0_GPIO43_IE(ALL1)
#define PADS_BANK0_GPIO43_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO43_DRIVE_MASK PADS_BANK0_GPIO43_DRIVE(ALL1)
#define PADS_BANK0_GPIO43_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO43_PUE_MASK PADS_BANK0_GPIO43_PUE(ALL1)
#define PADS_BANK0_GPIO43_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO43_PDE_MASK PADS_BANK0_GPIO43_PDE(ALL1)
#define PADS_BANK0_GPIO43_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO43_SCHMITT_MASK PADS_BANK0_GPIO43_SCHMITT(ALL1)
#define PADS_BANK0_GPIO43_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO43_SLEWFAST_MASK PADS_BANK0_GPIO43_SLEWFAST(ALL1)

/*GPIO44 Register macros*/

#define PADS_BANK0_GPIO44_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO44_ISO_MASK PADS_BANK0_GPIO44_ISO(ALL1)
#define PADS_BANK0_GPIO44_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO44_OD_MASK PADS_BANK0_GPIO44_OD(ALL1)
#define PADS_BANK0_GPIO44_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO44_IE_MASK PADS_BANK0_GPIO44_IE(ALL1)
#define PADS_BANK0_GPIO44_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO44_DRIVE_MASK PADS_BANK0_GPIO44_DRIVE(ALL1)
#define PADS_BANK0_GPIO44_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO44_PUE_MASK PADS_BANK0_GPIO44_PUE(ALL1)
#define PADS_BANK0_GPIO44_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO44_PDE_MASK PADS_BANK0_GPIO44_PDE(ALL1)
#define PADS_BANK0_GPIO44_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO44_SCHMITT_MASK PADS_BANK0_GPIO44_SCHMITT(ALL1)
#define PADS_BANK0_GPIO44_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO44_SLEWFAST_MASK PADS_BANK0_GPIO44_SLEWFAST(ALL1)

/*GPIO45 Register macros*/

#define PADS_BANK0_GPIO45_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO45_ISO_MASK PADS_BANK0_GPIO45_ISO(ALL1)
#define PADS_BANK0_GPIO45_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO45_OD_MASK PADS_BANK0_GPIO45_OD(ALL1)
#define PADS_BANK0_GPIO45_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO45_IE_MASK PADS_BANK0_GPIO45_IE(ALL1)
#define PADS_BANK0_GPIO45_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO45_DRIVE_MASK PADS_BANK0_GPIO45_DRIVE(ALL1)
#define PADS_BANK0_GPIO45_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO45_PUE_MASK PADS_BANK0_GPIO45_PUE(ALL1)
#define PADS_BANK0_GPIO45_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO45_PDE_MASK PADS_BANK0_GPIO45_PDE(ALL1)
#define PADS_BANK0_GPIO45_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO45_SCHMITT_MASK PADS_BANK0_GPIO45_SCHMITT(ALL1)
#define PADS_BANK0_GPIO45_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO45_SLEWFAST_MASK PADS_BANK0_GPIO45_SLEWFAST(ALL1)

/*GPIO46 Register macros*/

#define PADS_BANK0_GPIO46_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO46_ISO_MASK PADS_BANK0_GPIO46_ISO(ALL1)
#define PADS_BANK0_GPIO46_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO46_OD_MASK PADS_BANK0_GPIO46_OD(ALL1)
#define PADS_BANK0_GPIO46_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO46_IE_MASK PADS_BANK0_GPIO46_IE(ALL1)
#define PADS_BANK0_GPIO46_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO46_DRIVE_MASK PADS_BANK0_GPIO46_DRIVE(ALL1)
#define PADS_BANK0_GPIO46_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO46_PUE_MASK PADS_BANK0_GPIO46_PUE(ALL1)
#define PADS_BANK0_GPIO46_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO46_PDE_MASK PADS_BANK0_GPIO46_PDE(ALL1)
#define PADS_BANK0_GPIO46_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO46_SCHMITT_MASK PADS_BANK0_GPIO46_SCHMITT(ALL1)
#define PADS_BANK0_GPIO46_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO46_SLEWFAST_MASK PADS_BANK0_GPIO46_SLEWFAST(ALL1)

/*GPIO47 Register macros*/

#define PADS_BANK0_GPIO47_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_GPIO47_ISO_MASK PADS_BANK0_GPIO47_ISO(ALL1)
#define PADS_BANK0_GPIO47_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_GPIO47_OD_MASK PADS_BANK0_GPIO47_OD(ALL1)
#define PADS_BANK0_GPIO47_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_GPIO47_IE_MASK PADS_BANK0_GPIO47_IE(ALL1)
#define PADS_BANK0_GPIO47_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_GPIO47_DRIVE_MASK PADS_BANK0_GPIO47_DRIVE(ALL1)
#define PADS_BANK0_GPIO47_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_GPIO47_PUE_MASK PADS_BANK0_GPIO47_PUE(ALL1)
#define PADS_BANK0_GPIO47_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_GPIO47_PDE_MASK PADS_BANK0_GPIO47_PDE(ALL1)
#define PADS_BANK0_GPIO47_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_GPIO47_SCHMITT_MASK PADS_BANK0_GPIO47_SCHMITT(ALL1)
#define PADS_BANK0_GPIO47_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_GPIO47_SLEWFAST_MASK PADS_BANK0_GPIO47_SLEWFAST(ALL1)

/*SWCLK Register macros*/

#define PADS_BANK0_SWCLK_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_SWCLK_ISO_MASK PADS_BANK0_SWCLK_ISO(ALL1)
#define PADS_BANK0_SWCLK_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_SWCLK_OD_MASK PADS_BANK0_SWCLK_OD(ALL1)
#define PADS_BANK0_SWCLK_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_SWCLK_IE_MASK PADS_BANK0_SWCLK_IE(ALL1)
#define PADS_BANK0_SWCLK_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_SWCLK_DRIVE_MASK PADS_BANK0_SWCLK_DRIVE(ALL1)
#define PADS_BANK0_SWCLK_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_SWCLK_PUE_MASK PADS_BANK0_SWCLK_PUE(ALL1)
#define PADS_BANK0_SWCLK_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_SWCLK_PDE_MASK PADS_BANK0_SWCLK_PDE(ALL1)
#define PADS_BANK0_SWCLK_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_SWCLK_SCHMITT_MASK PADS_BANK0_SWCLK_SCHMITT(ALL1)
#define PADS_BANK0_SWCLK_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_SWCLK_SLEWFAST_MASK PADS_BANK0_SWCLK_SLEWFAST(ALL1)

/*SWD Register macros*/

#define PADS_BANK0_SWD_ISO(v) (((v)&0x1)<<8)
#define PADS_BANK0_SWD_ISO_MASK PADS_BANK0_SWD_ISO(ALL1)
#define PADS_BANK0_SWD_OD(v) (((v)&0x1)<<7)
#define PADS_BANK0_SWD_OD_MASK PADS_BANK0_SWD_OD(ALL1)
#define PADS_BANK0_SWD_IE(v) (((v)&0x1)<<6)
#define PADS_BANK0_SWD_IE_MASK PADS_BANK0_SWD_IE(ALL1)
#define PADS_BANK0_SWD_DRIVE(v) (((v)&0x3)<<4)
#define PADS_BANK0_SWD_DRIVE_MASK PADS_BANK0_SWD_DRIVE(ALL1)
#define PADS_BANK0_SWD_PUE(v) (((v)&0x1)<<3)
#define PADS_BANK0_SWD_PUE_MASK PADS_BANK0_SWD_PUE(ALL1)
#define PADS_BANK0_SWD_PDE(v) (((v)&0x1)<<2)
#define PADS_BANK0_SWD_PDE_MASK PADS_BANK0_SWD_PDE(ALL1)
#define PADS_BANK0_SWD_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_BANK0_SWD_SCHMITT_MASK PADS_BANK0_SWD_SCHMITT(ALL1)
#define PADS_BANK0_SWD_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_BANK0_SWD_SLEWFAST_MASK PADS_BANK0_SWD_SLEWFAST(ALL1)

#endif

