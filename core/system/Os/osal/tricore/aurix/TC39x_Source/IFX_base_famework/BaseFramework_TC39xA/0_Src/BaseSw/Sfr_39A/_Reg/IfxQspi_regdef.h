/**
 * \file IfxQspi_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:16:08 GMT
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
 * \defgroup IfxLld_Qspi_Registers QspiRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Qspi_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Qspi_Registers
 * 
 * \defgroup IfxLld_Qspi_Registers_union Register unions
 * \ingroup IfxLld_Qspi_Registers
 * 
 * \defgroup IfxLld_Qspi_Registers_struct Memory map
 * \ingroup IfxLld_Qspi_Registers
 */
#ifndef IFXQSPI_REGDEF_H
#define IFXQSPI_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Qspi_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_QSPI_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
} Ifx_QSPI_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_QSPI_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_QSPI_ACCEN1_Bits;

/** \brief Basic Configuration Register */
typedef struct _Ifx_QSPI_BACON_Bits
{
    Ifx_UReg_32Bit LAST:1;            /**< \brief [0:0] Last Word in a Frame - LAST (rh) */
    Ifx_UReg_32Bit IPRE:3;            /**< \brief [3:1] Prescaler for the Idle Delay - IPRE (rh) */
    Ifx_UReg_32Bit IDLE:3;            /**< \brief [6:4] Idle Delay Length - IDLE (rh) */
    Ifx_UReg_32Bit LPRE:3;            /**< \brief [9:7] Prescaler for the Leading Delay - LPRE (rh) */
    Ifx_UReg_32Bit LEAD:3;            /**< \brief [12:10] Leading Delay Length - LEAD (rh) */
    Ifx_UReg_32Bit TPRE:3;            /**< \brief [15:13] Prescaler for the Trailing Delay - TPRE (rh) */
    Ifx_UReg_32Bit TRAIL:3;           /**< \brief [18:16] Trailing Delay Length - TRAIL (rh) */
    Ifx_UReg_32Bit PARTYP:1;          /**< \brief [19:19] Parity Type[RfQ00220] - PARTYP (rh) */
    Ifx_UReg_32Bit UINT:1;            /**< \brief [20:20] User Interrupt at the PT1 Event in the Subsequent Frames - UINT (rh) */
    Ifx_UReg_32Bit MSB:1;             /**< \brief [21:21] Shift MSB or LSB First[RfQ00220] - MSB (rh) */
    Ifx_UReg_32Bit BYTE:1;            /**< \brief [22:22] Byte[RfQ00220] - BYTE (rh) */
    Ifx_UReg_32Bit DL:5;              /**< \brief [27:23] Data Length[RfQ00220] - DL (rh) */
    Ifx_UReg_32Bit CS:4;              /**< \brief [31:28] Channel Select[RfQ00220] - CS (rh) */
} Ifx_QSPI_BACON_Bits;

/** \brief BACON_ENTRY Register */
typedef struct _Ifx_QSPI_BACONENTRY_Bits
{
    Ifx_UReg_32Bit E:32;              /**< \brief [31:0] Entry Point to the TxFIFO - E (w) */
} Ifx_QSPI_BACONENTRY_Bits;

/** \brief Capture Control Register */
typedef struct _Ifx_QSPI_CAPCON_Bits
{
    Ifx_UReg_32Bit CAP:15;            /**< \brief [14:0] Captured Value - CAP (rh) */
    Ifx_UReg_32Bit OVF:1;             /**< \brief [15:15] Overflow Flag - OVF (rh) */
    Ifx_UReg_32Bit EDGECON:2;         /**< \brief [17:16] Edge Configuration - EDGECON (rw) */
    Ifx_UReg_32Bit INS:2;             /**< \brief [19:18] Input Selection - INS (rw) */
    Ifx_UReg_32Bit EN:1;              /**< \brief [20:20] Enable Bit of the Capture Timer - EN (rw) */
    Ifx_UReg_32Bit reserved_21:7;     /**< \brief [27:21] \internal Reserved */
    Ifx_UReg_32Bit CAPC:1;            /**< \brief [28:28] Capture Flag Clear - CAPC (w) */
    Ifx_UReg_32Bit CAPS:1;            /**< \brief [29:29] Capture Flag Set - CAPS (w) */
    Ifx_UReg_32Bit CAPF:1;            /**< \brief [30:30] Capture Flag - CAPF (rh) */
    Ifx_UReg_32Bit CAPSEL:1;          /**< \brief [31:31] Capture Interrupt Select Bit - CAPSEL (rw) */
} Ifx_QSPI_CAPCON_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_QSPI_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_QSPI_CLC_Bits;

