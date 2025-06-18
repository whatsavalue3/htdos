
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

#ifndef RP2350_HSTX_CTRL_H
#define RP2350_HSTX_CTRL_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t csr;
		uint32_t bit0;
		uint32_t bit1;
		uint32_t bit2;
		uint32_t bit3;
		uint32_t bit4;
		uint32_t bit5;
		uint32_t bit6;
		uint32_t bit7;
		uint32_t expand_shift;
		uint32_t expand_tmds;
		uint32_t RSVD0[1013];
		uint32_t csr_xor;
		uint32_t bit0_xor;
		uint32_t bit1_xor;
		uint32_t bit2_xor;
		uint32_t bit3_xor;
		uint32_t bit4_xor;
		uint32_t bit5_xor;
		uint32_t bit6_xor;
		uint32_t bit7_xor;
		uint32_t expand_shift_xor;
		uint32_t expand_tmds_xor;
		uint32_t RSVDxor_0[1013];
		uint32_t csr_set;
		uint32_t bit0_set;
		uint32_t bit1_set;
		uint32_t bit2_set;
		uint32_t bit3_set;
		uint32_t bit4_set;
		uint32_t bit5_set;
		uint32_t bit6_set;
		uint32_t bit7_set;
		uint32_t expand_shift_set;
		uint32_t expand_tmds_set;
		uint32_t RSVDset_0[1013];
		uint32_t csr_clr;
		uint32_t bit0_clr;
		uint32_t bit1_clr;
		uint32_t bit2_clr;
		uint32_t bit3_clr;
		uint32_t bit4_clr;
		uint32_t bit5_clr;
		uint32_t bit6_clr;
		uint32_t bit7_clr;
		uint32_t expand_shift_clr;
		uint32_t expand_tmds_clr;
		uint32_t RSVDclr_0[1013];
} HSTX_CTRL_REG_BLOCKS;


/*IO Registers as struct*/

#define hstx_ctrl (*(HSTX_CTRL_REG_BLOCKS volatile *)0x400c0000)


/*IO Registers AS MACROS*/

#define HSTX_CTRL_CSR (*(volatile uint32_t *)0x400c0000)
#define HSTX_CTRL_BIT0 (*(volatile uint32_t *)0x400c0004)
#define HSTX_CTRL_BIT1 (*(volatile uint32_t *)0x400c0008)
#define HSTX_CTRL_BIT2 (*(volatile uint32_t *)0x400c000c)
#define HSTX_CTRL_BIT3 (*(volatile uint32_t *)0x400c0010)
#define HSTX_CTRL_BIT4 (*(volatile uint32_t *)0x400c0014)
#define HSTX_CTRL_BIT5 (*(volatile uint32_t *)0x400c0018)
#define HSTX_CTRL_BIT6 (*(volatile uint32_t *)0x400c001c)
#define HSTX_CTRL_BIT7 (*(volatile uint32_t *)0x400c0020)
#define HSTX_CTRL_EXPAND_SHIFT (*(volatile uint32_t *)0x400c0024)
#define HSTX_CTRL_EXPAND_TMDS (*(volatile uint32_t *)0x400c0028)
#define HSTX_CTRL_CSR_XOR (*(volatile uint32_t *)0x400c1000)
#define HSTX_CTRL_BIT0_XOR (*(volatile uint32_t *)0x400c1004)
#define HSTX_CTRL_BIT1_XOR (*(volatile uint32_t *)0x400c1008)
#define HSTX_CTRL_BIT2_XOR (*(volatile uint32_t *)0x400c100c)
#define HSTX_CTRL_BIT3_XOR (*(volatile uint32_t *)0x400c1010)
#define HSTX_CTRL_BIT4_XOR (*(volatile uint32_t *)0x400c1014)
#define HSTX_CTRL_BIT5_XOR (*(volatile uint32_t *)0x400c1018)
#define HSTX_CTRL_BIT6_XOR (*(volatile uint32_t *)0x400c101c)
#define HSTX_CTRL_BIT7_XOR (*(volatile uint32_t *)0x400c1020)
#define HSTX_CTRL_EXPAND_SHIFT_XOR (*(volatile uint32_t *)0x400c1024)
#define HSTX_CTRL_EXPAND_TMDS_XOR (*(volatile uint32_t *)0x400c1028)
#define HSTX_CTRL_CSR_SET (*(volatile uint32_t *)0x400c2000)
#define HSTX_CTRL_BIT0_SET (*(volatile uint32_t *)0x400c2004)
#define HSTX_CTRL_BIT1_SET (*(volatile uint32_t *)0x400c2008)
#define HSTX_CTRL_BIT2_SET (*(volatile uint32_t *)0x400c200c)
#define HSTX_CTRL_BIT3_SET (*(volatile uint32_t *)0x400c2010)
#define HSTX_CTRL_BIT4_SET (*(volatile uint32_t *)0x400c2014)
#define HSTX_CTRL_BIT5_SET (*(volatile uint32_t *)0x400c2018)
#define HSTX_CTRL_BIT6_SET (*(volatile uint32_t *)0x400c201c)
#define HSTX_CTRL_BIT7_SET (*(volatile uint32_t *)0x400c2020)
#define HSTX_CTRL_EXPAND_SHIFT_SET (*(volatile uint32_t *)0x400c2024)
#define HSTX_CTRL_EXPAND_TMDS_SET (*(volatile uint32_t *)0x400c2028)
#define HSTX_CTRL_CSR_CLR (*(volatile uint32_t *)0x400c3000)
#define HSTX_CTRL_BIT0_CLR (*(volatile uint32_t *)0x400c3004)
#define HSTX_CTRL_BIT1_CLR (*(volatile uint32_t *)0x400c3008)
#define HSTX_CTRL_BIT2_CLR (*(volatile uint32_t *)0x400c300c)
#define HSTX_CTRL_BIT3_CLR (*(volatile uint32_t *)0x400c3010)
#define HSTX_CTRL_BIT4_CLR (*(volatile uint32_t *)0x400c3014)
#define HSTX_CTRL_BIT5_CLR (*(volatile uint32_t *)0x400c3018)
#define HSTX_CTRL_BIT6_CLR (*(volatile uint32_t *)0x400c301c)
#define HSTX_CTRL_BIT7_CLR (*(volatile uint32_t *)0x400c3020)
#define HSTX_CTRL_EXPAND_SHIFT_CLR (*(volatile uint32_t *)0x400c3024)
#define HSTX_CTRL_EXPAND_TMDS_CLR (*(volatile uint32_t *)0x400c3028)

/*CSR Register macros*/

#define HSTX_CTRL_CSR_CLKDIV(v) (((v)&0xf)<<28)
#define HSTX_CTRL_CSR_CLKDIV_MASK HSTX_CTRL_CSR_CLKDIV(ALL1)
#define HSTX_CTRL_CSR_CLKPHASE(v) (((v)&0xf)<<24)
#define HSTX_CTRL_CSR_CLKPHASE_MASK HSTX_CTRL_CSR_CLKPHASE(ALL1)
#define HSTX_CTRL_CSR_N_SHIFTS(v) (((v)&0x1f)<<16)
#define HSTX_CTRL_CSR_N_SHIFTS_MASK HSTX_CTRL_CSR_N_SHIFTS(ALL1)
#define HSTX_CTRL_CSR_SHIFT(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_CSR_SHIFT_MASK HSTX_CTRL_CSR_SHIFT(ALL1)
#define HSTX_CTRL_CSR_COUPLED_SEL(v) (((v)&0x3)<<5)
#define HSTX_CTRL_CSR_COUPLED_SEL_MASK HSTX_CTRL_CSR_COUPLED_SEL(ALL1)
#define HSTX_CTRL_CSR_COUPLED_MODE(v) (((v)&0x1)<<4)
#define HSTX_CTRL_CSR_COUPLED_MODE_MASK HSTX_CTRL_CSR_COUPLED_MODE(ALL1)
#define HSTX_CTRL_CSR_EXPAND_EN(v) (((v)&0x1)<<1)
#define HSTX_CTRL_CSR_EXPAND_EN_MASK HSTX_CTRL_CSR_EXPAND_EN(ALL1)
#define HSTX_CTRL_CSR_EN(v) (((v)&0x1)<<0)
#define HSTX_CTRL_CSR_EN_MASK HSTX_CTRL_CSR_EN(ALL1)

/*BIT0 Register macros*/

#define HSTX_CTRL_BIT0_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT0_CLK_MASK HSTX_CTRL_BIT0_CLK(ALL1)
#define HSTX_CTRL_BIT0_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT0_INV_MASK HSTX_CTRL_BIT0_INV(ALL1)
#define HSTX_CTRL_BIT0_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT0_SEL_N_MASK HSTX_CTRL_BIT0_SEL_N(ALL1)
#define HSTX_CTRL_BIT0_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT0_SEL_P_MASK HSTX_CTRL_BIT0_SEL_P(ALL1)

/*BIT1 Register macros*/

#define HSTX_CTRL_BIT1_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT1_CLK_MASK HSTX_CTRL_BIT1_CLK(ALL1)
#define HSTX_CTRL_BIT1_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT1_INV_MASK HSTX_CTRL_BIT1_INV(ALL1)
#define HSTX_CTRL_BIT1_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT1_SEL_N_MASK HSTX_CTRL_BIT1_SEL_N(ALL1)
#define HSTX_CTRL_BIT1_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT1_SEL_P_MASK HSTX_CTRL_BIT1_SEL_P(ALL1)

/*BIT2 Register macros*/

#define HSTX_CTRL_BIT2_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT2_CLK_MASK HSTX_CTRL_BIT2_CLK(ALL1)
#define HSTX_CTRL_BIT2_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT2_INV_MASK HSTX_CTRL_BIT2_INV(ALL1)
#define HSTX_CTRL_BIT2_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT2_SEL_N_MASK HSTX_CTRL_BIT2_SEL_N(ALL1)
#define HSTX_CTRL_BIT2_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT2_SEL_P_MASK HSTX_CTRL_BIT2_SEL_P(ALL1)

/*BIT3 Register macros*/

#define HSTX_CTRL_BIT3_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT3_CLK_MASK HSTX_CTRL_BIT3_CLK(ALL1)
#define HSTX_CTRL_BIT3_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT3_INV_MASK HSTX_CTRL_BIT3_INV(ALL1)
#define HSTX_CTRL_BIT3_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT3_SEL_N_MASK HSTX_CTRL_BIT3_SEL_N(ALL1)
#define HSTX_CTRL_BIT3_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT3_SEL_P_MASK HSTX_CTRL_BIT3_SEL_P(ALL1)

/*BIT4 Register macros*/

#define HSTX_CTRL_BIT4_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT4_CLK_MASK HSTX_CTRL_BIT4_CLK(ALL1)
#define HSTX_CTRL_BIT4_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT4_INV_MASK HSTX_CTRL_BIT4_INV(ALL1)
#define HSTX_CTRL_BIT4_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT4_SEL_N_MASK HSTX_CTRL_BIT4_SEL_N(ALL1)
#define HSTX_CTRL_BIT4_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT4_SEL_P_MASK HSTX_CTRL_BIT4_SEL_P(ALL1)

/*BIT5 Register macros*/

#define HSTX_CTRL_BIT5_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT5_CLK_MASK HSTX_CTRL_BIT5_CLK(ALL1)
#define HSTX_CTRL_BIT5_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT5_INV_MASK HSTX_CTRL_BIT5_INV(ALL1)
#define HSTX_CTRL_BIT5_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT5_SEL_N_MASK HSTX_CTRL_BIT5_SEL_N(ALL1)
#define HSTX_CTRL_BIT5_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT5_SEL_P_MASK HSTX_CTRL_BIT5_SEL_P(ALL1)

