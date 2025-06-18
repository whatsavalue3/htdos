
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

#ifndef RP2350_PSM_H
#define RP2350_PSM_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t frce_on;
		uint32_t frce_off;
		uint32_t wdsel;
		uint32_t done;
		uint32_t RSVD0[1020];
		uint32_t frce_on_xor;
		uint32_t frce_off_xor;
		uint32_t wdsel_xor;
		uint32_t done_xor;
		uint32_t RSVDxor_0[1020];
		uint32_t frce_on_set;
		uint32_t frce_off_set;
		uint32_t wdsel_set;
		uint32_t done_set;
		uint32_t RSVDset_0[1020];
		uint32_t frce_on_clr;
		uint32_t frce_off_clr;
		uint32_t wdsel_clr;
		uint32_t done_clr;
		uint32_t RSVDclr_0[1020];
} PSM_REG_BLOCKS;


/*IO Registers as struct*/

#define psm (*(PSM_REG_BLOCKS volatile *)0x40018000)


/*IO Registers AS MACROS*/

#define PSM_FRCE_ON (*(volatile uint32_t *)0x40018000)
#define PSM_FRCE_OFF (*(volatile uint32_t *)0x40018004)
#define PSM_WDSEL (*(volatile uint32_t *)0x40018008)
#define PSM_DONE (*(volatile uint32_t *)0x4001800c)
#define PSM_FRCE_ON_XOR (*(volatile uint32_t *)0x40019000)
#define PSM_FRCE_OFF_XOR (*(volatile uint32_t *)0x40019004)
#define PSM_WDSEL_XOR (*(volatile uint32_t *)0x40019008)
#define PSM_DONE_XOR (*(volatile uint32_t *)0x4001900c)
#define PSM_FRCE_ON_SET (*(volatile uint32_t *)0x4001a000)
#define PSM_FRCE_OFF_SET (*(volatile uint32_t *)0x4001a004)
#define PSM_WDSEL_SET (*(volatile uint32_t *)0x4001a008)
#define PSM_DONE_SET (*(volatile uint32_t *)0x4001a00c)
#define PSM_FRCE_ON_CLR (*(volatile uint32_t *)0x4001b000)
#define PSM_FRCE_OFF_CLR (*(volatile uint32_t *)0x4001b004)
#define PSM_WDSEL_CLR (*(volatile uint32_t *)0x4001b008)
#define PSM_DONE_CLR (*(volatile uint32_t *)0x4001b00c)

/*FRCE_ON Register macros*/

