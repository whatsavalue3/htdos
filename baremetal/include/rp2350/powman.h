
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

#ifndef RP2350_POWMAN_H
#define RP2350_POWMAN_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t badpasswd;
		uint32_t vreg_ctrl;
		uint32_t vreg_sts;
		uint32_t vreg;
		uint32_t vreg_lp_entry;
		uint32_t vreg_lp_exit;
		uint32_t bod_ctrl;
		uint32_t bod;
		uint32_t bod_lp_entry;
		uint32_t bod_lp_exit;
		uint32_t lposc;
		uint32_t chip_reset;
		uint32_t wdsel;
		uint32_t seq_cfg;
		uint32_t state;
		uint32_t pow_fastdiv;
		uint32_t pow_delay;
		uint32_t ext_ctrl0;
		uint32_t ext_ctrl1;
		uint32_t ext_time_ref;
		uint32_t lposc_freq_khz_int;
		uint32_t lposc_freq_khz_frac;
		uint32_t xosc_freq_khz_int;
		uint32_t xosc_freq_khz_frac;
		uint32_t time_63to48_set;
		uint32_t time_47to32_set;
		uint32_t time_31to16_set;
		uint32_t time_15to0_set;
		uint32_t read_time_upper;
		uint32_t read_time_lower;
		uint32_t alarm_time_63to48;
		uint32_t alarm_time_47to32;
		uint32_t alarm_time_31to16;
		uint32_t alarm_time_15to0;
		uint32_t timer;
		uint32_t pwrup0;
		uint32_t pwrup1;
		uint32_t pwrup2;
		uint32_t pwrup3;
		uint32_t current_pwrup_req;
		uint32_t last_swcore_pwrup;
		uint32_t dbg_pwrcfg;
		uint32_t bootdis;
		uint32_t dbgconfig;
		uint32_t scratch0;
		uint32_t scratch1;
		uint32_t scratch2;
		uint32_t scratch3;
		uint32_t scratch4;
		uint32_t scratch5;
		uint32_t scratch6;
		uint32_t scratch7;
		uint32_t boot0;
		uint32_t boot1;
		uint32_t boot2;
		uint32_t boot3;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[964];
		uint32_t badpasswd_xor;
		uint32_t vreg_ctrl_xor;
		uint32_t vreg_sts_xor;
		uint32_t vreg_xor;
		uint32_t vreg_lp_entry_xor;
		uint32_t vreg_lp_exit_xor;
		uint32_t bod_ctrl_xor;
		uint32_t bod_xor;
		uint32_t bod_lp_entry_xor;
		uint32_t bod_lp_exit_xor;
		uint32_t lposc_xor;
		uint32_t chip_reset_xor;
		uint32_t wdsel_xor;
		uint32_t seq_cfg_xor;
		uint32_t state_xor;
		uint32_t pow_fastdiv_xor;
		uint32_t pow_delay_xor;
		uint32_t ext_ctrl0_xor;
		uint32_t ext_ctrl1_xor;
		uint32_t ext_time_ref_xor;
		uint32_t lposc_freq_khz_int_xor;
		uint32_t lposc_freq_khz_frac_xor;
		uint32_t xosc_freq_khz_int_xor;
		uint32_t xosc_freq_khz_frac_xor;
		uint32_t set_time_63to48_xor;
		uint32_t set_time_47to32_xor;
		uint32_t set_time_31to16_xor;
		uint32_t set_time_15to0_xor;
		uint32_t read_time_upper_xor;
		uint32_t read_time_lower_xor;
		uint32_t alarm_time_63to48_xor;
		uint32_t alarm_time_47to32_xor;
		uint32_t alarm_time_31to16_xor;
		uint32_t alarm_time_15to0_xor;
		uint32_t timer_xor;
		uint32_t pwrup0_xor;
		uint32_t pwrup1_xor;
		uint32_t pwrup2_xor;
		uint32_t pwrup3_xor;
		uint32_t current_pwrup_req_xor;
		uint32_t last_swcore_pwrup_xor;
		uint32_t dbg_pwrcfg_xor;
		uint32_t bootdis_xor;
		uint32_t dbgconfig_xor;
		uint32_t scratch0_xor;
		uint32_t scratch1_xor;
		uint32_t scratch2_xor;
		uint32_t scratch3_xor;
		uint32_t scratch4_xor;
		uint32_t scratch5_xor;
		uint32_t scratch6_xor;
		uint32_t scratch7_xor;
		uint32_t boot0_xor;
		uint32_t boot1_xor;
		uint32_t boot2_xor;
		uint32_t boot3_xor;
		uint32_t intr_xor;
		uint32_t inte_xor;
		uint32_t intf_xor;
		uint32_t ints_xor;
		uint32_t RSVDxor_0[964];
		uint32_t badpasswd_set;
		uint32_t vreg_ctrl_set;
		uint32_t vreg_sts_set;
		uint32_t vreg_set;
		uint32_t vreg_lp_entry_set;
		uint32_t vreg_lp_exit_set;
		uint32_t bod_ctrl_set;
		uint32_t bod_set;
		uint32_t bod_lp_entry_set;
		uint32_t bod_lp_exit_set;
		uint32_t lposc_set;
		uint32_t chip_reset_set;
		uint32_t wdsel_set;
		uint32_t seq_cfg_set;
		uint32_t state_set;
		uint32_t pow_fastdiv_set;
		uint32_t pow_delay_set;
		uint32_t ext_ctrl0_set;
		uint32_t ext_ctrl1_set;
		uint32_t ext_time_ref_set;
		uint32_t lposc_freq_khz_int_set;
		uint32_t lposc_freq_khz_frac_set;
		uint32_t xosc_freq_khz_int_set;
		uint32_t xosc_freq_khz_frac_set;
		uint32_t set_time_63to48_set;
		uint32_t set_time_47to32_set;
		uint32_t set_time_31to16_set;
		uint32_t set_time_15to0_set;
		uint32_t read_time_upper_set;
		uint32_t read_time_lower_set;
		uint32_t alarm_time_63to48_set;
		uint32_t alarm_time_47to32_set;
		uint32_t alarm_time_31to16_set;
		uint32_t alarm_time_15to0_set;
		uint32_t timer_set;
		uint32_t pwrup0_set;
		uint32_t pwrup1_set;
		uint32_t pwrup2_set;
		uint32_t pwrup3_set;
		uint32_t current_pwrup_req_set;
		uint32_t last_swcore_pwrup_set;
		uint32_t dbg_pwrcfg_set;
		uint32_t bootdis_set;
		uint32_t dbgconfig_set;
		uint32_t scratch0_set;
		uint32_t scratch1_set;
		uint32_t scratch2_set;
		uint32_t scratch3_set;
		uint32_t scratch4_set;
		uint32_t scratch5_set;
		uint32_t scratch6_set;
		uint32_t scratch7_set;
		uint32_t boot0_set;
		uint32_t boot1_set;
		uint32_t boot2_set;
		uint32_t boot3_set;
		uint32_t intr_set;
		uint32_t inte_set;
		uint32_t intf_set;
		uint32_t ints_set;
		uint32_t RSVDset_0[964];
		uint32_t badpasswd_clr;
		uint32_t vreg_ctrl_clr;
		uint32_t vreg_sts_clr;
		uint32_t vreg_clr;
		uint32_t vreg_lp_entry_clr;
		uint32_t vreg_lp_exit_clr;
		uint32_t bod_ctrl_clr;
		uint32_t bod_clr;
		uint32_t bod_lp_entry_clr;
		uint32_t bod_lp_exit_clr;
		uint32_t lposc_clr;
		uint32_t chip_reset_clr;
		uint32_t wdsel_clr;
		uint32_t seq_cfg_clr;
		uint32_t state_clr;
		uint32_t pow_fastdiv_clr;
		uint32_t pow_delay_clr;
		uint32_t ext_ctrl0_clr;
		uint32_t ext_ctrl1_clr;
		uint32_t ext_time_ref_clr;
		uint32_t lposc_freq_khz_int_clr;
		uint32_t lposc_freq_khz_frac_clr;
		uint32_t xosc_freq_khz_int_clr;
		uint32_t xosc_freq_khz_frac_clr;
		uint32_t set_time_63to48_clr;
		uint32_t set_time_47to32_clr;
		uint32_t set_time_31to16_clr;
		uint32_t set_time_15to0_clr;
		uint32_t read_time_upper_clr;
		uint32_t read_time_lower_clr;
		uint32_t alarm_time_63to48_clr;
		uint32_t alarm_time_47to32_clr;
		uint32_t alarm_time_31to16_clr;
		uint32_t alarm_time_15to0_clr;
		uint32_t timer_clr;
		uint32_t pwrup0_clr;
		uint32_t pwrup1_clr;
		uint32_t pwrup2_clr;
		uint32_t pwrup3_clr;
		uint32_t current_pwrup_req_clr;
		uint32_t last_swcore_pwrup_clr;
		uint32_t dbg_pwrcfg_clr;
		uint32_t bootdis_clr;
		uint32_t dbgconfig_clr;
		uint32_t scratch0_clr;
		uint32_t scratch1_clr;
		uint32_t scratch2_clr;
		uint32_t scratch3_clr;
		uint32_t scratch4_clr;
		uint32_t scratch5_clr;
		uint32_t scratch6_clr;
		uint32_t scratch7_clr;
		uint32_t boot0_clr;
		uint32_t boot1_clr;
		uint32_t boot2_clr;
		uint32_t boot3_clr;
		uint32_t intr_clr;
		uint32_t inte_clr;
		uint32_t intf_clr;
		uint32_t ints_clr;
		uint32_t RSVDclr_0[964];
} POWMAN_REG_BLOCKS;


