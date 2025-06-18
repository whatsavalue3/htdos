
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

#ifndef RP2350_CLOCKS_H
#define RP2350_CLOCKS_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t clk_gpout0_ctrl;
		uint32_t clk_gpout0_div;
		uint32_t clk_gpout0_selected;
		uint32_t clk_gpout1_ctrl;
		uint32_t clk_gpout1_div;
		uint32_t clk_gpout1_selected;
		uint32_t clk_gpout2_ctrl;
		uint32_t clk_gpout2_div;
		uint32_t clk_gpout2_selected;
		uint32_t clk_gpout3_ctrl;
		uint32_t clk_gpout3_div;
		uint32_t clk_gpout3_selected;
		uint32_t clk_ref_ctrl;
		uint32_t clk_ref_div;
		uint32_t clk_ref_selected;
		uint32_t clk_sys_ctrl;
		uint32_t clk_sys_div;
		uint32_t clk_sys_selected;
		uint32_t clk_peri_ctrl;
		uint32_t clk_peri_div;
		uint32_t clk_peri_selected;
		uint32_t clk_hstx_ctrl;
		uint32_t clk_hstx_div;
		uint32_t clk_hstx_selected;
		uint32_t clk_usb_ctrl;
		uint32_t clk_usb_div;
		uint32_t clk_usb_selected;
		uint32_t clk_adc_ctrl;
		uint32_t clk_adc_div;
		uint32_t clk_adc_selected;
		uint32_t dftclk_xosc_ctrl;
		uint32_t dftclk_rosc_ctrl;
		uint32_t dftclk_lposc_ctrl;
		uint32_t clk_sys_resus_ctrl;
		uint32_t clk_sys_resus_status;
		uint32_t fc0_ref_khz;
		uint32_t fc0_min_khz;
		uint32_t fc0_max_khz;
		uint32_t fc0_delay;
		uint32_t fc0_interval;
		uint32_t fc0_src;
		uint32_t fc0_status;
		uint32_t fc0_result;
		uint32_t wake_en0;
		uint32_t wake_en1;
		uint32_t sleep_en0;
		uint32_t sleep_en1;
		uint32_t enabled0;
		uint32_t enabled1;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[971];
		uint32_t clk_gpout0_ctrl_xor;
		uint32_t clk_gpout0_div_xor;
		uint32_t clk_gpout0_selected_xor;
		uint32_t clk_gpout1_ctrl_xor;
		uint32_t clk_gpout1_div_xor;
		uint32_t clk_gpout1_selected_xor;
		uint32_t clk_gpout2_ctrl_xor;
		uint32_t clk_gpout2_div_xor;
		uint32_t clk_gpout2_selected_xor;
		uint32_t clk_gpout3_ctrl_xor;
		uint32_t clk_gpout3_div_xor;
		uint32_t clk_gpout3_selected_xor;
		uint32_t clk_ref_ctrl_xor;
		uint32_t clk_ref_div_xor;
		uint32_t clk_ref_selected_xor;
		uint32_t clk_sys_ctrl_xor;
		uint32_t clk_sys_div_xor;
		uint32_t clk_sys_selected_xor;
		uint32_t clk_peri_ctrl_xor;
		uint32_t clk_peri_div_xor;
		uint32_t clk_peri_selected_xor;
		uint32_t clk_hstx_ctrl_xor;
		uint32_t clk_hstx_div_xor;
		uint32_t clk_hstx_selected_xor;
		uint32_t clk_usb_ctrl_xor;
		uint32_t clk_usb_div_xor;
		uint32_t clk_usb_selected_xor;
		uint32_t clk_adc_ctrl_xor;
		uint32_t clk_adc_div_xor;
		uint32_t clk_adc_selected_xor;
		uint32_t dftclk_xosc_ctrl_xor;
		uint32_t dftclk_rosc_ctrl_xor;
		uint32_t dftclk_lposc_ctrl_xor;
		uint32_t clk_sys_resus_ctrl_xor;
		uint32_t clk_sys_resus_status_xor;
		uint32_t fc0_ref_khz_xor;
		uint32_t fc0_min_khz_xor;
		uint32_t fc0_max_khz_xor;
		uint32_t fc0_delay_xor;
		uint32_t fc0_interval_xor;
		uint32_t fc0_src_xor;
		uint32_t fc0_status_xor;
		uint32_t fc0_result_xor;
		uint32_t wake_en0_xor;
		uint32_t wake_en1_xor;
		uint32_t sleep_en0_xor;
		uint32_t sleep_en1_xor;
		uint32_t enabled0_xor;
		uint32_t enabled1_xor;
		uint32_t intr_xor;
		uint32_t inte_xor;
		uint32_t intf_xor;
		uint32_t ints_xor;
		uint32_t RSVDxor_0[971];
		uint32_t clk_gpout0_ctrl_set;
		uint32_t clk_gpout0_div_set;
		uint32_t clk_gpout0_selected_set;
		uint32_t clk_gpout1_ctrl_set;
		uint32_t clk_gpout1_div_set;
		uint32_t clk_gpout1_selected_set;
		uint32_t clk_gpout2_ctrl_set;
		uint32_t clk_gpout2_div_set;
		uint32_t clk_gpout2_selected_set;
		uint32_t clk_gpout3_ctrl_set;
		uint32_t clk_gpout3_div_set;
		uint32_t clk_gpout3_selected_set;
		uint32_t clk_ref_ctrl_set;
		uint32_t clk_ref_div_set;
		uint32_t clk_ref_selected_set;
		uint32_t clk_sys_ctrl_set;
		uint32_t clk_sys_div_set;
		uint32_t clk_sys_selected_set;
		uint32_t clk_peri_ctrl_set;
		uint32_t clk_peri_div_set;
		uint32_t clk_peri_selected_set;
		uint32_t clk_hstx_ctrl_set;
		uint32_t clk_hstx_div_set;
		uint32_t clk_hstx_selected_set;
		uint32_t clk_usb_ctrl_set;
		uint32_t clk_usb_div_set;
		uint32_t clk_usb_selected_set;
		uint32_t clk_adc_ctrl_set;
		uint32_t clk_adc_div_set;
		uint32_t clk_adc_selected_set;
		uint32_t dftclk_xosc_ctrl_set;
		uint32_t dftclk_rosc_ctrl_set;
		uint32_t dftclk_lposc_ctrl_set;
		uint32_t clk_sys_resus_ctrl_set;
		uint32_t clk_sys_resus_status_set;
		uint32_t fc0_ref_khz_set;
		uint32_t fc0_min_khz_set;
		uint32_t fc0_max_khz_set;
		uint32_t fc0_delay_set;
		uint32_t fc0_interval_set;
		uint32_t fc0_src_set;
		uint32_t fc0_status_set;
		uint32_t fc0_result_set;
		uint32_t wake_en0_set;
		uint32_t wake_en1_set;
		uint32_t sleep_en0_set;
		uint32_t sleep_en1_set;
		uint32_t enabled0_set;
		uint32_t enabled1_set;
		uint32_t intr_set;
		uint32_t inte_set;
		uint32_t intf_set;
		uint32_t ints_set;
		uint32_t RSVDset_0[971];
		uint32_t clk_gpout0_ctrl_clr;
		uint32_t clk_gpout0_div_clr;
		uint32_t clk_gpout0_selected_clr;
		uint32_t clk_gpout1_ctrl_clr;
		uint32_t clk_gpout1_div_clr;
		uint32_t clk_gpout1_selected_clr;
		uint32_t clk_gpout2_ctrl_clr;
		uint32_t clk_gpout2_div_clr;
		uint32_t clk_gpout2_selected_clr;
		uint32_t clk_gpout3_ctrl_clr;
		uint32_t clk_gpout3_div_clr;
		uint32_t clk_gpout3_selected_clr;
		uint32_t clk_ref_ctrl_clr;
		uint32_t clk_ref_div_clr;
		uint32_t clk_ref_selected_clr;
		uint32_t clk_sys_ctrl_clr;
		uint32_t clk_sys_div_clr;
		uint32_t clk_sys_selected_clr;
		uint32_t clk_peri_ctrl_clr;
		uint32_t clk_peri_div_clr;
		uint32_t clk_peri_selected_clr;
		uint32_t clk_hstx_ctrl_clr;
		uint32_t clk_hstx_div_clr;
		uint32_t clk_hstx_selected_clr;
		uint32_t clk_usb_ctrl_clr;
		uint32_t clk_usb_div_clr;
		uint32_t clk_usb_selected_clr;
		uint32_t clk_adc_ctrl_clr;
		uint32_t clk_adc_div_clr;
		uint32_t clk_adc_selected_clr;
		uint32_t dftclk_xosc_ctrl_clr;
		uint32_t dftclk_rosc_ctrl_clr;
		uint32_t dftclk_lposc_ctrl_clr;
		uint32_t clk_sys_resus_ctrl_clr;
		uint32_t clk_sys_resus_status_clr;
		uint32_t fc0_ref_khz_clr;
		uint32_t fc0_min_khz_clr;
		uint32_t fc0_max_khz_clr;
		uint32_t fc0_delay_clr;
		uint32_t fc0_interval_clr;
		uint32_t fc0_src_clr;
		uint32_t fc0_status_clr;
		uint32_t fc0_result_clr;
		uint32_t wake_en0_clr;
		uint32_t wake_en1_clr;
		uint32_t sleep_en0_clr;
		uint32_t sleep_en1_clr;
		uint32_t enabled0_clr;
		uint32_t enabled1_clr;
		uint32_t intr_clr;
		uint32_t inte_clr;
		uint32_t intf_clr;
		uint32_t ints_clr;
		uint32_t RSVDclr_0[971];
} CLOCKS_REG_BLOCKS;


/*IO Registers as struct*/

#define clocks (*(CLOCKS_REG_BLOCKS volatile *)0x40010000)


/*IO Registers AS MACROS*/

