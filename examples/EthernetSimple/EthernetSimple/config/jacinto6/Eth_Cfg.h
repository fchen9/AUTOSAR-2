

#ifndef ETH_CFG_H_
#define ETH_CFG_H_

#if !(((ETH_SW_MAJOR_VERSION == 1) && (ETH_SW_MINOR_VERSION == 0)) )
#error Eth: Configuration file expected BSW module version to be 1.0.*
#endif

#if !(((ETH_AR_RELEASE_MAJOR_VERSION == 4) && (ETH_AR_RELEASE_MINOR_VERSION == 2)) )
#error Eth: Configuration file expected AUTOSAR version to be 4.2.*
#endif



/* API switches */
#define ETH_DEV_ERROR_DETECT	               STD_ON
#define ETH_VERSION_INFO_API	               STD_ON
#define ETH_MII_API				               STD_ON
#define ETH_GLOBAL_TIME_SUPPORT                 STD_OFF

#define ETH_MAIN_FUNC_PERIOD	               0.01  /* Use this period (in seconds) for your allocation*/
#define ETH_PHYS_ADRS_FILTER_API	           STD_ON
#define ETH_HW_SOFT_RESET			           STD_ON

/* Used HW Controller Switches */
#define ETH_USE_HW_UNIT_0                      STD_ON
#define ETH_USE_HW_UNIT_1                      STD_OFF

/* Alignment bytes for the buffers, currently it is obtained from the generator since buffer size is generated aligned to this */
/* Change it carefully, needed to change in all the buffers */ 
#define ETH_BUF_ALIGNING_BYTES                 1u
#define ETH_DESC_ALIGNING_BYTES                4u

/* Buffer size */
#define ETH_TOTAL_RX_BUFFER_SIZE	7590UL
#define ETH_NUM_RX_BUFFERS 			5UL

#define ETH_TOTAL_TX_BUFFER_SIZE	3036UL
#define ETH_NUM_TX_BUFFERS 			2UL

/* Maximum byte size of the RX or TX descriptors per an hardware unit */
#define ETH_MAX_DESCRIPTOR_SIZE 			   (16 * 128)

/* Symbolic names for controller */
#define ETH_USE_CTRL_0                                 STD_ON
#define ETH_CTRL_0_NUM_TX_BUFFERS                      2U  
#define ETH_CTRL_0_NUM_RX_BUFFERS                      5U 
#define ETH_CTRL_0_NUM_TX_BUFFER_SIZE                  1518U
#define ETH_CTRL_0_NUM_RX_BUFFER_SIZE                  1518U                           


/* Total number of configured controllers */
#define ETH_NOF_CONFIG_CTRL                    1u


#define MBPS_10                                (uint8)0u
#define MBPS_100                               (uint8)1u
#define MII                                    (uint8)0u
#define RMII                                   (uint8)1u 
#define RGMII                                  (uint8)2u 
/* Valid hardware unit. */
#define GMAC_SW_PORT0                          (uint8)0u /* Host */
#define GMAC_SW_PORT1                          (uint8)1u
#define GMAC_SW_PORT2                          (uint8)2u
#define HWUNIT_0                               GMAC_SW_PORT1
#define HWUNIT_1                               GMAC_SW_PORT2
#define NORMAL_PRIO                            (uint8)0u
#define DUAL_MAC                               (uint8)1u
#define RATE_LIMIT                             (uint8)2u

/* Symbolic names for controller */
#define EthConf_EthCtrlConfig_EthCtrlConfig                                           (uint8)0u


/* Configuration Set Handles */
#define                                        Eth (&EthConfig)
#define                                        Eth_Eth (&EthConfig)

/* Eth module configuration. */
extern const Eth_ConfigType EthConfig;




#endif /*ETH_CFG_H_*/