/*IO Registers as struct*/

#define powman (*(POWMAN_REG_BLOCKS volatile *)0x40100000)


/*IO Registers AS MACROS*/

#define POWMAN_BADPASSWD (*(volatile uint32_t *)0x40100000)
#define POWMAN_VREG_CTRL (*(volatile uint32_t *)0x40100004)
#define POWMAN_VREG_STS (*(volatile uint32_t *)0x40100008)
#define POWMAN_VREG (*(volatile uint32_t *)0x4010000c)
#define POWMAN_VREG_LP_ENTRY (*(volatile uint32_t *)0x40100010)
#define POWMAN_VREG_LP_EXIT (*(volatile uint32_t *)0x40100014)
#define POWMAN_BOD_CTRL (*(volatile uint32_t *)0x40100018)
#define POWMAN_BOD (*(volatile uint32_t *)0x4010001c)
#define POWMAN_BOD_LP_ENTRY (*(volatile uint32_t *)0x40100020)
#define POWMAN_BOD_LP_EXIT (*(volatile uint32_t *)0x40100024)
#define POWMAN_LPOSC (*(volatile uint32_t *)0x40100028)
#define POWMAN_CHIP_RESET (*(volatile uint32_t *)0x4010002c)
#define POWMAN_WDSEL (*(volatile uint32_t *)0x40100030)
#define POWMAN_SEQ_CFG (*(volatile uint32_t *)0x40100034)
#define POWMAN_STATE (*(volatile uint32_t *)0x40100038)
#define POWMAN_POW_FASTDIV (*(volatile uint32_t *)0x4010003c)
#define POWMAN_POW_DELAY (*(volatile uint32_t *)0x40100040)
#define POWMAN_EXT_CTRL0 (*(volatile uint32_t *)0x40100044)
#define POWMAN_EXT_CTRL1 (*(volatile uint32_t *)0x40100048)
#define POWMAN_EXT_TIME_REF (*(volatile uint32_t *)0x4010004c)
#define POWMAN_LPOSC_FREQ_KHZ_INT (*(volatile uint32_t *)0x40100050)
#define POWMAN_LPOSC_FREQ_KHZ_FRAC (*(volatile uint32_t *)0x40100054)
#define POWMAN_XOSC_FREQ_KHZ_INT (*(volatile uint32_t *)0x40100058)
#define POWMAN_XOSC_FREQ_KHZ_FRAC (*(volatile uint32_t *)0x4010005c)
#define POWMAN_TIME_63TO48_SET (*(volatile uint32_t *)0x40100060)
#define POWMAN_TIME_47TO32_SET (*(volatile uint32_t *)0x40100064)
#define POWMAN_TIME_31TO16_SET (*(volatile uint32_t *)0x40100068)
#define POWMAN_TIME_15TO0_SET (*(volatile uint32_t *)0x4010006c)
#define POWMAN_READ_TIME_UPPER (*(volatile uint32_t *)0x40100070)
#define POWMAN_READ_TIME_LOWER (*(volatile uint32_t *)0x40100074)
#define POWMAN_ALARM_TIME_63TO48 (*(volatile uint32_t *)0x40100078)
#define POWMAN_ALARM_TIME_47TO32 (*(volatile uint32_t *)0x4010007c)
#define POWMAN_ALARM_TIME_31TO16 (*(volatile uint32_t *)0x40100080)
#define POWMAN_ALARM_TIME_15TO0 (*(volatile uint32_t *)0x40100084)
#define POWMAN_TIMER (*(volatile uint32_t *)0x40100088)
#define POWMAN_PWRUP0 (*(volatile uint32_t *)0x4010008c)
#define POWMAN_PWRUP1 (*(volatile uint32_t *)0x40100090)
#define POWMAN_PWRUP2 (*(volatile uint32_t *)0x40100094)
#define POWMAN_PWRUP3 (*(volatile uint32_t *)0x40100098)
#define POWMAN_CURRENT_PWRUP_REQ (*(volatile uint32_t *)0x4010009c)
#define POWMAN_LAST_SWCORE_PWRUP (*(volatile uint32_t *)0x401000a0)
#define POWMAN_DBG_PWRCFG (*(volatile uint32_t *)0x401000a4)
#define POWMAN_BOOTDIS (*(volatile uint32_t *)0x401000a8)
#define POWMAN_DBGCONFIG (*(volatile uint32_t *)0x401000ac)
#define POWMAN_SCRATCH0 (*(volatile uint32_t *)0x401000b0)
#define POWMAN_SCRATCH1 (*(volatile uint32_t *)0x401000b4)
#define POWMAN_SCRATCH2 (*(volatile uint32_t *)0x401000b8)
#define POWMAN_SCRATCH3 (*(volatile uint32_t *)0x401000bc)
#define POWMAN_SCRATCH4 (*(volatile uint32_t *)0x401000c0)
#define POWMAN_SCRATCH5 (*(volatile uint32_t *)0x401000c4)
#define POWMAN_SCRATCH6 (*(volatile uint32_t *)0x401000c8)
#define POWMAN_SCRATCH7 (*(volatile uint32_t *)0x401000cc)
#define POWMAN_BOOT0 (*(volatile uint32_t *)0x401000d0)
#define POWMAN_BOOT1 (*(volatile uint32_t *)0x401000d4)
#define POWMAN_BOOT2 (*(volatile uint32_t *)0x401000d8)
#define POWMAN_BOOT3 (*(volatile uint32_t *)0x401000dc)
#define POWMAN_INTR (*(volatile uint32_t *)0x401000e0)
#define POWMAN_INTE (*(volatile uint32_t *)0x401000e4)
#define POWMAN_INTF (*(volatile uint32_t *)0x401000e8)
#define POWMAN_INTS (*(volatile uint32_t *)0x401000ec)
#define POWMAN_BADPASSWD_XOR (*(volatile uint32_t *)0x40101000)
#define POWMAN_VREG_CTRL_XOR (*(volatile uint32_t *)0x40101004)
#define POWMAN_VREG_STS_XOR (*(volatile uint32_t *)0x40101008)
#define POWMAN_VREG_XOR (*(volatile uint32_t *)0x4010100c)
#define POWMAN_VREG_LP_ENTRY_XOR (*(volatile uint32_t *)0x40101010)
#define POWMAN_VREG_LP_EXIT_XOR (*(volatile uint32_t *)0x40101014)
#define POWMAN_BOD_CTRL_XOR (*(volatile uint32_t *)0x40101018)
#define POWMAN_BOD_XOR (*(volatile uint32_t *)0x4010101c)
#define POWMAN_BOD_LP_ENTRY_XOR (*(volatile uint32_t *)0x40101020)
#define POWMAN_BOD_LP_EXIT_XOR (*(volatile uint32_t *)0x40101024)
#define POWMAN_LPOSC_XOR (*(volatile uint32_t *)0x40101028)
#define POWMAN_CHIP_RESET_XOR (*(volatile uint32_t *)0x4010102c)
#define POWMAN_WDSEL_XOR (*(volatile uint32_t *)0x40101030)
#define POWMAN_SEQ_CFG_XOR (*(volatile uint32_t *)0x40101034)
#define POWMAN_STATE_XOR (*(volatile uint32_t *)0x40101038)
#define POWMAN_POW_FASTDIV_XOR (*(volatile uint32_t *)0x4010103c)
#define POWMAN_POW_DELAY_XOR (*(volatile uint32_t *)0x40101040)
#define POWMAN_EXT_CTRL0_XOR (*(volatile uint32_t *)0x40101044)
#define POWMAN_EXT_CTRL1_XOR (*(volatile uint32_t *)0x40101048)
#define POWMAN_EXT_TIME_REF_XOR (*(volatile uint32_t *)0x4010104c)
#define POWMAN_LPOSC_FREQ_KHZ_INT_XOR (*(volatile uint32_t *)0x40101050)
#define POWMAN_LPOSC_FREQ_KHZ_FRAC_XOR (*(volatile uint32_t *)0x40101054)
#define POWMAN_XOSC_FREQ_KHZ_INT_XOR (*(volatile uint32_t *)0x40101058)
#define POWMAN_XOSC_FREQ_KHZ_FRAC_XOR (*(volatile uint32_t *)0x4010105c)
#define POWMAN_SET_TIME_63TO48_XOR (*(volatile uint32_t *)0x40101060)
#define POWMAN_SET_TIME_47TO32_XOR (*(volatile uint32_t *)0x40101064)
#define POWMAN_SET_TIME_31TO16_XOR (*(volatile uint32_t *)0x40101068)
#define POWMAN_SET_TIME_15TO0_XOR (*(volatile uint32_t *)0x4010106c)
#define POWMAN_READ_TIME_UPPER_XOR (*(volatile uint32_t *)0x40101070)
#define POWMAN_READ_TIME_LOWER_XOR (*(volatile uint32_t *)0x40101074)
#define POWMAN_ALARM_TIME_63TO48_XOR (*(volatile uint32_t *)0x40101078)
#define POWMAN_ALARM_TIME_47TO32_XOR (*(volatile uint32_t *)0x4010107c)
#define POWMAN_ALARM_TIME_31TO16_XOR (*(volatile uint32_t *)0x40101080)
#define POWMAN_ALARM_TIME_15TO0_XOR (*(volatile uint32_t *)0x40101084)
#define POWMAN_TIMER_XOR (*(volatile uint32_t *)0x40101088)
#define POWMAN_PWRUP0_XOR (*(volatile uint32_t *)0x4010108c)
#define POWMAN_PWRUP1_XOR (*(volatile uint32_t *)0x40101090)
#define POWMAN_PWRUP2_XOR (*(volatile uint32_t *)0x40101094)
#define POWMAN_PWRUP3_XOR (*(volatile uint32_t *)0x40101098)
#define POWMAN_CURRENT_PWRUP_REQ_XOR (*(volatile uint32_t *)0x4010109c)
#define POWMAN_LAST_SWCORE_PWRUP_XOR (*(volatile uint32_t *)0x401010a0)
#define POWMAN_DBG_PWRCFG_XOR (*(volatile uint32_t *)0x401010a4)
#define POWMAN_BOOTDIS_XOR (*(volatile uint32_t *)0x401010a8)
#define POWMAN_DBGCONFIG_XOR (*(volatile uint32_t *)0x401010ac)
#define POWMAN_SCRATCH0_XOR (*(volatile uint32_t *)0x401010b0)
#define POWMAN_SCRATCH1_XOR (*(volatile uint32_t *)0x401010b4)
#define POWMAN_SCRATCH2_XOR (*(volatile uint32_t *)0x401010b8)
#define POWMAN_SCRATCH3_XOR (*(volatile uint32_t *)0x401010bc)
#define POWMAN_SCRATCH4_XOR (*(volatile uint32_t *)0x401010c0)
#define POWMAN_SCRATCH5_XOR (*(volatile uint32_t *)0x401010c4)
#define POWMAN_SCRATCH6_XOR (*(volatile uint32_t *)0x401010c8)
#define POWMAN_SCRATCH7_XOR (*(volatile uint32_t *)0x401010cc)
#define POWMAN_BOOT0_XOR (*(volatile uint32_t *)0x401010d0)
#define POWMAN_BOOT1_XOR (*(volatile uint32_t *)0x401010d4)
#define POWMAN_BOOT2_XOR (*(volatile uint32_t *)0x401010d8)
#define POWMAN_BOOT3_XOR (*(volatile uint32_t *)0x401010dc)
#define POWMAN_INTR_XOR (*(volatile uint32_t *)0x401010e0)
#define POWMAN_INTE_XOR (*(volatile uint32_t *)0x401010e4)
#define POWMAN_INTF_XOR (*(volatile uint32_t *)0x401010e8)
#define POWMAN_INTS_XOR (*(volatile uint32_t *)0x401010ec)
#define POWMAN_BADPASSWD_SET (*(volatile uint32_t *)0x40102000)
#define POWMAN_VREG_CTRL_SET (*(volatile uint32_t *)0x40102004)
#define POWMAN_VREG_STS_SET (*(volatile uint32_t *)0x40102008)
#define POWMAN_VREG_SET (*(volatile uint32_t *)0x4010200c)
#define POWMAN_VREG_LP_ENTRY_SET (*(volatile uint32_t *)0x40102010)
#define POWMAN_VREG_LP_EXIT_SET (*(volatile uint32_t *)0x40102014)
#define POWMAN_BOD_CTRL_SET (*(volatile uint32_t *)0x40102018)
#define POWMAN_BOD_SET (*(volatile uint32_t *)0x4010201c)
#define POWMAN_BOD_LP_ENTRY_SET (*(volatile uint32_t *)0x40102020)
#define POWMAN_BOD_LP_EXIT_SET (*(volatile uint32_t *)0x40102024)
#define POWMAN_LPOSC_SET (*(volatile uint32_t *)0x40102028)
#define POWMAN_CHIP_RESET_SET (*(volatile uint32_t *)0x4010202c)
#define POWMAN_WDSEL_SET (*(volatile uint32_t *)0x40102030)
#define POWMAN_SEQ_CFG_SET (*(volatile uint32_t *)0x40102034)
#define POWMAN_STATE_SET (*(volatile uint32_t *)0x40102038)
#define POWMAN_POW_FASTDIV_SET (*(volatile uint32_t *)0x4010203c)
#define POWMAN_POW_DELAY_SET (*(volatile uint32_t *)0x40102040)
#define POWMAN_EXT_CTRL0_SET (*(volatile uint32_t *)0x40102044)
#define POWMAN_EXT_CTRL1_SET (*(volatile uint32_t *)0x40102048)
#define POWMAN_EXT_TIME_REF_SET (*(volatile uint32_t *)0x4010204c)
#define POWMAN_LPOSC_FREQ_KHZ_INT_SET (*(volatile uint32_t *)0x40102050)
#define POWMAN_LPOSC_FREQ_KHZ_FRAC_SET (*(volatile uint32_t *)0x40102054)
#define POWMAN_XOSC_FREQ_KHZ_INT_SET (*(volatile uint32_t *)0x40102058)
#define POWMAN_XOSC_FREQ_KHZ_FRAC_SET (*(volatile uint32_t *)0x4010205c)
#define POWMAN_SET_TIME_63TO48_SET (*(volatile uint32_t *)0x40102060)
#define POWMAN_SET_TIME_47TO32_SET (*(volatile uint32_t *)0x40102064)
#define POWMAN_SET_TIME_31TO16_SET (*(volatile uint32_t *)0x40102068)
#define POWMAN_SET_TIME_15TO0_SET (*(volatile uint32_t *)0x4010206c)
#define POWMAN_READ_TIME_UPPER_SET (*(volatile uint32_t *)0x40102070)
#define POWMAN_READ_TIME_LOWER_SET (*(volatile uint32_t *)0x40102074)
#define POWMAN_ALARM_TIME_63TO48_SET (*(volatile uint32_t *)0x40102078)
#define POWMAN_ALARM_TIME_47TO32_SET (*(volatile uint32_t *)0x4010207c)
#define POWMAN_ALARM_TIME_31TO16_SET (*(volatile uint32_t *)0x40102080)
#define POWMAN_ALARM_TIME_15TO0_SET (*(volatile uint32_t *)0x40102084)
#define POWMAN_TIMER_SET (*(volatile uint32_t *)0x40102088)
#define POWMAN_PWRUP0_SET (*(volatile uint32_t *)0x4010208c)
#define POWMAN_PWRUP1_SET (*(volatile uint32_t *)0x40102090)
#define POWMAN_PWRUP2_SET (*(volatile uint32_t *)0x40102094)
#define POWMAN_PWRUP3_SET (*(volatile uint32_t *)0x40102098)
#define POWMAN_CURRENT_PWRUP_REQ_SET (*(volatile uint32_t *)0x4010209c)
#define POWMAN_LAST_SWCORE_PWRUP_SET (*(volatile uint32_t *)0x401020a0)
#define POWMAN_DBG_PWRCFG_SET (*(volatile uint32_t *)0x401020a4)
#define POWMAN_BOOTDIS_SET (*(volatile uint32_t *)0x401020a8)
#define POWMAN_DBGCONFIG_SET (*(volatile uint32_t *)0x401020ac)
#define POWMAN_SCRATCH0_SET (*(volatile uint32_t *)0x401020b0)
#define POWMAN_SCRATCH1_SET (*(volatile uint32_t *)0x401020b4)
#define POWMAN_SCRATCH2_SET (*(volatile uint32_t *)0x401020b8)
#define POWMAN_SCRATCH3_SET (*(volatile uint32_t *)0x401020bc)
#define POWMAN_SCRATCH4_SET (*(volatile uint32_t *)0x401020c0)
#define POWMAN_SCRATCH5_SET (*(volatile uint32_t *)0x401020c4)
#define POWMAN_SCRATCH6_SET (*(volatile uint32_t *)0x401020c8)
#define POWMAN_SCRATCH7_SET (*(volatile uint32_t *)0x401020cc)
#define POWMAN_BOOT0_SET (*(volatile uint32_t *)0x401020d0)
#define POWMAN_BOOT1_SET (*(volatile uint32_t *)0x401020d4)
#define POWMAN_BOOT2_SET (*(volatile uint32_t *)0x401020d8)
#define POWMAN_BOOT3_SET (*(volatile uint32_t *)0x401020dc)
#define POWMAN_INTR_SET (*(volatile uint32_t *)0x401020e0)
#define POWMAN_INTE_SET (*(volatile uint32_t *)0x401020e4)
#define POWMAN_INTF_SET (*(volatile uint32_t *)0x401020e8)
#define POWMAN_INTS_SET (*(volatile uint32_t *)0x401020ec)
#define POWMAN_BADPASSWD_CLR (*(volatile uint32_t *)0x40103000)
#define POWMAN_VREG_CTRL_CLR (*(volatile uint32_t *)0x40103004)
#define POWMAN_VREG_STS_CLR (*(volatile uint32_t *)0x40103008)
#define POWMAN_VREG_CLR (*(volatile uint32_t *)0x4010300c)
#define POWMAN_VREG_LP_ENTRY_CLR (*(volatile uint32_t *)0x40103010)
#define POWMAN_VREG_LP_EXIT_CLR (*(volatile uint32_t *)0x40103014)
#define POWMAN_BOD_CTRL_CLR (*(volatile uint32_t *)0x40103018)
#define POWMAN_BOD_CLR (*(volatile uint32_t *)0x4010301c)
#define POWMAN_BOD_LP_ENTRY_CLR (*(volatile uint32_t *)0x40103020)
#define POWMAN_BOD_LP_EXIT_CLR (*(volatile uint32_t *)0x40103024)
#define POWMAN_LPOSC_CLR (*(volatile uint32_t *)0x40103028)
#define POWMAN_CHIP_RESET_CLR (*(volatile uint32_t *)0x4010302c)
#define POWMAN_WDSEL_CLR (*(volatile uint32_t *)0x40103030)
#define POWMAN_SEQ_CFG_CLR (*(volatile uint32_t *)0x40103034)
#define POWMAN_STATE_CLR (*(volatile uint32_t *)0x40103038)
#define POWMAN_POW_FASTDIV_CLR (*(volatile uint32_t *)0x4010303c)
#define POWMAN_POW_DELAY_CLR (*(volatile uint32_t *)0x40103040)
#define POWMAN_EXT_CTRL0_CLR (*(volatile uint32_t *)0x40103044)
#define POWMAN_EXT_CTRL1_CLR (*(volatile uint32_t *)0x40103048)
#define POWMAN_EXT_TIME_REF_CLR (*(volatile uint32_t *)0x4010304c)
#define POWMAN_LPOSC_FREQ_KHZ_INT_CLR (*(volatile uint32_t *)0x40103050)
#define POWMAN_LPOSC_FREQ_KHZ_FRAC_CLR (*(volatile uint32_t *)0x40103054)
#define POWMAN_XOSC_FREQ_KHZ_INT_CLR (*(volatile uint32_t *)0x40103058)
#define POWMAN_XOSC_FREQ_KHZ_FRAC_CLR (*(volatile uint32_t *)0x4010305c)
#define POWMAN_SET_TIME_63TO48_CLR (*(volatile uint32_t *)0x40103060)
#define POWMAN_SET_TIME_47TO32_CLR (*(volatile uint32_t *)0x40103064)
#define POWMAN_SET_TIME_31TO16_CLR (*(volatile uint32_t *)0x40103068)
#define POWMAN_SET_TIME_15TO0_CLR (*(volatile uint32_t *)0x4010306c)
#define POWMAN_READ_TIME_UPPER_CLR (*(volatile uint32_t *)0x40103070)
#define POWMAN_READ_TIME_LOWER_CLR (*(volatile uint32_t *)0x40103074)
#define POWMAN_ALARM_TIME_63TO48_CLR (*(volatile uint32_t *)0x40103078)
#define POWMAN_ALARM_TIME_47TO32_CLR (*(volatile uint32_t *)0x4010307c)
#define POWMAN_ALARM_TIME_31TO16_CLR (*(volatile uint32_t *)0x40103080)
#define POWMAN_ALARM_TIME_15TO0_CLR (*(volatile uint32_t *)0x40103084)
#define POWMAN_TIMER_CLR (*(volatile uint32_t *)0x40103088)
#define POWMAN_PWRUP0_CLR (*(volatile uint32_t *)0x4010308c)
#define POWMAN_PWRUP1_CLR (*(volatile uint32_t *)0x40103090)
#define POWMAN_PWRUP2_CLR (*(volatile uint32_t *)0x40103094)
#define POWMAN_PWRUP3_CLR (*(volatile uint32_t *)0x40103098)
#define POWMAN_CURRENT_PWRUP_REQ_CLR (*(volatile uint32_t *)0x4010309c)
#define POWMAN_LAST_SWCORE_PWRUP_CLR (*(volatile uint32_t *)0x401030a0)
#define POWMAN_DBG_PWRCFG_CLR (*(volatile uint32_t *)0x401030a4)
#define POWMAN_BOOTDIS_CLR (*(volatile uint32_t *)0x401030a8)
#define POWMAN_DBGCONFIG_CLR (*(volatile uint32_t *)0x401030ac)
#define POWMAN_SCRATCH0_CLR (*(volatile uint32_t *)0x401030b0)
#define POWMAN_SCRATCH1_CLR (*(volatile uint32_t *)0x401030b4)
#define POWMAN_SCRATCH2_CLR (*(volatile uint32_t *)0x401030b8)
#define POWMAN_SCRATCH3_CLR (*(volatile uint32_t *)0x401030bc)
#define POWMAN_SCRATCH4_CLR (*(volatile uint32_t *)0x401030c0)
#define POWMAN_SCRATCH5_CLR (*(volatile uint32_t *)0x401030c4)
#define POWMAN_SCRATCH6_CLR (*(volatile uint32_t *)0x401030c8)
#define POWMAN_SCRATCH7_CLR (*(volatile uint32_t *)0x401030cc)
#define POWMAN_BOOT0_CLR (*(volatile uint32_t *)0x401030d0)
#define POWMAN_BOOT1_CLR (*(volatile uint32_t *)0x401030d4)
#define POWMAN_BOOT2_CLR (*(volatile uint32_t *)0x401030d8)
#define POWMAN_BOOT3_CLR (*(volatile uint32_t *)0x401030dc)
#define POWMAN_INTR_CLR (*(volatile uint32_t *)0x401030e0)
#define POWMAN_INTE_CLR (*(volatile uint32_t *)0x401030e4)
#define POWMAN_INTF_CLR (*(volatile uint32_t *)0x401030e8)
#define POWMAN_INTS_CLR (*(volatile uint32_t *)0x401030ec)