#define PSM_FRCE_ON_PROC1(v) (((v)&0x1)<<24)
#define PSM_FRCE_ON_PROC1_MASK PSM_FRCE_ON_PROC1(ALL1)
#define PSM_FRCE_ON_PROC0(v) (((v)&0x1)<<23)
#define PSM_FRCE_ON_PROC0_MASK PSM_FRCE_ON_PROC0(ALL1)
#define PSM_FRCE_ON_ACCESSCTRL(v) (((v)&0x1)<<22)
#define PSM_FRCE_ON_ACCESSCTRL_MASK PSM_FRCE_ON_ACCESSCTRL(ALL1)
#define PSM_FRCE_ON_SIO(v) (((v)&0x1)<<21)
#define PSM_FRCE_ON_SIO_MASK PSM_FRCE_ON_SIO(ALL1)
#define PSM_FRCE_ON_XIP(v) (((v)&0x1)<<20)
#define PSM_FRCE_ON_XIP_MASK PSM_FRCE_ON_XIP(ALL1)
#define PSM_FRCE_ON_SRAM9(v) (((v)&0x1)<<19)
#define PSM_FRCE_ON_SRAM9_MASK PSM_FRCE_ON_SRAM9(ALL1)
#define PSM_FRCE_ON_SRAM8(v) (((v)&0x1)<<18)
#define PSM_FRCE_ON_SRAM8_MASK PSM_FRCE_ON_SRAM8(ALL1)
#define PSM_FRCE_ON_SRAM7(v) (((v)&0x1)<<17)
#define PSM_FRCE_ON_SRAM7_MASK PSM_FRCE_ON_SRAM7(ALL1)
#define PSM_FRCE_ON_SRAM6(v) (((v)&0x1)<<16)
#define PSM_FRCE_ON_SRAM6_MASK PSM_FRCE_ON_SRAM6(ALL1)
#define PSM_FRCE_ON_SRAM5(v) (((v)&0x1)<<15)
#define PSM_FRCE_ON_SRAM5_MASK PSM_FRCE_ON_SRAM5(ALL1)
#define PSM_FRCE_ON_SRAM4(v) (((v)&0x1)<<14)
#define PSM_FRCE_ON_SRAM4_MASK PSM_FRCE_ON_SRAM4(ALL1)
#define PSM_FRCE_ON_SRAM3(v) (((v)&0x1)<<13)
#define PSM_FRCE_ON_SRAM3_MASK PSM_FRCE_ON_SRAM3(ALL1)
#define PSM_FRCE_ON_SRAM2(v) (((v)&0x1)<<12)
#define PSM_FRCE_ON_SRAM2_MASK PSM_FRCE_ON_SRAM2(ALL1)
#define PSM_FRCE_ON_SRAM1(v) (((v)&0x1)<<11)
#define PSM_FRCE_ON_SRAM1_MASK PSM_FRCE_ON_SRAM1(ALL1)
#define PSM_FRCE_ON_SRAM0(v) (((v)&0x1)<<10)
#define PSM_FRCE_ON_SRAM0_MASK PSM_FRCE_ON_SRAM0(ALL1)
#define PSM_FRCE_ON_BOOTRAM(v) (((v)&0x1)<<9)
#define PSM_FRCE_ON_BOOTRAM_MASK PSM_FRCE_ON_BOOTRAM(ALL1)
#define PSM_FRCE_ON_ROM(v) (((v)&0x1)<<8)
#define PSM_FRCE_ON_ROM_MASK PSM_FRCE_ON_ROM(ALL1)
#define PSM_FRCE_ON_BUSFABRIC(v) (((v)&0x1)<<7)
#define PSM_FRCE_ON_BUSFABRIC_MASK PSM_FRCE_ON_BUSFABRIC(ALL1)
#define PSM_FRCE_ON_PSM_READY(v) (((v)&0x1)<<6)
#define PSM_FRCE_ON_PSM_READY_MASK PSM_FRCE_ON_PSM_READY(ALL1)
#define PSM_FRCE_ON_CLOCKS(v) (((v)&0x1)<<5)
#define PSM_FRCE_ON_CLOCKS_MASK PSM_FRCE_ON_CLOCKS(ALL1)
#define PSM_FRCE_ON_RESETS(v) (((v)&0x1)<<4)
#define PSM_FRCE_ON_RESETS_MASK PSM_FRCE_ON_RESETS(ALL1)
#define PSM_FRCE_ON_XOSC(v) (((v)&0x1)<<3)
#define PSM_FRCE_ON_XOSC_MASK PSM_FRCE_ON_XOSC(ALL1)
#define PSM_FRCE_ON_ROSC(v) (((v)&0x1)<<2)
#define PSM_FRCE_ON_ROSC_MASK PSM_FRCE_ON_ROSC(ALL1)
#define PSM_FRCE_ON_OTP(v) (((v)&0x1)<<1)
#define PSM_FRCE_ON_OTP_MASK PSM_FRCE_ON_OTP(ALL1)
#define PSM_FRCE_ON_PROC_COLD(v) (((v)&0x1)<<0)
#define PSM_FRCE_ON_PROC_COLD_MASK PSM_FRCE_ON_PROC_COLD(ALL1)

/*FRCE_OFF Register macros*/