/** \brief DATA_ENTRY Register ${x} */
typedef struct _Ifx_QSPI_DATAENTRY_Bits
{
    Ifx_UReg_32Bit E:32;              /**< \brief [31:0] Entry Point to the TxFIFO - E (w) */
} Ifx_QSPI_DATAENTRY_Bits;

/** \brief Configuration Extension ${z} */
typedef struct _Ifx_QSPI_ECON_Bits
{
    Ifx_UReg_32Bit Q:6;               /**< \brief [5:0] Time Quantum[RfQ00220] - Q (rw) */
    Ifx_UReg_32Bit A:2;               /**< \brief [7:6] Bit Segment 1 - A (rw) */
    Ifx_UReg_32Bit B:2;               /**< \brief [9:8] Bit Segment 2 - B (rw) */
    Ifx_UReg_32Bit C:2;               /**< \brief [11:10] Bit Segment 3 - C (rw) */
    Ifx_UReg_32Bit CPH:1;             /**< \brief [12:12] Clock Phase[RfQ00220] - CPH (rw) */
    Ifx_UReg_32Bit CPOL:1;            /**< \brief [13:13] Clock Polarity[RfQ00220] - CPOL (rw) */
    Ifx_UReg_32Bit PAREN:1;           /**< \brief [14:14] Enable Parity Check[RfQ00220] - PAREN (rw) */
    Ifx_UReg_32Bit reserved_15:15;    /**< \brief [29:15] \internal Reserved */
    Ifx_UReg_32Bit BE:2;              /**< \brief [31:30] Permutate bytes to / from Big Endian - BE (rw) */
} Ifx_QSPI_ECON_Bits;

