

#ifndef __TAFMTAUNSOLICITEDREPORT_H__
#define __TAFMTAUNSOLICITEDREPORT_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "TafMtaComm.h"
#include "TafMtaMain.h"
#include "AtMtaInterface.h"
#include "TafMtaTimerMgmt.h"
#include "TafAgentInterface.h"
#include "TafSdcCtx.h"
#include "TafSdcLib.h"

#include "NasStkInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/

/*****************************************************************************
  3 枚举定义
*****************************************************************************/
/*****************************************************************************
  4 全局变量声明
*****************************************************************************/
/*****************************************************************************
  5 消息头定义
*****************************************************************************/
/*****************************************************************************
  6 消息定义
*****************************************************************************/
/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
/*****************************************************************************
  8 UNION定义
*****************************************************************************/
/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/
/*****************************************************************************
  10 函数声明
*****************************************************************************/
VOS_VOID TAF_MTA_RcvAtSetCurcNotify(VOS_VOID *pMsg);
VOS_VOID TAF_MTA_RcvAtQryCurcReq(VOS_VOID *pMsg);
VOS_VOID TAF_MTA_RcvAtSetUnsolicitedRptReq(VOS_VOID *pMsg);
VOS_VOID TAF_MTA_RcvAtQryUnsolicitedRptReq(VOS_VOID *pMsg);
VOS_VOID TAF_MTA_RcvTafAgentGetSysModeReq(VOS_VOID *pMsg);
VOS_VOID TAF_MTA_SndStkCurcRptCfgInfoInd(AT_MTA_CURC_SET_NOTIFY_STRU *pMsg);



#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif


