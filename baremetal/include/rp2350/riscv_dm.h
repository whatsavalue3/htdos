
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

#ifndef RP2350_RISCV_DM_H
#define RP2350_RISCV_DM_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t RSVD0[4];
		uint32_t data0;
		uint32_t RSVD1[11];
		uint32_t dmcontrol;
		uint32_t dmstatus;
		uint32_t hartinfo;
		uint32_t haltsum1;
		uint32_t hawindowsel;
		uint32_t hawindow;
		uint32_t abstracts;
		uint32_t command;
		uint32_t abstractauto;
		uint32_t RSVD2[4];
		uint32_t nextdm;
		uint32_t RSVD3[2];
		uint32_t progbuf0;
		uint32_t progbuf1;
		uint32_t RSVD4[22];
		uint32_t sbcs;
		uint32_t sbaddress0;
		uint32_t RSVD5[2];
		uint32_t sbdata0;
		uint32_t RSVD6[3];
		uint32_t haltsum0;
		uint32_t RSVD7[959];
		uint32_t RSVDxor_0[4];
		uint32_t data0_xor;
		uint32_t RSVDxor_1[11];
		uint32_t dmcontrol_xor;
		uint32_t dmstatus_xor;
		uint32_t hartinfo_xor;
		uint32_t haltsum1_xor;
		uint32_t hawindowsel_xor;
		uint32_t hawindow_xor;
		uint32_t abstracts_xor;
		uint32_t command_xor;
		uint32_t abstractauto_xor;
		uint32_t RSVDxor_2[4];
		uint32_t nextdm_xor;
		uint32_t RSVDxor_3[2];
		uint32_t progbuf0_xor;
		uint32_t progbuf1_xor;
		uint32_t RSVDxor_4[22];
		uint32_t sbcs_xor;
		uint32_t sbaddress0_xor;
		uint32_t RSVDxor_5[2];
		uint32_t sbdata0_xor;
		uint32_t RSVDxor_6[3];
		uint32_t haltsum0_xor;
		uint32_t RSVDxor_7[959];
		uint32_t RSVDset_0[4];
		uint32_t data0_set;
		uint32_t RSVDset_1[11];
		uint32_t dmcontrol_set;
		uint32_t dmstatus_set;
		uint32_t hartinfo_set;
		uint32_t haltsum1_set;
		uint32_t hawindowsel_set;
		uint32_t hawindow_set;
		uint32_t abstracts_set;
		uint32_t command_set;
		uint32_t abstractauto_set;
		uint32_t RSVDset_2[4];
		uint32_t nextdm_set;
		uint32_t RSVDset_3[2];
		uint32_t progbuf0_set;
		uint32_t progbuf1_set;
		uint32_t RSVDset_4[22];
		uint32_t sbcs_set;
		uint32_t sbaddress0_set;
		uint32_t RSVDset_5[2];
		uint32_t sbdata0_set;
		uint32_t RSVDset_6[3];
		uint32_t haltsum0_set;
		uint32_t RSVDset_7[959];
		uint32_t RSVDclr_0[4];
		uint32_t data0_clr;
		uint32_t RSVDclr_1[11];
		uint32_t dmcontrol_clr;
		uint32_t dmstatus_clr;
		uint32_t hartinfo_clr;
		uint32_t haltsum1_clr;
		uint32_t hawindowsel_clr;
		uint32_t hawindow_clr;
		uint32_t abstracts_clr;
		uint32_t command_clr;
		uint32_t abstractauto_clr;
		uint32_t RSVDclr_2[4];
		uint32_t nextdm_clr;
		uint32_t RSVDclr_3[2];
		uint32_t progbuf0_clr;
		uint32_t progbuf1_clr;
		uint32_t RSVDclr_4[22];
		uint32_t sbcs_clr;
		uint32_t sbaddress0_clr;
		uint32_t RSVDclr_5[2];
		uint32_t sbdata0_clr;
		uint32_t RSVDclr_6[3];
		uint32_t haltsum0_clr;
		uint32_t RSVDclr_7[959];
} RISCV_DM_REG_BLOCKS;