/*BADPASSWD Register macros*/


/*VREG_CTRL Register macros*/

#define POWMAN_VREG_CTRL_RST_N(v) (((v)&0x1)<<15)
#define POWMAN_VREG_CTRL_RST_N_MASK POWMAN_VREG_CTRL_RST_N(ALL1)
#define POWMAN_VREG_CTRL_UNLOCK(v) (((v)&0x1)<<13)
#define POWMAN_VREG_CTRL_UNLOCK_MASK POWMAN_VREG_CTRL_UNLOCK(ALL1)
#define POWMAN_VREG_CTRL_ISOLATE(v) (((v)&0x1)<<12)
#define POWMAN_VREG_CTRL_ISOLATE_MASK POWMAN_VREG_CTRL_ISOLATE(ALL1)
#define POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT(v) (((v)&0x1)<<8)
#define POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT_MASK POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT(ALL1)
#define POWMAN_VREG_CTRL_HT_TH(v) (((v)&0x7)<<4)
#define POWMAN_VREG_CTRL_HT_TH_MASK POWMAN_VREG_CTRL_HT_TH(ALL1)

/*VREG_STS Register macros*/

#define POWMAN_VREG_STS_VOUT_OK(v) (((v)&0x1)<<4)
#define POWMAN_VREG_STS_VOUT_OK_MASK POWMAN_VREG_STS_VOUT_OK(ALL1)
#define POWMAN_VREG_STS_STARTUP(v) (((v)&0x1)<<0)
#define POWMAN_VREG_STS_STARTUP_MASK POWMAN_VREG_STS_STARTUP(ALL1)

