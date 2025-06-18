
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

#ifndef RP2350_TRNG_H
#define RP2350_TRNG_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t RSVD0[64];
		uint32_t rng_imr;
		uint32_t rng_isr;
		uint32_t rng_icr;
		uint32_t trng_config;
		uint32_t trng_valid;
		uint32_t ehr_data0;
		uint32_t ehr_data1;
		uint32_t ehr_data2;
		uint32_t ehr_data3;
		uint32_t ehr_data4;
		uint32_t ehr_data5;
		uint32_t rnd_source_enable;
		uint32_t sample_cnt1;
		uint32_t autocorr_statistic;
		uint32_t trng_debug_control;
		uint32_t RSVD1;
		uint32_t trng_sw_reset;
		uint32_t RSVD2[28];
		uint32_t rng_debug_en_input;
		uint32_t trng_busy;
		uint32_t rst_bits_counter;
		uint32_t rng_version;
		uint32_t RSVD3[7];
		uint32_t rng_bist_cntr_0;
		uint32_t rng_bist_cntr_1;
		uint32_t rng_bist_cntr_2;
		uint32_t RSVD4[901];
		uint32_t RSVDxor_0[64];
		uint32_t rng_imr_xor;
		uint32_t rng_isr_xor;
		uint32_t rng_icr_xor;
		uint32_t trng_config_xor;
		uint32_t trng_valid_xor;
		uint32_t ehr_data0_xor;
		uint32_t ehr_data1_xor;
		uint32_t ehr_data2_xor;
		uint32_t ehr_data3_xor;
		uint32_t ehr_data4_xor;
		uint32_t ehr_data5_xor;
		uint32_t rnd_source_enable_xor;
		uint32_t sample_cnt1_xor;
		uint32_t autocorr_statistic_xor;
		uint32_t trng_debug_control_xor;
		uint32_t RSVDxor_1;
		uint32_t trng_sw_reset_xor;
		uint32_t RSVDxor_2[28];
		uint32_t rng_debug_en_input_xor;
		uint32_t trng_busy_xor;
		uint32_t rst_bits_counter_xor;
		uint32_t rng_version_xor;
		uint32_t RSVDxor_3[7];
		uint32_t rng_bist_cntr_0_xor;
		uint32_t rng_bist_cntr_1_xor;
		uint32_t rng_bist_cntr_2_xor;
		uint32_t RSVDxor_4[901];
		uint32_t RSVDset_0[64];
		uint32_t rng_imr_set;
		uint32_t rng_isr_set;
		uint32_t rng_icr_set;
		uint32_t trng_config_set;
		uint32_t trng_valid_set;
		uint32_t ehr_data0_set;
		uint32_t ehr_data1_set;
		uint32_t ehr_data2_set;
		uint32_t ehr_data3_set;
		uint32_t ehr_data4_set;
		uint32_t ehr_data5_set;
		uint32_t rnd_source_enable_set;
		uint32_t sample_cnt1_set;
		uint32_t autocorr_statistic_set;
		uint32_t trng_debug_control_set;
		uint32_t RSVDset_1;
		uint32_t trng_sw_reset_set;
		uint32_t RSVDset_2[28];
		uint32_t rng_debug_en_input_set;
		uint32_t trng_busy_set;
		uint32_t rst_bits_counter_set;
		uint32_t rng_version_set;
		uint32_t RSVDset_3[7];
		uint32_t rng_bist_cntr_0_set;
		uint32_t rng_bist_cntr_1_set;
		uint32_t rng_bist_cntr_2_set;
		uint32_t RSVDset_4[901];
		uint32_t RSVDclr_0[64];
		uint32_t rng_imr_clr;
		uint32_t rng_isr_clr;
		uint32_t rng_icr_clr;
		uint32_t trng_config_clr;
		uint32_t trng_valid_clr;
		uint32_t ehr_data0_clr;
		uint32_t ehr_data1_clr;
		uint32_t ehr_data2_clr;
		uint32_t ehr_data3_clr;
		uint32_t ehr_data4_clr;
		uint32_t ehr_data5_clr;
		uint32_t rnd_source_enable_clr;
		uint32_t sample_cnt1_clr;
		uint32_t autocorr_statistic_clr;
		uint32_t trng_debug_control_clr;
		uint32_t RSVDclr_1;
		uint32_t trng_sw_reset_clr;
		uint32_t RSVDclr_2[28];
		uint32_t rng_debug_en_input_clr;
		uint32_t trng_busy_clr;
		uint32_t rst_bits_counter_clr;
		uint32_t rng_version_clr;
		uint32_t RSVDclr_3[7];
		uint32_t rng_bist_cntr_0_clr;
		uint32_t rng_bist_cntr_1_clr;
		uint32_t rng_bist_cntr_2_clr;
		uint32_t RSVDclr_4[901];
} TRNG_REG_BLOCKS;