/*IO Registers as struct*/

#define riscv_dm (*(RISCV_DM_REG_BLOCKS volatile *)0x50700000)


/*IO Registers AS MACROS*/

#define RISCV_DM_DATA0 (*(volatile uint32_t *)0x50700010)
#define RISCV_DM_DMCONTROL (*(volatile uint32_t *)0x50700040)
#define RISCV_DM_DMSTATUS (*(volatile uint32_t *)0x50700044)
#define RISCV_DM_HARTINFO (*(volatile uint32_t *)0x50700048)
#define RISCV_DM_HALTSUM1 (*(volatile uint32_t *)0x5070004c)
#define RISCV_DM_HAWINDOWSEL (*(volatile uint32_t *)0x50700050)
#define RISCV_DM_HAWINDOW (*(volatile uint32_t *)0x50700054)
#define RISCV_DM_ABSTRACTS (*(volatile uint32_t *)0x50700058)
#define RISCV_DM_COMMAND (*(volatile uint32_t *)0x5070005c)
#define RISCV_DM_ABSTRACTAUTO (*(volatile uint32_t *)0x50700060)
#define RISCV_DM_NEXTDM (*(volatile uint32_t *)0x50700074)
#define RISCV_DM_PROGBUF0 (*(volatile uint32_t *)0x50700080)
#define RISCV_DM_PROGBUF1 (*(volatile uint32_t *)0x50700084)
#define RISCV_DM_SBCS (*(volatile uint32_t *)0x507000e0)
#define RISCV_DM_SBADDRESS0 (*(volatile uint32_t *)0x507000e4)
#define RISCV_DM_SBDATA0 (*(volatile uint32_t *)0x507000f0)
#define RISCV_DM_HALTSUM0 (*(volatile uint32_t *)0x50700100)
#define RISCV_DM_DATA0_XOR (*(volatile uint32_t *)0x50701010)
#define RISCV_DM_DMCONTROL_XOR (*(volatile uint32_t *)0x50701040)
#define RISCV_DM_DMSTATUS_XOR (*(volatile uint32_t *)0x50701044)
#define RISCV_DM_HARTINFO_XOR (*(volatile uint32_t *)0x50701048)
#define RISCV_DM_HALTSUM1_XOR (*(volatile uint32_t *)0x5070104c)
#define RISCV_DM_HAWINDOWSEL_XOR (*(volatile uint32_t *)0x50701050)
#define RISCV_DM_HAWINDOW_XOR (*(volatile uint32_t *)0x50701054)
#define RISCV_DM_ABSTRACTS_XOR (*(volatile uint32_t *)0x50701058)
#define RISCV_DM_COMMAND_XOR (*(volatile uint32_t *)0x5070105c)
#define RISCV_DM_ABSTRACTAUTO_XOR (*(volatile uint32_t *)0x50701060)
#define RISCV_DM_NEXTDM_XOR (*(volatile uint32_t *)0x50701074)
#define RISCV_DM_PROGBUF0_XOR (*(volatile uint32_t *)0x50701080)
#define RISCV_DM_PROGBUF1_XOR (*(volatile uint32_t *)0x50701084)
#define RISCV_DM_SBCS_XOR (*(volatile uint32_t *)0x507010e0)
#define RISCV_DM_SBADDRESS0_XOR (*(volatile uint32_t *)0x507010e4)
#define RISCV_DM_SBDATA0_XOR (*(volatile uint32_t *)0x507010f0)
#define RISCV_DM_HALTSUM0_XOR (*(volatile uint32_t *)0x50701100)
#define RISCV_DM_DATA0_SET (*(volatile uint32_t *)0x50702010)
#define RISCV_DM_DMCONTROL_SET (*(volatile uint32_t *)0x50702040)
#define RISCV_DM_DMSTATUS_SET (*(volatile uint32_t *)0x50702044)
#define RISCV_DM_HARTINFO_SET (*(volatile uint32_t *)0x50702048)
#define RISCV_DM_HALTSUM1_SET (*(volatile uint32_t *)0x5070204c)
#define RISCV_DM_HAWINDOWSEL_SET (*(volatile uint32_t *)0x50702050)
#define RISCV_DM_HAWINDOW_SET (*(volatile uint32_t *)0x50702054)
#define RISCV_DM_ABSTRACTS_SET (*(volatile uint32_t *)0x50702058)
#define RISCV_DM_COMMAND_SET (*(volatile uint32_t *)0x5070205c)
#define RISCV_DM_ABSTRACTAUTO_SET (*(volatile uint32_t *)0x50702060)
#define RISCV_DM_NEXTDM_SET (*(volatile uint32_t *)0x50702074)
#define RISCV_DM_PROGBUF0_SET (*(volatile uint32_t *)0x50702080)
#define RISCV_DM_PROGBUF1_SET (*(volatile uint32_t *)0x50702084)
#define RISCV_DM_SBCS_SET (*(volatile uint32_t *)0x507020e0)
#define RISCV_DM_SBADDRESS0_SET (*(volatile uint32_t *)0x507020e4)
#define RISCV_DM_SBDATA0_SET (*(volatile uint32_t *)0x507020f0)
#define RISCV_DM_HALTSUM0_SET (*(volatile uint32_t *)0x50702100)
#define RISCV_DM_DATA0_CLR (*(volatile uint32_t *)0x50703010)
#define RISCV_DM_DMCONTROL_CLR (*(volatile uint32_t *)0x50703040)
#define RISCV_DM_DMSTATUS_CLR (*(volatile uint32_t *)0x50703044)
#define RISCV_DM_HARTINFO_CLR (*(volatile uint32_t *)0x50703048)
#define RISCV_DM_HALTSUM1_CLR (*(volatile uint32_t *)0x5070304c)
#define RISCV_DM_HAWINDOWSEL_CLR (*(volatile uint32_t *)0x50703050)
#define RISCV_DM_HAWINDOW_CLR (*(volatile uint32_t *)0x50703054)
#define RISCV_DM_ABSTRACTS_CLR (*(volatile uint32_t *)0x50703058)
#define RISCV_DM_COMMAND_CLR (*(volatile uint32_t *)0x5070305c)
#define RISCV_DM_ABSTRACTAUTO_CLR (*(volatile uint32_t *)0x50703060)
#define RISCV_DM_NEXTDM_CLR (*(volatile uint32_t *)0x50703074)
#define RISCV_DM_PROGBUF0_CLR (*(volatile uint32_t *)0x50703080)
#define RISCV_DM_PROGBUF1_CLR (*(volatile uint32_t *)0x50703084)
#define RISCV_DM_SBCS_CLR (*(volatile uint32_t *)0x507030e0)
#define RISCV_DM_SBADDRESS0_CLR (*(volatile uint32_t *)0x507030e4)
#define RISCV_DM_SBDATA0_CLR (*(volatile uint32_t *)0x507030f0)
#define RISCV_DM_HALTSUM0_CLR (*(volatile uint32_t *)0x50703100)