/*VREG Register macros*/

#define POWMAN_VREG_CTRL_RST_N(v) (((v)&0x1)<<15)
#define POWMAN_VREG_CTRL_RST_N_MASK POWMAN_VREG_CTRL_RST_N(ALL1)
#define POWMAN_VREG_CTRL_UNLOCK(v) (((v)&0x1)<<13)
#define POWMAN_VREG_CTRL_UNLOCK_MASK POWMAN_VREG_CTRL_UNLOCK(ALL1)
#define POWMAN_VREG_CTRL_ISOLATE(v) (((v)&0x1)<<12)
#define POWMAN_VREG_CTRL_ISOLATE_MASK POWMAN_VREG_CTRL_ISOLATE(ALL1)
#define POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT(v) (((v)&0x1)<<8)
#define POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT_MASK POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT(ALL1)
#define POWMAN_VREG_CTRL_HT_TH(v) (((v)&0x7)<<4)
#define POWMAN_VREG_CTRL_HT_TH_MASK POWMAN_VREG_CTRL_HT_TH(ALL1)
#define POWMAN_VREG_STS_VOUT_OK(v) (((v)&0x1)<<4)
#define POWMAN_VREG_STS_VOUT_OK_MASK POWMAN_VREG_STS_VOUT_OK(ALL1)
#define POWMAN_VREG_STS_STARTUP(v) (((v)&0x1)<<0)
#define POWMAN_VREG_STS_STARTUP_MASK POWMAN_VREG_STS_STARTUP(ALL1)
#define POWMAN_VREG_UPDATE_IN_PROGRESS(v) (((v)&0x1)<<15)
#define POWMAN_VREG_UPDATE_IN_PROGRESS_MASK POWMAN_VREG_UPDATE_IN_PROGRESS(ALL1)
#define POWMAN_VREG_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_VSEL_MASK POWMAN_VREG_VSEL(ALL1)
#define POWMAN_VREG_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_HIZ_MASK POWMAN_VREG_HIZ(ALL1)
#define POWMAN_VREG_LP_ENTRY_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_LP_ENTRY_VSEL_MASK POWMAN_VREG_LP_ENTRY_VSEL(ALL1)
#define POWMAN_VREG_LP_ENTRY_MODE(v) (((v)&0x1)<<2)
#define POWMAN_VREG_LP_ENTRY_MODE_MASK POWMAN_VREG_LP_ENTRY_MODE(ALL1)
#define POWMAN_VREG_LP_ENTRY_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_LP_ENTRY_HIZ_MASK POWMAN_VREG_LP_ENTRY_HIZ(ALL1)
#define POWMAN_VREG_LP_EXIT_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_LP_EXIT_VSEL_MASK POWMAN_VREG_LP_EXIT_VSEL(ALL1)
#define POWMAN_VREG_LP_EXIT_MODE(v) (((v)&0x1)<<2)
#define POWMAN_VREG_LP_EXIT_MODE_MASK POWMAN_VREG_LP_EXIT_MODE(ALL1)
#define POWMAN_VREG_LP_EXIT_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_LP_EXIT_HIZ_MASK POWMAN_VREG_LP_EXIT_HIZ(ALL1)