#define PSM_FRCE_OFF_PROC1(v) (((v)&0x1)<<24)
#define PSM_FRCE_OFF_PROC1_MASK PSM_FRCE_OFF_PROC1(ALL1)
#define PSM_FRCE_OFF_PROC0(v) (((v)&0x1)<<23)
#define PSM_FRCE_OFF_PROC0_MASK PSM_FRCE_OFF_PROC0(ALL1)
#define PSM_FRCE_OFF_ACCESSCTRL(v) (((v)&0x1)<<22)
#define PSM_FRCE_OFF_ACCESSCTRL_MASK PSM_FRCE_OFF_ACCESSCTRL(ALL1)
#define PSM_FRCE_OFF_SIO(v) (((v)&0x1)<<21)
#define PSM_FRCE_OFF_SIO_MASK PSM_FRCE_OFF_SIO(ALL1)
#define PSM_FRCE_OFF_XIP(v) (((v)&0x1)<<20)
#define PSM_FRCE_OFF_XIP_MASK PSM_FRCE_OFF_XIP(ALL1)
#define PSM_FRCE_OFF_SRAM9(v) (((v)&0x1)<<19)
#define PSM_FRCE_OFF_SRAM9_MASK PSM_FRCE_OFF_SRAM9(ALL1)
#define PSM_FRCE_OFF_SRAM8(v) (((v)&0x1)<<18)
#define PSM_FRCE_OFF_SRAM8_MASK PSM_FRCE_OFF_SRAM8(ALL1)
#define PSM_FRCE_OFF_SRAM7(v) (((v)&0x1)<<17)
#define PSM_FRCE_OFF_SRAM7_MASK PSM_FRCE_OFF_SRAM7(ALL1)
#define PSM_FRCE_OFF_SRAM6(v) (((v)&0x1)<<16)
#define PSM_FRCE_OFF_SRAM6_MASK PSM_FRCE_OFF_SRAM6(ALL1)
#define PSM_FRCE_OFF_SRAM5(v) (((v)&0x1)<<15)
#define PSM_FRCE_OFF_SRAM5_MASK PSM_FRCE_OFF_SRAM5(ALL1)
#define PSM_FRCE_OFF_SRAM4(v) (((v)&0x1)<<14)
#define PSM_FRCE_OFF_SRAM4_MASK PSM_FRCE_OFF_SRAM4(ALL1)
#define PSM_FRCE_OFF_SRAM3(v) (((v)&0x1)<<13)
#define PSM_FRCE_OFF_SRAM3_MASK PSM_FRCE_OFF_SRAM3(ALL1)
#define PSM_FRCE_OFF_SRAM2(v) (((v)&0x1)<<12)
#define PSM_FRCE_OFF_SRAM2_MASK PSM_FRCE_OFF_SRAM2(ALL1)
#define PSM_FRCE_OFF_SRAM1(v) (((v)&0x1)<<11)
#define PSM_FRCE_OFF_SRAM1_MASK PSM_FRCE_OFF_SRAM1(ALL1)
#define PSM_FRCE_OFF_SRAM0(v) (((v)&0x1)<<10)
#define PSM_FRCE_OFF_SRAM0_MASK PSM_FRCE_OFF_SRAM0(ALL1)
#define PSM_FRCE_OFF_BOOTRAM(v) (((v)&0x1)<<9)
#define PSM_FRCE_OFF_BOOTRAM_MASK PSM_FRCE_OFF_BOOTRAM(ALL1)
#define PSM_FRCE_OFF_ROM(v) (((v)&0x1)<<8)
#define PSM_FRCE_OFF_ROM_MASK PSM_FRCE_OFF_ROM(ALL1)
#define PSM_FRCE_OFF_BUSFABRIC(v) (((v)&0x1)<<7)
#define PSM_FRCE_OFF_BUSFABRIC_MASK PSM_FRCE_OFF_BUSFABRIC(ALL1)
#define PSM_FRCE_OFF_PSM_READY(v) (((v)&0x1)<<6)
#define PSM_FRCE_OFF_PSM_READY_MASK PSM_FRCE_OFF_PSM_READY(ALL1)
#define PSM_FRCE_OFF_CLOCKS(v) (((v)&0x1)<<5)
#define PSM_FRCE_OFF_CLOCKS_MASK PSM_FRCE_OFF_CLOCKS(ALL1)
#define PSM_FRCE_OFF_RESETS(v) (((v)&0x1)<<4)
#define PSM_FRCE_OFF_RESETS_MASK PSM_FRCE_OFF_RESETS(ALL1)
#define PSM_FRCE_OFF_XOSC(v) (((v)&0x1)<<3)
#define PSM_FRCE_OFF_XOSC_MASK PSM_FRCE_OFF_XOSC(ALL1)
#define PSM_FRCE_OFF_ROSC(v) (((v)&0x1)<<2)
#define PSM_FRCE_OFF_ROSC_MASK PSM_FRCE_OFF_ROSC(ALL1)
#define PSM_FRCE_OFF_OTP(v) (((v)&0x1)<<1)
#define PSM_FRCE_OFF_OTP_MASK PSM_FRCE_OFF_OTP(ALL1)
#define PSM_FRCE_OFF_PROC_COLD(v) (((v)&0x1)<<0)
#define PSM_FRCE_OFF_PROC_COLD_MASK PSM_FRCE_OFF_PROC_COLD(ALL1)

