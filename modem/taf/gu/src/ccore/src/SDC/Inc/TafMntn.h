
#ifndef __TAF_MNTN_H__
#define __TAF_MNTN_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

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


enum TAF_INTERNAL_MSG_ENUM
{
    /* APS业务的可维可测消息ID范围0x0000-0x0999 */
    ID_TAF_APS_INTERNAL_BASE                                = 0,

    /* CBS业务的可维可测消息ID范围0x1000-0x1999 */
    ID_TAF_MNTN_MSG_CBA_BASE                                = 0x1000,

    /* SPM业务的可维可测消息ID范围0x2000-0x2999 */
    ID_TAF_MNTN_MSG_SPM_BASE                                = 0x2000,

    /* TAF模块到CALL的真实消息ID范围0x3000-0x3999 */
    ID_TAF_CALL_INTERNAL_BASE                               = 0x3000,

    /* TAF模块到MSG的真实消息ID范围0x4000-0x4999 */
    ID_TAF_MSG_INTERNAL_BASE                                = 0x4000,

    /* TAF模块到SSA的真实消息ID范围0x5000-0x5999 */
    ID_TAF_SSA_INTERNAL_BASE                                = 0x5000,

    /* 回放业务的可维可测消息ID范围0x6000-0x6999 */
    ID_TAF_PC_REPLAY_BASE                                   = 0x6000,

    /* XCALL业务的可维可测消息ID范围0x7000-0x7999 */
    ID_TAF_MNTN_XCALL_BASE                                  = 0x7000,

    ID_TAF_MNTN_MSG_MASK                                    = 0xf000
};
typedef VOS_UINT32 TAF_MNTN_MSG_ENUM_UINT32;


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
  H2ASN顶级消息结构定义
*****************************************************************************/
typedef struct
{
    TAF_MNTN_MSG_ENUM_UINT32            enMsgId;                                /* _H2ASN_MsgChoice_Export TAF_MNTN_MSG_ENUM_UINT32 */
    VOS_UINT8                           aucMsg[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          TAF_MNTN_MSG_ENUM_UINT32
    ****************************************************************************/
} TAF_MNTN_MSG_DATA;
/* _H2ASN_Length UINT32 */

typedef struct
{
    VOS_MSG_HEADER
    TAF_MNTN_MSG_DATA                   stMsgData;
} TafMntn_MSG;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/



/*****************************************************************************
  10 函数声明
*****************************************************************************/




#if (VOS_OS_VER == VOS_WIN32)
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


