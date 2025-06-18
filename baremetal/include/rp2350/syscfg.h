
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

#ifndef RP2350_SYSCFG_H
#define RP2350_SYSCFG_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t proc_config;
		uint32_t proc_in_sync_bypass;
		uint32_t proc_in_sync_bypass_hi;
		uint32_t dbgforce;
		uint32_t mempowerdown;
		uint32_t auxctrl;
		uint32_t RSVD0[1018];
		uint32_t proc_config_xor;
		uint32_t proc_in_sync_bypass_xor;
		uint32_t proc_in_sync_bypass_hi_xor;
		uint32_t dbgforce_xor;
		uint32_t mempowerdown_xor;
		uint32_t auxctrl_xor;
		uint32_t RSVDxor_0[1018];
		uint32_t proc_config_set;
		uint32_t proc_in_sync_bypass_set;
		uint32_t proc_in_sync_bypass_hi_set;
		uint32_t dbgforce_set;
		uint32_t mempowerdown_set;
		uint32_t auxctrl_set;
		uint32_t RSVDset_0[1018];
		uint32_t proc_config_clr;
		uint32_t proc_in_sync_bypass_clr;
		uint32_t proc_in_sync_bypass_hi_clr;
		uint32_t dbgforce_clr;
		uint32_t mempowerdown_clr;
		uint32_t auxctrl_clr;
		uint32_t RSVDclr_0[1018];
} SYSCFG_REG_BLOCKS;


/*IO Registers as struct*/

#define syscfg (*(SYSCFG_REG_BLOCKS volatile *)0x40008000)


/*IO Registers AS MACROS*/

#define SYSCFG_PROC_CONFIG (*(volatile uint32_t *)0x40008000)
#define SYSCFG_PROC_IN_SYNC_BYPASS (*(volatile uint32_t *)0x40008004)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI (*(volatile uint32_t *)0x40008008)
#define SYSCFG_DBGFORCE (*(volatile uint32_t *)0x4000800c)
#define SYSCFG_MEMPOWERDOWN (*(volatile uint32_t *)0x40008010)
#define SYSCFG_AUXCTRL (*(volatile uint32_t *)0x40008014)
#define SYSCFG_PROC_CONFIG_XOR (*(volatile uint32_t *)0x40009000)
#define SYSCFG_PROC_IN_SYNC_BYPASS_XOR (*(volatile uint32_t *)0x40009004)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_XOR (*(volatile uint32_t *)0x40009008)
#define SYSCFG_DBGFORCE_XOR (*(volatile uint32_t *)0x4000900c)
#define SYSCFG_MEMPOWERDOWN_XOR (*(volatile uint32_t *)0x40009010)
#define SYSCFG_AUXCTRL_XOR (*(volatile uint32_t *)0x40009014)
#define SYSCFG_PROC_CONFIG_SET (*(volatile uint32_t *)0x4000a000)
#define SYSCFG_PROC_IN_SYNC_BYPASS_SET (*(volatile uint32_t *)0x4000a004)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_SET (*(volatile uint32_t *)0x4000a008)
#define SYSCFG_DBGFORCE_SET (*(volatile uint32_t *)0x4000a00c)
#define SYSCFG_MEMPOWERDOWN_SET (*(volatile uint32_t *)0x4000a010)
#define SYSCFG_AUXCTRL_SET (*(volatile uint32_t *)0x4000a014)
#define SYSCFG_PROC_CONFIG_CLR (*(volatile uint32_t *)0x4000b000)
#define SYSCFG_PROC_IN_SYNC_BYPASS_CLR (*(volatile uint32_t *)0x4000b004)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_CLR (*(volatile uint32_t *)0x4000b008)
#define SYSCFG_DBGFORCE_CLR (*(volatile uint32_t *)0x4000b00c)
#define SYSCFG_MEMPOWERDOWN_CLR (*(volatile uint32_t *)0x4000b010)
#define SYSCFG_AUXCTRL_CLR (*(volatile uint32_t *)0x4000b014)

/*PROC_CONFIG Register macros*/

#define SYSCFG_PROC_CONFIG_PROC1_HALTED(v) (((v)&0x1)<<1)
#define SYSCFG_PROC_CONFIG_PROC1_HALTED_MASK SYSCFG_PROC_CONFIG_PROC1_HALTED(ALL1)
#define SYSCFG_PROC_CONFIG_PROC0_HALTED(v) (((v)&0x1)<<0)
#define SYSCFG_PROC_CONFIG_PROC0_HALTED_MASK SYSCFG_PROC_CONFIG_PROC0_HALTED(ALL1)

/*PROC_IN_SYNC_BYPASS Register macros*/

