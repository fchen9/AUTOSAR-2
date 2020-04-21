/**
 * \file IfxMinimcds_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:04 GMT
 * Version: TBD
 * Specification: TBD
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Minimcds_Registers MinimcdsRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Minimcds_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Minimcds_Registers
 * 
 * \defgroup IfxLld_Minimcds_Registers_union Register unions
 * \ingroup IfxLld_Minimcds_Registers
 * 
 * \defgroup IfxLld_Minimcds_Registers_struct Memory map
 * \ingroup IfxLld_Minimcds_Registers
 */
#ifndef IFXMINIMCDS_REGDEF_H
#define IFXMINIMCDS_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_Bitfields
 * \{  */
/** \brief Clock Control Register */
typedef struct _Ifx_MINIMCDS_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_MINIMCDS_CLC_Bits;

/** \brief MCDS Control Register */
typedef struct _Ifx_MINIMCDS_CT_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit KOK:1;             /**< \brief [5:5] Key OK Flag - KOK (rh) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit KAV:1;             /**< \brief [7:7] Key Available Flag - KAV (rh) */
    Ifx_UReg_32Bit reserved_8:5;      /**< \brief [12:8] \internal Reserved */
    Ifx_UReg_32Bit EN:1;              /**< \brief [13:13] MCDS Enable Flag - EN (rh) */
    Ifx_UReg_32Bit CLRE:1;            /**< \brief [14:14] Clear MCDS Enable Flag - CLRE (w) */
    Ifx_UReg_32Bit SETE:1;            /**< \brief [15:15] Set MCDS Enable Flag - SETE (w) */
    Ifx_UReg_32Bit BED:1;             /**< \brief [16:16] Bus Error Disable Flag - BED (rw) */
    Ifx_UReg_32Bit reserved_17:2;     /**< \brief [18:17] \internal Reserved */
    Ifx_UReg_32Bit BED_P:1;           /**< \brief [19:19] Bus Error Disable Protection - BED_P (w) */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit IRA:1;             /**< \brief [21:21] Invalid Read Access Flag - IRA (rh) */
    Ifx_UReg_32Bit CLRI:1;            /**< \brief [22:22] Clear Invalid Access Bits - CLRI (w) */
    Ifx_UReg_32Bit IWA:1;             /**< \brief [23:23] Invalid Write Access Flag - IWA (rh) */
    Ifx_UReg_32Bit reserved_24:5;     /**< \brief [28:24] \internal Reserved */
    Ifx_UReg_32Bit RES:1;             /**< \brief [29:29] ${MINIMCDS_reset}Flag - RES (rh) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit SETR:1;            /**< \brief [31:31] ${MINIMCDS_reset}Request Bit - SETR (w) */
} Ifx_MINIMCDS_CT_Bits;

/** \brief Trace Buffer Bottom Register */
typedef struct _Ifx_MINIMCDS_FIFOBOT_Bits
{
    Ifx_UReg_32Bit reserved_0:10;     /**< \brief [9:0] \internal Reserved */
    Ifx_UReg_32Bit BOTTOM:3;          /**< \brief [12:10] Trace Buffer lower Bound - BOTTOM (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_MINIMCDS_FIFOBOT_Bits;

/** \brief Trace Buffer Control Register */
typedef struct _Ifx_MINIMCDS_FIFOCTL_Bits
{
    Ifx_UReg_32Bit TRG:1;             /**< \brief [0:0] Trigger Received Flag - TRG (rh) */
    Ifx_UReg_32Bit FFE:1;             /**< \brief [1:1] FIFO Feeder Empty - FFE (rh) */
    Ifx_UReg_32Bit reserved_2:7;      /**< \brief [8:2] \internal Reserved */
    Ifx_UReg_32Bit TRDIS:1;           /**< \brief [9:9] Trigger DisableFlag - TRDIS (rh) */
    Ifx_UReg_32Bit TRON:1;            /**< \brief [10:10] ClearTrigger DisableFlag - TRON (w) */
    Ifx_UReg_32Bit TROFF:1;           /**< \brief [11:11] SetTrigger DisableFlag - TROFF (w) */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit FLSH:1;            /**< \brief [13:13] FlushFlag - FLSH (rh) */
    Ifx_UReg_32Bit CLR:1;             /**< \brief [14:14] ClearFlushFlag - CLR (w) */
    Ifx_UReg_32Bit SET:1;             /**< \brief [15:15] SetFlushFlag - SET (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MINIMCDS_FIFOCTL_Bits;

/** \brief Trace Buffer Write Pointer */
typedef struct _Ifx_MINIMCDS_FIFONOW_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit NOW:8;             /**< \brief [12:5] Trace Buffer Current Write Pointer - NOW (rh) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_MINIMCDS_FIFONOW_Bits;

/** \brief FIFO Overflow Counter Register */
typedef struct _Ifx_MINIMCDS_FIFOOVRCNT_Bits
{
    Ifx_UReg_32Bit COUNT:8;           /**< \brief [7:0] FIFO Overflow Counter - COUNT (rh) */
    Ifx_UReg_32Bit reserved_8:7;      /**< \brief [14:8] \internal Reserved */
    Ifx_UReg_32Bit CLR:1;             /**< \brief [15:15] Clear counter - CLR (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MINIMCDS_FIFOOVRCNT_Bits;

/** \brief Trace Buffer PRE/POST Register */
typedef struct _Ifx_MINIMCDS_FIFOPRE_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit PRE:8;             /**< \brief [12:5] Trace Buffer Pre-Trigger Area Size - PRE (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_MINIMCDS_FIFOPRE_Bits;

/** \brief Trace Buffer Top Register */
typedef struct _Ifx_MINIMCDS_FIFOTOP_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit TOP:8;             /**< \brief [12:5] Trace Buffer upper Bound - TOP (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_MINIMCDS_FIFOTOP_Bits;

/** \brief Trace Buffer Comparator Register */
typedef struct _Ifx_MINIMCDS_FIFOWARN_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit WARN:8;            /**< \brief [12:5] Trace Buffer Warn Level - WARN (rw) */
    Ifx_UReg_32Bit reserved_13:18;    /**< \brief [30:13] \internal Reserved */
    Ifx_UReg_32Bit EN:1;              /**< \brief [31:31] Enable Trigger Generation - EN (rw) */
} Ifx_MINIMCDS_FIFOWARN_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_MINIMCDS_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number - MOD_NUMBER (r) */
} Ifx_MINIMCDS_ID_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MINIMCDS_MCX_ACT_Bits
{
    Ifx_UReg_32Bit AIS0:5;            /**< \brief [4:0] Action Input Selector - AIS${q} (rw) */
    Ifx_UReg_32Bit AIQ0:2;            /**< \brief [6:5] Action Input Qualifier - AIQ${q} (rw) */
    Ifx_UReg_32Bit LV0:1;             /**< \brief [7:7] Action Input Level Mode - LV${q} (rw) */
    Ifx_UReg_32Bit AIS1:5;            /**< \brief [12:8] Action Input Selector - AIS${q} (rw) */
    Ifx_UReg_32Bit AIQ1:2;            /**< \brief [14:13] Action Input Qualifier - AIQ${q} (rw) */
    Ifx_UReg_32Bit LV1:1;             /**< \brief [15:15] Action Input Level Mode - LV${q} (rw) */
    Ifx_UReg_32Bit AIS2:5;            /**< \brief [20:16] Action Input Selector - AIS${q} (rw) */
    Ifx_UReg_32Bit AIQ2:2;            /**< \brief [22:21] Action Input Qualifier - AIQ${q} (rw) */
    Ifx_UReg_32Bit LV2:1;             /**< \brief [23:23] Action Input Level Mode - LV${q} (rw) */
    Ifx_UReg_32Bit AIS3:5;            /**< \brief [28:24] Action Input Selector - AIS${q} (rw) */
    Ifx_UReg_32Bit AIQ3:2;            /**< \brief [30:29] Action Input Qualifier - AIQ${q} (rw) */
    Ifx_UReg_32Bit LV3:1;             /**< \brief [31:31] Action Input Level Mode - LV${q} (rw) */
} Ifx_MINIMCDS_MCX_ACT_Bits;

/** \brief Counter Control Register */
typedef struct _Ifx_MINIMCDS_MCX_CNT_CCL_Bits
{
    Ifx_UReg_32Bit INC0:7;            /**< \brief [6:0] Count Input Selector - INC${q} (rw) */
    Ifx_UReg_32Bit ILV0:1;            /**< \brief [7:7] Count Input Level Mode - ILV${q} (rw) */
    Ifx_UReg_32Bit CLR0:6;            /**< \brief [13:8] Clear Input Selector - CLR${q} (rw) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit CLV0:1;            /**< \brief [15:15] Clear Input Level Mode - CLV${q} (rw) */
    Ifx_UReg_32Bit INC1:7;            /**< \brief [22:16] Count Input Selector - INC${q} (rw) */
    Ifx_UReg_32Bit ILV1:1;            /**< \brief [23:23] Count Input Level Mode - ILV${q} (rw) */
    Ifx_UReg_32Bit CLR1:6;            /**< \brief [29:24] Clear Input Selector - CLR${q} (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit CLV1:1;            /**< \brief [31:31] Clear Input Level Mode - CLV${q} (rw) */
} Ifx_MINIMCDS_MCX_CNT_CCL_Bits;

/** \brief Current Count Register */
typedef struct _Ifx_MINIMCDS_MCX_CNT_CNT_Bits
{
    Ifx_UReg_32Bit COUNT:16;          /**< \brief [15:0] Current Counter - COUNT (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MINIMCDS_MCX_CNT_CNT_Bits;

/** \brief Counter Limit Register */
typedef struct _Ifx_MINIMCDS_MCX_CNT_LMT_Bits
{
    Ifx_UReg_32Bit LIMIT:16;          /**< \brief [15:0] Counter Limit - LIMIT (rw) */
    Ifx_UReg_32Bit reserved_16:14;    /**< \brief [29:16] \internal Reserved */
    Ifx_UReg_32Bit MOD0:1;            /**< \brief [30:30] Modulo Count Control - MOD${q} (rw) */
    Ifx_UReg_32Bit MOD1:1;            /**< \brief [31:31] Modulo Count Control - MOD${q} (rw) */
} Ifx_MINIMCDS_MCX_CNT_LMT_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MINIMCDS_MCX_EVT_Bits
{
    Ifx_UReg_32Bit EIQ0:2;            /**< \brief [1:0] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ1:2;            /**< \brief [3:2] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ2:2;            /**< \brief [5:4] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ3:2;            /**< \brief [7:6] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ4:2;            /**< \brief [9:8] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ5:2;            /**< \brief [11:10] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ6:2;            /**< \brief [13:12] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ7:2;            /**< \brief [15:14] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ8:2;            /**< \brief [17:16] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ9:2;            /**< \brief [19:18] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ10:2;           /**< \brief [21:20] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ11:2;           /**< \brief [23:22] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ12:2;           /**< \brief [25:24] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ13:2;           /**< \brief [27:26] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ14:2;           /**< \brief [29:28] Event Input Qualifier - EIQ${q} (rw) */
    Ifx_UReg_32Bit EIQ15:2;           /**< \brief [31:30] Event Input Qualifier - EIQ${q} (rw) */
} Ifx_MINIMCDS_MCX_EVT_Bits;

/** \brief MCDS Signal Source Control */
typedef struct _Ifx_MINIMCDS_MUX_Bits
{
    Ifx_UReg_32Bit TMUX0:4;           /**< \brief [3:0] Trace Source Select 0 - TMUX0 (rw) */
    Ifx_UReg_32Bit reserved_4:3;      /**< \brief [6:4] \internal Reserved */
    Ifx_UReg_32Bit TM_P0:1;           /**< \brief [7:7] Trace Source Select ${z} Protection - TM${z}_P (w) */
    Ifx_UReg_32Bit TMUX1:4;           /**< \brief [11:8] Trace Source Select 1 - TMUX1 (rw) */
    Ifx_UReg_32Bit reserved_12:3;     /**< \brief [14:12] \internal Reserved */
    Ifx_UReg_32Bit TM_P1:1;           /**< \brief [15:15] Trace Source Select ${z} Protection - TM${z}_P (w) */
    Ifx_UReg_32Bit TMUX2:4;           /**< \brief [19:16] Trace Source Select 2 - TMUX2 (rw) */
    Ifx_UReg_32Bit reserved_20:3;     /**< \brief [22:20] \internal Reserved */
    Ifx_UReg_32Bit TM_P2:1;           /**< \brief [23:23] Trace Source Select ${z} Protection - TM${z}_P (w) */
    Ifx_UReg_32Bit TMUX3:4;           /**< \brief [27:24] Trace Source Select 3 - TMUX3 (rw) */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [30:28] \internal Reserved */
    Ifx_UReg_32Bit TM_P3:1;           /**< \brief [31:31] Trace Source Select ${z} Protection - TM${z}_P (w) */
} Ifx_MINIMCDS_MUX_Bits;

/** \brief MCDS_TC Signal Source Control */
typedef struct _Ifx_MINIMCDS_MUX_TC_RC_Bits
{
    Ifx_UReg_32Bit TC_MUX0:2;         /**< \brief [1:0] TC_MUX Trace Source Select - TC_MUX${z} (rw) */
    Ifx_UReg_32Bit TC_MUX1:2;         /**< \brief [3:2] TC_MUX Trace Source Select - TC_MUX${z} (rw) */
    Ifx_UReg_32Bit TC_MUX2:2;         /**< \brief [5:4] TC_MUX Trace Source Select - TC_MUX${z} (rw) */
    Ifx_UReg_32Bit TC_MUX3:2;         /**< \brief [7:6] TC_MUX Trace Source Select - TC_MUX${z} (rw) */
    Ifx_UReg_32Bit TC_MUX4:2;         /**< \brief [9:8] TC_MUX Trace Source Select - TC_MUX${z} (rw) */
    Ifx_UReg_32Bit TC_MUX5:2;         /**< \brief [11:10] TC_MUX Trace Source Select - TC_MUX${z} (rw) */
    Ifx_UReg_32Bit reserved_12:3;     /**< \brief [14:12] \internal Reserved */
    Ifx_UReg_32Bit TC_TM_P:1;         /**< \brief [15:15] TC_MUX Trace Source Select Protection - TC_TM_P (w) */
    Ifx_UReg_32Bit reserved_16:8;     /**< \brief [23:16] \internal Reserved */
    Ifx_UReg_32Bit RC:1;              /**< \brief [24:24] Reference Clock Select - RC (rw) */
    Ifx_UReg_32Bit reserved_25:2;     /**< \brief [26:25] \internal Reserved */
    Ifx_UReg_32Bit RC_P:1;            /**< \brief [27:27] Reference Clock Select Protection - RC_P (w) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_MINIMCDS_MUX_TC_RC_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_MINIMCDS_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State(inverted busy_o) - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_MINIMCDS_OCS_Bits;

/** \brief Comparator Bound Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_AC_BND_Bits
{
    Ifx_UReg_32Bit BOUND:12;          /**< \brief [11:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MINIMCDS_TCX_AC_BND_Bits;

/** \brief Comparator Mask Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_AC_MSK_Bits
{
    Ifx_UReg_32Bit SVM:1;             /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_UReg_32Bit MASTER:4;          /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_UReg_32Bit SUBCHANNEL:7;      /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_UReg_32Bit WR:1;              /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_UReg_32Bit RD:1;              /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_UReg_32Bit MSK:1;             /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MINIMCDS_TCX_AC_MSK_Bits;

/** \brief Comparator Range Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_AC_RNG_Bits
{
    Ifx_UReg_32Bit RANGE:12;          /**< \brief [11:0] Mode Comparator range size - RANGE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MINIMCDS_TCX_AC_RNG_Bits;

/** \brief Compact Function Trace Register */
typedef struct _Ifx_MINIMCDS_TCX_CFT_Bits
{
    Ifx_UReg_32Bit VSHRT_FCT:10;      /**< \brief [9:0] Length of very short leaf function - VSHRT_FCT (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit SHRT_FCT:10;       /**< \brief [25:16] Length of short leaf function - SHRT_FCT (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_MINIMCDS_TCX_CFT_Bits;

/** \brief Current Instruction Pointer */
typedef struct _Ifx_MINIMCDS_TCX_CIP_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit CURRENT:31;        /**< \brief [31:1] Current Instruction Pointer - CURRENT (rh) */
} Ifx_MINIMCDS_TCX_CIP_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MINIMCDS_TCX_DCSTS_Bits
{
    Ifx_UReg_32Bit SUS:1;             /**< \brief [0:0] Suspended Flag - SUS (rh) */
    Ifx_UReg_32Bit IDLE:1;            /**< \brief [1:1] Run Flag - IDLE (rh) */
    Ifx_UReg_32Bit HALT:1;            /**< \brief [2:2] Halted Flag - HALT (rh) */
    Ifx_UReg_32Bit ISR:1;             /**< \brief [3:3] Interrupt Service Flag - ISR (rh) */
    Ifx_UReg_32Bit HBRK:1;            /**< \brief [4:4] Hardware Break Flag - HBRK (rh) */
    Ifx_UReg_32Bit SBRK:1;            /**< \brief [5:5] Software Break Flag - SBRK (rh) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit IEN:1;             /**< \brief [7:7] Interrupt Enable Flag - IEN (rh) */
    Ifx_UReg_32Bit DBGEN:1;           /**< \brief [8:8] Debug Enabled Flag - DBGEN (rh) */
    Ifx_UReg_32Bit CLKDIV:2;          /**< \brief [10:9] Current Clock Divider - CLKDIV (rh) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_MINIMCDS_TCX_DCSTS_Bits;

/** \brief Comparator Bound Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_EA_BND_Bits
{
    Ifx_UReg_32Bit BOUND:32;          /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MINIMCDS_TCX_EA_BND_Bits;

/** \brief Comparator Range Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_EA_RNG_Bits
{
    Ifx_UReg_32Bit RANGE:32;          /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MINIMCDS_TCX_EA_RNG_Bits;

/** \brief Comparator Bound Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_IP_BND_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit BOUND:31;          /**< \brief [31:1] IP Comparator range lower bound - BOUND (rw) */
} Ifx_MINIMCDS_TCX_IP_BND_Bits;

/** \brief Comparator Range Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_IP_RNG_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit RANGE:31;          /**< \brief [31:1] IP Comparator range size - RANGE (rw) */
} Ifx_MINIMCDS_TCX_IP_RNG_Bits;

/** \brief Comparator Bound Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_WD_BND_Bits
{
    Ifx_UReg_32Bit BOUND:32;          /**< \brief [31:0] Data Comparator range lower bound - BOUND (rw) */
} Ifx_MINIMCDS_TCX_WD_BND_Bits;

/** \brief Comparator Mask Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_WD_MSK_Bits
{
    Ifx_UReg_32Bit MASK:32;           /**< \brief [31:0] Data Comparator bit mask - MASK (rw) */
} Ifx_MINIMCDS_TCX_WD_MSK_Bits;