/*WDSEL Register macros*/
#define PSM_WDSEL_ALL(v) (((v)&0xFFFFFF)<<0)
#define PSM_WDSEL_ALL_MASK PSM_WDSEL_ALL(ALL1) 
#define PSM_WDSEL_PROC1(v) (((v)&0x1)<<24)
#define PSM_WDSEL_PROC1_MASK PSM_WDSEL_PROC1(ALL1)
#define PSM_WDSEL_PROC0(v) (((v)&0x1)<<23)
#define PSM_WDSEL_PROC0_MASK PSM_WDSEL_PROC0(ALL1)
#define PSM_WDSEL_ACCESSCTRL(v) (((v)&0x1)<<22)
#define PSM_WDSEL_ACCESSCTRL_MASK PSM_WDSEL_ACCESSCTRL(ALL1)
#define PSM_WDSEL_SIO(v) (((v)&0x1)<<21)
#define PSM_WDSEL_SIO_MASK PSM_WDSEL_SIO(ALL1)
#define PSM_WDSEL_XIP(v) (((v)&0x1)<<20)
#define PSM_WDSEL_XIP_MASK PSM_WDSEL_XIP(ALL1)
#define PSM_WDSEL_SRAM9(v) (((v)&0x1)<<19)
#define PSM_WDSEL_SRAM9_MASK PSM_WDSEL_SRAM9(ALL1)
#define PSM_WDSEL_SRAM8(v) (((v)&0x1)<<18)
#define PSM_WDSEL_SRAM8_MASK PSM_WDSEL_SRAM8(ALL1)
#define PSM_WDSEL_SRAM7(v) (((v)&0x1)<<17)
#define PSM_WDSEL_SRAM7_MASK PSM_WDSEL_SRAM7(ALL1)
#define PSM_WDSEL_SRAM6(v) (((v)&0x1)<<16)
#define PSM_WDSEL_SRAM6_MASK PSM_WDSEL_SRAM6(ALL1)
#define PSM_WDSEL_SRAM5(v) (((v)&0x1)<<15)
#define PSM_WDSEL_SRAM5_MASK PSM_WDSEL_SRAM5(ALL1)
#define PSM_WDSEL_SRAM4(v) (((v)&0x1)<<14)
#define PSM_WDSEL_SRAM4_MASK PSM_WDSEL_SRAM4(ALL1)
#define PSM_WDSEL_SRAM3(v) (((v)&0x1)<<13)
#define PSM_WDSEL_SRAM3_MASK PSM_WDSEL_SRAM3(ALL1)
#define PSM_WDSEL_SRAM2(v) (((v)&0x1)<<12)
#define PSM_WDSEL_SRAM2_MASK PSM_WDSEL_SRAM2(ALL1)
#define PSM_WDSEL_SRAM1(v) (((v)&0x1)<<11)
#define PSM_WDSEL_SRAM1_MASK PSM_WDSEL_SRAM1(ALL1)
#define PSM_WDSEL_SRAM0(v) (((v)&0x1)<<10)
#define PSM_WDSEL_SRAM0_MASK PSM_WDSEL_SRAM0(ALL1)
#define PSM_WDSEL_BOOTRAM(v) (((v)&0x1)<<9)
#define PSM_WDSEL_BOOTRAM_MASK PSM_WDSEL_BOOTRAM(ALL1)
#define PSM_WDSEL_ROM(v) (((v)&0x1)<<8)
#define PSM_WDSEL_ROM_MASK PSM_WDSEL_ROM(ALL1)
#define PSM_WDSEL_BUSFABRIC(v) (((v)&0x1)<<7)
#define PSM_WDSEL_BUSFABRIC_MASK PSM_WDSEL_BUSFABRIC(ALL1)
#define PSM_WDSEL_PSM_READY(v) (((v)&0x1)<<6)
#define PSM_WDSEL_PSM_READY_MASK PSM_WDSEL_PSM_READY(ALL1)
#define PSM_WDSEL_CLOCKS(v) (((v)&0x1)<<5)
#define PSM_WDSEL_CLOCKS_MASK PSM_WDSEL_CLOCKS(ALL1)
#define PSM_WDSEL_RESETS(v) (((v)&0x1)<<4)
#define PSM_WDSEL_RESETS_MASK PSM_WDSEL_RESETS(ALL1)
#define PSM_WDSEL_XOSC(v) (((v)&0x1)<<3)
#define PSM_WDSEL_XOSC_MASK PSM_WDSEL_XOSC(ALL1)
#define PSM_WDSEL_ROSC(v) (((v)&0x1)<<2)
#define PSM_WDSEL_ROSC_MASK PSM_WDSEL_ROSC(ALL1)
#define PSM_WDSEL_OTP(v) (((v)&0x1)<<1)
#define PSM_WDSEL_OTP_MASK PSM_WDSEL_OTP(ALL1)
#define PSM_WDSEL_PROC_COLD(v) (((v)&0x1)<<0)
#define PSM_WDSEL_PROC_COLD_MASK PSM_WDSEL_PROC_COLD(ALL1)

/*DONE Register macros*/

#define PSM_DONE_PROC1(v) (((v)&0x1)<<24)
#define PSM_DONE_PROC1_MASK PSM_DONE_PROC1(ALL1)
#define PSM_DONE_PROC0(v) (((v)&0x1)<<23)
#define PSM_DONE_PROC0_MASK PSM_DONE_PROC0(ALL1)
#define PSM_DONE_ACCESSCTRL(v) (((v)&0x1)<<22)
#define PSM_DONE_ACCESSCTRL_MASK PSM_DONE_ACCESSCTRL(ALL1)
#define PSM_DONE_SIO(v) (((v)&0x1)<<21)
#define PSM_DONE_SIO_MASK PSM_DONE_SIO(ALL1)
#define PSM_DONE_XIP(v) (((v)&0x1)<<20)
#define PSM_DONE_XIP_MASK PSM_DONE_XIP(ALL1)
#define PSM_DONE_SRAM9(v) (((v)&0x1)<<19)
#define PSM_DONE_SRAM9_MASK PSM_DONE_SRAM9(ALL1)
#define PSM_DONE_SRAM8(v) (((v)&0x1)<<18)
#define PSM_DONE_SRAM8_MASK PSM_DONE_SRAM8(ALL1)
#define PSM_DONE_SRAM7(v) (((v)&0x1)<<17)
#define PSM_DONE_SRAM7_MASK PSM_DONE_SRAM7(ALL1)
#define PSM_DONE_SRAM6(v) (((v)&0x1)<<16)
#define PSM_DONE_SRAM6_MASK PSM_DONE_SRAM6(ALL1)
#define PSM_DONE_SRAM5(v) (((v)&0x1)<<15)
#define PSM_DONE_SRAM5_MASK PSM_DONE_SRAM5(ALL1)
#define PSM_DONE_SRAM4(v) (((v)&0x1)<<14)
#define PSM_DONE_SRAM4_MASK PSM_DONE_SRAM4(ALL1)
#define PSM_DONE_SRAM3(v) (((v)&0x1)<<13)
#define PSM_DONE_SRAM3_MASK PSM_DONE_SRAM3(ALL1)
#define PSM_DONE_SRAM2(v) (((v)&0x1)<<12)
#define PSM_DONE_SRAM2_MASK PSM_DONE_SRAM2(ALL1)
#define PSM_DONE_SRAM1(v) (((v)&0x1)<<11)
#define PSM_DONE_SRAM1_MASK PSM_DONE_SRAM1(ALL1)
#define PSM_DONE_SRAM0(v) (((v)&0x1)<<10)
#define PSM_DONE_SRAM0_MASK PSM_DONE_SRAM0(ALL1)
#define PSM_DONE_BOOTRAM(v) (((v)&0x1)<<9)
#define PSM_DONE_BOOTRAM_MASK PSM_DONE_BOOTRAM(ALL1)
#define PSM_DONE_ROM(v) (((v)&0x1)<<8)
#define PSM_DONE_ROM_MASK PSM_DONE_ROM(ALL1)
#define PSM_DONE_BUSFABRIC(v) (((v)&0x1)<<7)
#define PSM_DONE_BUSFABRIC_MASK PSM_DONE_BUSFABRIC(ALL1)
#define PSM_DONE_PSM_READY(v) (((v)&0x1)<<6)
#define PSM_DONE_PSM_READY_MASK PSM_DONE_PSM_READY(ALL1)
#define PSM_DONE_CLOCKS(v) (((v)&0x1)<<5)
#define PSM_DONE_CLOCKS_MASK PSM_DONE_CLOCKS(ALL1)
#define PSM_DONE_RESETS(v) (((v)&0x1)<<4)
#define PSM_DONE_RESETS_MASK PSM_DONE_RESETS(ALL1)
#define PSM_DONE_XOSC(v) (((v)&0x1)<<3)
#define PSM_DONE_XOSC_MASK PSM_DONE_XOSC(ALL1)
#define PSM_DONE_ROSC(v) (((v)&0x1)<<2)
#define PSM_DONE_ROSC_MASK PSM_DONE_ROSC(ALL1)
#define PSM_DONE_OTP(v) (((v)&0x1)<<1)
#define PSM_DONE_OTP_MASK PSM_DONE_OTP(ALL1)
#define PSM_DONE_PROC_COLD(v) (((v)&0x1)<<0)
#define PSM_DONE_PROC_COLD_MASK PSM_DONE_PROC_COLD(ALL1)

#endif