/*DATA0 Register macros*/


/*DMCONTROL Register macros*/

#define RISCV_DM_DMCONTROL_HALTREQ(v) (((v)&0x1)<<31)
#define RISCV_DM_DMCONTROL_HALTREQ_MASK RISCV_DM_DMCONTROL_HALTREQ(ALL1)
#define RISCV_DM_DMCONTROL_RESUMEREQ(v) (((v)&0x1)<<30)
#define RISCV_DM_DMCONTROL_RESUMEREQ_MASK RISCV_DM_DMCONTROL_RESUMEREQ(ALL1)
#define RISCV_DM_DMCONTROL_HARTRESET(v) (((v)&0x1)<<29)
#define RISCV_DM_DMCONTROL_HARTRESET_MASK RISCV_DM_DMCONTROL_HARTRESET(ALL1)
#define RISCV_DM_DMCONTROL_ACKHAVERESET(v) (((v)&0x1)<<28)
#define RISCV_DM_DMCONTROL_ACKHAVERESET_MASK RISCV_DM_DMCONTROL_ACKHAVERESET(ALL1)
#define RISCV_DM_DMCONTROL_HASEL(v) (((v)&0x1)<<26)
#define RISCV_DM_DMCONTROL_HASEL_MASK RISCV_DM_DMCONTROL_HASEL(ALL1)
#define RISCV_DM_DMCONTROL_HARTSELLO(v) (((v)&0x3ff)<<16)
#define RISCV_DM_DMCONTROL_HARTSELLO_MASK RISCV_DM_DMCONTROL_HARTSELLO(ALL1)
#define RISCV_DM_DMCONTROL_HARTSELHI(v) (((v)&0x3ff)<<6)
#define RISCV_DM_DMCONTROL_HARTSELHI_MASK RISCV_DM_DMCONTROL_HARTSELHI(ALL1)
#define RISCV_DM_DMCONTROL_SETRESETHALTREQ(v) (((v)&0x1)<<3)
#define RISCV_DM_DMCONTROL_SETRESETHALTREQ_MASK RISCV_DM_DMCONTROL_SETRESETHALTREQ(ALL1)
#define RISCV_DM_DMCONTROL_CLRRESETHALTREQ(v) (((v)&0x1)<<2)
#define RISCV_DM_DMCONTROL_CLRRESETHALTREQ_MASK RISCV_DM_DMCONTROL_CLRRESETHALTREQ(ALL1)
#define RISCV_DM_DMCONTROL_NDMRESET(v) (((v)&0x1)<<1)
#define RISCV_DM_DMCONTROL_NDMRESET_MASK RISCV_DM_DMCONTROL_NDMRESET(ALL1)
#define RISCV_DM_DMCONTROL_DMACTIVE(v) (((v)&0x1)<<0)
#define RISCV_DM_DMCONTROL_DMACTIVE_MASK RISCV_DM_DMCONTROL_DMACTIVE(ALL1)