/** \brief Flags Clear Register */
typedef struct _Ifx_QSPI_FLAGSCLEAR_Bits
{
    Ifx_UReg_32Bit ERRORCLEARS:9;     /**< \brief [8:0] Write Only Bits for Clearing the Error Flags - ERRORCLEARS (w) */
    Ifx_UReg_32Bit TXC:1;             /**< \brief [9:9] Transmit Event Flag Clear - TXC (w) */
    Ifx_UReg_32Bit RXC:1;             /**< \brief [10:10] Receive Event Flag Clear - RXC (w) */
    Ifx_UReg_32Bit PT1C:1;            /**< \brief [11:11] PT1 Event Flag Clear - PT1C (w) */
    Ifx_UReg_32Bit PT2C:1;            /**< \brief [12:12] PT2 Event Flag Clear - PT2C (w) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit USRC:1;            /**< \brief [15:15] User Event Flag Clear - USRC (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_QSPI_FLAGSCLEAR_Bits;

/** \brief Global Configuration Register */
typedef struct _Ifx_QSPI_GLOBALCON_Bits
{
    Ifx_UReg_32Bit TQ:8;              /**< \brief [7:0] Global Time Quantum Length[RfQ00220] - TQ (rw) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit SI:1;              /**< \brief [9:9] Status Injection - SI (rw) */
    Ifx_UReg_32Bit EXPECT:4;          /**< \brief [13:10] Time-Out Value for the Expect Phase - EXPECT (rw) */
    Ifx_UReg_32Bit LB:1;              /**< \brief [14:14] Loop-Back Control - LB (rw) */
    Ifx_UReg_32Bit DEL0:1;            /**< \brief [15:15] Delayed Mode for SLSO0 - DEL0 (rw) */
    Ifx_UReg_32Bit STROBE:5;          /**< \brief [20:16] Strobe Delay for SLSO0 in Delayed Mode - STROBE (rw) */
    Ifx_UReg_32Bit SRF:1;             /**< \brief [21:21] Stop on RxFIFO Full - SRF (rw) */
    Ifx_UReg_32Bit STIP:1;            /**< \brief [22:22] Slave Transmit Idle State Polarity - STIP (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit EN:1;              /**< \brief [24:24] Enable Bit - EN (rwh) */
    Ifx_UReg_32Bit MS:2;              /**< \brief [26:25] Master Slave Mode - MS (rw) */
    Ifx_UReg_32Bit AREN:1;            /**< \brief [27:27] Automatic Reset Enable - AREN (rw) */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit CLKSEL:1;          /**< \brief [29:29] Clock Select - CLKSEL (rw) */
    Ifx_UReg_32Bit RESETS:2;          /**< \brief [31:30] Bits for resetting sub-modules per software - RESETS (w) */
} Ifx_QSPI_GLOBALCON_Bits;

/** \brief Global Configuration Register 1 */
typedef struct _Ifx_QSPI_GLOBALCON1_Bits
{
    Ifx_UReg_32Bit ERRORENS:9;        /**< \brief [8:0] Error Enable Bits - ERRORENS (rw) */
    Ifx_UReg_32Bit TXEN:1;            /**< \brief [9:9] Tx Interrupt Event Enable - TXEN (rw) */
    Ifx_UReg_32Bit RXEN:1;            /**< \brief [10:10] RX Interrupt Event Enable - RXEN (rw) */
    Ifx_UReg_32Bit PT1EN:1;           /**< \brief [11:11] Interrupt on PT1 Event Enable - PT1EN (rw) */
    Ifx_UReg_32Bit PT2EN:1;           /**< \brief [12:12] Interrupt on PT2 Event Enable - PT2EN (rw) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit USREN:1;           /**< \brief [15:15] Interrupt on USR Event Enable - USREN (rw) */
    Ifx_UReg_32Bit TXFIFOINT:2;       /**< \brief [17:16] Transmit FIFO Interrupt Threshold - TXFIFOINT (rw) */
    Ifx_UReg_32Bit RXFIFOINT:2;       /**< \brief [19:18] Receive FIFO Interrupt Threshold - RXFIFOINT (rw) */
    Ifx_UReg_32Bit PT1:3;             /**< \brief [22:20] Phase Transition Event 1 - PT1 (rw) */
    Ifx_UReg_32Bit PT2:3;             /**< \brief [25:23] Phase Transition Event 2 - PT2 (rw) */
    Ifx_UReg_32Bit TXFM:2;            /**< \brief [27:26] TXFIFO Mode - TXFM (rw) */
    Ifx_UReg_32Bit RXFM:2;            /**< \brief [29:28] RXFIFO Mode - RXFM (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_QSPI_GLOBALCON1_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_QSPI_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUMBER:16;      /**< \brief [31:16] Module Number Value - MODNUMBER (r) */
} Ifx_QSPI_ID_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_QSPI_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_QSPI_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_QSPI_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_QSPI_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_QSPI_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_QSPI_KRSTCLR_Bits;

/** \brief Move Counter Register */
typedef struct _Ifx_QSPI_MC_Bits
{
    Ifx_UReg_32Bit MCOUNT:13;         /**< \brief [12:0] Move Count - MCOUNT (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit CURRENT:13;        /**< \brief [28:16] Current Status of the Move Counter - CURRENT (rh) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_QSPI_MC_Bits;

/** \brief Move Counter control Register */
typedef struct _Ifx_QSPI_MCCON_Bits
{
    Ifx_UReg_32Bit TPRE2:3;           /**< \brief [2:0] Prescaler for the Trailing Delay 2 - TPRE2 (rw) */
    Ifx_UReg_32Bit TRAIL2:3;          /**< \brief [5:3] Last Trailing Delay - TRAIL2 (rw) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit IBLEN:1;           /**< \brief [16:16] Interrupt Before Last Enable - IBLEN (rw) */
    Ifx_UReg_32Bit IBLF:1;            /**< \brief [17:17] Interrupt Before Last Flag - IBLF (rh) */
    Ifx_UReg_32Bit IBLC:1;            /**< \brief [18:18] Clear Bit for IBLF - IBLC (w) */
    Ifx_UReg_32Bit IBLS:1;            /**< \brief [19:19] Set Bit for IBLF - IBLS (w) */
    Ifx_UReg_32Bit IALEN:1;           /**< \brief [20:20] Interrupt After Last Enable - IALEN (rw) */
    Ifx_UReg_32Bit IALF:1;            /**< \brief [21:21] Interrupt After Last Flag - IALF (rh) */
    Ifx_UReg_32Bit IALC:1;            /**< \brief [22:22] Clear Bit for IALF - IALC (w) */
    Ifx_UReg_32Bit IALS:1;            /**< \brief [23:23] Set Bit for IALF - IALS (w) */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit T2EN:1;            /**< \brief [30:30] TRAIL 2 Injection Enable - T2EN (rw) */
    Ifx_UReg_32Bit MCEN:1;            /**< \brief [31:31] Move Counter Enable - MCEN (rw) */
} Ifx_QSPI_MCCON_Bits;

/** \brief MIX_ENTRY Register */
typedef struct _Ifx_QSPI_MIXENTRY_Bits
{
    Ifx_UReg_32Bit E:32;              /**< \brief [31:0] Entry Point to the TxFIFO - E (w) */
} Ifx_QSPI_MIXENTRY_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_QSPI_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_QSPI_OCS_Bits;

/** \brief Port Input Select Register */
typedef struct _Ifx_QSPI_PISEL_Bits
{
    Ifx_UReg_32Bit MRIS:3;            /**< \brief [2:0] Master Mode Receive Input Select - MRIS (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit SRIS:3;            /**< \brief [6:4] Slave Mode Receive Input Select - SRIS (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit SCIS:3;            /**< \brief [10:8] Slave Mode Clock Input Select[RfQ00220] - SCIS (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit SLSIS:3;           /**< \brief [14:12] Slave Mode Slave Select Input Selection - SLSIS (rw) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_QSPI_PISEL_Bits;

/** \brief RX_EXIT Register */
typedef struct _Ifx_QSPI_RXEXIT_Bits
{
    Ifx_UReg_32Bit E:32;              /**< \brief [31:0] Read Point from the RxFIFO - E (r) */
} Ifx_QSPI_RXEXIT_Bits;

/** \brief RX_EXIT Debug Register */
typedef struct _Ifx_QSPI_RXEXITD_Bits
{
    Ifx_UReg_32Bit E:32;              /**< \brief [31:0] Read Point from the RxFIFO - E (r) */
} Ifx_QSPI_RXEXITD_Bits;

/** \brief Slave Select Output Control Register */
typedef struct _Ifx_QSPI_SSOC_Bits
{
    Ifx_UReg_32Bit AOL:16;            /**< \brief [15:0] Active Output Level for the SLSO Outputs[RfQ00220] - AOL (rw) */
    Ifx_UReg_32Bit OEN:16;            /**< \brief [31:16] Enable Bits for the SLSO Outputs - OEN (rw) */
} Ifx_QSPI_SSOC_Bits;

/** \brief Status Register */
typedef struct _Ifx_QSPI_STATUS_Bits
{
    Ifx_UReg_32Bit ERRORFLAGS:9;      /**< \brief [8:0] Sticky Flags Signalling Errors - ERRORFLAGS (rwh) */
    Ifx_UReg_32Bit TXF:1;             /**< \brief [9:9] Transmit Interrupt Request Flag - TXF (rwh) */
    Ifx_UReg_32Bit RXF:1;             /**< \brief [10:10] Receive Interrupt Request Flag - RXF (rwh) */
    Ifx_UReg_32Bit PT1F:1;            /**< \brief [11:11] Phase Transition 1 Flag - PT1F (rwh) */
    Ifx_UReg_32Bit PT2F:1;            /**< \brief [12:12] Phase Transition 2 Flag - PT2F (rwh) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit USRF:1;            /**< \brief [15:15] User Interrupt Request Flag - USRF (rwh) */
    Ifx_UReg_32Bit TXFIFOLEVEL:3;     /**< \brief [18:16] TXFIFO Filling Level - TXFIFOLEVEL (rh) */
    Ifx_UReg_32Bit RXFIFOLEVEL:3;     /**< \brief [21:19] RXFIFO Filling Level - RXFIFOLEVEL (rh) */
    Ifx_UReg_32Bit SLAVESEL:4;        /**< \brief [25:22] Currently Active Slave Select Flag - SLAVESEL (rh) */
    Ifx_UReg_32Bit RPV:1;             /**< \brief [26:26] Received Parity Value - RPV (rh) */
    Ifx_UReg_32Bit TPV:1;             /**< \brief [27:27] Transmitted Parity Value - TPV (rh) */
    Ifx_UReg_32Bit PHASE:4;           /**< \brief [31:28] Flags the ongoing phase - PHASE (rh) */
} Ifx_QSPI_STATUS_Bits;

/** \brief Status Register 1 */
typedef struct _Ifx_QSPI_STATUS1_Bits
{
    Ifx_UReg_32Bit BITCOUNT:8;        /**< \brief [7:0] Number of the bit shifted out - BITCOUNT (r) */
    Ifx_UReg_32Bit reserved_8:20;     /**< \brief [27:8] \internal Reserved */
    Ifx_UReg_32Bit BRDEN:1;           /**< \brief [28:28] Baud Rate Deviation Enable - BRDEN (rw) */
    Ifx_UReg_32Bit BRD:1;             /**< \brief [29:29] Baud Rate Deviation Flag - BRD (rwh) */
    Ifx_UReg_32Bit SPDEN:1;           /**< \brief [30:30] Spike Detection Enable - SPDEN (rw) */
    Ifx_UReg_32Bit SPD:1;             /**< \brief [31:31] Spike Detection Flag - SPD (rwh) */
} Ifx_QSPI_STATUS1_Bits;

/** \brief Extra Large Data Configuration Register */
typedef struct _Ifx_QSPI_XXLCON_Bits
{
    Ifx_UReg_32Bit XDL:16;            /**< \brief [15:0] Extended Data Length - XDL (rw) */
    Ifx_UReg_32Bit BYTECOUNT:16;      /**< \brief [31:16] Extended Data Length - BYTECOUNT (r) */
} Ifx_QSPI_XXLCON_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_qspi_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_QSPI_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_QSPI_ACCEN1;

/** \brief Basic Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_BACON_Bits B;            /**< \brief Bitfield access */
} Ifx_QSPI_BACON;

/** \brief BACON_ENTRY Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_BACONENTRY_Bits B;       /**< \brief Bitfield access */
} Ifx_QSPI_BACONENTRY;

/** \brief Capture Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_CAPCON_Bits B;           /**< \brief Bitfield access */
} Ifx_QSPI_CAPCON;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_QSPI_CLC;