/** \brief Comparator Range Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_WD_RNG_Bits
{
    Ifx_UReg_32Bit RANGE:32;          /**< \brief [31:0] Data Comparator range size - RANGE (rw) */
} Ifx_MINIMCDS_TCX_WD_RNG_Bits;

/** \brief Comparator Sign Register ${j} */
typedef struct _Ifx_MINIMCDS_TCX_WD_SGN_Bits
{
    Ifx_UReg_32Bit SIGN:5;            /**< \brief [4:0] Bit number (1…31) of sign bit - SIGN (rw) */
    Ifx_UReg_32Bit reserved_5:15;     /**< \brief [19:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MINIMCDS_TCX_WD_SGN_Bits;

/** \brief Clock Counter Register */
typedef struct _Ifx_MINIMCDS_TSUEMUCNT_Bits
{
    Ifx_UReg_32Bit COUNT:32;          /**< \brief [31:0] Current Count Value - COUNT (rh) */
} Ifx_MINIMCDS_TSUEMUCNT_Bits;

/** \brief Clock Prescaler Register */
typedef struct _Ifx_MINIMCDS_TSUPRSCL_Bits
{
    Ifx_UReg_32Bit RELOAD:32;         /**< \brief [31:0] Prescaler Reload Value - RELOAD (rw) */
} Ifx_MINIMCDS_TSUPRSCL_Bits;

/** \brief Clock Counter Register */
typedef struct _Ifx_MINIMCDS_TSUREFCNT_Bits
{
    Ifx_UReg_32Bit COUNT:32;          /**< \brief [31:0] Current Count Value - COUNT (rh) */
} Ifx_MINIMCDS_TSUREFCNT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_minimcds_union
 * \{   */
/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_CLC_Bits B;          /**< \brief Bitfield access */
} Ifx_MINIMCDS_CLC;

/** \brief MCDS Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_CT_Bits B;           /**< \brief Bitfield access */
} Ifx_MINIMCDS_CT;

