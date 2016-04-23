/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2015

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      2015-07-20
 * @file
 * @brief
 * Interface provided to Layer_3_NAS.
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef CAS_1X_TRCHCTRL_PROC_NAS_PIF_H
#define CAS_1X_TRCHCTRL_PROC_NAS_PIF_H

/*******************************************************************************
 1. Other files included
*******************************************************************************/

#include "vos.h"
#include "cas_1x_access_ctrl_proc_nas_pif.h"
#include "PsTypeDef.h"

#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/

#define CAS_CNAS_1X_QOS_MAX_LENGTH      ( 31 )
#define CAS_CNAS_1X_INVALID_CON_REF     ( 0x00 )

/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16
 *
 * Description :
 *******************************************************************************/
enum CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM
{
    ID_CNAS_CAS_1X_ENTER_TCH_SUBSTATE_NOTIFY                = 0x9000, /**< @sa CNAS_CAS_1X_ENTER_TCH_SUBSTATE_NOTIFY_STRU */
    ID_CAS_CNAS_1X_RESET_WFO_SUBSTATE_TIMER_IND             = 0x9001, /**< @sa CAS_CNAS_1X_RESET_WFO_SUBSTATE_TIMER_IND_STRU */
    ID_CAS_CNAS_1X_UPDATE_CALL_INFO_IND                     = 0x9002, /**< @sa CAS_CNAS_1X_UPDATE_CALL_INFO_IND_STRU */
    ID_CAS_CNAS_1X_CALL_INIT_IND                            = 0x9003, /**< @sa CAS_CNAS_1X_CALL_INIT_IND_STRU */
    ID_CNAS_CAS_1X_SCH_ASSIGN_REQ                           = 0x9004, /**< @sa CNAS_CAS_1X_SCH_ASSIGN_REQ_STRU */
    ID_CAS_CNAS_1X_SCH_ASSIGN_CNF                           = 0x9005, /**< @sa CAS_CNAS_1X_SCH_ASSIGN_CNF_STRU */
    ID_CNAS_CAS_1X_MODE_CHANGE_REQ                          = 0x9006, /**< @sa CNAS_CAS_1X_MODE_CHANGE_REQ_STRU */
    ID_CAS_CNAS_1X_MODE_CHANGE_IND                          = 0x9007, /**< @sa CAS_CNAS_1X_MODE_CHANGE_IND_STRU */
    ID_CAS_CNAS_1X_NDSS_RECORD_DAILED_DIGITS_IND            = 0x9008, /**< @sa CAS_CNAS_1X_NDSS_RECORD_DAILED_DIGITS_IND_STRU */
    ID_CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_IND        = 0x9009, /**< @sa CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_IND_STRU */
    ID_CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_BUTT      = 0xFFFF
};
typedef VOS_UINT16 CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16;

/** ****************************************************************************
 * Name        : CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_ENUM_UINT16
 *
 * Description :
 *******************************************************************************/
enum CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_ENUM
{
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_POWER_DOWN_INDICATION             = 0x0000,
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_MS_RELEASE_INDICATION             = 0x0001,
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_SERVICE_INACTIVE_INDICATION       = 0x0002,
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_BS_RELEASE_INDICATION             = 0x0003,
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_BS_EXTEND_RELEASE_INDICATION      = 0x0004,
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_BS_EXTEND_RELEASE_WITH_MINI_INDICATION= 0x0005,
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_REDIRCTION_INDICATION             = 0x0006,
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_NDSS_OFF_INDICATION               = 0x0007,
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_BUTT                              = 0x0008
};
typedef VOS_UINT16 CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_ENUM_UINT16;

/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/

/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : CNAS_CAS_1X_ENTER_TCH_SUBSTATE_NOTIFY_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
} CNAS_CAS_1X_ENTER_TCH_SUBSTATE_NOTIFY_STRU;