#define CLOCKS_CLK_GPOUT0_CTRL (*(volatile uint32_t *)0x40010000)
#define CLOCKS_CLK_GPOUT0_DIV (*(volatile uint32_t *)0x40010004)
#define CLOCKS_CLK_GPOUT0_SELECTED (*(volatile uint32_t *)0x40010008)
#define CLOCKS_CLK_GPOUT1_CTRL (*(volatile uint32_t *)0x4001000c)
#define CLOCKS_CLK_GPOUT1_DIV (*(volatile uint32_t *)0x40010010)
#define CLOCKS_CLK_GPOUT1_SELECTED (*(volatile uint32_t *)0x40010014)
#define CLOCKS_CLK_GPOUT2_CTRL (*(volatile uint32_t *)0x40010018)
#define CLOCKS_CLK_GPOUT2_DIV (*(volatile uint32_t *)0x4001001c)
#define CLOCKS_CLK_GPOUT2_SELECTED (*(volatile uint32_t *)0x40010020)
#define CLOCKS_CLK_GPOUT3_CTRL (*(volatile uint32_t *)0x40010024)
#define CLOCKS_CLK_GPOUT3_DIV (*(volatile uint32_t *)0x40010028)
#define CLOCKS_CLK_GPOUT3_SELECTED (*(volatile uint32_t *)0x4001002c)
#define CLOCKS_CLK_REF_CTRL (*(volatile uint32_t *)0x40010030)
#define CLOCKS_CLK_REF_DIV (*(volatile uint32_t *)0x40010034)
#define CLOCKS_CLK_REF_SELECTED (*(volatile uint32_t *)0x40010038)
#define CLOCKS_CLK_SYS_CTRL (*(volatile uint32_t *)0x4001003c)
#define CLOCKS_CLK_SYS_DIV (*(volatile uint32_t *)0x40010040)
#define CLOCKS_CLK_SYS_SELECTED (*(volatile uint32_t *)0x40010044)
#define CLOCKS_CLK_PERI_CTRL (*(volatile uint32_t *)0x40010048)
#define CLOCKS_CLK_PERI_DIV (*(volatile uint32_t *)0x4001004c)
#define CLOCKS_CLK_PERI_SELECTED (*(volatile uint32_t *)0x40010050)
#define CLOCKS_CLK_HSTX_CTRL (*(volatile uint32_t *)0x40010054)
#define CLOCKS_CLK_HSTX_DIV (*(volatile uint32_t *)0x40010058)
#define CLOCKS_CLK_HSTX_SELECTED (*(volatile uint32_t *)0x4001005c)
#define CLOCKS_CLK_USB_CTRL (*(volatile uint32_t *)0x40010060)
#define CLOCKS_CLK_USB_DIV (*(volatile uint32_t *)0x40010064)
#define CLOCKS_CLK_USB_SELECTED (*(volatile uint32_t *)0x40010068)
#define CLOCKS_CLK_ADC_CTRL (*(volatile uint32_t *)0x4001006c)
#define CLOCKS_CLK_ADC_DIV (*(volatile uint32_t *)0x40010070)
#define CLOCKS_CLK_ADC_SELECTED (*(volatile uint32_t *)0x40010074)
#define CLOCKS_DFTCLK_XOSC_CTRL (*(volatile uint32_t *)0x40010078)
#define CLOCKS_DFTCLK_ROSC_CTRL (*(volatile uint32_t *)0x4001007c)
#define CLOCKS_DFTCLK_LPOSC_CTRL (*(volatile uint32_t *)0x40010080)
#define CLOCKS_CLK_SYS_RESUS_CTRL (*(volatile uint32_t *)0x40010084)
#define CLOCKS_CLK_SYS_RESUS_STATUS (*(volatile uint32_t *)0x40010088)
#define CLOCKS_FC0_REF_KHZ (*(volatile uint32_t *)0x4001008c)
#define CLOCKS_FC0_MIN_KHZ (*(volatile uint32_t *)0x40010090)
#define CLOCKS_FC0_MAX_KHZ (*(volatile uint32_t *)0x40010094)
#define CLOCKS_FC0_DELAY (*(volatile uint32_t *)0x40010098)
#define CLOCKS_FC0_INTERVAL (*(volatile uint32_t *)0x4001009c)
#define CLOCKS_FC0_SRC (*(volatile uint32_t *)0x400100a0)
#define CLOCKS_FC0_STATUS (*(volatile uint32_t *)0x400100a4)
#define CLOCKS_FC0_RESULT (*(volatile uint32_t *)0x400100a8)
#define CLOCKS_WAKE_EN0 (*(volatile uint32_t *)0x400100ac)
#define CLOCKS_WAKE_EN1 (*(volatile uint32_t *)0x400100b0)
#define CLOCKS_SLEEP_EN0 (*(volatile uint32_t *)0x400100b4)
#define CLOCKS_SLEEP_EN1 (*(volatile uint32_t *)0x400100b8)
#define CLOCKS_ENABLED0 (*(volatile uint32_t *)0x400100bc)
#define CLOCKS_ENABLED1 (*(volatile uint32_t *)0x400100c0)
#define CLOCKS_INTR (*(volatile uint32_t *)0x400100c4)
#define CLOCKS_INTE (*(volatile uint32_t *)0x400100c8)
#define CLOCKS_INTF (*(volatile uint32_t *)0x400100cc)
#define CLOCKS_INTS (*(volatile uint32_t *)0x400100d0)
#define CLOCKS_CLK_GPOUT0_CTRL_XOR (*(volatile uint32_t *)0x40011000)
#define CLOCKS_CLK_GPOUT0_DIV_XOR (*(volatile uint32_t *)0x40011004)
#define CLOCKS_CLK_GPOUT0_SELECTED_XOR (*(volatile uint32_t *)0x40011008)
#define CLOCKS_CLK_GPOUT1_CTRL_XOR (*(volatile uint32_t *)0x4001100c)
#define CLOCKS_CLK_GPOUT1_DIV_XOR (*(volatile uint32_t *)0x40011010)
#define CLOCKS_CLK_GPOUT1_SELECTED_XOR (*(volatile uint32_t *)0x40011014)
#define CLOCKS_CLK_GPOUT2_CTRL_XOR (*(volatile uint32_t *)0x40011018)
#define CLOCKS_CLK_GPOUT2_DIV_XOR (*(volatile uint32_t *)0x4001101c)
#define CLOCKS_CLK_GPOUT2_SELECTED_XOR (*(volatile uint32_t *)0x40011020)
#define CLOCKS_CLK_GPOUT3_CTRL_XOR (*(volatile uint32_t *)0x40011024)
#define CLOCKS_CLK_GPOUT3_DIV_XOR (*(volatile uint32_t *)0x40011028)
#define CLOCKS_CLK_GPOUT3_SELECTED_XOR (*(volatile uint32_t *)0x4001102c)
#define CLOCKS_CLK_REF_CTRL_XOR (*(volatile uint32_t *)0x40011030)
#define CLOCKS_CLK_REF_DIV_XOR (*(volatile uint32_t *)0x40011034)
#define CLOCKS_CLK_REF_SELECTED_XOR (*(volatile uint32_t *)0x40011038)
#define CLOCKS_CLK_SYS_CTRL_XOR (*(volatile uint32_t *)0x4001103c)
#define CLOCKS_CLK_SYS_DIV_XOR (*(volatile uint32_t *)0x40011040)
#define CLOCKS_CLK_SYS_SELECTED_XOR (*(volatile uint32_t *)0x40011044)
#define CLOCKS_CLK_PERI_CTRL_XOR (*(volatile uint32_t *)0x40011048)
#define CLOCKS_CLK_PERI_DIV_XOR (*(volatile uint32_t *)0x4001104c)
#define CLOCKS_CLK_PERI_SELECTED_XOR (*(volatile uint32_t *)0x40011050)
#define CLOCKS_CLK_HSTX_CTRL_XOR (*(volatile uint32_t *)0x40011054)
#define CLOCKS_CLK_HSTX_DIV_XOR (*(volatile uint32_t *)0x40011058)
#define CLOCKS_CLK_HSTX_SELECTED_XOR (*(volatile uint32_t *)0x4001105c)
#define CLOCKS_CLK_USB_CTRL_XOR (*(volatile uint32_t *)0x40011060)
#define CLOCKS_CLK_USB_DIV_XOR (*(volatile uint32_t *)0x40011064)
#define CLOCKS_CLK_USB_SELECTED_XOR (*(volatile uint32_t *)0x40011068)
#define CLOCKS_CLK_ADC_CTRL_XOR (*(volatile uint32_t *)0x4001106c)
#define CLOCKS_CLK_ADC_DIV_XOR (*(volatile uint32_t *)0x40011070)
#define CLOCKS_CLK_ADC_SELECTED_XOR (*(volatile uint32_t *)0x40011074)
#define CLOCKS_DFTCLK_XOSC_CTRL_XOR (*(volatile uint32_t *)0x40011078)
#define CLOCKS_DFTCLK_ROSC_CTRL_XOR (*(volatile uint32_t *)0x4001107c)
#define CLOCKS_DFTCLK_LPOSC_CTRL_XOR (*(volatile uint32_t *)0x40011080)
#define CLOCKS_CLK_SYS_RESUS_CTRL_XOR (*(volatile uint32_t *)0x40011084)
#define CLOCKS_CLK_SYS_RESUS_STATUS_XOR (*(volatile uint32_t *)0x40011088)
#define CLOCKS_FC0_REF_KHZ_XOR (*(volatile uint32_t *)0x4001108c)
#define CLOCKS_FC0_MIN_KHZ_XOR (*(volatile uint32_t *)0x40011090)
#define CLOCKS_FC0_MAX_KHZ_XOR (*(volatile uint32_t *)0x40011094)
#define CLOCKS_FC0_DELAY_XOR (*(volatile uint32_t *)0x40011098)
#define CLOCKS_FC0_INTERVAL_XOR (*(volatile uint32_t *)0x4001109c)
#define CLOCKS_FC0_SRC_XOR (*(volatile uint32_t *)0x400110a0)
#define CLOCKS_FC0_STATUS_XOR (*(volatile uint32_t *)0x400110a4)
#define CLOCKS_FC0_RESULT_XOR (*(volatile uint32_t *)0x400110a8)
#define CLOCKS_WAKE_EN0_XOR (*(volatile uint32_t *)0x400110ac)
#define CLOCKS_WAKE_EN1_XOR (*(volatile uint32_t *)0x400110b0)
#define CLOCKS_SLEEP_EN0_XOR (*(volatile uint32_t *)0x400110b4)
#define CLOCKS_SLEEP_EN1_XOR (*(volatile uint32_t *)0x400110b8)
#define CLOCKS_ENABLED0_XOR (*(volatile uint32_t *)0x400110bc)
#define CLOCKS_ENABLED1_XOR (*(volatile uint32_t *)0x400110c0)
#define CLOCKS_INTR_XOR (*(volatile uint32_t *)0x400110c4)
#define CLOCKS_INTE_XOR (*(volatile uint32_t *)0x400110c8)
#define CLOCKS_INTF_XOR (*(volatile uint32_t *)0x400110cc)
#define CLOCKS_INTS_XOR (*(volatile uint32_t *)0x400110d0)
#define CLOCKS_CLK_GPOUT0_CTRL_SET (*(volatile uint32_t *)0x40012000)
#define CLOCKS_CLK_GPOUT0_DIV_SET (*(volatile uint32_t *)0x40012004)
#define CLOCKS_CLK_GPOUT0_SELECTED_SET (*(volatile uint32_t *)0x40012008)
#define CLOCKS_CLK_GPOUT1_CTRL_SET (*(volatile uint32_t *)0x4001200c)
#define CLOCKS_CLK_GPOUT1_DIV_SET (*(volatile uint32_t *)0x40012010)
#define CLOCKS_CLK_GPOUT1_SELECTED_SET (*(volatile uint32_t *)0x40012014)
#define CLOCKS_CLK_GPOUT2_CTRL_SET (*(volatile uint32_t *)0x40012018)
#define CLOCKS_CLK_GPOUT2_DIV_SET (*(volatile uint32_t *)0x4001201c)
#define CLOCKS_CLK_GPOUT2_SELECTED_SET (*(volatile uint32_t *)0x40012020)
#define CLOCKS_CLK_GPOUT3_CTRL_SET (*(volatile uint32_t *)0x40012024)
#define CLOCKS_CLK_GPOUT3_DIV_SET (*(volatile uint32_t *)0x40012028)
#define CLOCKS_CLK_GPOUT3_SELECTED_SET (*(volatile uint32_t *)0x4001202c)
#define CLOCKS_CLK_REF_CTRL_SET (*(volatile uint32_t *)0x40012030)
#define CLOCKS_CLK_REF_DIV_SET (*(volatile uint32_t *)0x40012034)
#define CLOCKS_CLK_REF_SELECTED_SET (*(volatile uint32_t *)0x40012038)
#define CLOCKS_CLK_SYS_CTRL_SET (*(volatile uint32_t *)0x4001203c)
#define CLOCKS_CLK_SYS_DIV_SET (*(volatile uint32_t *)0x40012040)
#define CLOCKS_CLK_SYS_SELECTED_SET (*(volatile uint32_t *)0x40012044)
#define CLOCKS_CLK_PERI_CTRL_SET (*(volatile uint32_t *)0x40012048)
#define CLOCKS_CLK_PERI_DIV_SET (*(volatile uint32_t *)0x4001204c)
#define CLOCKS_CLK_PERI_SELECTED_SET (*(volatile uint32_t *)0x40012050)
#define CLOCKS_CLK_HSTX_CTRL_SET (*(volatile uint32_t *)0x40012054)
#define CLOCKS_CLK_HSTX_DIV_SET (*(volatile uint32_t *)0x40012058)
#define CLOCKS_CLK_HSTX_SELECTED_SET (*(volatile uint32_t *)0x4001205c)
#define CLOCKS_CLK_USB_CTRL_SET (*(volatile uint32_t *)0x40012060)
#define CLOCKS_CLK_USB_DIV_SET (*(volatile uint32_t *)0x40012064)
#define CLOCKS_CLK_USB_SELECTED_SET (*(volatile uint32_t *)0x40012068)
#define CLOCKS_CLK_ADC_CTRL_SET (*(volatile uint32_t *)0x4001206c)
#define CLOCKS_CLK_ADC_DIV_SET (*(volatile uint32_t *)0x40012070)
#define CLOCKS_CLK_ADC_SELECTED_SET (*(volatile uint32_t *)0x40012074)
#define CLOCKS_DFTCLK_XOSC_CTRL_SET (*(volatile uint32_t *)0x40012078)
#define CLOCKS_DFTCLK_ROSC_CTRL_SET (*(volatile uint32_t *)0x4001207c)
#define CLOCKS_DFTCLK_LPOSC_CTRL_SET (*(volatile uint32_t *)0x40012080)
#define CLOCKS_CLK_SYS_RESUS_CTRL_SET (*(volatile uint32_t *)0x40012084)
#define CLOCKS_CLK_SYS_RESUS_STATUS_SET (*(volatile uint32_t *)0x40012088)
#define CLOCKS_FC0_REF_KHZ_SET (*(volatile uint32_t *)0x4001208c)
#define CLOCKS_FC0_MIN_KHZ_SET (*(volatile uint32_t *)0x40012090)
#define CLOCKS_FC0_MAX_KHZ_SET (*(volatile uint32_t *)0x40012094)
#define CLOCKS_FC0_DELAY_SET (*(volatile uint32_t *)0x40012098)
#define CLOCKS_FC0_INTERVAL_SET (*(volatile uint32_t *)0x4001209c)
#define CLOCKS_FC0_SRC_SET (*(volatile uint32_t *)0x400120a0)
#define CLOCKS_FC0_STATUS_SET (*(volatile uint32_t *)0x400120a4)
#define CLOCKS_FC0_RESULT_SET (*(volatile uint32_t *)0x400120a8)
#define CLOCKS_WAKE_EN0_SET (*(volatile uint32_t *)0x400120ac)
#define CLOCKS_WAKE_EN1_SET (*(volatile uint32_t *)0x400120b0)
#define CLOCKS_SLEEP_EN0_SET (*(volatile uint32_t *)0x400120b4)
#define CLOCKS_SLEEP_EN1_SET (*(volatile uint32_t *)0x400120b8)
#define CLOCKS_ENABLED0_SET (*(volatile uint32_t *)0x400120bc)
#define CLOCKS_ENABLED1_SET (*(volatile uint32_t *)0x400120c0)
#define CLOCKS_INTR_SET (*(volatile uint32_t *)0x400120c4)
#define CLOCKS_INTE_SET (*(volatile uint32_t *)0x400120c8)
#define CLOCKS_INTF_SET (*(volatile uint32_t *)0x400120cc)
#define CLOCKS_INTS_SET (*(volatile uint32_t *)0x400120d0)
#define CLOCKS_CLK_GPOUT0_CTRL_CLR (*(volatile uint32_t *)0x40013000)
#define CLOCKS_CLK_GPOUT0_DIV_CLR (*(volatile uint32_t *)0x40013004)
#define CLOCKS_CLK_GPOUT0_SELECTED_CLR (*(volatile uint32_t *)0x40013008)
#define CLOCKS_CLK_GPOUT1_CTRL_CLR (*(volatile uint32_t *)0x4001300c)
#define CLOCKS_CLK_GPOUT1_DIV_CLR (*(volatile uint32_t *)0x40013010)
#define CLOCKS_CLK_GPOUT1_SELECTED_CLR (*(volatile uint32_t *)0x40013014)
#define CLOCKS_CLK_GPOUT2_CTRL_CLR (*(volatile uint32_t *)0x40013018)
#define CLOCKS_CLK_GPOUT2_DIV_CLR (*(volatile uint32_t *)0x4001301c)
#define CLOCKS_CLK_GPOUT2_SELECTED_CLR (*(volatile uint32_t *)0x40013020)
#define CLOCKS_CLK_GPOUT3_CTRL_CLR (*(volatile uint32_t *)0x40013024)
#define CLOCKS_CLK_GPOUT3_DIV_CLR (*(volatile uint32_t *)0x40013028)
#define CLOCKS_CLK_GPOUT3_SELECTED_CLR (*(volatile uint32_t *)0x4001302c)
#define CLOCKS_CLK_REF_CTRL_CLR (*(volatile uint32_t *)0x40013030)
#define CLOCKS_CLK_REF_DIV_CLR (*(volatile uint32_t *)0x40013034)
#define CLOCKS_CLK_REF_SELECTED_CLR (*(volatile uint32_t *)0x40013038)
#define CLOCKS_CLK_SYS_CTRL_CLR (*(volatile uint32_t *)0x4001303c)
#define CLOCKS_CLK_SYS_DIV_CLR (*(volatile uint32_t *)0x40013040)
#define CLOCKS_CLK_SYS_SELECTED_CLR (*(volatile uint32_t *)0x40013044)
#define CLOCKS_CLK_PERI_CTRL_CLR (*(volatile uint32_t *)0x40013048)
#define CLOCKS_CLK_PERI_DIV_CLR (*(volatile uint32_t *)0x4001304c)
#define CLOCKS_CLK_PERI_SELECTED_CLR (*(volatile uint32_t *)0x40013050)
#define CLOCKS_CLK_HSTX_CTRL_CLR (*(volatile uint32_t *)0x40013054)
#define CLOCKS_CLK_HSTX_DIV_CLR (*(volatile uint32_t *)0x40013058)
#define CLOCKS_CLK_HSTX_SELECTED_CLR (*(volatile uint32_t *)0x4001305c)
#define CLOCKS_CLK_USB_CTRL_CLR (*(volatile uint32_t *)0x40013060)
#define CLOCKS_CLK_USB_DIV_CLR (*(volatile uint32_t *)0x40013064)
#define CLOCKS_CLK_USB_SELECTED_CLR (*(volatile uint32_t *)0x40013068)
#define CLOCKS_CLK_ADC_CTRL_CLR (*(volatile uint32_t *)0x4001306c)
#define CLOCKS_CLK_ADC_DIV_CLR (*(volatile uint32_t *)0x40013070)
#define CLOCKS_CLK_ADC_SELECTED_CLR (*(volatile uint32_t *)0x40013074)
#define CLOCKS_DFTCLK_XOSC_CTRL_CLR (*(volatile uint32_t *)0x40013078)
#define CLOCKS_DFTCLK_ROSC_CTRL_CLR (*(volatile uint32_t *)0x4001307c)
#define CLOCKS_DFTCLK_LPOSC_CTRL_CLR (*(volatile uint32_t *)0x40013080)
#define CLOCKS_CLK_SYS_RESUS_CTRL_CLR (*(volatile uint32_t *)0x40013084)
#define CLOCKS_CLK_SYS_RESUS_STATUS_CLR (*(volatile uint32_t *)0x40013088)
#define CLOCKS_FC0_REF_KHZ_CLR (*(volatile uint32_t *)0x4001308c)
#define CLOCKS_FC0_MIN_KHZ_CLR (*(volatile uint32_t *)0x40013090)
#define CLOCKS_FC0_MAX_KHZ_CLR (*(volatile uint32_t *)0x40013094)
#define CLOCKS_FC0_DELAY_CLR (*(volatile uint32_t *)0x40013098)
#define CLOCKS_FC0_INTERVAL_CLR (*(volatile uint32_t *)0x4001309c)
#define CLOCKS_FC0_SRC_CLR (*(volatile uint32_t *)0x400130a0)
#define CLOCKS_FC0_STATUS_CLR (*(volatile uint32_t *)0x400130a4)
#define CLOCKS_FC0_RESULT_CLR (*(volatile uint32_t *)0x400130a8)
#define CLOCKS_WAKE_EN0_CLR (*(volatile uint32_t *)0x400130ac)
#define CLOCKS_WAKE_EN1_CLR (*(volatile uint32_t *)0x400130b0)
#define CLOCKS_SLEEP_EN0_CLR (*(volatile uint32_t *)0x400130b4)
#define CLOCKS_SLEEP_EN1_CLR (*(volatile uint32_t *)0x400130b8)
#define CLOCKS_ENABLED0_CLR (*(volatile uint32_t *)0x400130bc)
#define CLOCKS_ENABLED1_CLR (*(volatile uint32_t *)0x400130c0)
#define CLOCKS_INTR_CLR (*(volatile uint32_t *)0x400130c4)
#define CLOCKS_INTE_CLR (*(volatile uint32_t *)0x400130c8)
#define CLOCKS_INTF_CLR (*(volatile uint32_t *)0x400130cc)
#define CLOCKS_INTS_CLR (*(volatile uint32_t *)0x400130d0)