/*IO Registers as struct*/

#define trng (*(TRNG_REG_BLOCKS volatile *)0x400f0000)


/*IO Registers AS MACROS*/

#define TRNG_RNG_IMR (*(volatile uint32_t *)0x400f0100)
#define TRNG_RNG_ISR (*(volatile uint32_t *)0x400f0104)
#define TRNG_RNG_ICR (*(volatile uint32_t *)0x400f0108)
#define TRNG_TRNG_CONFIG (*(volatile uint32_t *)0x400f010c)
#define TRNG_TRNG_VALID (*(volatile uint32_t *)0x400f0110)
#define TRNG_EHR_DATA0 (*(volatile uint32_t *)0x400f0114)
#define TRNG_EHR_DATA1 (*(volatile uint32_t *)0x400f0118)
#define TRNG_EHR_DATA2 (*(volatile uint32_t *)0x400f011c)
#define TRNG_EHR_DATA3 (*(volatile uint32_t *)0x400f0120)
#define TRNG_EHR_DATA4 (*(volatile uint32_t *)0x400f0124)
#define TRNG_EHR_DATA5 (*(volatile uint32_t *)0x400f0128)
#define TRNG_RND_SOURCE_ENABLE (*(volatile uint32_t *)0x400f012c)
#define TRNG_SAMPLE_CNT1 (*(volatile uint32_t *)0x400f0130)
#define TRNG_AUTOCORR_STATISTIC (*(volatile uint32_t *)0x400f0134)
#define TRNG_TRNG_DEBUG_CONTROL (*(volatile uint32_t *)0x400f0138)
#define TRNG_TRNG_SW_RESET (*(volatile uint32_t *)0x400f0140)
#define TRNG_RNG_DEBUG_EN_INPUT (*(volatile uint32_t *)0x400f01b4)
#define TRNG_TRNG_BUSY (*(volatile uint32_t *)0x400f01b8)
#define TRNG_RST_BITS_COUNTER (*(volatile uint32_t *)0x400f01bc)
#define TRNG_RNG_VERSION (*(volatile uint32_t *)0x400f01c0)
#define TRNG_RNG_BIST_CNTR_0 (*(volatile uint32_t *)0x400f01e0)
#define TRNG_RNG_BIST_CNTR_1 (*(volatile uint32_t *)0x400f01e4)
#define TRNG_RNG_BIST_CNTR_2 (*(volatile uint32_t *)0x400f01e8)
#define TRNG_RNG_IMR_XOR (*(volatile uint32_t *)0x400f1100)
#define TRNG_RNG_ISR_XOR (*(volatile uint32_t *)0x400f1104)
#define TRNG_RNG_ICR_XOR (*(volatile uint32_t *)0x400f1108)
#define TRNG_TRNG_CONFIG_XOR (*(volatile uint32_t *)0x400f110c)
#define TRNG_TRNG_VALID_XOR (*(volatile uint32_t *)0x400f1110)
#define TRNG_EHR_DATA0_XOR (*(volatile uint32_t *)0x400f1114)
#define TRNG_EHR_DATA1_XOR (*(volatile uint32_t *)0x400f1118)
#define TRNG_EHR_DATA2_XOR (*(volatile uint32_t *)0x400f111c)
#define TRNG_EHR_DATA3_XOR (*(volatile uint32_t *)0x400f1120)
#define TRNG_EHR_DATA4_XOR (*(volatile uint32_t *)0x400f1124)
#define TRNG_EHR_DATA5_XOR (*(volatile uint32_t *)0x400f1128)
#define TRNG_RND_SOURCE_ENABLE_XOR (*(volatile uint32_t *)0x400f112c)
#define TRNG_SAMPLE_CNT1_XOR (*(volatile uint32_t *)0x400f1130)
#define TRNG_AUTOCORR_STATISTIC_XOR (*(volatile uint32_t *)0x400f1134)
#define TRNG_TRNG_DEBUG_CONTROL_XOR (*(volatile uint32_t *)0x400f1138)
#define TRNG_TRNG_SW_RESET_XOR (*(volatile uint32_t *)0x400f1140)
#define TRNG_RNG_DEBUG_EN_INPUT_XOR (*(volatile uint32_t *)0x400f11b4)
#define TRNG_TRNG_BUSY_XOR (*(volatile uint32_t *)0x400f11b8)
#define TRNG_RST_BITS_COUNTER_XOR (*(volatile uint32_t *)0x400f11bc)
#define TRNG_RNG_VERSION_XOR (*(volatile uint32_t *)0x400f11c0)
#define TRNG_RNG_BIST_CNTR_0_XOR (*(volatile uint32_t *)0x400f11e0)
#define TRNG_RNG_BIST_CNTR_1_XOR (*(volatile uint32_t *)0x400f11e4)
#define TRNG_RNG_BIST_CNTR_2_XOR (*(volatile uint32_t *)0x400f11e8)
#define TRNG_RNG_IMR_SET (*(volatile uint32_t *)0x400f2100)
#define TRNG_RNG_ISR_SET (*(volatile uint32_t *)0x400f2104)
#define TRNG_RNG_ICR_SET (*(volatile uint32_t *)0x400f2108)
#define TRNG_TRNG_CONFIG_SET (*(volatile uint32_t *)0x400f210c)
#define TRNG_TRNG_VALID_SET (*(volatile uint32_t *)0x400f2110)
#define TRNG_EHR_DATA0_SET (*(volatile uint32_t *)0x400f2114)
#define TRNG_EHR_DATA1_SET (*(volatile uint32_t *)0x400f2118)
#define TRNG_EHR_DATA2_SET (*(volatile uint32_t *)0x400f211c)
#define TRNG_EHR_DATA3_SET (*(volatile uint32_t *)0x400f2120)
#define TRNG_EHR_DATA4_SET (*(volatile uint32_t *)0x400f2124)
#define TRNG_EHR_DATA5_SET (*(volatile uint32_t *)0x400f2128)
#define TRNG_RND_SOURCE_ENABLE_SET (*(volatile uint32_t *)0x400f212c)
#define TRNG_SAMPLE_CNT1_SET (*(volatile uint32_t *)0x400f2130)
#define TRNG_AUTOCORR_STATISTIC_SET (*(volatile uint32_t *)0x400f2134)
#define TRNG_TRNG_DEBUG_CONTROL_SET (*(volatile uint32_t *)0x400f2138)
#define TRNG_TRNG_SW_RESET_SET (*(volatile uint32_t *)0x400f2140)
#define TRNG_RNG_DEBUG_EN_INPUT_SET (*(volatile uint32_t *)0x400f21b4)
#define TRNG_TRNG_BUSY_SET (*(volatile uint32_t *)0x400f21b8)
#define TRNG_RST_BITS_COUNTER_SET (*(volatile uint32_t *)0x400f21bc)
#define TRNG_RNG_VERSION_SET (*(volatile uint32_t *)0x400f21c0)
#define TRNG_RNG_BIST_CNTR_0_SET (*(volatile uint32_t *)0x400f21e0)
#define TRNG_RNG_BIST_CNTR_1_SET (*(volatile uint32_t *)0x400f21e4)
#define TRNG_RNG_BIST_CNTR_2_SET (*(volatile uint32_t *)0x400f21e8)
#define TRNG_RNG_IMR_CLR (*(volatile uint32_t *)0x400f3100)
#define TRNG_RNG_ISR_CLR (*(volatile uint32_t *)0x400f3104)
#define TRNG_RNG_ICR_CLR (*(volatile uint32_t *)0x400f3108)
#define TRNG_TRNG_CONFIG_CLR (*(volatile uint32_t *)0x400f310c)
#define TRNG_TRNG_VALID_CLR (*(volatile uint32_t *)0x400f3110)
#define TRNG_EHR_DATA0_CLR (*(volatile uint32_t *)0x400f3114)
#define TRNG_EHR_DATA1_CLR (*(volatile uint32_t *)0x400f3118)
#define TRNG_EHR_DATA2_CLR (*(volatile uint32_t *)0x400f311c)
#define TRNG_EHR_DATA3_CLR (*(volatile uint32_t *)0x400f3120)
#define TRNG_EHR_DATA4_CLR (*(volatile uint32_t *)0x400f3124)
#define TRNG_EHR_DATA5_CLR (*(volatile uint32_t *)0x400f3128)
#define TRNG_RND_SOURCE_ENABLE_CLR (*(volatile uint32_t *)0x400f312c)
#define TRNG_SAMPLE_CNT1_CLR (*(volatile uint32_t *)0x400f3130)
#define TRNG_AUTOCORR_STATISTIC_CLR (*(volatile uint32_t *)0x400f3134)
#define TRNG_TRNG_DEBUG_CONTROL_CLR (*(volatile uint32_t *)0x400f3138)
#define TRNG_TRNG_SW_RESET_CLR (*(volatile uint32_t *)0x400f3140)
#define TRNG_RNG_DEBUG_EN_INPUT_CLR (*(volatile uint32_t *)0x400f31b4)
#define TRNG_TRNG_BUSY_CLR (*(volatile uint32_t *)0x400f31b8)
#define TRNG_RST_BITS_COUNTER_CLR (*(volatile uint32_t *)0x400f31bc)
#define TRNG_RNG_VERSION_CLR (*(volatile uint32_t *)0x400f31c0)
#define TRNG_RNG_BIST_CNTR_0_CLR (*(volatile uint32_t *)0x400f31e0)
#define TRNG_RNG_BIST_CNTR_1_CLR (*(volatile uint32_t *)0x400f31e4)
#define TRNG_RNG_BIST_CNTR_2_CLR (*(volatile uint32_t *)0x400f31e8)