/*VREG_LP_ENTRY Register macros*/

#define POWMAN_VREG_LP_ENTRY_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_LP_ENTRY_VSEL_MASK POWMAN_VREG_LP_ENTRY_VSEL(ALL1)
#define POWMAN_VREG_LP_ENTRY_MODE(v) (((v)&0x1)<<2)
#define POWMAN_VREG_LP_ENTRY_MODE_MASK POWMAN_VREG_LP_ENTRY_MODE(ALL1)
#define POWMAN_VREG_LP_ENTRY_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_LP_ENTRY_HIZ_MASK POWMAN_VREG_LP_ENTRY_HIZ(ALL1)

/*VREG_LP_EXIT Register macros*/

#define POWMAN_VREG_LP_EXIT_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_LP_EXIT_VSEL_MASK POWMAN_VREG_LP_EXIT_VSEL(ALL1)
#define POWMAN_VREG_LP_EXIT_MODE(v) (((v)&0x1)<<2)
#define POWMAN_VREG_LP_EXIT_MODE_MASK POWMAN_VREG_LP_EXIT_MODE(ALL1)
#define POWMAN_VREG_LP_EXIT_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_LP_EXIT_HIZ_MASK POWMAN_VREG_LP_EXIT_HIZ(ALL1)

/*BOD_CTRL Register macros*/

#define POWMAN_BOD_CTRL_ISOLATE(v) (((v)&0x1)<<12)
#define POWMAN_BOD_CTRL_ISOLATE_MASK POWMAN_BOD_CTRL_ISOLATE(ALL1)

/*BOD Register macros*/

#define POWMAN_BOD_CTRL_ISOLATE(v) (((v)&0x1)<<12)
#define POWMAN_BOD_CTRL_ISOLATE_MASK POWMAN_BOD_CTRL_ISOLATE(ALL1)
#define POWMAN_BOD_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_VSEL_MASK POWMAN_BOD_VSEL(ALL1)
#define POWMAN_BOD_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_EN_MASK POWMAN_BOD_EN(ALL1)
#define POWMAN_BOD_LP_ENTRY_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_LP_ENTRY_VSEL_MASK POWMAN_BOD_LP_ENTRY_VSEL(ALL1)
#define POWMAN_BOD_LP_ENTRY_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_LP_ENTRY_EN_MASK POWMAN_BOD_LP_ENTRY_EN(ALL1)
#define POWMAN_BOD_LP_EXIT_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_LP_EXIT_VSEL_MASK POWMAN_BOD_LP_EXIT_VSEL(ALL1)
#define POWMAN_BOD_LP_EXIT_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_LP_EXIT_EN_MASK POWMAN_BOD_LP_EXIT_EN(ALL1)

/*BOD_LP_ENTRY Register macros*/

#define POWMAN_BOD_LP_ENTRY_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_LP_ENTRY_VSEL_MASK POWMAN_BOD_LP_ENTRY_VSEL(ALL1)
#define POWMAN_BOD_LP_ENTRY_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_LP_ENTRY_EN_MASK POWMAN_BOD_LP_ENTRY_EN(ALL1)

/*BOD_LP_EXIT Register macros*/

#define POWMAN_BOD_LP_EXIT_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_LP_EXIT_VSEL_MASK POWMAN_BOD_LP_EXIT_VSEL(ALL1)
#define POWMAN_BOD_LP_EXIT_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_LP_EXIT_EN_MASK POWMAN_BOD_LP_EXIT_EN(ALL1)

/*LPOSC Register macros*/

#define POWMAN_LPOSC_TRIM(v) (((v)&0x3f)<<4)
#define POWMAN_LPOSC_TRIM_MASK POWMAN_LPOSC_TRIM(ALL1)
#define POWMAN_LPOSC_MODE(v) (((v)&0x3)<<0)
#define POWMAN_LPOSC_MODE_MASK POWMAN_LPOSC_MODE(ALL1)

/*CHIP_RESET Register macros*/

