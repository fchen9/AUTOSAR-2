/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

/* Generator version: 5.3.0
 * AUTOSAR version:   4.0.3
 */

#ifndef CANIF_PBCFG_H_
#define CANIF_PBCFG_H_

#if !(((CANIF_SW_MAJOR_VERSION == 5) && (CANIF_SW_MINOR_VERSION == 3)) )
#error CanIf: Configuration file expected BSW module version to be 5.3.*
#endif

#if !(((CANIF_AR_RELEASE_MAJOR_VERSION == 4) && (CANIF_AR_RELEASE_MINOR_VERSION == 0)) )
#error CanIf: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#define SPECIAL_PDU_ID_T1_RX_PDU		0

#define SPECIAL_PDU_ID_T1_TX_PDU		0


//Number of tx l-pdus
#define CANIF_NUM_TX_LPDU	6

#define CANIF_PDU_ID_TESTER01        2
#define CANIF_PDU_ID_DIAGFUNCTIONALRX        3
#define CANIF_PDU_ID_DIAGPHYSICALRX        4
#define CANIF_PDU_ID_SWCMEM_RX_CANIF        5

#define CANIF_PDU_ID_ECU01        2
#define CANIF_PDU_ID_DIAGPHYSICALTX        3
#define CANIF_PDU_ID_DIAGUUDT        4
#define CANIF_PDU_ID_SWCMEM_TX_CANIF        5

#endif