/*RNG_IMR Register macros*/

#define TRNG_RNG_IMR_RESERVED(v) (((v)&0xfffffff)<<4)
#define TRNG_RNG_IMR_RESERVED_MASK TRNG_RNG_IMR_RESERVED(ALL1)
#define TRNG_RNG_IMR_VN_ERR_INT_MASK(v) (((v)&0x1)<<3)
#define TRNG_RNG_IMR_VN_ERR_INT_MASK_MASK TRNG_RNG_IMR_VN_ERR_INT_MASK(ALL1)
#define TRNG_RNG_IMR_CRNGT_ERR_INT_MASK(v) (((v)&0x1)<<2)
#define TRNG_RNG_IMR_CRNGT_ERR_INT_MASK_MASK TRNG_RNG_IMR_CRNGT_ERR_INT_MASK(ALL1)
#define TRNG_RNG_IMR_AUTOCORR_ERR_INT_MASK(v) (((v)&0x1)<<1)
#define TRNG_RNG_IMR_AUTOCORR_ERR_INT_MASK_MASK TRNG_RNG_IMR_AUTOCORR_ERR_INT_MASK(ALL1)
#define TRNG_RNG_IMR_EHR_VALID_INT_MASK(v) (((v)&0x1)<<0)
#define TRNG_RNG_IMR_EHR_VALID_INT_MASK_MASK TRNG_RNG_IMR_EHR_VALID_INT_MASK(ALL1)