/** \brief Trace Buffer Bottom Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_FIFOBOT_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_FIFOBOT;

/** \brief Trace Buffer Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_FIFOCTL_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_FIFOCTL;

/** \brief Trace Buffer Write Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_FIFONOW_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_FIFONOW;

/** \brief FIFO Overflow Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_FIFOOVRCNT_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_FIFOOVRCNT;

/** \brief Trace Buffer PRE/POST Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_FIFOPRE_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_FIFOPRE;

/** \brief Trace Buffer Top Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_FIFOTOP_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_FIFOTOP;

/** \brief Trace Buffer Comparator Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_FIFOWARN_Bits B;     /**< \brief Bitfield access */
} Ifx_MINIMCDS_FIFOWARN;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_ID_Bits B;           /**< \brief Bitfield access */
} Ifx_MINIMCDS_ID;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_MCX_ACT_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_MCX_ACT;

/** \brief Counter Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_MCX_CNT_CCL_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_MCX_CNT_CCL;

/** \brief Current Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_MCX_CNT_CNT_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_MCX_CNT_CNT;

/** \brief Counter Limit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_MCX_CNT_LMT_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_MCX_CNT_LMT;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_MCX_EVT_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_MCX_EVT;

/** \brief MCDS Signal Source Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_MUX_Bits B;          /**< \brief Bitfield access */
} Ifx_MINIMCDS_MUX;