/*CLK_GPOUT0_CTRL Register macros*/

#define CLOCKS_CLK_GPOUT0_CTRL_ENABLED(v) (((v)&0x1)<<28)
#define CLOCKS_CLK_GPOUT0_CTRL_ENABLED_MASK CLOCKS_CLK_GPOUT0_CTRL_ENABLED(ALL1)
#define CLOCKS_CLK_GPOUT0_CTRL_NUDGE(v) (((v)&0x1)<<20)
#define CLOCKS_CLK_GPOUT0_CTRL_NUDGE_MASK CLOCKS_CLK_GPOUT0_CTRL_NUDGE(ALL1)
#define CLOCKS_CLK_GPOUT0_CTRL_PHASE(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_GPOUT0_CTRL_PHASE_MASK CLOCKS_CLK_GPOUT0_CTRL_PHASE(ALL1)
#define CLOCKS_CLK_GPOUT0_CTRL_DC50(v) (((v)&0x1)<<12)
#define CLOCKS_CLK_GPOUT0_CTRL_DC50_MASK CLOCKS_CLK_GPOUT0_CTRL_DC50(ALL1)
#define CLOCKS_CLK_GPOUT0_CTRL_ENABLE(v) (((v)&0x1)<<11)
#define CLOCKS_CLK_GPOUT0_CTRL_ENABLE_MASK CLOCKS_CLK_GPOUT0_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_GPOUT0_CTRL_KILL(v) (((v)&0x1)<<10)
#define CLOCKS_CLK_GPOUT0_CTRL_KILL_MASK CLOCKS_CLK_GPOUT0_CTRL_KILL(ALL1)
#define CLOCKS_CLK_GPOUT0_CTRL_AUXSRC(v) (((v)&0xf)<<5)
#define CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_MASK CLOCKS_CLK_GPOUT0_CTRL_AUXSRC(ALL1)

/*CLK_GPOUT0_DIV Register macros*/

#define CLOCKS_CLK_GPOUT0_DIV_INT(v) (((v)&0xffff)<<16)
#define CLOCKS_CLK_GPOUT0_DIV_INT_MASK CLOCKS_CLK_GPOUT0_DIV_INT(ALL1)
#define CLOCKS_CLK_GPOUT0_DIV_FRAC(v) (((v)&0xffff)<<0)
#define CLOCKS_CLK_GPOUT0_DIV_FRAC_MASK CLOCKS_CLK_GPOUT0_DIV_FRAC(ALL1)

/*CLK_GPOUT0_SELECTED Register macros*/


/*CLK_GPOUT1_CTRL Register macros*/