/*RNG_ISR Register macros*/

#define TRNG_RNG_ISR_RESERVED(v) (((v)&0xfffffff)<<4)
#define TRNG_RNG_ISR_RESERVED_MASK TRNG_RNG_ISR_RESERVED(ALL1)
#define TRNG_RNG_ISR_VN_ERR(v) (((v)&0x1)<<3)
#define TRNG_RNG_ISR_VN_ERR_MASK TRNG_RNG_ISR_VN_ERR(ALL1)
#define TRNG_RNG_ISR_CRNGT_ERR(v) (((v)&0x1)<<2)
#define TRNG_RNG_ISR_CRNGT_ERR_MASK TRNG_RNG_ISR_CRNGT_ERR(ALL1)
#define TRNG_RNG_ISR_AUTOCORR_ERR(v) (((v)&0x1)<<1)
#define TRNG_RNG_ISR_AUTOCORR_ERR_MASK TRNG_RNG_ISR_AUTOCORR_ERR(ALL1)
#define TRNG_RNG_ISR_EHR_VALID(v) (((v)&0x1)<<0)
#define TRNG_RNG_ISR_EHR_VALID_MASK TRNG_RNG_ISR_EHR_VALID(ALL1)

/*RNG_ICR Register macros*/

#define TRNG_RNG_ICR_RESERVED(v) (((v)&0xfffffff)<<4)
#define TRNG_RNG_ICR_RESERVED_MASK TRNG_RNG_ICR_RESERVED(ALL1)
#define TRNG_RNG_ICR_VN_ERR(v) (((v)&0x1)<<3)
#define TRNG_RNG_ICR_VN_ERR_MASK TRNG_RNG_ICR_VN_ERR(ALL1)
#define TRNG_RNG_ICR_CRNGT_ERR(v) (((v)&0x1)<<2)
#define TRNG_RNG_ICR_CRNGT_ERR_MASK TRNG_RNG_ICR_CRNGT_ERR(ALL1)
#define TRNG_RNG_ICR_AUTOCORR_ERR(v) (((v)&0x1)<<1)
#define TRNG_RNG_ICR_AUTOCORR_ERR_MASK TRNG_RNG_ICR_AUTOCORR_ERR(ALL1)
#define TRNG_RNG_ICR_EHR_VALID(v) (((v)&0x1)<<0)
#define TRNG_RNG_ICR_EHR_VALID_MASK TRNG_RNG_ICR_EHR_VALID(ALL1)