/** \brief MCDS_TC Signal Source Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_MUX_TC_RC_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_MUX_TC_RC;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_OCS_Bits B;          /**< \brief Bitfield access */
} Ifx_MINIMCDS_OCS;

/** \brief Comparator Bound Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_AC_BND_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_AC_BND;

/** \brief Comparator Mask Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_AC_MSK_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_AC_MSK;

/** \brief Comparator Range Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_AC_RNG_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_AC_RNG;

/** \brief Compact Function Trace Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_CFT_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_CFT;

/** \brief Current Instruction Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_CIP_Bits B;      /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_CIP;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_DCSTS_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_DCSTS;

/** \brief Comparator Bound Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_EA_BND_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_EA_BND;

/** \brief Comparator Range Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_EA_RNG_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_EA_RNG;

/** \brief Comparator Bound Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_IP_BND_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_IP_BND;

/** \brief Comparator Range Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_IP_RNG_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_IP_RNG;

/** \brief Comparator Bound Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_WD_BND_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_WD_BND;

/** \brief Comparator Mask Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_WD_MSK_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_WD_MSK;

/** \brief Comparator Range Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_WD_RNG_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_WD_RNG;

/** \brief Comparator Sign Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TCX_WD_SGN_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TCX_WD_SGN;

/** \brief Clock Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TSUEMUCNT_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TSUEMUCNT;

/** \brief Clock Prescaler Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TSUPRSCL_Bits B;     /**< \brief Bitfield access */
} Ifx_MINIMCDS_TSUPRSCL;