/** ****************************************************************************
 * Name        : CAS_CNAS_1X_RESET_WFO_SUBSTATE_TIMER_IND_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
} CAS_CNAS_1X_RESET_WFO_SUBSTATE_TIMER_IND_STRU;

/** ****************************************************************************
 * Name        : CAS_CNAS_1X_UPDATE_CALL_INFO_IND_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucConnectId;
    VOS_UINT8                                               ucConRef;
    PS_BOOL_ENUM_UINT8                                      enIsNullCcFlag;
    VOS_UINT8                                               aucReserve;
    CAS_CNAS_1X_SERVICE_OPTION_ENUM_UINT16                  enSo;
    VOS_UINT8                                               ucSrId;
    VOS_UINT8                                               ucQosParaFlag;
    VOS_UINT8                                               ucQosInfoLen;
    VOS_UINT8                                               aucQosInfo[CAS_CNAS_1X_QOS_MAX_LENGTH];
} CAS_CNAS_1X_UPDATE_CALL_INFO_IND_STRU;

/** ****************************************************************************
 * Name        : CAS_CNAS_1X_CALL_INIT_IND_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucConnectId;                            /**< invalid value =0xFF */
    VOS_UINT8                                               ucConRef;                               /**< invalid valuse =0 */
    PS_BOOL_ENUM_UINT8                                      enBypassAlertAns;
    PS_BOOL_ENUM_UINT8                                      enIsNullCcFlag;
    VOS_UINT8                                               ucQosInfoLen;
    VOS_UINT8                                               aucQosInfo[CAS_CNAS_1X_QOS_MAX_LENGTH];
} CAS_CNAS_1X_CALL_INIT_IND_STRU;

/** ****************************************************************************
 * Name        : CNAS_CAS_1X_SCH_ASSIGN_REQ_STRU
 *
 * Description : Request to send an Extended Supplemental Channel Request
 * Message or Supplemental Channel Request Message, mobile initiated request
 * for a supplemental channel.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
} CNAS_CAS_1X_SCH_ASSIGN_REQ_STRU;

/** ****************************************************************************
 * Name        : CAS_CNAS_1X_SCH_ASSIGN_CNF_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
} CAS_CNAS_1X_SCH_ASSIGN_CNF_STRU;

/** ****************************************************************************
 * Name        : CNAS_CAS_1X_MODE_CHANGE_REQ_STRU
 *
 * Description : This signal inform the AS go to Control Hold Mode from Active
 * Mode or go to Active Mode from Control Hold Mode.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               enCurrentMode; /**< TBD */
    VOS_UINT8                                               enTargetMode;  /**< TBD */
    VOS_UINT8                                               aucReserve[2];
} CNAS_CAS_1X_MODE_CHANGE_REQ_STRU;

/** ****************************************************************************
 * Name        : CAS_CNAS_1X_MODE_CHANGE_IND_STRU
 *
 * Description : This signal inform the Layer_3_NAS Current mode and the
 * previous mode.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               enPreviousMode; /**< TBD */
    VOS_UINT8                                               enCurrentMode;  /**< TBD */
    VOS_UINT8                                               aucReserve[2];
} CAS_CNAS_1X_MODE_CHANGE_IND_STRU;

/** ****************************************************************************
 * Name        : CAS_CNAS_1X_NDSS_RECORD_DAILED_DIGITS_IND_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
} CAS_CNAS_1X_NDSS_RECORD_DAILED_DIGITS_IND_STRU;

/** ****************************************************************************
 * Name        : CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_IND_STRU
 *
 * Description : when CAS enter to release substate inform CNAS the reason ;
 * receive PID:XSD
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_1X_TRCHCTRL_PROC_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
    CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_ENUM_UINT16   enReason;
    VOS_UINT16                                              usRsvd;
} CAS_CNAS_1X_ENTER_RELEASE_SUBSTATE_REASON_IND_STRU;

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#endif
