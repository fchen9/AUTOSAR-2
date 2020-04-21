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

/*
 *  General requirements
 */
/** @req CANTP160 */

/*
 * Definitions generated by tools
 */

//lint -save -e451 //PC-Lint Wrong interpretation, "Platform_Types.h included twice without a standard include guard."

#ifndef CANTP_TYPES_H_
#define CANTP_TYPES_H_

#include "Platform_Types.h"
#include "ComStack_Types.h"

// - - - - - - - - - - -

typedef enum {
    CANTP_NOT_LAST_ENTRY, CANTP_END_OF_LIST
} CanTp_ListItemType;


typedef enum {
    CANTP_EXTENDED, CANTP_STANDARD
} CanTp_AddressingFormantType;

typedef enum {
    CANTP_OFF, CANTP_ON
} CanTp_StateType;

typedef enum {
    CANTP_RX_WAIT,
    CANTP_RX_PROCESSING,
    CANTP_TX_WAIT,
    CANTP_TX_PROCESSING
} CanTp_TransferInstanceMode;


typedef enum {
    CANTP_FUNCTIONAL, CANTP_PHYSICAL
} CanTp_TaTypeType;


typedef struct {
    const uint32 CanTpNSa;
} CanTp_NSaType;

typedef struct {
    const uint32 CanTpNTa; /* IMPROVEMENT Why is this 32-bit, can it be lowered */
} CanTp_NTaType;

typedef struct {
    const uint32 CanTpRxNPduId; 
    const uint32 CanTpRxNPduRef; 
} CanTp_RxNPduType; 

typedef struct {
    const uint32 CanTpTxNPduId; /* NOTE: Remove this? */
    const uint32 CanTpTxNPduRef; 
} CanTp_TxNPduType; 

typedef struct {
    const uint32 CanTpTxFcNPduRef;  /* Reference to a PDU in the COM stack. */
} CanTp_TxFcNPduType; 

typedef struct {
    const uint32 CanTpRxFcNPduRef;  /* Reference to a PDU in the COM stack. */
    const uint32 CanTpRxFcNPduId; 
} CanTp_RxFcNPduType; 


typedef struct {
    const PduIdType CanTp_FcPduId; // When recieving this Pdu this conf can be used (if TA match in extended).
    const PduIdType CanIf_FcPduId; // The polite CanIf PDU index.
    const PduIdType PduR_PduId; // The polite PduR index.
    const CanTp_AddressingFormantType CanTpAddressingFormant;
    const uint8 CanTpBs;  /* Sets the maximum number of messages of N-PDUs before flow control. */
    const uint16 CanTpNar;  /* Timeout for transmission of a CAN frame (ms). */
    const uint16 CanTpNbr;
    const uint16 CanTpNcr;  /* Time out for consecutive frames (ms). */
    const uint8 CanTpRxChannel;  /* Connection to runtime variable index, see CanTp 266. */
    const uint16 CanTpRxDI;  /* Data length code for of this RxNsdu. */
    const CanTp_StateType CanTpRxPaddingActivation;  /* Enable use of padding. */
    const CanTp_TaTypeType CanTpRxTaType;  /* Functional or physical addressing. */
    const uint8 CanTpWftMax;  /* Max number FC wait that can be transmitted consecutively. */
    const uint16 CanTpSTmin;  /* Minimum time the sender shall wait between transmissions of two N-PDU. */
    /*const uint32							CanTpNSduRef ** req: CanTp241. This is PDU id - typeless enum. */
    const CanTp_NSaType *CanTpNSa;
    const CanTp_NTaType *CanTpNTa;
    //CanTp_RxNPduType *CanTpRxNPdu;
    //CanTp_TxFcNPduType *CanTpTxFcNPdu;
    //const PduIdType CanTpRxPduId;

} CanTp_RxNSduType; 

typedef struct {
    const PduIdType CanIf_PduId; // The polite CanIf index.
    const PduIdType PduR_PduId; // The polite PduR index.
    const PduIdType CanTp_FcPduId;
    const PduLengthType CanTpNPduLen; //Length of TxNPdu
    const CanTp_AddressingFormantType CanTpAddressingMode; 
    const uint16 CanTpNas;  /* N_As timeout for transmission of any CAN frame. */
    const uint16 CanTpNbs;  /* N_Bs timeout of transmission until reception of next Flow Control. */
    const uint16 CanTpNcs;  /* N_Bs timeout of transmission until reception of next Flow Control. */
    const uint8	CanTpTxChannel;  /* Link to the TX connection channel (why?). */
    const uint16 CanTpTxDI;  /* Data length code for of this TxNsdu. */
    /*const uint32						CanTpTxNSduId; / ** req: CanTp268: Data length code for of this TxNsdu. */
    const CanTp_StateType CanTpTxPaddingActivation;  /* Enable use of padding. */
    const CanTp_TaTypeType CanTpTxTaType;  /* Functional or physical addressing. */
    /*const uint32						CanTpNSduRef ** req: CanTp261. This is PDU id - typeless enum. */
    const CanTp_NSaType *CanTpNSa;
    const CanTp_NTaType *CanTpNTa;
    //CanTp_RxFcNPduType *CanTpRxFcNPdu;
    //CanTp_TxNPduType *CanTpTxNPdu;
    //PduIdType CanTpTxPduId;

} CanTp_TxNSduType; 

// - - - - - - - - - - -

typedef struct {
    const uint32 main_function_period;
    const uint32 number_of_sdus;
    const uint32 number_of_pdus;
    const uint32 pdu_list_size;
    const uint8 padding;
} CanTp_GeneralType; 

// - - - - - - - - - - -

typedef enum {
    IS015765_TRANSMIT, ISO15765_RECEIVE
} CanTp_DirectionType;


// - - - - - - - - - - -

typedef struct {
    const CanTp_DirectionType direction;
    const CanTp_ListItemType listItemType;
    union {
        const CanTp_RxNSduType 	CanTpRxNSdu;
        const CanTp_TxNSduType 	CanTpTxNSdu;
    } configData;
    const boolean CanTpFDSupport;
} CanTp_NSduType;

typedef struct {
    const CanTp_AddressingFormantType CanTpAddressingMode;
    const PduIdType CanTpNSduIndex;
    const PduIdType CanTpReferringTxIndex;
    const PduIdType CanTpPduId;
} CanTp_RxIdType;

// - - - - - - - - - - -

/** Top level config container for CANTP implementation. */
typedef struct {
    /** General configuration paramters for the CANTP module. */
    const CanTp_GeneralType *CanTpGeneral; // 10.2.3

    /** */
    const CanTp_NSduType *CanTpNSduList;

    const CanTp_RxIdType *CanTpRxIdList;


    /**  */
    //const CanTp_RxNSduType 	*CanTpRxNSduList;

    /** This container contains the init parameters of the CAN Interface. */
    //const CanTp_TxNSduType 	*CanTpTxNSduList;

} CanTp_ConfigType;

#endif /* CANTP_TYPES_H_ */