#define CLOCKS_CLK_GPOUT1_CTRL_ENABLED(v) (((v)&0x1)<<28)
#define CLOCKS_CLK_GPOUT1_CTRL_ENABLED_MASK CLOCKS_CLK_GPOUT1_CTRL_ENABLED(ALL1)
#define CLOCKS_CLK_GPOUT1_CTRL_NUDGE(v) (((v)&0x1)<<20)
#define CLOCKS_CLK_GPOUT1_CTRL_NUDGE_MASK CLOCKS_CLK_GPOUT1_CTRL_NUDGE(ALL1)
#define CLOCKS_CLK_GPOUT1_CTRL_PHASE(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_GPOUT1_CTRL_PHASE_MASK CLOCKS_CLK_GPOUT1_CTRL_PHASE(ALL1)
#define CLOCKS_CLK_GPOUT1_CTRL_DC50(v) (((v)&0x1)<<12)
#define CLOCKS_CLK_GPOUT1_CTRL_DC50_MASK CLOCKS_CLK_GPOUT1_CTRL_DC50(ALL1)
#define CLOCKS_CLK_GPOUT1_CTRL_ENABLE(v) (((v)&0x1)<<11)
#define CLOCKS_CLK_GPOUT1_CTRL_ENABLE_MASK CLOCKS_CLK_GPOUT1_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_GPOUT1_CTRL_KILL(v) (((v)&0x1)<<10)
#define CLOCKS_CLK_GPOUT1_CTRL_KILL_MASK CLOCKS_CLK_GPOUT1_CTRL_KILL(ALL1)
#define CLOCKS_CLK_GPOUT1_CTRL_AUXSRC(v) (((v)&0xf)<<5)
#define CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_MASK CLOCKS_CLK_GPOUT1_CTRL_AUXSRC(ALL1)

/*CLK_GPOUT1_DIV Register macros*/

#define CLOCKS_CLK_GPOUT1_DIV_INT(v) (((v)&0xffff)<<16)
#define CLOCKS_CLK_GPOUT1_DIV_INT_MASK CLOCKS_CLK_GPOUT1_DIV_INT(ALL1)
#define CLOCKS_CLK_GPOUT1_DIV_FRAC(v) (((v)&0xffff)<<0)
#define CLOCKS_CLK_GPOUT1_DIV_FRAC_MASK CLOCKS_CLK_GPOUT1_DIV_FRAC(ALL1)

/*CLK_GPOUT1_SELECTED Register macros*/


/*CLK_GPOUT2_CTRL Register macros*/

#define CLOCKS_CLK_GPOUT2_CTRL_ENABLED(v) (((v)&0x1)<<28)
#define CLOCKS_CLK_GPOUT2_CTRL_ENABLED_MASK CLOCKS_CLK_GPOUT2_CTRL_ENABLED(ALL1)
#define CLOCKS_CLK_GPOUT2_CTRL_NUDGE(v) (((v)&0x1)<<20)
#define CLOCKS_CLK_GPOUT2_CTRL_NUDGE_MASK CLOCKS_CLK_GPOUT2_CTRL_NUDGE(ALL1)
#define CLOCKS_CLK_GPOUT2_CTRL_PHASE(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_GPOUT2_CTRL_PHASE_MASK CLOCKS_CLK_GPOUT2_CTRL_PHASE(ALL1)
#define CLOCKS_CLK_GPOUT2_CTRL_DC50(v) (((v)&0x1)<<12)
#define CLOCKS_CLK_GPOUT2_CTRL_DC50_MASK CLOCKS_CLK_GPOUT2_CTRL_DC50(ALL1)
#define CLOCKS_CLK_GPOUT2_CTRL_ENABLE(v) (((v)&0x1)<<11)
#define CLOCKS_CLK_GPOUT2_CTRL_ENABLE_MASK CLOCKS_CLK_GPOUT2_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_GPOUT2_CTRL_KILL(v) (((v)&0x1)<<10)
#define CLOCKS_CLK_GPOUT2_CTRL_KILL_MASK CLOCKS_CLK_GPOUT2_CTRL_KILL(ALL1)
#define CLOCKS_CLK_GPOUT2_CTRL_AUXSRC(v) (((v)&0xf)<<5)
#define CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_MASK CLOCKS_CLK_GPOUT2_CTRL_AUXSRC(ALL1)

/*CLK_GPOUT2_DIV Register macros*/

#define CLOCKS_CLK_GPOUT2_DIV_INT(v) (((v)&0xffff)<<16)
#define CLOCKS_CLK_GPOUT2_DIV_INT_MASK CLOCKS_CLK_GPOUT2_DIV_INT(ALL1)
#define CLOCKS_CLK_GPOUT2_DIV_FRAC(v) (((v)&0xffff)<<0)
#define CLOCKS_CLK_GPOUT2_DIV_FRAC_MASK CLOCKS_CLK_GPOUT2_DIV_FRAC(ALL1)

/*CLK_GPOUT2_SELECTED Register macros*/


/*CLK_GPOUT3_CTRL Register macros*/

#define CLOCKS_CLK_GPOUT3_CTRL_ENABLED(v) (((v)&0x1)<<28)
#define CLOCKS_CLK_GPOUT3_CTRL_ENABLED_MASK CLOCKS_CLK_GPOUT3_CTRL_ENABLED(ALL1)
#define CLOCKS_CLK_GPOUT3_CTRL_NUDGE(v) (((v)&0x1)<<20)
#define CLOCKS_CLK_GPOUT3_CTRL_NUDGE_MASK CLOCKS_CLK_GPOUT3_CTRL_NUDGE(ALL1)
#define CLOCKS_CLK_GPOUT3_CTRL_PHASE(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_GPOUT3_CTRL_PHASE_MASK CLOCKS_CLK_GPOUT3_CTRL_PHASE(ALL1)
#define CLOCKS_CLK_GPOUT3_CTRL_DC50(v) (((v)&0x1)<<12)
#define CLOCKS_CLK_GPOUT3_CTRL_DC50_MASK CLOCKS_CLK_GPOUT3_CTRL_DC50(ALL1)
#define CLOCKS_CLK_GPOUT3_CTRL_ENABLE(v) (((v)&0x1)<<11)
#define CLOCKS_CLK_GPOUT3_CTRL_ENABLE_MASK CLOCKS_CLK_GPOUT3_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_GPOUT3_CTRL_KILL(v) (((v)&0x1)<<10)
#define CLOCKS_CLK_GPOUT3_CTRL_KILL_MASK CLOCKS_CLK_GPOUT3_CTRL_KILL(ALL1)
#define CLOCKS_CLK_GPOUT3_CTRL_AUXSRC(v) (((v)&0xf)<<5)
#define CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_MASK CLOCKS_CLK_GPOUT3_CTRL_AUXSRC(ALL1)

/*CLK_GPOUT3_DIV Register macros*/

#define CLOCKS_CLK_GPOUT3_DIV_INT(v) (((v)&0xffff)<<16)
#define CLOCKS_CLK_GPOUT3_DIV_INT_MASK CLOCKS_CLK_GPOUT3_DIV_INT(ALL1)
#define CLOCKS_CLK_GPOUT3_DIV_FRAC(v) (((v)&0xffff)<<0)
#define CLOCKS_CLK_GPOUT3_DIV_FRAC_MASK CLOCKS_CLK_GPOUT3_DIV_FRAC(ALL1)

/*CLK_GPOUT3_SELECTED Register macros*/


/*CLK_REF_CTRL Register macros*/

#define CLOCKS_CLK_REF_CTRL_AUXSRC(v) (((v)&0x3)<<5)
#define CLOCKS_CLK_REF_CTRL_AUXSRC_MASK CLOCKS_CLK_REF_CTRL_AUXSRC(ALL1)
#define CLOCKS_CLK_REF_CTRL_SRC(v) (((v)&0x3)<<0)
#define CLOCKS_CLK_REF_CTRL_SRC_MASK CLOCKS_CLK_REF_CTRL_SRC(ALL1)

/*CLK_REF_DIV Register macros*/

#define CLOCKS_CLK_REF_DIV_INT(v) (((v)&0xff)<<16)
#define CLOCKS_CLK_REF_DIV_INT_MASK CLOCKS_CLK_REF_DIV_INT(ALL1)

/*CLK_REF_SELECTED Register macros*/


/*CLK_SYS_CTRL Register macros*/

#define CLOCKS_CLK_SYS_CTRL_AUXSRC(v) (((v)&0x7)<<5)
#define CLOCKS_CLK_SYS_CTRL_AUXSRC_MASK CLOCKS_CLK_SYS_CTRL_AUXSRC(ALL1)
#define CLOCKS_CLK_SYS_CTRL_SRC(v) (((v)&0x1)<<0)
#define CLOCKS_CLK_SYS_CTRL_SRC_MASK CLOCKS_CLK_SYS_CTRL_SRC(ALL1)

/*CLK_SYS_DIV Register macros*/

#define CLOCKS_CLK_SYS_DIV_INT(v) (((v)&0xffff)<<16)
#define CLOCKS_CLK_SYS_DIV_INT_MASK CLOCKS_CLK_SYS_DIV_INT(ALL1)
#define CLOCKS_CLK_SYS_DIV_FRAC(v) (((v)&0xffff)<<0)
#define CLOCKS_CLK_SYS_DIV_FRAC_MASK CLOCKS_CLK_SYS_DIV_FRAC(ALL1)

/*CLK_SYS_SELECTED Register macros*/


/*CLK_PERI_CTRL Register macros*/

#define CLOCKS_CLK_PERI_CTRL_ENABLED(v) (((v)&0x1)<<28)
#define CLOCKS_CLK_PERI_CTRL_ENABLED_MASK CLOCKS_CLK_PERI_CTRL_ENABLED(ALL1)
#define CLOCKS_CLK_PERI_CTRL_ENABLE(v) (((v)&0x1)<<11)
#define CLOCKS_CLK_PERI_CTRL_ENABLE_MASK CLOCKS_CLK_PERI_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_PERI_CTRL_KILL(v) (((v)&0x1)<<10)
#define CLOCKS_CLK_PERI_CTRL_KILL_MASK CLOCKS_CLK_PERI_CTRL_KILL(ALL1)
#define CLOCKS_CLK_PERI_CTRL_AUXSRC(v) (((v)&0x7)<<5)
#define CLOCKS_CLK_PERI_CTRL_AUXSRC_MASK CLOCKS_CLK_PERI_CTRL_AUXSRC(ALL1)

/*CLK_PERI_DIV Register macros*/

#define CLOCKS_CLK_PERI_DIV_INT(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_PERI_DIV_INT_MASK CLOCKS_CLK_PERI_DIV_INT(ALL1)

/*CLK_PERI_SELECTED Register macros*/


/*CLK_HSTX_CTRL Register macros*/

#define CLOCKS_CLK_HSTX_CTRL_ENABLED(v) (((v)&0x1)<<28)
#define CLOCKS_CLK_HSTX_CTRL_ENABLED_MASK CLOCKS_CLK_HSTX_CTRL_ENABLED(ALL1)
#define CLOCKS_CLK_HSTX_CTRL_NUDGE(v) (((v)&0x1)<<20)
#define CLOCKS_CLK_HSTX_CTRL_NUDGE_MASK CLOCKS_CLK_HSTX_CTRL_NUDGE(ALL1)
#define CLOCKS_CLK_HSTX_CTRL_PHASE(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_HSTX_CTRL_PHASE_MASK CLOCKS_CLK_HSTX_CTRL_PHASE(ALL1)
#define CLOCKS_CLK_HSTX_CTRL_ENABLE(v) (((v)&0x1)<<11)
#define CLOCKS_CLK_HSTX_CTRL_ENABLE_MASK CLOCKS_CLK_HSTX_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_HSTX_CTRL_KILL(v) (((v)&0x1)<<10)
#define CLOCKS_CLK_HSTX_CTRL_KILL_MASK CLOCKS_CLK_HSTX_CTRL_KILL(ALL1)
#define CLOCKS_CLK_HSTX_CTRL_AUXSRC(v) (((v)&0x7)<<5)
#define CLOCKS_CLK_HSTX_CTRL_AUXSRC_MASK CLOCKS_CLK_HSTX_CTRL_AUXSRC(ALL1)

/*CLK_HSTX_DIV Register macros*/

