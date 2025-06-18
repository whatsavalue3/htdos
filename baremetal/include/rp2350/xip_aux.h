
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

#ifndef RP2350_XIP_AUX_H
#define RP2350_XIP_AUX_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t stream;
		uint32_t qmi_direct_tx;
		uint32_t qmi_direct_rx;
		uint32_t RSVD0[1021];
		uint32_t stream_xor;
		uint32_t qmi_direct_tx_xor;
		uint32_t qmi_direct_rx_xor;
		uint32_t RSVDxor_0[1021];
		uint32_t stream_set;
		uint32_t qmi_direct_tx_set;
		uint32_t qmi_direct_rx_set;
		uint32_t RSVDset_0[1021];
		uint32_t stream_clr;
		uint32_t qmi_direct_tx_clr;
		uint32_t qmi_direct_rx_clr;
		uint32_t RSVDclr_0[1021];
} XIP_AUX_REG_BLOCKS;


/*IO Registers as struct*/

#define xip_aux (*(XIP_AUX_REG_BLOCKS volatile *)0x50500000)


/*IO Registers AS MACROS*/

#define XIP_AUX_STREAM (*(volatile uint32_t *)0x50500000)
#define XIP_AUX_QMI_DIRECT_TX (*(volatile uint32_t *)0x50500004)
#define XIP_AUX_QMI_DIRECT_RX (*(volatile uint32_t *)0x50500008)
#define XIP_AUX_STREAM_XOR (*(volatile uint32_t *)0x50501000)
#define XIP_AUX_QMI_DIRECT_TX_XOR (*(volatile uint32_t *)0x50501004)
#define XIP_AUX_QMI_DIRECT_RX_XOR (*(volatile uint32_t *)0x50501008)
#define XIP_AUX_STREAM_SET (*(volatile uint32_t *)0x50502000)
#define XIP_AUX_QMI_DIRECT_TX_SET (*(volatile uint32_t *)0x50502004)
#define XIP_AUX_QMI_DIRECT_RX_SET (*(volatile uint32_t *)0x50502008)
#define XIP_AUX_STREAM_CLR (*(volatile uint32_t *)0x50503000)
#define XIP_AUX_QMI_DIRECT_TX_CLR (*(volatile uint32_t *)0x50503004)
#define XIP_AUX_QMI_DIRECT_RX_CLR (*(volatile uint32_t *)0x50503008)

/*STREAM Register macros*/


/*QMI_DIRECT_TX Register macros*/

#define XIP_AUX_QMI_DIRECT_TX_NOPUSH(v) (((v)&0x1)<<20)
#define XIP_AUX_QMI_DIRECT_TX_NOPUSH_MASK XIP_AUX_QMI_DIRECT_TX_NOPUSH(ALL1)
#define XIP_AUX_QMI_DIRECT_TX_OE(v) (((v)&0x1)<<19)
#define XIP_AUX_QMI_DIRECT_TX_OE_MASK XIP_AUX_QMI_DIRECT_TX_OE(ALL1)
#define XIP_AUX_QMI_DIRECT_TX_DWIDTH(v) (((v)&0x1)<<18)
#define XIP_AUX_QMI_DIRECT_TX_DWIDTH_MASK XIP_AUX_QMI_DIRECT_TX_DWIDTH(ALL1)
#define XIP_AUX_QMI_DIRECT_TX_IWIDTH(v) (((v)&0x3)<<16)
#define XIP_AUX_QMI_DIRECT_TX_IWIDTH_MASK XIP_AUX_QMI_DIRECT_TX_IWIDTH(ALL1)
#define XIP_AUX_QMI_DIRECT_TX_DATA(v) (((v)&0xffff)<<0)
#define XIP_AUX_QMI_DIRECT_TX_DATA_MASK XIP_AUX_QMI_DIRECT_TX_DATA(ALL1)

/*QMI_DIRECT_RX Register macros*/


#endif

