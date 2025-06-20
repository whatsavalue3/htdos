
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

#ifndef RP2350_XOSC_H
#define RP2350_XOSC_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t status;
		uint32_t dormant;
		uint32_t startup;
		uint32_t count;
		uint32_t RSVD0[1019];
		uint32_t ctrl_xor;
		uint32_t status_xor;
		uint32_t dormant_xor;
		uint32_t startup_xor;
		uint32_t count_xor;
		uint32_t RSVDxor_0[1019];
		uint32_t ctrl_set;
		uint32_t status_set;
		uint32_t dormant_set;
		uint32_t startup_set;
		uint32_t count_set;
		uint32_t RSVDset_0[1019];
		uint32_t ctrl_clr;
		uint32_t status_clr;
		uint32_t dormant_clr;
		uint32_t startup_clr;
		uint32_t count_clr;
		uint32_t RSVDclr_0[1019];
} XOSC_REG_BLOCKS;


/*IO Registers as struct*/

#define xosc (*(XOSC_REG_BLOCKS volatile *)0x40048000)


/*IO Registers AS MACROS*/

#define XOSC_CTRL (*(volatile uint32_t *)0x40048000)
#define XOSC_STATUS (*(volatile uint32_t *)0x40048004)
#define XOSC_DORMANT (*(volatile uint32_t *)0x40048008)
#define XOSC_STARTUP (*(volatile uint32_t *)0x4004800c)
#define XOSC_COUNT (*(volatile uint32_t *)0x40048010)
#define XOSC_CTRL_XOR (*(volatile uint32_t *)0x40049000)
#define XOSC_STATUS_XOR (*(volatile uint32_t *)0x40049004)
#define XOSC_DORMANT_XOR (*(volatile uint32_t *)0x40049008)
#define XOSC_STARTUP_XOR (*(volatile uint32_t *)0x4004900c)
#define XOSC_COUNT_XOR (*(volatile uint32_t *)0x40049010)
#define XOSC_CTRL_SET (*(volatile uint32_t *)0x4004a000)
#define XOSC_STATUS_SET (*(volatile uint32_t *)0x4004a004)
#define XOSC_DORMANT_SET (*(volatile uint32_t *)0x4004a008)
#define XOSC_STARTUP_SET (*(volatile uint32_t *)0x4004a00c)
#define XOSC_COUNT_SET (*(volatile uint32_t *)0x4004a010)
#define XOSC_CTRL_CLR (*(volatile uint32_t *)0x4004b000)
#define XOSC_STATUS_CLR (*(volatile uint32_t *)0x4004b004)
#define XOSC_DORMANT_CLR (*(volatile uint32_t *)0x4004b008)
#define XOSC_STARTUP_CLR (*(volatile uint32_t *)0x4004b00c)
#define XOSC_COUNT_CLR (*(volatile uint32_t *)0x4004b010)

/*CTRL Register macros*/

#define XOSC_CTRL_ENABLE(v) (((v)&0xfff)<<12)
#define XOSC_CTRL_ENABLE_MASK XOSC_CTRL_ENABLE(ALL1)
#define XOSC_CTRL_FREQ_RANGE(v) (((v)&0xfff)<<0)
#define XOSC_CTRL_FREQ_RANGE_MASK XOSC_CTRL_FREQ_RANGE(ALL1)

/*STATUS Register macros*/

#define XOSC_STATUS_STABLE(v) (((v)&0x1)<<31)
#define XOSC_STATUS_STABLE_MASK XOSC_STATUS_STABLE(ALL1)
#define XOSC_STATUS_BADWRITE(v) (((v)&0x1)<<24)
#define XOSC_STATUS_BADWRITE_MASK XOSC_STATUS_BADWRITE(ALL1)
#define XOSC_STATUS_ENABLED(v) (((v)&0x1)<<12)
#define XOSC_STATUS_ENABLED_MASK XOSC_STATUS_ENABLED(ALL1)
#define XOSC_STATUS_FREQ_RANGE(v) (((v)&0x3)<<0)
#define XOSC_STATUS_FREQ_RANGE_MASK XOSC_STATUS_FREQ_RANGE(ALL1)

/*DORMANT Register macros*/


/*STARTUP Register macros*/

#define XOSC_STARTUP_X4(v) (((v)&0x1)<<20)
#define XOSC_STARTUP_X4_MASK XOSC_STARTUP_X4(ALL1)
#define XOSC_STARTUP_DELAY(v) (((v)&0x3fff)<<0)
#define XOSC_STARTUP_DELAY_MASK XOSC_STARTUP_DELAY(ALL1)

/*COUNT Register macros*/


#endif

