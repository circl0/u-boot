/*
 * Copyright 2015 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __ARCH_ARM_MACH_S32V234_DDR3_H__
#define __ARCH_ARM_MACH_S32V234_DDR3_H__


/* definitions for DDR3 PAD values */

#define DDR3_RESET_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DDR_INPUT_DIFF_DDR | SIUL2_MSCR_DSE_34ohm |	\
	 SIUL2_MSCR_DDR_ODT_60ohm | SIUL2_MSCR_PUS_100K_UP)
#define DDR3_CLK0_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_CRPOINT_TRIM_1 |				\
	 SIUL2_MSCR_DCYCLE_TRIM_NONE | SIUL2_MSCR_DDR_INPUT_DIFF_DDR | SIUL2_MSCR_DDR_ODT_120ohm |	\
	SIUL2_MSCR_PUS_100K_UP)
#define DDR3_CAS_PAD		\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_ODT_60ohm |	\
	 SIUL2_MSCR_DDR_INPUT_DIFF_DDR | SIUL2_MSCR_PUS_100K_UP)
#define DDR3_RAS_PAD		\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_ODT_60ohm |	\
	 SIUL2_MSCR_DDR_INPUT_DIFF_DDR | SIUL2_MSCR_PUS_100K_UP)
#define DDR3_WE_B_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_ODT_60ohm |	\
	 SIUL2_MSCR_DDR_INPUT_DIFF_DDR | SIUL2_MSCR_PUS_100K_UP)
#define DDR3_CKEn_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_ODT_60ohm |	\
	 SIUL2_MSCR_DDR_INPUT_DIFF_DDR | SIUL2_MSCR_PUS_100K_UP)
#define DDR3_CS_Bn_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_ODT_60ohm |	\
	 SIUL2_MSCR_DDR_INPUT_DIFF_DDR | SIUL2_MSCR_PUS_100K_UP)
#define DDR3_BAn_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_DO_TRIM_50PS |				\
	 SIUL2_MSCR_DCYCLE_TRIM_LEFT | SIUL2_MSCR_DDR_ODT_60ohm | SIUL2_MSCR_DDR_INPUT_DIFF_DDR |	\
	SIUL2_MSCR_PUS_100K_UP)
#define DDR3_DMn_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_ODT_60ohm |	\
	SIUL2_MSCR_DDR_INPUT_DIFF_DDR | SIUL2_MSCR_PUS_100K_UP)
#define DDR3_DQSn_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_CRPOINT_TRIM_1 |				\
	 SIUL2_MSCR_DCYCLE_TRIM_NONE | SIUL2_MSCR_DDR_ODT_120ohm | SIUL2_MSCR_DDR_INPUT_DIFF_DDR |	\
	 SIUL2_MSCR_PUS_100K_UP)
#define DDR3_ODTn_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_DO_TRIM_50PS |			\
	 SIUL2_MSCR_DCYCLE_TRIM_LEFT | SIUL2_MSCR_DDR_INPUT_DIFF_DDR |SIUL2_MSCR_PUS_100K_UP |	\
	 SIUL2_MSCR_DDR_ODT_120ohm)
#define DDR3_An_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_DO_TRIM_50PS |				\
	SIUL2_MSCR_DCYCLE_TRIM_LEFT | SIUL2_MSCR_DDR_ODT_60ohm | SIUL2_MSCR_DDR_INPUT_DIFF_DDR |	\
	SIUL2_MSCR_PUS_100K_UP)
#define DDR3_Dn_PAD	\
	(SIUL2_MSCR_DDR_SEL_DDR3 | SIUL2_MSCR_DSE_34ohm | SIUL2_MSCR_DDR_DO_TRIM_50PS |				\
	SIUL2_MSCR_DCYCLE_TRIM_LEFT | SIUL2_MSCR_DDR_ODT_60ohm | SIUL2_MSCR_DDR_INPUT_DIFF_DDR |	\
	SIUL2_MSCR_PUS_100K_UP)

/* values of MMDC registers */

#define _MDCTL 0x04190000