#define CLOCKS_CLK_HSTX_DIV_INT(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_HSTX_DIV_INT_MASK CLOCKS_CLK_HSTX_DIV_INT(ALL1)

/*CLK_HSTX_SELECTED Register macros*/


/*CLK_USB_CTRL Register macros*/

#define CLOCKS_CLK_USB_CTRL_ENABLED(v) (((v)&0x1)<<28)
#define CLOCKS_CLK_USB_CTRL_ENABLED_MASK CLOCKS_CLK_USB_CTRL_ENABLED(ALL1)
#define CLOCKS_CLK_USB_CTRL_NUDGE(v) (((v)&0x1)<<20)
#define CLOCKS_CLK_USB_CTRL_NUDGE_MASK CLOCKS_CLK_USB_CTRL_NUDGE(ALL1)
#define CLOCKS_CLK_USB_CTRL_PHASE(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_USB_CTRL_PHASE_MASK CLOCKS_CLK_USB_CTRL_PHASE(ALL1)
#define CLOCKS_CLK_USB_CTRL_ENABLE(v) (((v)&0x1)<<11)
#define CLOCKS_CLK_USB_CTRL_ENABLE_MASK CLOCKS_CLK_USB_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_USB_CTRL_KILL(v) (((v)&0x1)<<10)
#define CLOCKS_CLK_USB_CTRL_KILL_MASK CLOCKS_CLK_USB_CTRL_KILL(ALL1)
#define CLOCKS_CLK_USB_CTRL_AUXSRC(v) (((v)&0x7)<<5)
#define CLOCKS_CLK_USB_CTRL_AUXSRC_MASK CLOCKS_CLK_USB_CTRL_AUXSRC(ALL1)

/*CLK_USB_DIV Register macros*/

#define CLOCKS_CLK_USB_DIV_INT(v) (((v)&0xf)<<16)
#define CLOCKS_CLK_USB_DIV_INT_MASK CLOCKS_CLK_USB_DIV_INT(ALL1)

/*CLK_USB_SELECTED Register macros*/


/*CLK_ADC_CTRL Register macros*/

#define CLOCKS_CLK_ADC_CTRL_ENABLED(v) (((v)&0x1)<<28)
#define CLOCKS_CLK_ADC_CTRL_ENABLED_MASK CLOCKS_CLK_ADC_CTRL_ENABLED(ALL1)
#define CLOCKS_CLK_ADC_CTRL_NUDGE(v) (((v)&0x1)<<20)
#define CLOCKS_CLK_ADC_CTRL_NUDGE_MASK CLOCKS_CLK_ADC_CTRL_NUDGE(ALL1)
#define CLOCKS_CLK_ADC_CTRL_PHASE(v) (((v)&0x3)<<16)
#define CLOCKS_CLK_ADC_CTRL_PHASE_MASK CLOCKS_CLK_ADC_CTRL_PHASE(ALL1)
#define CLOCKS_CLK_ADC_CTRL_ENABLE(v) (((v)&0x1)<<11)
#define CLOCKS_CLK_ADC_CTRL_ENABLE_MASK CLOCKS_CLK_ADC_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_ADC_CTRL_KILL(v) (((v)&0x1)<<10)
#define CLOCKS_CLK_ADC_CTRL_KILL_MASK CLOCKS_CLK_ADC_CTRL_KILL(ALL1)
#define CLOCKS_CLK_ADC_CTRL_AUXSRC(v) (((v)&0x7)<<5)
#define CLOCKS_CLK_ADC_CTRL_AUXSRC_MASK CLOCKS_CLK_ADC_CTRL_AUXSRC(ALL1)

/*CLK_ADC_DIV Register macros*/

#define CLOCKS_CLK_ADC_DIV_INT(v) (((v)&0xf)<<16)
#define CLOCKS_CLK_ADC_DIV_INT_MASK CLOCKS_CLK_ADC_DIV_INT(ALL1)

/*CLK_ADC_SELECTED Register macros*/


/*DFTCLK_XOSC_CTRL Register macros*/

#define CLOCKS_DFTCLK_XOSC_CTRL_SRC(v) (((v)&0x3)<<0)
#define CLOCKS_DFTCLK_XOSC_CTRL_SRC_MASK CLOCKS_DFTCLK_XOSC_CTRL_SRC(ALL1)

/*DFTCLK_ROSC_CTRL Register macros*/

#define CLOCKS_DFTCLK_ROSC_CTRL_SRC(v) (((v)&0x3)<<0)
#define CLOCKS_DFTCLK_ROSC_CTRL_SRC_MASK CLOCKS_DFTCLK_ROSC_CTRL_SRC(ALL1)

/*DFTCLK_LPOSC_CTRL Register macros*/

#define CLOCKS_DFTCLK_LPOSC_CTRL_SRC(v) (((v)&0x3)<<0)
#define CLOCKS_DFTCLK_LPOSC_CTRL_SRC_MASK CLOCKS_DFTCLK_LPOSC_CTRL_SRC(ALL1)

/*CLK_SYS_RESUS_CTRL Register macros*/

#define CLOCKS_CLK_SYS_RESUS_CTRL_CLEAR(v) (((v)&0x1)<<16)
#define CLOCKS_CLK_SYS_RESUS_CTRL_CLEAR_MASK CLOCKS_CLK_SYS_RESUS_CTRL_CLEAR(ALL1)
#define CLOCKS_CLK_SYS_RESUS_CTRL_FRCE(v) (((v)&0x1)<<12)
#define CLOCKS_CLK_SYS_RESUS_CTRL_FRCE_MASK CLOCKS_CLK_SYS_RESUS_CTRL_FRCE(ALL1)
#define CLOCKS_CLK_SYS_RESUS_CTRL_ENABLE(v) (((v)&0x1)<<8)
#define CLOCKS_CLK_SYS_RESUS_CTRL_ENABLE_MASK CLOCKS_CLK_SYS_RESUS_CTRL_ENABLE(ALL1)
#define CLOCKS_CLK_SYS_RESUS_CTRL_TIMEOUT(v) (((v)&0xff)<<0)
#define CLOCKS_CLK_SYS_RESUS_CTRL_TIMEOUT_MASK CLOCKS_CLK_SYS_RESUS_CTRL_TIMEOUT(ALL1)

/*CLK_SYS_RESUS_STATUS Register macros*/

#define CLOCKS_CLK_SYS_RESUS_STATUS_RESUSSED(v) (((v)&0x1)<<0)
#define CLOCKS_CLK_SYS_RESUS_STATUS_RESUSSED_MASK CLOCKS_CLK_SYS_RESUS_STATUS_RESUSSED(ALL1)

/*FC0_REF_KHZ Register macros*/


/*FC0_MIN_KHZ Register macros*/


/*FC0_MAX_KHZ Register macros*/


/*FC0_DELAY Register macros*/


/*FC0_INTERVAL Register macros*/


/*FC0_SRC Register macros*/


/*FC0_STATUS Register macros*/

#define CLOCKS_FC0_STATUS_DIED(v) (((v)&0x1)<<28)
#define CLOCKS_FC0_STATUS_DIED_MASK CLOCKS_FC0_STATUS_DIED(ALL1)
#define CLOCKS_FC0_STATUS_FAST(v) (((v)&0x1)<<24)
#define CLOCKS_FC0_STATUS_FAST_MASK CLOCKS_FC0_STATUS_FAST(ALL1)
#define CLOCKS_FC0_STATUS_SLOW(v) (((v)&0x1)<<20)
#define CLOCKS_FC0_STATUS_SLOW_MASK CLOCKS_FC0_STATUS_SLOW(ALL1)
#define CLOCKS_FC0_STATUS_FAIL(v) (((v)&0x1)<<16)
#define CLOCKS_FC0_STATUS_FAIL_MASK CLOCKS_FC0_STATUS_FAIL(ALL1)
#define CLOCKS_FC0_STATUS_WAITING(v) (((v)&0x1)<<12)
#define CLOCKS_FC0_STATUS_WAITING_MASK CLOCKS_FC0_STATUS_WAITING(ALL1)
#define CLOCKS_FC0_STATUS_RUNNING(v) (((v)&0x1)<<8)
#define CLOCKS_FC0_STATUS_RUNNING_MASK CLOCKS_FC0_STATUS_RUNNING(ALL1)
#define CLOCKS_FC0_STATUS_DONE(v) (((v)&0x1)<<4)
#define CLOCKS_FC0_STATUS_DONE_MASK CLOCKS_FC0_STATUS_DONE(ALL1)
#define CLOCKS_FC0_STATUS_PASS(v) (((v)&0x1)<<0)
#define CLOCKS_FC0_STATUS_PASS_MASK CLOCKS_FC0_STATUS_PASS(ALL1)

/*FC0_RESULT Register macros*/

#define CLOCKS_FC0_RESULT_KHZ(v) (((v)&0x1ffffff)<<5)
#define CLOCKS_FC0_RESULT_KHZ_MASK CLOCKS_FC0_RESULT_KHZ(ALL1)
#define CLOCKS_FC0_RESULT_FRAC(v) (((v)&0x1f)<<0)
#define CLOCKS_FC0_RESULT_FRAC_MASK CLOCKS_FC0_RESULT_FRAC(ALL1)

/*WAKE_EN0 Register macros*/

#define CLOCKS_WAKE_EN0_CLK_SYS_SIO(v) (((v)&0x1)<<31)
#define CLOCKS_WAKE_EN0_CLK_SYS_SIO_MASK CLOCKS_WAKE_EN0_CLK_SYS_SIO(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_SHA256(v) (((v)&0x1)<<30)
#define CLOCKS_WAKE_EN0_CLK_SYS_SHA256_MASK CLOCKS_WAKE_EN0_CLK_SYS_SHA256(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_PSM(v) (((v)&0x1)<<29)
#define CLOCKS_WAKE_EN0_CLK_SYS_PSM_MASK CLOCKS_WAKE_EN0_CLK_SYS_PSM(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_ROSC(v) (((v)&0x1)<<28)
#define CLOCKS_WAKE_EN0_CLK_SYS_ROSC_MASK CLOCKS_WAKE_EN0_CLK_SYS_ROSC(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_ROM(v) (((v)&0x1)<<27)
#define CLOCKS_WAKE_EN0_CLK_SYS_ROM_MASK CLOCKS_WAKE_EN0_CLK_SYS_ROM(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_RESETS(v) (((v)&0x1)<<26)
#define CLOCKS_WAKE_EN0_CLK_SYS_RESETS_MASK CLOCKS_WAKE_EN0_CLK_SYS_RESETS(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_PWM(v) (((v)&0x1)<<25)
#define CLOCKS_WAKE_EN0_CLK_SYS_PWM_MASK CLOCKS_WAKE_EN0_CLK_SYS_PWM(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_POWMAN(v) (((v)&0x1)<<24)
#define CLOCKS_WAKE_EN0_CLK_SYS_POWMAN_MASK CLOCKS_WAKE_EN0_CLK_SYS_POWMAN(ALL1)
#define CLOCKS_WAKE_EN0_CLK_REF_POWMAN(v) (((v)&0x1)<<23)
#define CLOCKS_WAKE_EN0_CLK_REF_POWMAN_MASK CLOCKS_WAKE_EN0_CLK_REF_POWMAN(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_PLL_USB(v) (((v)&0x1)<<22)
#define CLOCKS_WAKE_EN0_CLK_SYS_PLL_USB_MASK CLOCKS_WAKE_EN0_CLK_SYS_PLL_USB(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_PLL_SYS(v) (((v)&0x1)<<21)
#define CLOCKS_WAKE_EN0_CLK_SYS_PLL_SYS_MASK CLOCKS_WAKE_EN0_CLK_SYS_PLL_SYS(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_PIO2(v) (((v)&0x1)<<20)
#define CLOCKS_WAKE_EN0_CLK_SYS_PIO2_MASK CLOCKS_WAKE_EN0_CLK_SYS_PIO2(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_PIO1(v) (((v)&0x1)<<19)
#define CLOCKS_WAKE_EN0_CLK_SYS_PIO1_MASK CLOCKS_WAKE_EN0_CLK_SYS_PIO1(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_PIO0(v) (((v)&0x1)<<18)
#define CLOCKS_WAKE_EN0_CLK_SYS_PIO0_MASK CLOCKS_WAKE_EN0_CLK_SYS_PIO0(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_PADS(v) (((v)&0x1)<<17)
#define CLOCKS_WAKE_EN0_CLK_SYS_PADS_MASK CLOCKS_WAKE_EN0_CLK_SYS_PADS(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_OTP(v) (((v)&0x1)<<16)
#define CLOCKS_WAKE_EN0_CLK_SYS_OTP_MASK CLOCKS_WAKE_EN0_CLK_SYS_OTP(ALL1)
#define CLOCKS_WAKE_EN0_CLK_REF_OTP(v) (((v)&0x1)<<15)
#define CLOCKS_WAKE_EN0_CLK_REF_OTP_MASK CLOCKS_WAKE_EN0_CLK_REF_OTP(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_JTAG(v) (((v)&0x1)<<14)
#define CLOCKS_WAKE_EN0_CLK_SYS_JTAG_MASK CLOCKS_WAKE_EN0_CLK_SYS_JTAG(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_IO(v) (((v)&0x1)<<13)
#define CLOCKS_WAKE_EN0_CLK_SYS_IO_MASK CLOCKS_WAKE_EN0_CLK_SYS_IO(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_I2C1(v) (((v)&0x1)<<12)
#define CLOCKS_WAKE_EN0_CLK_SYS_I2C1_MASK CLOCKS_WAKE_EN0_CLK_SYS_I2C1(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_I2C0(v) (((v)&0x1)<<11)
#define CLOCKS_WAKE_EN0_CLK_SYS_I2C0_MASK CLOCKS_WAKE_EN0_CLK_SYS_I2C0(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_HSTX(v) (((v)&0x1)<<10)
#define CLOCKS_WAKE_EN0_CLK_SYS_HSTX_MASK CLOCKS_WAKE_EN0_CLK_SYS_HSTX(ALL1)
#define CLOCKS_WAKE_EN0_CLK_HSTX(v) (((v)&0x1)<<9)
#define CLOCKS_WAKE_EN0_CLK_HSTX_MASK CLOCKS_WAKE_EN0_CLK_HSTX(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_GLITCH_DETECTOR(v) (((v)&0x1)<<8)
#define CLOCKS_WAKE_EN0_CLK_SYS_GLITCH_DETECTOR_MASK CLOCKS_WAKE_EN0_CLK_SYS_GLITCH_DETECTOR(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_DMA(v) (((v)&0x1)<<7)
#define CLOCKS_WAKE_EN0_CLK_SYS_DMA_MASK CLOCKS_WAKE_EN0_CLK_SYS_DMA(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_BUSFABRIC(v) (((v)&0x1)<<6)
#define CLOCKS_WAKE_EN0_CLK_SYS_BUSFABRIC_MASK CLOCKS_WAKE_EN0_CLK_SYS_BUSFABRIC(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_BUSCTRL(v) (((v)&0x1)<<5)
#define CLOCKS_WAKE_EN0_CLK_SYS_BUSCTRL_MASK CLOCKS_WAKE_EN0_CLK_SYS_BUSCTRL(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_BOOTRAM(v) (((v)&0x1)<<4)
#define CLOCKS_WAKE_EN0_CLK_SYS_BOOTRAM_MASK CLOCKS_WAKE_EN0_CLK_SYS_BOOTRAM(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_ADC(v) (((v)&0x1)<<3)
#define CLOCKS_WAKE_EN0_CLK_SYS_ADC_MASK CLOCKS_WAKE_EN0_CLK_SYS_ADC(ALL1)
#define CLOCKS_WAKE_EN0_CLK_ADC(v) (((v)&0x1)<<2)
#define CLOCKS_WAKE_EN0_CLK_ADC_MASK CLOCKS_WAKE_EN0_CLK_ADC(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_ACCESSCTRL(v) (((v)&0x1)<<1)
#define CLOCKS_WAKE_EN0_CLK_SYS_ACCESSCTRL_MASK CLOCKS_WAKE_EN0_CLK_SYS_ACCESSCTRL(ALL1)
#define CLOCKS_WAKE_EN0_CLK_SYS_CLOCKS(v) (((v)&0x1)<<0)
#define CLOCKS_WAKE_EN0_CLK_SYS_CLOCKS_MASK CLOCKS_WAKE_EN0_CLK_SYS_CLOCKS(ALL1)

/*WAKE_EN1 Register macros*/

#define CLOCKS_WAKE_EN1_CLK_SYS_XOSC(v) (((v)&0x1)<<30)
#define CLOCKS_WAKE_EN1_CLK_SYS_XOSC_MASK CLOCKS_WAKE_EN1_CLK_SYS_XOSC(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_XIP(v) (((v)&0x1)<<29)
#define CLOCKS_WAKE_EN1_CLK_SYS_XIP_MASK CLOCKS_WAKE_EN1_CLK_SYS_XIP(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_WATCHDOG(v) (((v)&0x1)<<28)
#define CLOCKS_WAKE_EN1_CLK_SYS_WATCHDOG_MASK CLOCKS_WAKE_EN1_CLK_SYS_WATCHDOG(ALL1)
#define CLOCKS_WAKE_EN1_CLK_USB(v) (((v)&0x1)<<27)
#define CLOCKS_WAKE_EN1_CLK_USB_MASK CLOCKS_WAKE_EN1_CLK_USB(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_USBCTRL(v) (((v)&0x1)<<26)
#define CLOCKS_WAKE_EN1_CLK_SYS_USBCTRL_MASK CLOCKS_WAKE_EN1_CLK_SYS_USBCTRL(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_UART1(v) (((v)&0x1)<<25)
#define CLOCKS_WAKE_EN1_CLK_SYS_UART1_MASK CLOCKS_WAKE_EN1_CLK_SYS_UART1(ALL1)
#define CLOCKS_WAKE_EN1_CLK_PERI_UART1(v) (((v)&0x1)<<24)
#define CLOCKS_WAKE_EN1_CLK_PERI_UART1_MASK CLOCKS_WAKE_EN1_CLK_PERI_UART1(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_UART0(v) (((v)&0x1)<<23)
#define CLOCKS_WAKE_EN1_CLK_SYS_UART0_MASK CLOCKS_WAKE_EN1_CLK_SYS_UART0(ALL1)
#define CLOCKS_WAKE_EN1_CLK_PERI_UART0(v) (((v)&0x1)<<22)
#define CLOCKS_WAKE_EN1_CLK_PERI_UART0_MASK CLOCKS_WAKE_EN1_CLK_PERI_UART0(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_TRNG(v) (((v)&0x1)<<21)
#define CLOCKS_WAKE_EN1_CLK_SYS_TRNG_MASK CLOCKS_WAKE_EN1_CLK_SYS_TRNG(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_TIMER1(v) (((v)&0x1)<<20)
#define CLOCKS_WAKE_EN1_CLK_SYS_TIMER1_MASK CLOCKS_WAKE_EN1_CLK_SYS_TIMER1(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_TIMER0(v) (((v)&0x1)<<19)
#define CLOCKS_WAKE_EN1_CLK_SYS_TIMER0_MASK CLOCKS_WAKE_EN1_CLK_SYS_TIMER0(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_TICKS(v) (((v)&0x1)<<18)
#define CLOCKS_WAKE_EN1_CLK_SYS_TICKS_MASK CLOCKS_WAKE_EN1_CLK_SYS_TICKS(ALL1)
#define CLOCKS_WAKE_EN1_CLK_REF_TICKS(v) (((v)&0x1)<<17)
#define CLOCKS_WAKE_EN1_CLK_REF_TICKS_MASK CLOCKS_WAKE_EN1_CLK_REF_TICKS(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_TBMAN(v) (((v)&0x1)<<16)
#define CLOCKS_WAKE_EN1_CLK_SYS_TBMAN_MASK CLOCKS_WAKE_EN1_CLK_SYS_TBMAN(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SYSINFO(v) (((v)&0x1)<<15)
#define CLOCKS_WAKE_EN1_CLK_SYS_SYSINFO_MASK CLOCKS_WAKE_EN1_CLK_SYS_SYSINFO(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SYSCFG(v) (((v)&0x1)<<14)
#define CLOCKS_WAKE_EN1_CLK_SYS_SYSCFG_MASK CLOCKS_WAKE_EN1_CLK_SYS_SYSCFG(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM9(v) (((v)&0x1)<<13)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM9_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM9(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM8(v) (((v)&0x1)<<12)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM8_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM8(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM7(v) (((v)&0x1)<<11)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM7_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM7(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM6(v) (((v)&0x1)<<10)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM6_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM6(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM5(v) (((v)&0x1)<<9)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM5_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM5(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM4(v) (((v)&0x1)<<8)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM4_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM4(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM3(v) (((v)&0x1)<<7)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM3_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM3(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM2(v) (((v)&0x1)<<6)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM2_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM2(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM1(v) (((v)&0x1)<<5)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM1_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM1(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM0(v) (((v)&0x1)<<4)
#define CLOCKS_WAKE_EN1_CLK_SYS_SRAM0_MASK CLOCKS_WAKE_EN1_CLK_SYS_SRAM0(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SPI1(v) (((v)&0x1)<<3)
#define CLOCKS_WAKE_EN1_CLK_SYS_SPI1_MASK CLOCKS_WAKE_EN1_CLK_SYS_SPI1(ALL1)
#define CLOCKS_WAKE_EN1_CLK_PERI_SPI1(v) (((v)&0x1)<<2)
#define CLOCKS_WAKE_EN1_CLK_PERI_SPI1_MASK CLOCKS_WAKE_EN1_CLK_PERI_SPI1(ALL1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SPI0(v) (((v)&0x1)<<1)
#define CLOCKS_WAKE_EN1_CLK_SYS_SPI0_MASK CLOCKS_WAKE_EN1_CLK_SYS_SPI0(ALL1)
#define CLOCKS_WAKE_EN1_CLK_PERI_SPI0(v) (((v)&0x1)<<0)
#define CLOCKS_WAKE_EN1_CLK_PERI_SPI0_MASK CLOCKS_WAKE_EN1_CLK_PERI_SPI0(ALL1)

/*SLEEP_EN0 Register macros*/

