/*
 *
 * @Component			OMAPCONF
 * @Filename			hwobs_regs44xx.h
 * @Description			OMAP4 HW Observability Registers - Hardware
 *				Debug Signals Mux Configuration
 * @Author			Cedric Vamour (c-vamour@ti.com)
 * @Date			2010
 * @Copyright			Texas Instruments Incorporated
 *
 *
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __HWOBS_OMAP4_REGS_H__
#define __HWOBS_OMAP4_REGS_H__

/* CM2.OCP_SOCKET_CM2 register offsets */
#define OMAP4430_REVISION_CM2				OMAP44XX_CM2_REGADDR(OMAP4430_CM2_OCP_SOCKET_MOD, 0x0000)
#define OMAP4430_CM_CM2_PROFILING_CLKCTRL		OMAP44XX_CM2_REGADDR(OMAP4430_CM2_OCP_SOCKET_MOD, 0x0040)

/* OMAP4430_CONTROL_CORE: PADCONFs */
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU0		(unsigned int) 0x4A1001AE
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU1		(unsigned int) 0x4A1001B0
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU2		(unsigned int) 0x4A1001B2
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU3		(unsigned int) 0x4A1001B4
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU4		(unsigned int) 0x4A1001B6
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU5		(unsigned int) 0x4A1001B8
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU6		(unsigned int) 0x4A1001BA
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU7		(unsigned int) 0x4A1001BC
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU8		(unsigned int) 0x4A1001BE
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU9		(unsigned int) 0x4A1001C0
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU10		(unsigned int) 0x4A1001C2
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU11		(unsigned int) 0x4A1001C4
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU12		(unsigned int) 0x4A1001C6
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU13		(unsigned int) 0x4A1001C8
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU14		(unsigned int) 0x4A1001CA
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU15		(unsigned int) 0x4A1001CC
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU16		(unsigned int) 0x4A1001CE
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU17		(unsigned int) 0x4A1001D0
#define OMAP4430_CONTROL_CORE_PAD1_DPM_EMU18		(unsigned int) 0x4A1001D2
#define OMAP4430_CONTROL_CORE_PAD0_DPM_EMU19		(unsigned int) 0x4A1001D4
#define OMAP4430_CONTROL_CORE_PAD1_USBB1_ULPITLL_CLK		(unsigned int) 0x4A1000C2
#define OMAP4430_CONTROL_CORE_PAD0_USBB1_ULPITLL_STP		(unsigned int) 0x4A1000C4
#define OMAP4430_CONTROL_CORE_PAD1_USBB1_ULPITLL_DIR		(unsigned int) 0x4A1000C6
#define OMAP4430_CONTROL_CORE_PAD0_USBB1_ULPITLL_NXT		(unsigned int) 0x4A1000C8
#define OMAP4430_CONTROL_CORE_PAD1_USBB1_ULPITLL_DAT0		(unsigned int) 0x4A1000CA
#define OMAP4430_CONTROL_CORE_PAD0_USBB1_ULPITLL_DAT1		(unsigned int) 0x4A1000CC
#define OMAP4430_CONTROL_CORE_PAD1_USBB1_ULPITLL_DAT2		(unsigned int) 0x4A1000CE
#define OMAP4430_CONTROL_CORE_PAD0_USBB1_ULPITLL_DAT3		(unsigned int) 0x4A1000D0
#define OMAP4430_CONTROL_CORE_PAD1_USBB1_ULPITLL_DAT4		(unsigned int) 0x4A1000D2
#define OMAP4430_CONTROL_CORE_PAD0_USBB1_ULPITLL_DAT5		(unsigned int) 0x4A1000D4
#define OMAP4430_CONTROL_CORE_PAD1_USBB1_ULPITLL_DAT6		(unsigned int) 0x4A1000D6
#define OMAP4430_CONTROL_CORE_PAD0_USBB1_ULPITLL_DAT7		(unsigned int) 0x4A1000D8

/* ATTILA_CONTROL_CORE: MUX */
#define OMAP4430_CONTROL_CORE_HWOBS_CONTROL					(unsigned int) 0x4A002350
#define OMAP4430_CONTROL_CORE_DEBOBS_FINAL_MUX_SEL			(unsigned int) 0x4A002400
#define OMAP4430_CONTROL_CORE_DEBOBS_OCPWP_SYS_EVENT_SEL		(unsigned int) 0x4A002404
#define OMAP4430_CONTROL_CORE_DEBOBS_MMR_MPU				(unsigned int) 0x4A002408