#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM(v) (((v)&0x1)<<28)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM_MASK POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM(ALL1)
#define POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ(v) (((v)&0x1)<<27)
#define POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ_MASK POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ(ALL1)
#define POWMAN_CHIP_RESET_HAD_GLITCH_DETECT(v) (((v)&0x1)<<26)
#define POWMAN_CHIP_RESET_HAD_GLITCH_DETECT_MASK POWMAN_CHIP_RESET_HAD_GLITCH_DETECT(ALL1)
#define POWMAN_CHIP_RESET_HAD_SWCORE_PD(v) (((v)&0x1)<<25)
#define POWMAN_CHIP_RESET_HAD_SWCORE_PD_MASK POWMAN_CHIP_RESET_HAD_SWCORE_PD(ALL1)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE(v) (((v)&0x1)<<24)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE_MASK POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE(ALL1)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN(v) (((v)&0x1)<<23)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_MASK POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN(ALL1)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC(v) (((v)&0x1)<<22)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC_MASK POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC(ALL1)
#define POWMAN_CHIP_RESET_HAD_RESCUE(v) (((v)&0x1)<<21)
#define POWMAN_CHIP_RESET_HAD_RESCUE_MASK POWMAN_CHIP_RESET_HAD_RESCUE(ALL1)
#define POWMAN_CHIP_RESET_HAD_DP_RESET_REQ(v) (((v)&0x1)<<19)
#define POWMAN_CHIP_RESET_HAD_DP_RESET_REQ_MASK POWMAN_CHIP_RESET_HAD_DP_RESET_REQ(ALL1)
#define POWMAN_CHIP_RESET_HAD_RUN_LOW(v) (((v)&0x1)<<18)
#define POWMAN_CHIP_RESET_HAD_RUN_LOW_MASK POWMAN_CHIP_RESET_HAD_RUN_LOW(ALL1)
#define POWMAN_CHIP_RESET_HAD_BOR(v) (((v)&0x1)<<17)
#define POWMAN_CHIP_RESET_HAD_BOR_MASK POWMAN_CHIP_RESET_HAD_BOR(ALL1)
#define POWMAN_CHIP_RESET_HAD_POR(v) (((v)&0x1)<<16)
#define POWMAN_CHIP_RESET_HAD_POR_MASK POWMAN_CHIP_RESET_HAD_POR(ALL1)
#define POWMAN_CHIP_RESET_RESCUE_FLAG(v) (((v)&0x1)<<4)
#define POWMAN_CHIP_RESET_RESCUE_FLAG_MASK POWMAN_CHIP_RESET_RESCUE_FLAG(ALL1)
#define POWMAN_CHIP_RESET_DOUBLE_TAP(v) (((v)&0x1)<<0)
#define POWMAN_CHIP_RESET_DOUBLE_TAP_MASK POWMAN_CHIP_RESET_DOUBLE_TAP(ALL1)

/*WDSEL Register macros*/

#define POWMAN_WDSEL_RESET_RSM(v) (((v)&0x1)<<12)
#define POWMAN_WDSEL_RESET_RSM_MASK POWMAN_WDSEL_RESET_RSM(ALL1)
#define POWMAN_WDSEL_RESET_SWCORE(v) (((v)&0x1)<<8)
#define POWMAN_WDSEL_RESET_SWCORE_MASK POWMAN_WDSEL_RESET_SWCORE(ALL1)
#define POWMAN_WDSEL_RESET_POWMAN(v) (((v)&0x1)<<4)
#define POWMAN_WDSEL_RESET_POWMAN_MASK POWMAN_WDSEL_RESET_POWMAN(ALL1)
#define POWMAN_WDSEL_RESET_POWMAN_ASYNC(v) (((v)&0x1)<<0)
#define POWMAN_WDSEL_RESET_POWMAN_ASYNC_MASK POWMAN_WDSEL_RESET_POWMAN_ASYNC(ALL1)

/*SEQ_CFG Register macros*/

#define POWMAN_SEQ_CFG_USING_FAST_POWCK(v) (((v)&0x1)<<20)
#define POWMAN_SEQ_CFG_USING_FAST_POWCK_MASK POWMAN_SEQ_CFG_USING_FAST_POWCK(ALL1)
#define POWMAN_SEQ_CFG_USING_BOD_LP(v) (((v)&0x1)<<17)
#define POWMAN_SEQ_CFG_USING_BOD_LP_MASK POWMAN_SEQ_CFG_USING_BOD_LP(ALL1)
#define POWMAN_SEQ_CFG_USING_VREG_LP(v) (((v)&0x1)<<16)
#define POWMAN_SEQ_CFG_USING_VREG_LP_MASK POWMAN_SEQ_CFG_USING_VREG_LP(ALL1)
#define POWMAN_SEQ_CFG_USE_FAST_POWCK(v) (((v)&0x1)<<12)
#define POWMAN_SEQ_CFG_USE_FAST_POWCK_MASK POWMAN_SEQ_CFG_USE_FAST_POWCK(ALL1)
#define POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP(v) (((v)&0x1)<<8)
#define POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP_MASK POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP(ALL1)
#define POWMAN_SEQ_CFG_USE_BOD_HP(v) (((v)&0x1)<<7)
#define POWMAN_SEQ_CFG_USE_BOD_HP_MASK POWMAN_SEQ_CFG_USE_BOD_HP(ALL1)
#define POWMAN_SEQ_CFG_USE_BOD_LP(v) (((v)&0x1)<<6)
#define POWMAN_SEQ_CFG_USE_BOD_LP_MASK POWMAN_SEQ_CFG_USE_BOD_LP(ALL1)
#define POWMAN_SEQ_CFG_USE_VREG_HP(v) (((v)&0x1)<<5)
#define POWMAN_SEQ_CFG_USE_VREG_HP_MASK POWMAN_SEQ_CFG_USE_VREG_HP(ALL1)
#define POWMAN_SEQ_CFG_USE_VREG_LP(v) (((v)&0x1)<<4)
#define POWMAN_SEQ_CFG_USE_VREG_LP_MASK POWMAN_SEQ_CFG_USE_VREG_LP(ALL1)
#define POWMAN_SEQ_CFG_HW_PWRUP_SRAM0(v) (((v)&0x1)<<1)
#define POWMAN_SEQ_CFG_HW_PWRUP_SRAM0_MASK POWMAN_SEQ_CFG_HW_PWRUP_SRAM0(ALL1)
#define POWMAN_SEQ_CFG_HW_PWRUP_SRAM1(v) (((v)&0x1)<<0)
#define POWMAN_SEQ_CFG_HW_PWRUP_SRAM1_MASK POWMAN_SEQ_CFG_HW_PWRUP_SRAM1(ALL1)

/*STATE Register macros*/

#define POWMAN_STATE_CHANGING(v) (((v)&0x1)<<13)
#define POWMAN_STATE_CHANGING_MASK POWMAN_STATE_CHANGING(ALL1)
#define POWMAN_STATE_WAITING(v) (((v)&0x1)<<12)
#define POWMAN_STATE_WAITING_MASK POWMAN_STATE_WAITING(ALL1)
#define POWMAN_STATE_BAD_HW_REQ(v) (((v)&0x1)<<11)
#define POWMAN_STATE_BAD_HW_REQ_MASK POWMAN_STATE_BAD_HW_REQ(ALL1)
#define POWMAN_STATE_BAD_SW_REQ(v) (((v)&0x1)<<10)
#define POWMAN_STATE_BAD_SW_REQ_MASK POWMAN_STATE_BAD_SW_REQ(ALL1)
#define POWMAN_STATE_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<9)
#define POWMAN_STATE_PWRUP_WHILE_WAITING_MASK POWMAN_STATE_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_STATE_REQ_IGNORED(v) (((v)&0x1)<<8)
#define POWMAN_STATE_REQ_IGNORED_MASK POWMAN_STATE_REQ_IGNORED(ALL1)
#define POWMAN_STATE_REQ(v) (((v)&0xf)<<4)
#define POWMAN_STATE_REQ_MASK POWMAN_STATE_REQ(ALL1)
#define POWMAN_STATE_CURRENT(v) (((v)&0xf)<<0)
#define POWMAN_STATE_CURRENT_MASK POWMAN_STATE_CURRENT(ALL1)

/*POW_FASTDIV Register macros*/


/*POW_DELAY Register macros*/

#define POWMAN_POW_DELAY_SRAM_STEP(v) (((v)&0xff)<<8)
#define POWMAN_POW_DELAY_SRAM_STEP_MASK POWMAN_POW_DELAY_SRAM_STEP(ALL1)
#define POWMAN_POW_DELAY_XIP_STEP(v) (((v)&0xf)<<4)
#define POWMAN_POW_DELAY_XIP_STEP_MASK POWMAN_POW_DELAY_XIP_STEP(ALL1)
#define POWMAN_POW_DELAY_SWCORE_STEP(v) (((v)&0xf)<<0)
#define POWMAN_POW_DELAY_SWCORE_STEP_MASK POWMAN_POW_DELAY_SWCORE_STEP(ALL1)

/*EXT_CTRL0 Register macros*/