/*TRNG_CONFIG Register macros*/

#define TRNG_TRNG_CONFIG_RESERVED(v) (((v)&0x3fffffff)<<2)
#define TRNG_TRNG_CONFIG_RESERVED_MASK TRNG_TRNG_CONFIG_RESERVED(ALL1)
#define TRNG_TRNG_CONFIG_RND_SRC_SEL(v) (((v)&0x3)<<0)
#define TRNG_TRNG_CONFIG_RND_SRC_SEL_MASK TRNG_TRNG_CONFIG_RND_SRC_SEL(ALL1)

/*TRNG_VALID Register macros*/

#define TRNG_TRNG_VALID_RESERVED(v) (((v)&0x7fffffff)<<1)
#define TRNG_TRNG_VALID_RESERVED_MASK TRNG_TRNG_VALID_RESERVED(ALL1)
#define TRNG_TRNG_VALID_EHR_VALID(v) (((v)&0x1)<<0)
#define TRNG_TRNG_VALID_EHR_VALID_MASK TRNG_TRNG_VALID_EHR_VALID(ALL1)

/*EHR_DATA0 Register macros*/


/*EHR_DATA1 Register macros*/


/*EHR_DATA2 Register macros*/


/*EHR_DATA3 Register macros*/


/*EHR_DATA4 Register macros*/


/*EHR_DATA5 Register macros*/


/*RND_SOURCE_ENABLE Register macros*/

#define TRNG_RND_SOURCE_ENABLE_RESERVED(v) (((v)&0x7fffffff)<<1)
#define TRNG_RND_SOURCE_ENABLE_RESERVED_MASK TRNG_RND_SOURCE_ENABLE_RESERVED(ALL1)
#define TRNG_RND_SOURCE_ENABLE_RND_SRC_EN(v) (((v)&0x1)<<0)
#define TRNG_RND_SOURCE_ENABLE_RND_SRC_EN_MASK TRNG_RND_SOURCE_ENABLE_RND_SRC_EN(ALL1)

/*SAMPLE_CNT1 Register macros*/

#define TRNG_SAMPLE_CNT1_SAMPLE_CNTR1(v) (((v)&0xffffffff)<<0)
#define TRNG_SAMPLE_CNT1_SAMPLE_CNTR1_MASK TRNG_SAMPLE_CNT1_SAMPLE_CNTR1(ALL1)

/*AUTOCORR_STATISTIC Register macros*/

#define TRNG_AUTOCORR_STATISTIC_RESERVED(v) (((v)&0x3ff)<<22)
#define TRNG_AUTOCORR_STATISTIC_RESERVED_MASK TRNG_AUTOCORR_STATISTIC_RESERVED(ALL1)
#define TRNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS(v) (((v)&0xff)<<14)
#define TRNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS_MASK TRNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS(ALL1)
#define TRNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS(v) (((v)&0x3fff)<<0)
#define TRNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS_MASK TRNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS(ALL1)