/* ATTILA_CONTROL_CORE: CONF_DEBUG_SEL_TST_i */
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_0		(unsigned int) 0x4A002480
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_1		(unsigned int) 0x4A002484
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_2		(unsigned int) 0x4A002488
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_3		(unsigned int) 0x4A00248C
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_4		(unsigned int) 0x4A002490
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_5		(unsigned int) 0x4A002494
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_6		(unsigned int) 0x4A002498
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_7		(unsigned int) 0x4A00249C
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_8		(unsigned int) 0x4A0024A0
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_9		(unsigned int) 0x4A0024A4
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_10		(unsigned int) 0x4A0024A8
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_11		(unsigned int) 0x4A0024AC
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_12		(unsigned int) 0x4A0024B0
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_13		(unsigned int) 0x4A0024B4
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_14		(unsigned int) 0x4A0024B8
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_15		(unsigned int) 0x4A0024BC
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_16		(unsigned int) 0x4A0024C0
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_17		(unsigned int) 0x4A0024C4
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_18		(unsigned int) 0x4A0024C8
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_19		(unsigned int) 0x4A0024CC
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_20		(unsigned int) 0x4A0024D0
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_21		(unsigned int) 0x4A0024D4
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_22		(unsigned int) 0x4A0024D8
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_23		(unsigned int) 0x4A0024DC
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_24		(unsigned int) 0x4A0024E0
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_25		(unsigned int) 0x4A0024E4
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_26		(unsigned int) 0x4A0024E8
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_27		(unsigned int) 0x4A0024EC
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_28		(unsigned int) 0x4A0024F0
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_29		(unsigned int) 0x4A0024F4
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_30		(unsigned int) 0x4A0024F8
#define OMAP4430_CONTROL_CORE_CONF_DEBUG_SEL_TST_31		(unsigned int) 0x4A0024FC

/* CM1.OCP_SOCKET_CM1: MUX */
#define OMAP4430_CM_CM1_DEBUG_CFG		(unsigned int) 0x4A0040F0

/* PRM.OCP_SOCKET_PRM: MUX */
#define OMAP4430_PM_PRM_DEBUG_CFG		(unsigned int) 0x4A3060F0

/* CM2.OCP_SOCKET_CM2: MUX */
#define OMAP4430_CM_CM2_DEBUG_CFG		(unsigned int) 0x4A0080F0

/* ATTILA_CONTROL_WKUP: CONF_DEBUG_SEL_TST_i */
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_0		(unsigned int) 0x4A30C460
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_1		(unsigned int) 0x4A30C464
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_2		(unsigned int) 0x4A30C468
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_3		(unsigned int) 0x4A30C46C
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_4		(unsigned int) 0x4A30C470
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_5		(unsigned int) 0x4A30C474
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_6		(unsigned int) 0x4A30C478
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_7		(unsigned int) 0x4A30C47C
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_8		(unsigned int) 0x4A30C480
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_9		(unsigned int) 0x4A30C484
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_10		(unsigned int) 0x4A30C488
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_11		(unsigned int) 0x4A30C48C
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_12		(unsigned int) 0x4A30C490
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_13		(unsigned int) 0x4A30C494
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_14		(unsigned int) 0x4A30C498
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_15		(unsigned int) 0x4A30C49C
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_16		(unsigned int) 0x4A30C4A0
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_17		(unsigned int) 0x4A30C4A4
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_18		(unsigned int) 0x4A30C4A8
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_19		(unsigned int) 0x4A30C4AC
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_20		(unsigned int) 0x4A30C4B0
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_21		(unsigned int) 0x4A30C4B4
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_22		(unsigned int) 0x4A30C4B8
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_23		(unsigned int) 0x4A30C4BC
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_24		(unsigned int) 0x4A30C4C0
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_25		(unsigned int) 0x4A30C4C4
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_26		(unsigned int) 0x4A30C4C8
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_27		(unsigned int) 0x4A30C4CC
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_28		(unsigned int) 0x4A30C4D0
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_29		(unsigned int) 0x4A30C4D4
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_30		(unsigned int) 0x4A30C4D8
#define OMAP4430_CONTROL_WKUP_CONF_DEBUG_SEL_TST_31		(unsigned int) 0x4A30C4DC

#endif /* __HWOBS_OMAP4_REGS_H__ */