#define POWMAN_EXT_CTRL0_LP_EXIT_STATE(v) (((v)&0x1)<<14)
#define POWMAN_EXT_CTRL0_LP_EXIT_STATE_MASK POWMAN_EXT_CTRL0_LP_EXIT_STATE(ALL1)
#define POWMAN_EXT_CTRL0_LP_ENTRY_STATE(v) (((v)&0x1)<<13)
#define POWMAN_EXT_CTRL0_LP_ENTRY_STATE_MASK POWMAN_EXT_CTRL0_LP_ENTRY_STATE(ALL1)
#define POWMAN_EXT_CTRL0_INIT_STATE(v) (((v)&0x1)<<12)
#define POWMAN_EXT_CTRL0_INIT_STATE_MASK POWMAN_EXT_CTRL0_INIT_STATE(ALL1)
#define POWMAN_EXT_CTRL0_INIT(v) (((v)&0x1)<<8)
#define POWMAN_EXT_CTRL0_INIT_MASK POWMAN_EXT_CTRL0_INIT(ALL1)
#define POWMAN_EXT_CTRL0_GPIO_SELECT(v) (((v)&0x3f)<<0)
#define POWMAN_EXT_CTRL0_GPIO_SELECT_MASK POWMAN_EXT_CTRL0_GPIO_SELECT(ALL1)

/*EXT_CTRL1 Register macros*/

#define POWMAN_EXT_CTRL1_LP_EXIT_STATE(v) (((v)&0x1)<<14)
#define POWMAN_EXT_CTRL1_LP_EXIT_STATE_MASK POWMAN_EXT_CTRL1_LP_EXIT_STATE(ALL1)
#define POWMAN_EXT_CTRL1_LP_ENTRY_STATE(v) (((v)&0x1)<<13)
#define POWMAN_EXT_CTRL1_LP_ENTRY_STATE_MASK POWMAN_EXT_CTRL1_LP_ENTRY_STATE(ALL1)
#define POWMAN_EXT_CTRL1_INIT_STATE(v) (((v)&0x1)<<12)
#define POWMAN_EXT_CTRL1_INIT_STATE_MASK POWMAN_EXT_CTRL1_INIT_STATE(ALL1)
#define POWMAN_EXT_CTRL1_INIT(v) (((v)&0x1)<<8)
#define POWMAN_EXT_CTRL1_INIT_MASK POWMAN_EXT_CTRL1_INIT(ALL1)
#define POWMAN_EXT_CTRL1_GPIO_SELECT(v) (((v)&0x3f)<<0)
#define POWMAN_EXT_CTRL1_GPIO_SELECT_MASK POWMAN_EXT_CTRL1_GPIO_SELECT(ALL1)

/*EXT_TIME_REF Register macros*/

#define POWMAN_EXT_TIME_REF_DRIVE_LPCK(v) (((v)&0x1)<<4)
#define POWMAN_EXT_TIME_REF_DRIVE_LPCK_MASK POWMAN_EXT_TIME_REF_DRIVE_LPCK(ALL1)
#define POWMAN_EXT_TIME_REF_SOURCE_SEL(v) (((v)&0x3)<<0)
#define POWMAN_EXT_TIME_REF_SOURCE_SEL_MASK POWMAN_EXT_TIME_REF_SOURCE_SEL(ALL1)

/*LPOSC_FREQ_KHZ_INT Register macros*/


/*LPOSC_FREQ_KHZ_FRAC Register macros*/


/*XOSC_FREQ_KHZ_INT Register macros*/


/*XOSC_FREQ_KHZ_FRAC Register macros*/


/*SET_TIME_63TO48 Register macros*/


/*SET_TIME_47TO32 Register macros*/


/*SET_TIME_31TO16 Register macros*/


/*SET_TIME_15TO0 Register macros*/


/*READ_TIME_UPPER Register macros*/


/*READ_TIME_LOWER Register macros*/


/*ALARM_TIME_63TO48 Register macros*/


/*ALARM_TIME_47TO32 Register macros*/


/*ALARM_TIME_31TO16 Register macros*/


/*ALARM_TIME_15TO0 Register macros*/


/*TIMER Register macros*/

#define POWMAN_TIMER_USING_GPIO_1HZ(v) (((v)&0x1)<<19)
#define POWMAN_TIMER_USING_GPIO_1HZ_MASK POWMAN_TIMER_USING_GPIO_1HZ(ALL1)
#define POWMAN_TIMER_USING_GPIO_1KHZ(v) (((v)&0x1)<<18)
#define POWMAN_TIMER_USING_GPIO_1KHZ_MASK POWMAN_TIMER_USING_GPIO_1KHZ(ALL1)
#define POWMAN_TIMER_USING_LPOSC(v) (((v)&0x1)<<17)
#define POWMAN_TIMER_USING_LPOSC_MASK POWMAN_TIMER_USING_LPOSC(ALL1)
#define POWMAN_TIMER_USING_XOSC(v) (((v)&0x1)<<16)
#define POWMAN_TIMER_USING_XOSC_MASK POWMAN_TIMER_USING_XOSC(ALL1)
#define POWMAN_TIMER_USE_GPIO_1HZ(v) (((v)&0x1)<<13)
#define POWMAN_TIMER_USE_GPIO_1HZ_MASK POWMAN_TIMER_USE_GPIO_1HZ(ALL1)
#define POWMAN_TIMER_USE_GPIO_1KHZ(v) (((v)&0x1)<<10)
#define POWMAN_TIMER_USE_GPIO_1KHZ_MASK POWMAN_TIMER_USE_GPIO_1KHZ(ALL1)
#define POWMAN_TIMER_USE_XOSC(v) (((v)&0x1)<<9)
#define POWMAN_TIMER_USE_XOSC_MASK POWMAN_TIMER_USE_XOSC(ALL1)
#define POWMAN_TIMER_USE_LPOSC(v) (((v)&0x1)<<8)
#define POWMAN_TIMER_USE_LPOSC_MASK POWMAN_TIMER_USE_LPOSC(ALL1)
#define POWMAN_TIMER_ALARM(v) (((v)&0x1)<<6)
#define POWMAN_TIMER_ALARM_MASK POWMAN_TIMER_ALARM(ALL1)
#define POWMAN_TIMER_PWRUP_ON_ALARM(v) (((v)&0x1)<<5)
#define POWMAN_TIMER_PWRUP_ON_ALARM_MASK POWMAN_TIMER_PWRUP_ON_ALARM(ALL1)
#define POWMAN_TIMER_ALARM_ENAB(v) (((v)&0x1)<<4)
#define POWMAN_TIMER_ALARM_ENAB_MASK POWMAN_TIMER_ALARM_ENAB(ALL1)
#define POWMAN_TIMER_CLEAR(v) (((v)&0x1)<<2)
#define POWMAN_TIMER_CLEAR_MASK POWMAN_TIMER_CLEAR(ALL1)
#define POWMAN_TIMER_RUN(v) (((v)&0x1)<<1)
#define POWMAN_TIMER_RUN_MASK POWMAN_TIMER_RUN(ALL1)
#define POWMAN_TIMER_NONSEC_WRITE(v) (((v)&0x1)<<0)
#define POWMAN_TIMER_NONSEC_WRITE_MASK POWMAN_TIMER_NONSEC_WRITE(ALL1)

/*PWRUP0 Register macros*/

#define POWMAN_PWRUP0_RAW_STATUS(v) (((v)&0x1)<<10)
#define POWMAN_PWRUP0_RAW_STATUS_MASK POWMAN_PWRUP0_RAW_STATUS(ALL1)
#define POWMAN_PWRUP0_STATUS(v) (((v)&0x1)<<9)
#define POWMAN_PWRUP0_STATUS_MASK POWMAN_PWRUP0_STATUS(ALL1)
#define POWMAN_PWRUP0_MODE(v) (((v)&0x1)<<8)
#define POWMAN_PWRUP0_MODE_MASK POWMAN_PWRUP0_MODE(ALL1)
#define POWMAN_PWRUP0_DIRECTION(v) (((v)&0x1)<<7)
#define POWMAN_PWRUP0_DIRECTION_MASK POWMAN_PWRUP0_DIRECTION(ALL1)
#define POWMAN_PWRUP0_ENABLE(v) (((v)&0x1)<<6)
#define POWMAN_PWRUP0_ENABLE_MASK POWMAN_PWRUP0_ENABLE(ALL1)
#define POWMAN_PWRUP0_SOURCE(v) (((v)&0x3f)<<0)
#define POWMAN_PWRUP0_SOURCE_MASK POWMAN_PWRUP0_SOURCE(ALL1)

/*PWRUP1 Register macros*/