/*DMSTATUS Register macros*/

#define RISCV_DM_DMSTATUS_IMPEBREAK(v) (((v)&0x1)<<22)
#define RISCV_DM_DMSTATUS_IMPEBREAK_MASK RISCV_DM_DMSTATUS_IMPEBREAK(ALL1)
#define RISCV_DM_DMSTATUS_ALLHAVERESET(v) (((v)&0x1)<<19)
#define RISCV_DM_DMSTATUS_ALLHAVERESET_MASK RISCV_DM_DMSTATUS_ALLHAVERESET(ALL1)
#define RISCV_DM_DMSTATUS_ANYHAVERESET(v) (((v)&0x1)<<18)
#define RISCV_DM_DMSTATUS_ANYHAVERESET_MASK RISCV_DM_DMSTATUS_ANYHAVERESET(ALL1)
#define RISCV_DM_DMSTATUS_ALLRESUMEACK(v) (((v)&0x1)<<17)
#define RISCV_DM_DMSTATUS_ALLRESUMEACK_MASK RISCV_DM_DMSTATUS_ALLRESUMEACK(ALL1)
#define RISCV_DM_DMSTATUS_ANYRESUMEACK(v) (((v)&0x1)<<16)
#define RISCV_DM_DMSTATUS_ANYRESUMEACK_MASK RISCV_DM_DMSTATUS_ANYRESUMEACK(ALL1)
#define RISCV_DM_DMSTATUS_ALLNONEXISTENT(v) (((v)&0x1)<<15)
#define RISCV_DM_DMSTATUS_ALLNONEXISTENT_MASK RISCV_DM_DMSTATUS_ALLNONEXISTENT(ALL1)
#define RISCV_DM_DMSTATUS_ANYNONEXISTENT(v) (((v)&0x1)<<14)
#define RISCV_DM_DMSTATUS_ANYNONEXISTENT_MASK RISCV_DM_DMSTATUS_ANYNONEXISTENT(ALL1)
#define RISCV_DM_DMSTATUS_ALLUNAVAIL(v) (((v)&0x1)<<13)
#define RISCV_DM_DMSTATUS_ALLUNAVAIL_MASK RISCV_DM_DMSTATUS_ALLUNAVAIL(ALL1)
#define RISCV_DM_DMSTATUS_ANYUNAVAIL(v) (((v)&0x1)<<12)
#define RISCV_DM_DMSTATUS_ANYUNAVAIL_MASK RISCV_DM_DMSTATUS_ANYUNAVAIL(ALL1)
#define RISCV_DM_DMSTATUS_ALLRUNNING(v) (((v)&0x1)<<11)
#define RISCV_DM_DMSTATUS_ALLRUNNING_MASK RISCV_DM_DMSTATUS_ALLRUNNING(ALL1)
#define RISCV_DM_DMSTATUS_ANYRUNNING(v) (((v)&0x1)<<10)
#define RISCV_DM_DMSTATUS_ANYRUNNING_MASK RISCV_DM_DMSTATUS_ANYRUNNING(ALL1)
#define RISCV_DM_DMSTATUS_ALLHALTED(v) (((v)&0x1)<<9)
#define RISCV_DM_DMSTATUS_ALLHALTED_MASK RISCV_DM_DMSTATUS_ALLHALTED(ALL1)
#define RISCV_DM_DMSTATUS_ANYHALTED(v) (((v)&0x1)<<8)
#define RISCV_DM_DMSTATUS_ANYHALTED_MASK RISCV_DM_DMSTATUS_ANYHALTED(ALL1)
#define RISCV_DM_DMSTATUS_AUTHENTICATED(v) (((v)&0x1)<<7)
#define RISCV_DM_DMSTATUS_AUTHENTICATED_MASK RISCV_DM_DMSTATUS_AUTHENTICATED(ALL1)
#define RISCV_DM_DMSTATUS_AUTHBUSY(v) (((v)&0x1)<<6)
#define RISCV_DM_DMSTATUS_AUTHBUSY_MASK RISCV_DM_DMSTATUS_AUTHBUSY(ALL1)
#define RISCV_DM_DMSTATUS_HASRESETHALTREQ(v) (((v)&0x1)<<5)
#define RISCV_DM_DMSTATUS_HASRESETHALTREQ_MASK RISCV_DM_DMSTATUS_HASRESETHALTREQ(ALL1)
#define RISCV_DM_DMSTATUS_CONFSTPTRVALID(v) (((v)&0x1)<<4)
#define RISCV_DM_DMSTATUS_CONFSTPTRVALID_MASK RISCV_DM_DMSTATUS_CONFSTPTRVALID(ALL1)
#define RISCV_DM_DMSTATUS_VERSION(v) (((v)&0xf)<<0)
#define RISCV_DM_DMSTATUS_VERSION_MASK RISCV_DM_DMSTATUS_VERSION(ALL1)

