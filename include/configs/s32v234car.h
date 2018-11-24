/*
 * (C) Copyright 2015-2016 Freescale Semiconductor, Inc.
 * (C) Copyright 2017 MicroSys Electronics GmbH
 * Copyright 2018 NXP
 * Copyright 2018 HIT
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/*
 * Configuration settings for the HIT S32V234CAR board.
 */

#ifndef __S32V234CAR_H
#define __S32V234CAR_H

/* The configurations of this board depend on the definitions in this file and
* the ones in the header included at the end, configs/s32v234_common.h */
#define DEBUG

#define CONFIG_S32V234CAR

#define CONFIG_DDR_INIT_DELAY 100

#define CONFIG_FSL_USDHC
#define CONFIG_SYS_FSL_ESDHC_ADDR	USDHC_BASE_ADDR

#define CONFIG_CMD_EXT2
#define CONFIG_CMD_EXT4

/* Config DCU */
#define CONFIG_FSL_DCU_FB

/*
 * RTC configuration
 */

#define CONFIG_MMC_TRACE

/* Ethernet config */

#define CONFIG_FEC_XCV_TYPE     RGMII
#define CONFIG_PHYLIB

#define CONFIG_FEC_MXC_PHYADDR  1

#define	FDT_FILE s32v234car.dtb

#define CONFIG_SYS_INIT_SP_OFFSET	\
	(CONFIG_SYS_INIT_RAM_SIZE -	\
	 GENERATED_GBL_DATA_SIZE -	\
	 CONFIG_SYS_TEXT_OFFSET)

/* we include this file here because it depends on the above definitions */
#include <configs/s32v234_common.h>

#endif