#define SYSCFG_PROC_IN_SYNC_BYPASS_GPIO(v) (((v)&0xffffffff)<<0)
#define SYSCFG_PROC_IN_SYNC_BYPASS_GPIO_MASK SYSCFG_PROC_IN_SYNC_BYPASS_GPIO(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD(v) (((v)&0xf)<<28)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN(v) (((v)&0x1)<<27)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK(v) (((v)&0x1)<<26)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM(v) (((v)&0x1)<<25)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP(v) (((v)&0x1)<<24)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO(v) (((v)&0xffff)<<0)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO(ALL1)

/*PROC_IN_SYNC_BYPASS_HI Register macros*/

#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD(v) (((v)&0xf)<<28)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN(v) (((v)&0x1)<<27)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK(v) (((v)&0x1)<<26)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM(v) (((v)&0x1)<<25)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP(v) (((v)&0x1)<<24)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP(ALL1)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO(v) (((v)&0xffff)<<0)
#define SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO_MASK SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO(ALL1)

/*DBGFORCE Register macros*/

#define SYSCFG_DBGFORCE_ATTACH(v) (((v)&0x1)<<3)
#define SYSCFG_DBGFORCE_ATTACH_MASK SYSCFG_DBGFORCE_ATTACH(ALL1)
#define SYSCFG_DBGFORCE_SWCLK(v) (((v)&0x1)<<2)
#define SYSCFG_DBGFORCE_SWCLK_MASK SYSCFG_DBGFORCE_SWCLK(ALL1)
#define SYSCFG_DBGFORCE_SWDI(v) (((v)&0x1)<<1)
#define SYSCFG_DBGFORCE_SWDI_MASK SYSCFG_DBGFORCE_SWDI(ALL1)
#define SYSCFG_DBGFORCE_SWDO(v) (((v)&0x1)<<0)
#define SYSCFG_DBGFORCE_SWDO_MASK SYSCFG_DBGFORCE_SWDO(ALL1)

/*MEMPOWERDOWN Register macros*/

#define SYSCFG_MEMPOWERDOWN_BOOTRAM(v) (((v)&0x1)<<12)
#define SYSCFG_MEMPOWERDOWN_BOOTRAM_MASK SYSCFG_MEMPOWERDOWN_BOOTRAM(ALL1)
#define SYSCFG_MEMPOWERDOWN_ROM(v) (((v)&0x1)<<11)
#define SYSCFG_MEMPOWERDOWN_ROM_MASK SYSCFG_MEMPOWERDOWN_ROM(ALL1)
#define SYSCFG_MEMPOWERDOWN_USB(v) (((v)&0x1)<<10)
#define SYSCFG_MEMPOWERDOWN_USB_MASK SYSCFG_MEMPOWERDOWN_USB(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM9(v) (((v)&0x1)<<9)
#define SYSCFG_MEMPOWERDOWN_SRAM9_MASK SYSCFG_MEMPOWERDOWN_SRAM9(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM8(v) (((v)&0x1)<<8)
#define SYSCFG_MEMPOWERDOWN_SRAM8_MASK SYSCFG_MEMPOWERDOWN_SRAM8(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM7(v) (((v)&0x1)<<7)
#define SYSCFG_MEMPOWERDOWN_SRAM7_MASK SYSCFG_MEMPOWERDOWN_SRAM7(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM6(v) (((v)&0x1)<<6)
#define SYSCFG_MEMPOWERDOWN_SRAM6_MASK SYSCFG_MEMPOWERDOWN_SRAM6(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM5(v) (((v)&0x1)<<5)
#define SYSCFG_MEMPOWERDOWN_SRAM5_MASK SYSCFG_MEMPOWERDOWN_SRAM5(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM4(v) (((v)&0x1)<<4)
#define SYSCFG_MEMPOWERDOWN_SRAM4_MASK SYSCFG_MEMPOWERDOWN_SRAM4(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM3(v) (((v)&0x1)<<3)
#define SYSCFG_MEMPOWERDOWN_SRAM3_MASK SYSCFG_MEMPOWERDOWN_SRAM3(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM2(v) (((v)&0x1)<<2)
#define SYSCFG_MEMPOWERDOWN_SRAM2_MASK SYSCFG_MEMPOWERDOWN_SRAM2(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM1(v) (((v)&0x1)<<1)
#define SYSCFG_MEMPOWERDOWN_SRAM1_MASK SYSCFG_MEMPOWERDOWN_SRAM1(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM0(v) (((v)&0x1)<<0)
#define SYSCFG_MEMPOWERDOWN_SRAM0_MASK SYSCFG_MEMPOWERDOWN_SRAM0(ALL1)

/*AUXCTRL Register macros*/


#endif