/*HARTINFO Register macros*/

#define RISCV_DM_HARTINFO_NSCRATCH(v) (((v)&0xf)<<20)
#define RISCV_DM_HARTINFO_NSCRATCH_MASK RISCV_DM_HARTINFO_NSCRATCH(ALL1)
#define RISCV_DM_HARTINFO_DATAACCESS(v) (((v)&0x1)<<16)
#define RISCV_DM_HARTINFO_DATAACCESS_MASK RISCV_DM_HARTINFO_DATAACCESS(ALL1)
#define RISCV_DM_HARTINFO_DATASIZE(v) (((v)&0xf)<<12)
#define RISCV_DM_HARTINFO_DATASIZE_MASK RISCV_DM_HARTINFO_DATASIZE(ALL1)
#define RISCV_DM_HARTINFO_DATAADDR(v) (((v)&0xfff)<<0)
#define RISCV_DM_HARTINFO_DATAADDR_MASK RISCV_DM_HARTINFO_DATAADDR(ALL1)

/*HALTSUM1 Register macros*/


/*HAWINDOWSEL Register macros*/

#define RISCV_DM_HAWINDOWSEL_HAWINDOWSEL(v) (((v)&0x7fff)<<0)
#define RISCV_DM_HAWINDOWSEL_HAWINDOWSEL_MASK RISCV_DM_HAWINDOWSEL_HAWINDOWSEL(ALL1)