/*TRNG_DEBUG_CONTROL Register macros*/

#define TRNG_TRNG_DEBUG_CONTROL_AUTO_CORRELATE_BYPASS(v) (((v)&0x1)<<3)
#define TRNG_TRNG_DEBUG_CONTROL_AUTO_CORRELATE_BYPASS_MASK TRNG_TRNG_DEBUG_CONTROL_AUTO_CORRELATE_BYPASS(ALL1)
#define TRNG_TRNG_DEBUG_CONTROL_TRNG_CRNGT_BYPASS(v) (((v)&0x1)<<2)
#define TRNG_TRNG_DEBUG_CONTROL_TRNG_CRNGT_BYPASS_MASK TRNG_TRNG_DEBUG_CONTROL_TRNG_CRNGT_BYPASS(ALL1)
#define TRNG_TRNG_DEBUG_CONTROL_VNC_BYPASS(v) (((v)&0x1)<<1)
#define TRNG_TRNG_DEBUG_CONTROL_VNC_BYPASS_MASK TRNG_TRNG_DEBUG_CONTROL_VNC_BYPASS(ALL1)
#define TRNG_TRNG_DEBUG_CONTROL_RESERVED(v) (((v)&0x1)<<0)
#define TRNG_TRNG_DEBUG_CONTROL_RESERVED_MASK TRNG_TRNG_DEBUG_CONTROL_RESERVED(ALL1)

/*TRNG_SW_RESET Register macros*/

#define TRNG_TRNG_SW_RESET_RESERVED(v) (((v)&0x7fffffff)<<1)
#define TRNG_TRNG_SW_RESET_RESERVED_MASK TRNG_TRNG_SW_RESET_RESERVED(ALL1)
#define TRNG_TRNG_SW_RESET_TRNG_SW_RESET(v) (((v)&0x1)<<0)
#define TRNG_TRNG_SW_RESET_TRNG_SW_RESET_MASK TRNG_TRNG_SW_RESET_TRNG_SW_RESET(ALL1)

/*RNG_DEBUG_EN_INPUT Register macros*/

#define TRNG_RNG_DEBUG_EN_INPUT_RESERVED(v) (((v)&0x7fffffff)<<1)
#define TRNG_RNG_DEBUG_EN_INPUT_RESERVED_MASK TRNG_RNG_DEBUG_EN_INPUT_RESERVED(ALL1)
#define TRNG_RNG_DEBUG_EN_INPUT_RNG_DEBUG_EN(v) (((v)&0x1)<<0)
#define TRNG_RNG_DEBUG_EN_INPUT_RNG_DEBUG_EN_MASK TRNG_RNG_DEBUG_EN_INPUT_RNG_DEBUG_EN(ALL1)

/*TRNG_BUSY Register macros*/

#define TRNG_TRNG_BUSY_RESERVED(v) (((v)&0x7fffffff)<<1)
#define TRNG_TRNG_BUSY_RESERVED_MASK TRNG_TRNG_BUSY_RESERVED(ALL1)
#define TRNG_TRNG_BUSY_TRNG_BUSY(v) (((v)&0x1)<<0)
#define TRNG_TRNG_BUSY_TRNG_BUSY_MASK TRNG_TRNG_BUSY_TRNG_BUSY(ALL1)

/*RST_BITS_COUNTER Register macros*/

#define TRNG_RST_BITS_COUNTER_RESERVED(v) (((v)&0x7fffffff)<<1)
#define TRNG_RST_BITS_COUNTER_RESERVED_MASK TRNG_RST_BITS_COUNTER_RESERVED(ALL1)
#define TRNG_RST_BITS_COUNTER_RST_BITS_COUNTER(v) (((v)&0x1)<<0)
#define TRNG_RST_BITS_COUNTER_RST_BITS_COUNTER_MASK TRNG_RST_BITS_COUNTER_RST_BITS_COUNTER(ALL1)

/*RNG_VERSION Register macros*/