#define MMDC_MDSCR_CFG_VALUE	0x00008000  /* Set MDSCR[CON_REQ] (configuration request) */
#define MMDC_MDCFG0_VALUE		0x8F9598F4  /* tRFC=144 (270ns),tXS=150 (tRFC+10ns),tXP=4 (6ns),tXPDLL=13 (24ns),tFAW=16(30ns),tCL=7 */
#define MMDC_MDCFG1_VALUE		0xFF328E64  /* tRCD=8 (13.75ns),tRP=6 (13,75ns),tRC=26 (48.75ns),tRAS=19 (35ns),tRPA=1,tWR=8 (15ns),tMRD=4,tCWL=6 */
#define MMDC_MDCFG2_VALUE		0x01FF00DB  /* tDLLK=512,tRTP=4,tWTR=4,tRRD=4 */
#define MMDC_MDOTC_VALUE		0x09444030  /* tAOFPD=2,tAONPD=2,tANPD=5 (tCWL-1),tAXPD=5 (tCWL-1),tODTLon=5 (WL-2),tODT_idle_off=0 */
#define MMDC_MDMISC_VALUE		0x00011640  /* WALAT=1, BI bank interleave on, MIF3=3, RALAT=1, 8 banks, DDR3 */
#define MMDC_MDOR_VALUE			0x009A1023  /* tXPR=155 (tRFC+10ns), SDE_to_RST=14, RST_to_CKE=33 */

/* P_form ZQ calibration */
#define MMDC_MPZQHWCTRL_VALUE	0xA1390003;	/* Force h/w calibration */

/* Complete the initialization sequence as defined by JEDEC */
#define MMDC_MDSCR_MR2_VALUE	0x00088032  /* Configure MR2: CWL=6, self-refresh=off, self-refresh temp=normal */
#define MMDC_MDSCR_MR3_VALUE	0x00008033  /* Configure MR3: normal operation */
#define MMDC_MDSCR_MR1_VALUE	0x00068031  /* Configure MR1: enable DLL, drive strength=34R, AL off, ODT=60R, write levelling off, TDQS=0, Qoff=on */
#define MMDC_MDSCR_MR0_VALUE	0x05308030  /* Configure MR0: BL=8, CL=7, DLL reset, write recovery=6, precharge PD off */
#define MMDC_MDSCR_ZQ_VALUE		0x04008040  /* DDR ZQ calibration */

/* Set the amount of DRAM */
/* Set DQS settings based on board type */
#define MMDC_MDASP_MODULE0_VALUE		0x0000007F  /* 1 GB memory */
#define MMDC_MPRDDLCTL_MODULE0_VALUE	0x46464644  /* Read delay line offsets */
#define MMDC_MPWRDLCTL_MODULE0_VALUE	0x3B333837  /* Write delay line offsets */
#define MMDC_MPDGCTRL0_MODULE0_VALUE	0x4177016C  /* Read DQS gating control 0 */
#define MMDC_MPDGCTRL1_MODULE0_VALUE	0x013A0141  /* Read DQS gating control 1 */

#define MMDC_MDASP_MODULE1_VALUE		0x0000007F  /* 1 GB memory */
#define MMDC_MPRDDLCTL_MODULE1_VALUE	0x45474645  /* Read delay line offsets */
#define MMDC_MPWRDLCTL_MODULE1_VALUE	0x3E333836  /* Write delay line offsets */
#define MMDC_MPDGCTRL0_MODULE1_VALUE	0x417A0169  /* Read DQS gating control 0 */
#define MMDC_MPDGCTRL1_MODULE1_VALUE	0x0137013F  /* Read DQS gating control 1 */

#define MMDC_MDRWD_VALUE				0x000026D2  /* Read/write command delay - default */
#define MMDC_MDPDC_VALUE				0x00020024  /* Power down control */
#define MMDC_MDREF_VALUE				0x30B01800  /* Refresh control */
#define MMDC_MPODTCTRL_VALUE			0x0002222F  /* 60R nominal */
#define MMDC_MDSCR_RESET_VALUE			0x00000000  /* Deassert the configuration request */

/* set I/O pads for DDR */
void ddr3_config_iomux(uint8_t module);
void config_mmdc(uint8_t module);

#endif