/*HAWINDOW Register macros*/

#define RISCV_DM_HAWINDOW_MASKDATA(v) (((v)&0x3)<<0)
#define RISCV_DM_HAWINDOW_MASKDATA_MASK RISCV_DM_HAWINDOW_MASKDATA(ALL1)

/*ABSTRACTS Register macros*/

#define RISCV_DM_ABSTRACTS_PROGBUFSIZE(v) (((v)&0x1f)<<24)
#define RISCV_DM_ABSTRACTS_PROGBUFSIZE_MASK RISCV_DM_ABSTRACTS_PROGBUFSIZE(ALL1)
#define RISCV_DM_ABSTRACTS_BUSY(v) (((v)&0x1)<<12)
#define RISCV_DM_ABSTRACTS_BUSY_MASK RISCV_DM_ABSTRACTS_BUSY(ALL1)
#define RISCV_DM_ABSTRACTS_CMDERR(v) (((v)&0x7)<<8)
#define RISCV_DM_ABSTRACTS_CMDERR_MASK RISCV_DM_ABSTRACTS_CMDERR(ALL1)
#define RISCV_DM_ABSTRACTS_DATACOUNT(v) (((v)&0xf)<<0)
#define RISCV_DM_ABSTRACTS_DATACOUNT_MASK RISCV_DM_ABSTRACTS_DATACOUNT(ALL1)

/*COMMAND Register macros*/

#define RISCV_DM_COMMAND_CMDTYPE(v) (((v)&0xff)<<24)
#define RISCV_DM_COMMAND_CMDTYPE_MASK RISCV_DM_COMMAND_CMDTYPE(ALL1)
#define RISCV_DM_COMMAND_AARSIZE(v) (((v)&0x7)<<20)
#define RISCV_DM_COMMAND_AARSIZE_MASK RISCV_DM_COMMAND_AARSIZE(ALL1)
#define RISCV_DM_COMMAND_AARPOSTINCREMENT(v) (((v)&0x1)<<19)
#define RISCV_DM_COMMAND_AARPOSTINCREMENT_MASK RISCV_DM_COMMAND_AARPOSTINCREMENT(ALL1)
#define RISCV_DM_COMMAND_POSTEXEC(v) (((v)&0x1)<<18)
#define RISCV_DM_COMMAND_POSTEXEC_MASK RISCV_DM_COMMAND_POSTEXEC(ALL1)
#define RISCV_DM_COMMAND_TRANSFER(v) (((v)&0x1)<<17)
#define RISCV_DM_COMMAND_TRANSFER_MASK RISCV_DM_COMMAND_TRANSFER(ALL1)
#define RISCV_DM_COMMAND_WRITE(v) (((v)&0x1)<<16)
#define RISCV_DM_COMMAND_WRITE_MASK RISCV_DM_COMMAND_WRITE(ALL1)
#define RISCV_DM_COMMAND_REGNO(v) (((v)&0xffff)<<0)
#define RISCV_DM_COMMAND_REGNO_MASK RISCV_DM_COMMAND_REGNO(ALL1)

/*ABSTRACTAUTO Register macros*/

#define RISCV_DM_ABSTRACTAUTO_AUTOEXECPROGBUF(v) (((v)&0x1ffff)<<15)
#define RISCV_DM_ABSTRACTAUTO_AUTOEXECPROGBUF_MASK RISCV_DM_ABSTRACTAUTO_AUTOEXECPROGBUF(ALL1)
#define RISCV_DM_ABSTRACTAUTO_AUTOEXEDDATA(v) (((v)&0xfff)<<0)
#define RISCV_DM_ABSTRACTAUTO_AUTOEXEDDATA_MASK RISCV_DM_ABSTRACTAUTO_AUTOEXEDDATA(ALL1)

/*NEXTDM Register macros*/


