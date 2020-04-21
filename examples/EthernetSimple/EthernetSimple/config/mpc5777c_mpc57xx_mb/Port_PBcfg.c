
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

/* Generator version: 7.0.0
 * AUTOSAR version:   4.3.0
 */

#include "Port.h"




static const ArcPort_InputSelectConfigType PortInputSelectConfigData[] = {
#ifdef INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_99
	INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_99, /* PCR	99	: PORT_PIN_MODE_ETH */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_249
	INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_249, /* PCR	249	: PORT_PIN_MODE_ETH */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_250
	INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_250, /* PCR	250	: PORT_PIN_MODE_ETH */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_253
	INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_253, /* PCR	253	: PORT_PIN_MODE_ETH */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_474
	INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_474, /* PCR	474	: PORT_PIN_MODE_ETH */
#endif
	{PORT_INVALID_REG, 0u} /* end marker */
};

/*lint -save -e835 -e9027 -e845 FALSE POSITIVE Zero given as right argument to | is okay (Generated code and depending on the defines this is true for some defines) */ 
static const ArcPort_PadConfigType PortPadConfigData[] = {
	{83, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(83, PORT_PIN_MODE_CAN, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	83	: PORT_PIN_MODE_CAN */
	{99, STD_ON, STD_OFF, (PIN_FUNCTION_REG(99, PORT_PIN_MODE_ETH, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	99	: PORT_PIN_MODE_ETH */
	{99, STD_ON, STD_OFF, (PIN_FUNCTION_REG(99, PORT_PIN_MODE_ETH, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	99	: PORT_PIN_MODE_ETH */
	{109, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(109, PORT_PIN_MODE_ETH, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	109	: PORT_PIN_MODE_ETH */
	{156, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(156, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	156	: PORT_PIN_MODE_DIO */
	{157, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(157, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	157	: PORT_PIN_MODE_DIO */
	{248, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(248, PORT_PIN_MODE_ETH, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	248	: PORT_PIN_MODE_ETH */
	{249, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(249, PORT_PIN_MODE_ETH, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	249	: PORT_PIN_MODE_ETH */
	{250, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(250, PORT_PIN_MODE_ETH, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	250	: PORT_PIN_MODE_ETH */
	{251, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(251, PORT_PIN_MODE_ETH, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	251	: PORT_PIN_MODE_ETH */
	{252, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(252, PORT_PIN_MODE_ETH, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	252	: PORT_PIN_MODE_ETH */
	{253, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(253, PORT_PIN_MODE_ETH, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	253	: PORT_PIN_MODE_ETH */
	{446, STD_ON, STD_ON, (PIN_FUNCTION_REG(446, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	446	: PORT_PIN_MODE_DIO */
	{447, STD_ON, STD_ON, (PIN_FUNCTION_REG(447, PORT_PIN_MODE_DIO, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_NONE  )}, /* PCR	447	: PORT_PIN_MODE_DIO */
	{474, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(474, PORT_PIN_MODE_ETH, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MIN | PORT_PULL_NONE  )}, /* PCR	474	: PORT_PIN_MODE_ETH */
	{PORT_INVALID_REG, STD_OFF, STD_OFF, 0u} /* end marker */
};
/*lint -restore */


static const ArcPort_OutConfigType PortOutConfigData[] = {
	{156u, PORT_GPDO_HIGH}, /* GPDO	156 */
	{157u, PORT_GPDO_RESET}, /* GPDO	157 */
	{446u, PORT_GPDO_RESET}, /* GPDO	446 */
	{PORT_INVALID_REG, 0u} /* end marker */
};



const Port_ConfigType PortConfigData =
{
  .padConfig = PortPadConfigData,
  .outConfig = PortOutConfigData,
  .inputSelectConfig = PortInputSelectConfigData
};