/*BIT6 Register macros*/

#define HSTX_CTRL_BIT6_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT6_CLK_MASK HSTX_CTRL_BIT6_CLK(ALL1)
#define HSTX_CTRL_BIT6_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT6_INV_MASK HSTX_CTRL_BIT6_INV(ALL1)
#define HSTX_CTRL_BIT6_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT6_SEL_N_MASK HSTX_CTRL_BIT6_SEL_N(ALL1)
#define HSTX_CTRL_BIT6_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT6_SEL_P_MASK HSTX_CTRL_BIT6_SEL_P(ALL1)

/*BIT7 Register macros*/

#define HSTX_CTRL_BIT7_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT7_CLK_MASK HSTX_CTRL_BIT7_CLK(ALL1)
#define HSTX_CTRL_BIT7_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT7_INV_MASK HSTX_CTRL_BIT7_INV(ALL1)
#define HSTX_CTRL_BIT7_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT7_SEL_N_MASK HSTX_CTRL_BIT7_SEL_N(ALL1)
#define HSTX_CTRL_BIT7_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT7_SEL_P_MASK HSTX_CTRL_BIT7_SEL_P(ALL1)

/*EXPAND_SHIFT Register macros*/

#define HSTX_CTRL_EXPAND_SHIFT_ENC_N_SHIFTS(v) (((v)&0x1f)<<24)
#define HSTX_CTRL_EXPAND_SHIFT_ENC_N_SHIFTS_MASK HSTX_CTRL_EXPAND_SHIFT_ENC_N_SHIFTS(ALL1)
#define HSTX_CTRL_EXPAND_SHIFT_ENC_SHIFT(v) (((v)&0x1f)<<16)
#define HSTX_CTRL_EXPAND_SHIFT_ENC_SHIFT_MASK HSTX_CTRL_EXPAND_SHIFT_ENC_SHIFT(ALL1)
#define HSTX_CTRL_EXPAND_SHIFT_RAW_N_SHIFTS(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_EXPAND_SHIFT_RAW_N_SHIFTS_MASK HSTX_CTRL_EXPAND_SHIFT_RAW_N_SHIFTS(ALL1)
#define HSTX_CTRL_EXPAND_SHIFT_RAW_SHIFT(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_EXPAND_SHIFT_RAW_SHIFT_MASK HSTX_CTRL_EXPAND_SHIFT_RAW_SHIFT(ALL1)

/*EXPAND_TMDS Register macros*/

#define HSTX_CTRL_EXPAND_TMDS_L2_NBITS(v) (((v)&0x7)<<21)
#define HSTX_CTRL_EXPAND_TMDS_L2_NBITS_MASK HSTX_CTRL_EXPAND_TMDS_L2_NBITS(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L2_ROT(v) (((v)&0x1f)<<16)
#define HSTX_CTRL_EXPAND_TMDS_L2_ROT_MASK HSTX_CTRL_EXPAND_TMDS_L2_ROT(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L1_NBITS(v) (((v)&0x7)<<13)
#define HSTX_CTRL_EXPAND_TMDS_L1_NBITS_MASK HSTX_CTRL_EXPAND_TMDS_L1_NBITS(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L1_ROT(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_EXPAND_TMDS_L1_ROT_MASK HSTX_CTRL_EXPAND_TMDS_L1_ROT(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L0_NBITS(v) (((v)&0x7)<<5)
#define HSTX_CTRL_EXPAND_TMDS_L0_NBITS_MASK HSTX_CTRL_EXPAND_TMDS_L0_NBITS(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L0_ROT(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_EXPAND_TMDS_L0_ROT_MASK HSTX_CTRL_EXPAND_TMDS_L0_ROT(ALL1)

#endif