/*PROGBUF0 Register macros*/


/*PROGBUF1 Register macros*/


/*SBCS Register macros*/

#define RISCV_DM_SBCS_SBVERSION(v) (((v)&0x7)<<29)
#define RISCV_DM_SBCS_SBVERSION_MASK RISCV_DM_SBCS_SBVERSION(ALL1)
#define RISCV_DM_SBCS_SBBUSYERROR(v) (((v)&0x1)<<22)
#define RISCV_DM_SBCS_SBBUSYERROR_MASK RISCV_DM_SBCS_SBBUSYERROR(ALL1)
#define RISCV_DM_SBCS_SBBUSY(v) (((v)&0x1)<<21)
#define RISCV_DM_SBCS_SBBUSY_MASK RISCV_DM_SBCS_SBBUSY(ALL1)
#define RISCV_DM_SBCS_SBREADONADDR(v) (((v)&0x1)<<20)
#define RISCV_DM_SBCS_SBREADONADDR_MASK RISCV_DM_SBCS_SBREADONADDR(ALL1)
#define RISCV_DM_SBCS_SBACCESS(v) (((v)&0x7)<<17)
#define RISCV_DM_SBCS_SBACCESS_MASK RISCV_DM_SBCS_SBACCESS(ALL1)
#define RISCV_DM_SBCS_SBAUTOINCREMENT(v) (((v)&0x1)<<16)
#define RISCV_DM_SBCS_SBAUTOINCREMENT_MASK RISCV_DM_SBCS_SBAUTOINCREMENT(ALL1)
#define RISCV_DM_SBCS_SBREADONDATA(v) (((v)&0x1)<<15)
#define RISCV_DM_SBCS_SBREADONDATA_MASK RISCV_DM_SBCS_SBREADONDATA(ALL1)
#define RISCV_DM_SBCS_SBERROR(v) (((v)&0x7)<<12)
#define RISCV_DM_SBCS_SBERROR_MASK RISCV_DM_SBCS_SBERROR(ALL1)
#define RISCV_DM_SBCS_SBASIZE(v) (((v)&0x7f)<<5)
#define RISCV_DM_SBCS_SBASIZE_MASK RISCV_DM_SBCS_SBASIZE(ALL1)
#define RISCV_DM_SBCS_SBACCESS128(v) (((v)&0x1)<<4)
#define RISCV_DM_SBCS_SBACCESS128_MASK RISCV_DM_SBCS_SBACCESS128(ALL1)
#define RISCV_DM_SBCS_SBACCESS64(v) (((v)&0x1)<<3)
#define RISCV_DM_SBCS_SBACCESS64_MASK RISCV_DM_SBCS_SBACCESS64(ALL1)
#define RISCV_DM_SBCS_SBACCESS32(v) (((v)&0x1)<<2)
#define RISCV_DM_SBCS_SBACCESS32_MASK RISCV_DM_SBCS_SBACCESS32(ALL1)
#define RISCV_DM_SBCS_SBACCESS16(v) (((v)&0x1)<<1)
#define RISCV_DM_SBCS_SBACCESS16_MASK RISCV_DM_SBCS_SBACCESS16(ALL1)
#define RISCV_DM_SBCS_SBACCESS8(v) (((v)&0x1)<<0)
#define RISCV_DM_SBCS_SBACCESS8_MASK RISCV_DM_SBCS_SBACCESS8(ALL1)

/*SBADDRESS0 Register macros*/

#define RISCV_DM_SBADDRESS0_ADDRESS(v) (((v)&0xffffffff)<<0)
#define RISCV_DM_SBADDRESS0_ADDRESS_MASK RISCV_DM_SBADDRESS0_ADDRESS(ALL1)

/*SBDATA0 Register macros*/

#define RISCV_DM_SBDATA0_DATA(v) (((v)&0xffffffff)<<0)
#define RISCV_DM_SBDATA0_DATA_MASK RISCV_DM_SBDATA0_DATA(ALL1)

/*HALTSUM0 Register macros*/


#endif

