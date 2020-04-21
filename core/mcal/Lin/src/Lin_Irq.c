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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Lin_Irq.c
 *  This files holds the interrupt frame, refer to section 5.1.1 of LIN SWS specification (ASR4.3.0).
 */
/** @addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** @addtogroup Lin
  *  This is the TMS570 Mcal Lin Group
  *  @{
  */

#include "Lin.h"
#include "Lin_MemMap.h"
#include "Lin_Internal.h"


#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
#include "isr.h"
#endif

#define LIN_CHANNEL_0 0u
#define LIN_CHANNEL_1 1u

#if defined(LIN_CHANNEL_0_USED)
ISR(Lin_Ch0_Isr) {
  Lin_Hw_Isr(LIN_CHANNEL_0);
}
#endif /* defined(LIN_CHANNEL_0_USED) */

#if defined(LIN_CHANNEL_1_USED)
ISR(Lin_Ch1_Isr) {
  Lin_Hw_Isr(LIN_CHANNEL_1);
}
#endif /* defined(LIN_CHANNEL_1_USED) */