/** \brief DATA_ENTRY Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_DATAENTRY_Bits B;        /**< \brief Bitfield access */
} Ifx_QSPI_DATAENTRY;

/** \brief Configuration Extension ${z}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_ECON_Bits B;             /**< \brief Bitfield access */
} Ifx_QSPI_ECON;

/** \brief Flags Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_FLAGSCLEAR_Bits B;       /**< \brief Bitfield access */
} Ifx_QSPI_FLAGSCLEAR;

/** \brief Global Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_GLOBALCON_Bits B;        /**< \brief Bitfield access */
} Ifx_QSPI_GLOBALCON;

/** \brief Global Configuration Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_GLOBALCON1_Bits B;       /**< \brief Bitfield access */
} Ifx_QSPI_GLOBALCON1;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_QSPI_ID;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_KRST0_Bits B;            /**< \brief Bitfield access */
} Ifx_QSPI_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_KRST1_Bits B;            /**< \brief Bitfield access */
} Ifx_QSPI_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_KRSTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_QSPI_KRSTCLR;

/** \brief Move Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_MC_Bits B;               /**< \brief Bitfield access */
} Ifx_QSPI_MC;

/** \brief Move Counter control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_MCCON_Bits B;            /**< \brief Bitfield access */
} Ifx_QSPI_MCCON;