/** \brief Clock Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MINIMCDS_TSUREFCNT_Bits B;    /**< \brief Bitfield access */
} Ifx_MINIMCDS_TSUREFCNT;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_MCX_CNT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CNT object */
typedef volatile struct _Ifx_MINIMCDS_MCX_CNT
{
       Ifx_MINIMCDS_MCX_CNT_CCL            CCL;                    /**< \brief 0, Counter Control Register*/
       Ifx_MINIMCDS_MCX_CNT_LMT            LMT;                    /**< \brief 4, Counter Limit Register*/
       Ifx_MINIMCDS_MCX_CNT_CNT            CNT;                    /**< \brief 8, Current Count Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MINIMCDS_MCX_CNT;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_MCX_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief MCX object */
typedef volatile struct _Ifx_MINIMCDS_MCX
{
       Ifx_MINIMCDS_MCX_EVT                EVT[16];                /**< \brief 0, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_40[64];        /**< \brief 40, \internal Reserved */
       Ifx_MINIMCDS_MCX_ACT                ACT[42];                /**< \brief 80, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_128[216];      /**< \brief 128, \internal Reserved */
       Ifx_MINIMCDS_MCX_CNT                CNT[8];                 /**< \brief 200, */
} Ifx_MINIMCDS_MCX;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_TCX_EA_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief EA object */
typedef volatile struct _Ifx_MINIMCDS_TCX_EA
{
       Ifx_MINIMCDS_TCX_EA_BND             BND;                    /**< \brief 0, Comparator Bound Register ${j}*/
       Ifx_MINIMCDS_TCX_EA_RNG             RNG;                    /**< \brief 4, Comparator Range Register ${j}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MINIMCDS_TCX_EA;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_TCX_WD_struct
 * \{  */
/******************************************************************************/
/** \name Object L4
 * \{  */
/** \brief WD object */
typedef volatile struct _Ifx_MINIMCDS_TCX_WD
{
       Ifx_MINIMCDS_TCX_WD_BND             BND;                    /**< \brief 0, Comparator Bound Register ${j}*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_MINIMCDS_TCX_WD_RNG             RNG;                    /**< \brief 8, Comparator Range Register ${j}*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_MINIMCDS_TCX_WD_MSK             MSK;                    /**< \brief 10, Comparator Mask Register ${j}*/
       Ifx_UReg_8Bit                       reserved_14[8];         /**< \brief 14, \internal Reserved */
       Ifx_MINIMCDS_TCX_WD_SGN             SGN;                    /**< \brief 1C, Comparator Sign Register ${j}*/
} Ifx_MINIMCDS_TCX_WD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_TCX_AC_struct
 * \{  */
/******************************************************************************/
/** \name Object L5
 * \{  */
/** \brief AC object */
typedef volatile struct _Ifx_MINIMCDS_TCX_AC
{
       Ifx_MINIMCDS_TCX_AC_BND             BND;                    /**< \brief 0, Comparator Bound Register ${j}*/
       Ifx_MINIMCDS_TCX_AC_RNG             RNG;                    /**< \brief 4, Comparator Range Register ${j}*/
       Ifx_MINIMCDS_TCX_AC_MSK             MSK;                    /**< \brief 8, Comparator Mask Register ${j}*/
       Ifx_UReg_8Bit                       reserved_C[12];         /**< \brief C, \internal Reserved */
} Ifx_MINIMCDS_TCX_AC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_TCX_IP_struct
 * \{  */
/******************************************************************************/
/** \name Object L6
 * \{  */
/** \brief IP object */
typedef volatile struct _Ifx_MINIMCDS_TCX_IP
{
       Ifx_MINIMCDS_TCX_IP_BND             BND;                    /**< \brief 0, Comparator Bound Register ${j}*/
       Ifx_MINIMCDS_TCX_IP_RNG             RNG;                    /**< \brief 4, Comparator Range Register ${j}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MINIMCDS_TCX_IP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_TCX_struct
 * \{  */
/******************************************************************************/
/** \name Object L7
 * \{  */
/** \brief TCX object */
typedef volatile struct _Ifx_MINIMCDS_TCX
{
       Ifx_MINIMCDS_TCX_DCSTS              DCSTS;                  /**< \brief 0, Debug Status Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_MINIMCDS_TCX_CIP                CIP;                    /**< \brief 8, Current Instruction Pointer*/
       Ifx_MINIMCDS_TCX_CFT                CFT;                    /**< \brief C, Compact Function Trace Register*/
       Ifx_UReg_8Bit                       reserved_10[1008];      /**< \brief 10, \internal Reserved */
       Ifx_MINIMCDS_TCX_EA                 EA[2];                  /**< \brief 400, */
       Ifx_UReg_8Bit                       reserved_418[104];      /**< \brief 418, \internal Reserved */
       Ifx_MINIMCDS_TCX_WD                 WD[2];                  /**< \brief 480, */
       Ifx_UReg_8Bit                       reserved_4C0[64];       /**< \brief 4C0, \internal Reserved */
       Ifx_MINIMCDS_TCX_AC                 AC[2];                  /**< \brief 500, */
       Ifx_UReg_8Bit                       reserved_524[2780];     /**< \brief 524, \internal Reserved */
       Ifx_MINIMCDS_TCX_IP                 IP[2];                  /**< \brief 1000, */
} Ifx_MINIMCDS_TCX;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief MINIMCDS object */
typedef volatile struct _Ifx_MINIMCDS
{
       Ifx_MINIMCDS_CLC                    CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_MINIMCDS_OCS                    OCS;                    /**< \brief 4, OCDS Control and Status*/
       Ifx_MINIMCDS_ID                     ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_MINIMCDS_CT                     CT;                     /**< \brief 10, MCDS Control Register*/
       Ifx_MINIMCDS_MUX                    MUX;                    /**< \brief 14, MCDS Signal Source Control*/
       Ifx_MINIMCDS_MUX_TC_RC              MUX_TC_RC;              /**< \brief 18, MCDS_TC Signal Source Control*/
       Ifx_UReg_8Bit                       reserved_1C[484];       /**< \brief 1C, \internal Reserved */
       Ifx_MINIMCDS_FIFONOW                FIFONOW;                /**< \brief 200, Trace Buffer Write Pointer*/
       Ifx_MINIMCDS_FIFOBOT                FIFOBOT;                /**< \brief 204, Trace Buffer Bottom Register*/
       Ifx_MINIMCDS_FIFOPRE                FIFOPRE;                /**< \brief 208, Trace Buffer PRE/POST Register*/
       Ifx_MINIMCDS_FIFOTOP                FIFOTOP;                /**< \brief 20C, Trace Buffer Top Register*/
       Ifx_MINIMCDS_FIFOCTL                FIFOCTL;                /**< \brief 210, Trace Buffer Control Register*/
       Ifx_MINIMCDS_FIFOWARN               FIFOWARN[2];            /**< \brief 214, Trace Buffer Comparator Register*/
       Ifx_MINIMCDS_FIFOOVRCNT             FIFOOVRCNT;             /**< \brief 21C, FIFO Overflow Counter Register*/
       Ifx_UReg_8Bit                       reserved_220[480];      /**< \brief 220, \internal Reserved */
       Ifx_MINIMCDS_TSUREFCNT              TSUREFCNT;              /**< \brief 400, Clock Counter Register*/
       Ifx_MINIMCDS_TSUPRSCL               TSUPRSCL;               /**< \brief 404, Clock Prescaler Register*/
       Ifx_MINIMCDS_TSUEMUCNT              TSUEMUCNT;              /**< \brief 408, Clock Counter Register*/
       Ifx_UReg_8Bit                       reserved_40C[1012];     /**< \brief 40C, \internal Reserved */
       Ifx_MINIMCDS_MCX                    MCX;                    /**< \brief 800, */
       Ifx_UReg_8Bit                       reserved_A7C[5508];     /**< \brief A7C, \internal Reserved */
       Ifx_MINIMCDS_TCX                    TCX;                    /**< \brief 2000, */
       Ifx_UReg_8Bit                       reserved_3018[20456];    /**< \brief 3018, \internal Reserved */
} Ifx_MINIMCDS;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXMINIMCDS_REGDEF_H */