#define CLOCKS_SLEEP_EN0_CLK_SYS_SIO(v) (((v)&0x1)<<31)
#define CLOCKS_SLEEP_EN0_CLK_SYS_SIO_MASK CLOCKS_SLEEP_EN0_CLK_SYS_SIO(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_SHA256(v) (((v)&0x1)<<30)
#define CLOCKS_SLEEP_EN0_CLK_SYS_SHA256_MASK CLOCKS_SLEEP_EN0_CLK_SYS_SHA256(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PSM(v) (((v)&0x1)<<29)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PSM_MASK CLOCKS_SLEEP_EN0_CLK_SYS_PSM(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_ROSC(v) (((v)&0x1)<<28)
#define CLOCKS_SLEEP_EN0_CLK_SYS_ROSC_MASK CLOCKS_SLEEP_EN0_CLK_SYS_ROSC(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_ROM(v) (((v)&0x1)<<27)
#define CLOCKS_SLEEP_EN0_CLK_SYS_ROM_MASK CLOCKS_SLEEP_EN0_CLK_SYS_ROM(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_RESETS(v) (((v)&0x1)<<26)
#define CLOCKS_SLEEP_EN0_CLK_SYS_RESETS_MASK CLOCKS_SLEEP_EN0_CLK_SYS_RESETS(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PWM(v) (((v)&0x1)<<25)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PWM_MASK CLOCKS_SLEEP_EN0_CLK_SYS_PWM(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_POWMAN(v) (((v)&0x1)<<24)
#define CLOCKS_SLEEP_EN0_CLK_SYS_POWMAN_MASK CLOCKS_SLEEP_EN0_CLK_SYS_POWMAN(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_REF_POWMAN(v) (((v)&0x1)<<23)
#define CLOCKS_SLEEP_EN0_CLK_REF_POWMAN_MASK CLOCKS_SLEEP_EN0_CLK_REF_POWMAN(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PLL_USB(v) (((v)&0x1)<<22)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PLL_USB_MASK CLOCKS_SLEEP_EN0_CLK_SYS_PLL_USB(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PLL_SYS(v) (((v)&0x1)<<21)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PLL_SYS_MASK CLOCKS_SLEEP_EN0_CLK_SYS_PLL_SYS(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PIO2(v) (((v)&0x1)<<20)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PIO2_MASK CLOCKS_SLEEP_EN0_CLK_SYS_PIO2(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PIO1(v) (((v)&0x1)<<19)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PIO1_MASK CLOCKS_SLEEP_EN0_CLK_SYS_PIO1(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PIO0(v) (((v)&0x1)<<18)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PIO0_MASK CLOCKS_SLEEP_EN0_CLK_SYS_PIO0(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PADS(v) (((v)&0x1)<<17)
#define CLOCKS_SLEEP_EN0_CLK_SYS_PADS_MASK CLOCKS_SLEEP_EN0_CLK_SYS_PADS(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_OTP(v) (((v)&0x1)<<16)
#define CLOCKS_SLEEP_EN0_CLK_SYS_OTP_MASK CLOCKS_SLEEP_EN0_CLK_SYS_OTP(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_REF_OTP(v) (((v)&0x1)<<15)
#define CLOCKS_SLEEP_EN0_CLK_REF_OTP_MASK CLOCKS_SLEEP_EN0_CLK_REF_OTP(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_JTAG(v) (((v)&0x1)<<14)
#define CLOCKS_SLEEP_EN0_CLK_SYS_JTAG_MASK CLOCKS_SLEEP_EN0_CLK_SYS_JTAG(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_IO(v) (((v)&0x1)<<13)
#define CLOCKS_SLEEP_EN0_CLK_SYS_IO_MASK CLOCKS_SLEEP_EN0_CLK_SYS_IO(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_I2C1(v) (((v)&0x1)<<12)
#define CLOCKS_SLEEP_EN0_CLK_SYS_I2C1_MASK CLOCKS_SLEEP_EN0_CLK_SYS_I2C1(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_I2C0(v) (((v)&0x1)<<11)
#define CLOCKS_SLEEP_EN0_CLK_SYS_I2C0_MASK CLOCKS_SLEEP_EN0_CLK_SYS_I2C0(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_HSTX(v) (((v)&0x1)<<10)
#define CLOCKS_SLEEP_EN0_CLK_SYS_HSTX_MASK CLOCKS_SLEEP_EN0_CLK_SYS_HSTX(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_HSTX(v) (((v)&0x1)<<9)
#define CLOCKS_SLEEP_EN0_CLK_HSTX_MASK CLOCKS_SLEEP_EN0_CLK_HSTX(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_GLITCH_DETECTOR(v) (((v)&0x1)<<8)
#define CLOCKS_SLEEP_EN0_CLK_SYS_GLITCH_DETECTOR_MASK CLOCKS_SLEEP_EN0_CLK_SYS_GLITCH_DETECTOR(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_DMA(v) (((v)&0x1)<<7)
#define CLOCKS_SLEEP_EN0_CLK_SYS_DMA_MASK CLOCKS_SLEEP_EN0_CLK_SYS_DMA(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_BUSFABRIC(v) (((v)&0x1)<<6)
#define CLOCKS_SLEEP_EN0_CLK_SYS_BUSFABRIC_MASK CLOCKS_SLEEP_EN0_CLK_SYS_BUSFABRIC(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_BUSCTRL(v) (((v)&0x1)<<5)
#define CLOCKS_SLEEP_EN0_CLK_SYS_BUSCTRL_MASK CLOCKS_SLEEP_EN0_CLK_SYS_BUSCTRL(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_BOOTRAM(v) (((v)&0x1)<<4)
#define CLOCKS_SLEEP_EN0_CLK_SYS_BOOTRAM_MASK CLOCKS_SLEEP_EN0_CLK_SYS_BOOTRAM(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_ADC(v) (((v)&0x1)<<3)
#define CLOCKS_SLEEP_EN0_CLK_SYS_ADC_MASK CLOCKS_SLEEP_EN0_CLK_SYS_ADC(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_ADC(v) (((v)&0x1)<<2)
#define CLOCKS_SLEEP_EN0_CLK_ADC_MASK CLOCKS_SLEEP_EN0_CLK_ADC(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_ACCESSCTRL(v) (((v)&0x1)<<1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_ACCESSCTRL_MASK CLOCKS_SLEEP_EN0_CLK_SYS_ACCESSCTRL(ALL1)
#define CLOCKS_SLEEP_EN0_CLK_SYS_CLOCKS(v) (((v)&0x1)<<0)
#define CLOCKS_SLEEP_EN0_CLK_SYS_CLOCKS_MASK CLOCKS_SLEEP_EN0_CLK_SYS_CLOCKS(ALL1)

/*SLEEP_EN1 Register macros*/

#define CLOCKS_SLEEP_EN1_CLK_SYS_XOSC(v) (((v)&0x1)<<30)
#define CLOCKS_SLEEP_EN1_CLK_SYS_XOSC_MASK CLOCKS_SLEEP_EN1_CLK_SYS_XOSC(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_XIP(v) (((v)&0x1)<<29)
#define CLOCKS_SLEEP_EN1_CLK_SYS_XIP_MASK CLOCKS_SLEEP_EN1_CLK_SYS_XIP(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_WATCHDOG(v) (((v)&0x1)<<28)
#define CLOCKS_SLEEP_EN1_CLK_SYS_WATCHDOG_MASK CLOCKS_SLEEP_EN1_CLK_SYS_WATCHDOG(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_USB(v) (((v)&0x1)<<27)
#define CLOCKS_SLEEP_EN1_CLK_USB_MASK CLOCKS_SLEEP_EN1_CLK_USB(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_USBCTRL(v) (((v)&0x1)<<26)
#define CLOCKS_SLEEP_EN1_CLK_SYS_USBCTRL_MASK CLOCKS_SLEEP_EN1_CLK_SYS_USBCTRL(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_UART1(v) (((v)&0x1)<<25)
#define CLOCKS_SLEEP_EN1_CLK_SYS_UART1_MASK CLOCKS_SLEEP_EN1_CLK_SYS_UART1(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_PERI_UART1(v) (((v)&0x1)<<24)
#define CLOCKS_SLEEP_EN1_CLK_PERI_UART1_MASK CLOCKS_SLEEP_EN1_CLK_PERI_UART1(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_UART0(v) (((v)&0x1)<<23)
#define CLOCKS_SLEEP_EN1_CLK_SYS_UART0_MASK CLOCKS_SLEEP_EN1_CLK_SYS_UART0(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_PERI_UART0(v) (((v)&0x1)<<22)
#define CLOCKS_SLEEP_EN1_CLK_PERI_UART0_MASK CLOCKS_SLEEP_EN1_CLK_PERI_UART0(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TRNG(v) (((v)&0x1)<<21)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TRNG_MASK CLOCKS_SLEEP_EN1_CLK_SYS_TRNG(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TIMER1(v) (((v)&0x1)<<20)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TIMER1_MASK CLOCKS_SLEEP_EN1_CLK_SYS_TIMER1(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TIMER0(v) (((v)&0x1)<<19)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TIMER0_MASK CLOCKS_SLEEP_EN1_CLK_SYS_TIMER0(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TICKS(v) (((v)&0x1)<<18)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TICKS_MASK CLOCKS_SLEEP_EN1_CLK_SYS_TICKS(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_REF_TICKS(v) (((v)&0x1)<<17)
#define CLOCKS_SLEEP_EN1_CLK_REF_TICKS_MASK CLOCKS_SLEEP_EN1_CLK_REF_TICKS(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TBMAN(v) (((v)&0x1)<<16)
#define CLOCKS_SLEEP_EN1_CLK_SYS_TBMAN_MASK CLOCKS_SLEEP_EN1_CLK_SYS_TBMAN(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SYSINFO(v) (((v)&0x1)<<15)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SYSINFO_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SYSINFO(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SYSCFG(v) (((v)&0x1)<<14)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SYSCFG_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SYSCFG(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM9(v) (((v)&0x1)<<13)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM9_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM9(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM8(v) (((v)&0x1)<<12)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM8_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM8(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM7(v) (((v)&0x1)<<11)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM7_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM7(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM6(v) (((v)&0x1)<<10)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM6_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM6(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM5(v) (((v)&0x1)<<9)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM5_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM5(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM4(v) (((v)&0x1)<<8)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM4_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM4(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM3(v) (((v)&0x1)<<7)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM3_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM3(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM2(v) (((v)&0x1)<<6)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM2_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM2(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM1(v) (((v)&0x1)<<5)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM1_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM1(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM0(v) (((v)&0x1)<<4)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SRAM0_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SRAM0(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SPI1(v) (((v)&0x1)<<3)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SPI1_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SPI1(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_PERI_SPI1(v) (((v)&0x1)<<2)
#define CLOCKS_SLEEP_EN1_CLK_PERI_SPI1_MASK CLOCKS_SLEEP_EN1_CLK_PERI_SPI1(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SPI0(v) (((v)&0x1)<<1)
#define CLOCKS_SLEEP_EN1_CLK_SYS_SPI0_MASK CLOCKS_SLEEP_EN1_CLK_SYS_SPI0(ALL1)
#define CLOCKS_SLEEP_EN1_CLK_PERI_SPI0(v) (((v)&0x1)<<0)
#define CLOCKS_SLEEP_EN1_CLK_PERI_SPI0_MASK CLOCKS_SLEEP_EN1_CLK_PERI_SPI0(ALL1)

/*ENABLED0 Register macros*/