/** \brief MIX_ENTRY Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_MIXENTRY_Bits B;         /**< \brief Bitfield access */
} Ifx_QSPI_MIXENTRY;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_OCS_Bits B;              /**< \brief Bitfield access */
} Ifx_QSPI_OCS;

/** \brief Port Input Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_PISEL_Bits B;            /**< \brief Bitfield access */
} Ifx_QSPI_PISEL;

/** \brief RX_EXIT Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_RXEXIT_Bits B;           /**< \brief Bitfield access */
} Ifx_QSPI_RXEXIT;

/** \brief RX_EXIT Debug Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_RXEXITD_Bits B;          /**< \brief Bitfield access */
} Ifx_QSPI_RXEXITD;

/** \brief Slave Select Output Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_SSOC_Bits B;             /**< \brief Bitfield access */
} Ifx_QSPI_SSOC;

/** \brief Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_STATUS_Bits B;           /**< \brief Bitfield access */
} Ifx_QSPI_STATUS;

/** \brief Status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_STATUS1_Bits B;          /**< \brief Bitfield access */
} Ifx_QSPI_STATUS1;

/** \brief Extra Large Data Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_QSPI_XXLCON_Bits B;           /**< \brief Bitfield access */
} Ifx_QSPI_XXLCON;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Qspi_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief QSPI object */
typedef volatile struct _Ifx_QSPI
{
       Ifx_QSPI_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_QSPI_PISEL                      PISEL;                  /**< \brief 4, Port Input Select Register*/
       Ifx_QSPI_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_QSPI_GLOBALCON                  GLOBALCON;              /**< \brief 10, Global Configuration Register*/
       Ifx_QSPI_GLOBALCON1                 GLOBALCON1;             /**< \brief 14, Global Configuration Register 1*/
       Ifx_QSPI_BACON                      BACON;                  /**< \brief 18, Basic Configuration Register*/
       Ifx_UReg_8Bit                       reserved_1C[4];         /**< \brief 1C, \internal Reserved */
       Ifx_QSPI_ECON                       ECON[8];                /**< \brief 20, Configuration Extension ${z}*/
       Ifx_QSPI_STATUS                     STATUS;                 /**< \brief 40, Status Register*/
       Ifx_QSPI_STATUS1                    STATUS1;                /**< \brief 44, Status Register 1*/
       Ifx_QSPI_SSOC                       SSOC;                   /**< \brief 48, Slave Select Output Control Register*/
       Ifx_UReg_8Bit                       reserved_4C[8];         /**< \brief 4C, \internal Reserved */
       Ifx_QSPI_FLAGSCLEAR                 FLAGSCLEAR;             /**< \brief 54, Flags Clear Register*/
       Ifx_QSPI_XXLCON                     XXLCON;                 /**< \brief 58, Extra Large Data Configuration Register*/
       Ifx_QSPI_MIXENTRY                   MIXENTRY;               /**< \brief 5C, MIX_ENTRY Register*/
       Ifx_QSPI_BACONENTRY                 BACONENTRY;             /**< \brief 60, BACON_ENTRY Register*/
       Ifx_QSPI_DATAENTRY                  DATAENTRY[8];           /**< \brief 64, DATA_ENTRY Register ${x}*/
       Ifx_UReg_8Bit                       reserved_84[12];        /**< \brief 84, \internal Reserved */
       Ifx_QSPI_RXEXIT                     RXEXIT;                 /**< \brief 90, RX_EXIT Register*/
       Ifx_QSPI_RXEXITD                    RXEXITD;                /**< \brief 94, RX_EXIT Debug Register*/
       Ifx_UReg_8Bit                       reserved_98[8];         /**< \brief 98, \internal Reserved */
       Ifx_QSPI_CAPCON                     CAPCON;                 /**< \brief A0, Capture Control Register*/
       Ifx_QSPI_MC                         MC;                     /**< \brief A4, Move Counter Register*/
       Ifx_QSPI_MCCON                      MCCON;                  /**< \brief A8, Move Counter control Register*/
       Ifx_UReg_8Bit                       reserved_AC[60];        /**< \brief AC, \internal Reserved */
       Ifx_QSPI_OCS                        OCS;                    /**< \brief E8, OCDS Control and Status*/
       Ifx_QSPI_KRSTCLR                    KRSTCLR;                /**< \brief EC, Kernel Reset Status Clear Register*/
       Ifx_QSPI_KRST1                      KRST1;                  /**< \brief F0, Kernel Reset Register 1*/
       Ifx_QSPI_KRST0                      KRST0;                  /**< \brief F4, Kernel Reset Register 0*/
       Ifx_QSPI_ACCEN1                     ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_QSPI_ACCEN0                     ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
} Ifx_QSPI;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXQSPI_REGDEF_H */
