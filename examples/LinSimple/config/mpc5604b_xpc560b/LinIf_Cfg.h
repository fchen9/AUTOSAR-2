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

/* Generator version: 4.0.0
 * AUTOSAR version:   4.0.3
 */
/** @req LINIF491 */

#if !(((LINIF_SW_MAJOR_VERSION == 4) && (LINIF_SW_MINOR_VERSION == 0)) )
#error LinIf: Configuration file expected BSW module version to be 4.0.X*
#endif

/* @req LINIF383 */
#if !(((LINIF_AR_RELEASE_MAJOR_VERSION == 4) && (LINIF_AR_RELEASE_MINOR_VERSION == 0)) )
#error LinIf: Configuration file expected AUTOSAR version to be 4.0.*
#endif

/* File: LinIf_Cfg.h
 * Declarations of the pre-compile time configurable parameters.
 */

#ifndef LINIF_CFG_H_
#define LINIF_CFG_H_

#include "Std_Types.h"
#include "LinIf_Types.h"
#include "Lin.h"
#include "PduR.h"
#include "PduR_PbCfg.h" // for using PDUR Pdu IDs

/*===========[LinIfGeneral]===================================================*/
/* @req LINIF268 */
/* Switches the Development Error Detection and Notification ON or OFF. */
#define LINIF_DEV_ERROR_DETECT           STD_ON


/* States if multiple drivers are included in the LIN Interface or not. The
 * reason for this parameter is to reduce the size of LIN Interface if multiple
 * drivers are not used. */
#define LINIF_MULTIPLE_DRIVER_SUPPORT    STD_OFF


/* States if the node configuration commands Assign NAD and Conditional
 * Change NAD are supported. */
#define LINIF_OPTIONAL_REQUEST_SUPPORTED STD_OFF


/* States if the TP is included in the LIN Interface or not. The reason for this
 * parameter is to reduce the size of LIN Interface if the TP is not used. */
#define LINIF_TP_SUPPORTED               STD_OFF

/** @req LINIF279 */
/* Switches the LinIf_GetVersionInfo function ON or OFF. */
#define LINIF_VERSION_INFO_API           STD_OFF



/*===========[Channel ID symbols]=============================================*/
/* NOTE: The symbolic name cannot be used to index in the LinIf configuration. */
/** @req LINIF461 */
#define LinIfConf_LinIfChannel_LinIfChannel1  0u/* ComMConf_ComMChannel_ComMChannel1 */

/*===========[Schedule table indexes]=========================================*/
/* Current implementation of LinIf does not support separate schedule tables
 * per channel so these indexes are all used to access the array
 * LinIfScheduleTableCfg. The indexes beginn with 1 because index 0 is reserved
 * for the NULL_SCHEDULE table which is autogenerated. */

#define NULL_SCHEDULE  ((LinIf_SchHandleType) 0)

#define LinIfConf_LinIfScheduleTable_SCHEDULE_01   ((LinIf_SchHandleType) 1)


/*===========[PDU definitions]================================================*/


enum
{
    LINIF_PDU_ID_LAMPS_RX,
    LINIF_PDU_ID_TCM_RX,
    LINIF_PDU_ID_ENG_TX,
};

/*===========[Sizes of configuration tables]==================================*/

/* Number of LinIf channels. */
#define LINIF_CHANNEL_COUNT              1

/* Number of referenced Lin controllers.
 * As every LinIf channel is referencing
 * a Lin channel, these numbers are equal. */
#define LINIF_CONTROLLER_CNT             LINIF_CHANNEL_COUNT


/* Number of all schedule tables on all channels plus one.
 * This includes the autogenerated NULL_SCHEDULE table. */
#define LINIF_SCH_CNT                    2

/* Number of all setup LinIf frames on all channels */
#define LINIF_FRAMES_CNT                 3

/*===========[Configuration tables]===========================================*/

/* Global module configuration */
extern const LinIf_ConfigType  LinIf_Config;

#endif /* LINIF_CFG_H_ */