#define POWMAN_PWRUP1_RAW_STATUS(v) (((v)&0x1)<<10)
#define POWMAN_PWRUP1_RAW_STATUS_MASK POWMAN_PWRUP1_RAW_STATUS(ALL1)
#define POWMAN_PWRUP1_STATUS(v) (((v)&0x1)<<9)
#define POWMAN_PWRUP1_STATUS_MASK POWMAN_PWRUP1_STATUS(ALL1)
#define POWMAN_PWRUP1_MODE(v) (((v)&0x1)<<8)
#define POWMAN_PWRUP1_MODE_MASK POWMAN_PWRUP1_MODE(ALL1)
#define POWMAN_PWRUP1_DIRECTION(v) (((v)&0x1)<<7)
#define POWMAN_PWRUP1_DIRECTION_MASK POWMAN_PWRUP1_DIRECTION(ALL1)
#define POWMAN_PWRUP1_ENABLE(v) (((v)&0x1)<<6)
#define POWMAN_PWRUP1_ENABLE_MASK POWMAN_PWRUP1_ENABLE(ALL1)
#define POWMAN_PWRUP1_SOURCE(v) (((v)&0x3f)<<0)
#define POWMAN_PWRUP1_SOURCE_MASK POWMAN_PWRUP1_SOURCE(ALL1)

/*PWRUP2 Register macros*/

#define POWMAN_PWRUP2_RAW_STATUS(v) (((v)&0x1)<<10)
#define POWMAN_PWRUP2_RAW_STATUS_MASK POWMAN_PWRUP2_RAW_STATUS(ALL1)
#define POWMAN_PWRUP2_STATUS(v) (((v)&0x1)<<9)
#define POWMAN_PWRUP2_STATUS_MASK POWMAN_PWRUP2_STATUS(ALL1)
#define POWMAN_PWRUP2_MODE(v) (((v)&0x1)<<8)
#define POWMAN_PWRUP2_MODE_MASK POWMAN_PWRUP2_MODE(ALL1)
#define POWMAN_PWRUP2_DIRECTION(v) (((v)&0x1)<<7)
#define POWMAN_PWRUP2_DIRECTION_MASK POWMAN_PWRUP2_DIRECTION(ALL1)
#define POWMAN_PWRUP2_ENABLE(v) (((v)&0x1)<<6)
#define POWMAN_PWRUP2_ENABLE_MASK POWMAN_PWRUP2_ENABLE(ALL1)
#define POWMAN_PWRUP2_SOURCE(v) (((v)&0x3f)<<0)
#define POWMAN_PWRUP2_SOURCE_MASK POWMAN_PWRUP2_SOURCE(ALL1)

/*PWRUP3 Register macros*/

#define POWMAN_PWRUP3_RAW_STATUS(v) (((v)&0x1)<<10)
#define POWMAN_PWRUP3_RAW_STATUS_MASK POWMAN_PWRUP3_RAW_STATUS(ALL1)
#define POWMAN_PWRUP3_STATUS(v) (((v)&0x1)<<9)
#define POWMAN_PWRUP3_STATUS_MASK POWMAN_PWRUP3_STATUS(ALL1)
#define POWMAN_PWRUP3_MODE(v) (((v)&0x1)<<8)
#define POWMAN_PWRUP3_MODE_MASK POWMAN_PWRUP3_MODE(ALL1)
#define POWMAN_PWRUP3_DIRECTION(v) (((v)&0x1)<<7)
#define POWMAN_PWRUP3_DIRECTION_MASK POWMAN_PWRUP3_DIRECTION(ALL1)
#define POWMAN_PWRUP3_ENABLE(v) (((v)&0x1)<<6)
#define POWMAN_PWRUP3_ENABLE_MASK POWMAN_PWRUP3_ENABLE(ALL1)
#define POWMAN_PWRUP3_SOURCE(v) (((v)&0x3f)<<0)
#define POWMAN_PWRUP3_SOURCE_MASK POWMAN_PWRUP3_SOURCE(ALL1)

/*CURRENT_PWRUP_REQ Register macros*/


/*LAST_SWCORE_PWRUP Register macros*/


/*DBG_PWRCFG Register macros*/

#define POWMAN_DBG_PWRCFG_IGNORE(v) (((v)&0x1)<<0)
#define POWMAN_DBG_PWRCFG_IGNORE_MASK POWMAN_DBG_PWRCFG_IGNORE(ALL1)

/*BOOTDIS Register macros*/

#define POWMAN_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define POWMAN_BOOTDIS_NEXT_MASK POWMAN_BOOTDIS_NEXT(ALL1)
#define POWMAN_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define POWMAN_BOOTDIS_NOW_MASK POWMAN_BOOTDIS_NOW(ALL1)

/*DBGCONFIG Register macros*/

#define POWMAN_DBGCONFIG_DP_INSTID(v) (((v)&0xf)<<0)
#define POWMAN_DBGCONFIG_DP_INSTID_MASK POWMAN_DBGCONFIG_DP_INSTID(ALL1)

/*SCRATCH0 Register macros*/


/*SCRATCH1 Register macros*/


/*SCRATCH2 Register macros*/


/*SCRATCH3 Register macros*/


/*SCRATCH4 Register macros*/


/*SCRATCH5 Register macros*/


/*SCRATCH6 Register macros*/


/*SCRATCH7 Register macros*/


/*BOOT0 Register macros*/


/*BOOT1 Register macros*/


/*BOOT2 Register macros*/


/*BOOT3 Register macros*/


/*INTR Register macros*/

#define POWMAN_INTR_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<3)
#define POWMAN_INTR_PWRUP_WHILE_WAITING_MASK POWMAN_INTR_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_INTR_STATE_REQ_IGNORED(v) (((v)&0x1)<<2)
#define POWMAN_INTR_STATE_REQ_IGNORED_MASK POWMAN_INTR_STATE_REQ_IGNORED(ALL1)
#define POWMAN_INTR_TIMER(v) (((v)&0x1)<<1)
#define POWMAN_INTR_TIMER_MASK POWMAN_INTR_TIMER(ALL1)
#define POWMAN_INTR_VREG_OUTPUT_LOW(v) (((v)&0x1)<<0)
#define POWMAN_INTR_VREG_OUTPUT_LOW_MASK POWMAN_INTR_VREG_OUTPUT_LOW(ALL1)

/*INTE Register macros*/

#define POWMAN_INTE_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<3)
#define POWMAN_INTE_PWRUP_WHILE_WAITING_MASK POWMAN_INTE_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_INTE_STATE_REQ_IGNORED(v) (((v)&0x1)<<2)
#define POWMAN_INTE_STATE_REQ_IGNORED_MASK POWMAN_INTE_STATE_REQ_IGNORED(ALL1)
#define POWMAN_INTE_TIMER(v) (((v)&0x1)<<1)
#define POWMAN_INTE_TIMER_MASK POWMAN_INTE_TIMER(ALL1)
#define POWMAN_INTE_VREG_OUTPUT_LOW(v) (((v)&0x1)<<0)
#define POWMAN_INTE_VREG_OUTPUT_LOW_MASK POWMAN_INTE_VREG_OUTPUT_LOW(ALL1)

/*INTF Register macros*/

#define POWMAN_INTF_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<3)
#define POWMAN_INTF_PWRUP_WHILE_WAITING_MASK POWMAN_INTF_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_INTF_STATE_REQ_IGNORED(v) (((v)&0x1)<<2)
#define POWMAN_INTF_STATE_REQ_IGNORED_MASK POWMAN_INTF_STATE_REQ_IGNORED(ALL1)
#define POWMAN_INTF_TIMER(v) (((v)&0x1)<<1)
#define POWMAN_INTF_TIMER_MASK POWMAN_INTF_TIMER(ALL1)
#define POWMAN_INTF_VREG_OUTPUT_LOW(v) (((v)&0x1)<<0)
#define POWMAN_INTF_VREG_OUTPUT_LOW_MASK POWMAN_INTF_VREG_OUTPUT_LOW(ALL1)

/*INTS Register macros*/

#define POWMAN_INTS_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<3)
#define POWMAN_INTS_PWRUP_WHILE_WAITING_MASK POWMAN_INTS_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_INTS_STATE_REQ_IGNORED(v) (((v)&0x1)<<2)
#define POWMAN_INTS_STATE_REQ_IGNORED_MASK POWMAN_INTS_STATE_REQ_IGNORED(ALL1)
#define POWMAN_INTS_TIMER(v) (((v)&0x1)<<1)
#define POWMAN_INTS_TIMER_MASK POWMAN_INTS_TIMER(ALL1)
#define POWMAN_INTS_VREG_OUTPUT_LOW(v) (((v)&0x1)<<0)
#define POWMAN_INTS_VREG_OUTPUT_LOW_MASK POWMAN_INTS_VREG_OUTPUT_LOW(ALL1)

#endif