#define CLOCKS_ENABLED0_CLK_SYS_SIO(v) (((v)&0x1)<<31)
#define CLOCKS_ENABLED0_CLK_SYS_SIO_MASK CLOCKS_ENABLED0_CLK_SYS_SIO(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_SHA256(v) (((v)&0x1)<<30)
#define CLOCKS_ENABLED0_CLK_SYS_SHA256_MASK CLOCKS_ENABLED0_CLK_SYS_SHA256(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_PSM(v) (((v)&0x1)<<29)
#define CLOCKS_ENABLED0_CLK_SYS_PSM_MASK CLOCKS_ENABLED0_CLK_SYS_PSM(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_ROSC(v) (((v)&0x1)<<28)
#define CLOCKS_ENABLED0_CLK_SYS_ROSC_MASK CLOCKS_ENABLED0_CLK_SYS_ROSC(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_ROM(v) (((v)&0x1)<<27)
#define CLOCKS_ENABLED0_CLK_SYS_ROM_MASK CLOCKS_ENABLED0_CLK_SYS_ROM(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_RESETS(v) (((v)&0x1)<<26)
#define CLOCKS_ENABLED0_CLK_SYS_RESETS_MASK CLOCKS_ENABLED0_CLK_SYS_RESETS(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_PWM(v) (((v)&0x1)<<25)
#define CLOCKS_ENABLED0_CLK_SYS_PWM_MASK CLOCKS_ENABLED0_CLK_SYS_PWM(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_POWMAN(v) (((v)&0x1)<<24)
#define CLOCKS_ENABLED0_CLK_SYS_POWMAN_MASK CLOCKS_ENABLED0_CLK_SYS_POWMAN(ALL1)
#define CLOCKS_ENABLED0_CLK_REF_POWMAN(v) (((v)&0x1)<<23)
#define CLOCKS_ENABLED0_CLK_REF_POWMAN_MASK CLOCKS_ENABLED0_CLK_REF_POWMAN(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_PLL_USB(v) (((v)&0x1)<<22)
#define CLOCKS_ENABLED0_CLK_SYS_PLL_USB_MASK CLOCKS_ENABLED0_CLK_SYS_PLL_USB(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_PLL_SYS(v) (((v)&0x1)<<21)
#define CLOCKS_ENABLED0_CLK_SYS_PLL_SYS_MASK CLOCKS_ENABLED0_CLK_SYS_PLL_SYS(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_PIO2(v) (((v)&0x1)<<20)
#define CLOCKS_ENABLED0_CLK_SYS_PIO2_MASK CLOCKS_ENABLED0_CLK_SYS_PIO2(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_PIO1(v) (((v)&0x1)<<19)
#define CLOCKS_ENABLED0_CLK_SYS_PIO1_MASK CLOCKS_ENABLED0_CLK_SYS_PIO1(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_PIO0(v) (((v)&0x1)<<18)
#define CLOCKS_ENABLED0_CLK_SYS_PIO0_MASK CLOCKS_ENABLED0_CLK_SYS_PIO0(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_PADS(v) (((v)&0x1)<<17)
#define CLOCKS_ENABLED0_CLK_SYS_PADS_MASK CLOCKS_ENABLED0_CLK_SYS_PADS(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_OTP(v) (((v)&0x1)<<16)
#define CLOCKS_ENABLED0_CLK_SYS_OTP_MASK CLOCKS_ENABLED0_CLK_SYS_OTP(ALL1)
#define CLOCKS_ENABLED0_CLK_REF_OTP(v) (((v)&0x1)<<15)
#define CLOCKS_ENABLED0_CLK_REF_OTP_MASK CLOCKS_ENABLED0_CLK_REF_OTP(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_JTAG(v) (((v)&0x1)<<14)
#define CLOCKS_ENABLED0_CLK_SYS_JTAG_MASK CLOCKS_ENABLED0_CLK_SYS_JTAG(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_IO(v) (((v)&0x1)<<13)
#define CLOCKS_ENABLED0_CLK_SYS_IO_MASK CLOCKS_ENABLED0_CLK_SYS_IO(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_I2C1(v) (((v)&0x1)<<12)
#define CLOCKS_ENABLED0_CLK_SYS_I2C1_MASK CLOCKS_ENABLED0_CLK_SYS_I2C1(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_I2C0(v) (((v)&0x1)<<11)
#define CLOCKS_ENABLED0_CLK_SYS_I2C0_MASK CLOCKS_ENABLED0_CLK_SYS_I2C0(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_HSTX(v) (((v)&0x1)<<10)
#define CLOCKS_ENABLED0_CLK_SYS_HSTX_MASK CLOCKS_ENABLED0_CLK_SYS_HSTX(ALL1)
#define CLOCKS_ENABLED0_CLK_HSTX(v) (((v)&0x1)<<9)
#define CLOCKS_ENABLED0_CLK_HSTX_MASK CLOCKS_ENABLED0_CLK_HSTX(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_GLITCH_DETECTOR(v) (((v)&0x1)<<8)
#define CLOCKS_ENABLED0_CLK_SYS_GLITCH_DETECTOR_MASK CLOCKS_ENABLED0_CLK_SYS_GLITCH_DETECTOR(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_DMA(v) (((v)&0x1)<<7)
#define CLOCKS_ENABLED0_CLK_SYS_DMA_MASK CLOCKS_ENABLED0_CLK_SYS_DMA(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_BUSFABRIC(v) (((v)&0x1)<<6)
#define CLOCKS_ENABLED0_CLK_SYS_BUSFABRIC_MASK CLOCKS_ENABLED0_CLK_SYS_BUSFABRIC(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_BUSCTRL(v) (((v)&0x1)<<5)
#define CLOCKS_ENABLED0_CLK_SYS_BUSCTRL_MASK CLOCKS_ENABLED0_CLK_SYS_BUSCTRL(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_BOOTRAM(v) (((v)&0x1)<<4)
#define CLOCKS_ENABLED0_CLK_SYS_BOOTRAM_MASK CLOCKS_ENABLED0_CLK_SYS_BOOTRAM(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_ADC(v) (((v)&0x1)<<3)
#define CLOCKS_ENABLED0_CLK_SYS_ADC_MASK CLOCKS_ENABLED0_CLK_SYS_ADC(ALL1)
#define CLOCKS_ENABLED0_CLK_ADC(v) (((v)&0x1)<<2)
#define CLOCKS_ENABLED0_CLK_ADC_MASK CLOCKS_ENABLED0_CLK_ADC(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_ACCESSCTRL(v) (((v)&0x1)<<1)
#define CLOCKS_ENABLED0_CLK_SYS_ACCESSCTRL_MASK CLOCKS_ENABLED0_CLK_SYS_ACCESSCTRL(ALL1)
#define CLOCKS_ENABLED0_CLK_SYS_CLOCKS(v) (((v)&0x1)<<0)
#define CLOCKS_ENABLED0_CLK_SYS_CLOCKS_MASK CLOCKS_ENABLED0_CLK_SYS_CLOCKS(ALL1)

/*ENABLED1 Register macros*/

#define CLOCKS_ENABLED1_CLK_SYS_XOSC(v) (((v)&0x1)<<30)
#define CLOCKS_ENABLED1_CLK_SYS_XOSC_MASK CLOCKS_ENABLED1_CLK_SYS_XOSC(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_XIP(v) (((v)&0x1)<<29)
#define CLOCKS_ENABLED1_CLK_SYS_XIP_MASK CLOCKS_ENABLED1_CLK_SYS_XIP(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_WATCHDOG(v) (((v)&0x1)<<28)
#define CLOCKS_ENABLED1_CLK_SYS_WATCHDOG_MASK CLOCKS_ENABLED1_CLK_SYS_WATCHDOG(ALL1)
#define CLOCKS_ENABLED1_CLK_USB(v) (((v)&0x1)<<27)
#define CLOCKS_ENABLED1_CLK_USB_MASK CLOCKS_ENABLED1_CLK_USB(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_USBCTRL(v) (((v)&0x1)<<26)
#define CLOCKS_ENABLED1_CLK_SYS_USBCTRL_MASK CLOCKS_ENABLED1_CLK_SYS_USBCTRL(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_UART1(v) (((v)&0x1)<<25)
#define CLOCKS_ENABLED1_CLK_SYS_UART1_MASK CLOCKS_ENABLED1_CLK_SYS_UART1(ALL1)
#define CLOCKS_ENABLED1_CLK_PERI_UART1(v) (((v)&0x1)<<24)
#define CLOCKS_ENABLED1_CLK_PERI_UART1_MASK CLOCKS_ENABLED1_CLK_PERI_UART1(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_UART0(v) (((v)&0x1)<<23)
#define CLOCKS_ENABLED1_CLK_SYS_UART0_MASK CLOCKS_ENABLED1_CLK_SYS_UART0(ALL1)
#define CLOCKS_ENABLED1_CLK_PERI_UART0(v) (((v)&0x1)<<22)
#define CLOCKS_ENABLED1_CLK_PERI_UART0_MASK CLOCKS_ENABLED1_CLK_PERI_UART0(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_TRNG(v) (((v)&0x1)<<21)
#define CLOCKS_ENABLED1_CLK_SYS_TRNG_MASK CLOCKS_ENABLED1_CLK_SYS_TRNG(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_TIMER1(v) (((v)&0x1)<<20)
#define CLOCKS_ENABLED1_CLK_SYS_TIMER1_MASK CLOCKS_ENABLED1_CLK_SYS_TIMER1(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_TIMER0(v) (((v)&0x1)<<19)
#define CLOCKS_ENABLED1_CLK_SYS_TIMER0_MASK CLOCKS_ENABLED1_CLK_SYS_TIMER0(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_TICKS(v) (((v)&0x1)<<18)
#define CLOCKS_ENABLED1_CLK_SYS_TICKS_MASK CLOCKS_ENABLED1_CLK_SYS_TICKS(ALL1)
#define CLOCKS_ENABLED1_CLK_REF_TICKS(v) (((v)&0x1)<<17)
#define CLOCKS_ENABLED1_CLK_REF_TICKS_MASK CLOCKS_ENABLED1_CLK_REF_TICKS(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_TBMAN(v) (((v)&0x1)<<16)
#define CLOCKS_ENABLED1_CLK_SYS_TBMAN_MASK CLOCKS_ENABLED1_CLK_SYS_TBMAN(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SYSINFO(v) (((v)&0x1)<<15)
#define CLOCKS_ENABLED1_CLK_SYS_SYSINFO_MASK CLOCKS_ENABLED1_CLK_SYS_SYSINFO(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SYSCFG(v) (((v)&0x1)<<14)
#define CLOCKS_ENABLED1_CLK_SYS_SYSCFG_MASK CLOCKS_ENABLED1_CLK_SYS_SYSCFG(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM9(v) (((v)&0x1)<<13)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM9_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM9(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM8(v) (((v)&0x1)<<12)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM8_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM8(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM7(v) (((v)&0x1)<<11)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM7_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM7(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM6(v) (((v)&0x1)<<10)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM6_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM6(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM5(v) (((v)&0x1)<<9)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM5_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM5(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM4(v) (((v)&0x1)<<8)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM4_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM4(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM3(v) (((v)&0x1)<<7)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM3_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM3(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM2(v) (((v)&0x1)<<6)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM2_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM2(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM1(v) (((v)&0x1)<<5)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM1_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM1(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM0(v) (((v)&0x1)<<4)
#define CLOCKS_ENABLED1_CLK_SYS_SRAM0_MASK CLOCKS_ENABLED1_CLK_SYS_SRAM0(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SPI1(v) (((v)&0x1)<<3)
#define CLOCKS_ENABLED1_CLK_SYS_SPI1_MASK CLOCKS_ENABLED1_CLK_SYS_SPI1(ALL1)
#define CLOCKS_ENABLED1_CLK_PERI_SPI1(v) (((v)&0x1)<<2)
#define CLOCKS_ENABLED1_CLK_PERI_SPI1_MASK CLOCKS_ENABLED1_CLK_PERI_SPI1(ALL1)
#define CLOCKS_ENABLED1_CLK_SYS_SPI0(v) (((v)&0x1)<<1)
#define CLOCKS_ENABLED1_CLK_SYS_SPI0_MASK CLOCKS_ENABLED1_CLK_SYS_SPI0(ALL1)
#define CLOCKS_ENABLED1_CLK_PERI_SPI0(v) (((v)&0x1)<<0)
#define CLOCKS_ENABLED1_CLK_PERI_SPI0_MASK CLOCKS_ENABLED1_CLK_PERI_SPI0(ALL1)

/*INTR Register macros*/

#define CLOCKS_INTR_CLK_SYS_RESUS(v) (((v)&0x1)<<0)
#define CLOCKS_INTR_CLK_SYS_RESUS_MASK CLOCKS_INTR_CLK_SYS_RESUS(ALL1)

/*INTE Register macros*/

#define CLOCKS_INTE_CLK_SYS_RESUS(v) (((v)&0x1)<<0)
#define CLOCKS_INTE_CLK_SYS_RESUS_MASK CLOCKS_INTE_CLK_SYS_RESUS(ALL1)

/*INTF Register macros*/

#define CLOCKS_INTF_CLK_SYS_RESUS(v) (((v)&0x1)<<0)
#define CLOCKS_INTF_CLK_SYS_RESUS_MASK CLOCKS_INTF_CLK_SYS_RESUS(ALL1)

/*INTS Register macros*/

#define CLOCKS_INTS_CLK_SYS_RESUS(v) (((v)&0x1)<<0)
#define CLOCKS_INTS_CLK_SYS_RESUS_MASK CLOCKS_INTS_CLK_SYS_RESUS(ALL1)

#endif