#define TRNG_RNG_VERSION_RESERVED(v) (((v)&0xffffff)<<8)
#define TRNG_RNG_VERSION_RESERVED_MASK TRNG_RNG_VERSION_RESERVED(ALL1)
#define TRNG_RNG_VERSION_RNG_USE_5_SBOXES(v) (((v)&0x1)<<7)
#define TRNG_RNG_VERSION_RNG_USE_5_SBOXES_MASK TRNG_RNG_VERSION_RNG_USE_5_SBOXES(ALL1)
#define TRNG_RNG_VERSION_RESEEDING_EXISTS(v) (((v)&0x1)<<6)
#define TRNG_RNG_VERSION_RESEEDING_EXISTS_MASK TRNG_RNG_VERSION_RESEEDING_EXISTS(ALL1)
#define TRNG_RNG_VERSION_KAT_EXISTS(v) (((v)&0x1)<<5)
#define TRNG_RNG_VERSION_KAT_EXISTS_MASK TRNG_RNG_VERSION_KAT_EXISTS(ALL1)
#define TRNG_RNG_VERSION_PRNG_EXISTS(v) (((v)&0x1)<<4)
#define TRNG_RNG_VERSION_PRNG_EXISTS_MASK TRNG_RNG_VERSION_PRNG_EXISTS(ALL1)
#define TRNG_RNG_VERSION_TRNG_TESTS_BYPASS_EN(v) (((v)&0x1)<<3)
#define TRNG_RNG_VERSION_TRNG_TESTS_BYPASS_EN_MASK TRNG_RNG_VERSION_TRNG_TESTS_BYPASS_EN(ALL1)
#define TRNG_RNG_VERSION_AUTOCORR_EXISTS(v) (((v)&0x1)<<2)
#define TRNG_RNG_VERSION_AUTOCORR_EXISTS_MASK TRNG_RNG_VERSION_AUTOCORR_EXISTS(ALL1)
#define TRNG_RNG_VERSION_CRNGT_EXISTS(v) (((v)&0x1)<<1)
#define TRNG_RNG_VERSION_CRNGT_EXISTS_MASK TRNG_RNG_VERSION_CRNGT_EXISTS(ALL1)
#define TRNG_RNG_VERSION_EHR_WIDTH_192(v) (((v)&0x1)<<0)
#define TRNG_RNG_VERSION_EHR_WIDTH_192_MASK TRNG_RNG_VERSION_EHR_WIDTH_192(ALL1)

/*RNG_BIST_CNTR_0 Register macros*/

#define TRNG_RNG_BIST_CNTR_0_RESERVED(v) (((v)&0x3ff)<<22)
#define TRNG_RNG_BIST_CNTR_0_RESERVED_MASK TRNG_RNG_BIST_CNTR_0_RESERVED(ALL1)
#define TRNG_RNG_BIST_CNTR_0_ROSC_CNTR_VAL(v) (((v)&0x3fffff)<<0)
#define TRNG_RNG_BIST_CNTR_0_ROSC_CNTR_VAL_MASK TRNG_RNG_BIST_CNTR_0_ROSC_CNTR_VAL(ALL1)

/*RNG_BIST_CNTR_1 Register macros*/

#define TRNG_RNG_BIST_CNTR_1_RESERVED(v) (((v)&0x3ff)<<22)
#define TRNG_RNG_BIST_CNTR_1_RESERVED_MASK TRNG_RNG_BIST_CNTR_1_RESERVED(ALL1)
#define TRNG_RNG_BIST_CNTR_1_ROSC_CNTR_VAL(v) (((v)&0x3fffff)<<0)
#define TRNG_RNG_BIST_CNTR_1_ROSC_CNTR_VAL_MASK TRNG_RNG_BIST_CNTR_1_ROSC_CNTR_VAL(ALL1)

/*RNG_BIST_CNTR_2 Register macros*/

#define TRNG_RNG_BIST_CNTR_2_RESERVED(v) (((v)&0x3ff)<<22)
#define TRNG_RNG_BIST_CNTR_2_RESERVED_MASK TRNG_RNG_BIST_CNTR_2_RESERVED(ALL1)
#define TRNG_RNG_BIST_CNTR_2_ROSC_CNTR_VAL(v) (((v)&0x3fffff)<<0)
#define TRNG_RNG_BIST_CNTR_2_ROSC_CNTR_VAL_MASK TRNG_RNG_BIST_CNTR_2_ROSC_CNTR_VAL(ALL1)

#endif

