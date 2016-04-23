/******************************************************************************

                 版权所有 (C), 2001-2015, 华为技术有限公司

 ******************************************************************************
  文 件 名   : soc_smmu500_ns_interface.h
  版 本 号   : 初稿
  作    者   : Excel2Code
  生成日期   : 2015-04-15 11:18:50
  最近修改   :
  功能描述   : 接口头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2015年4月15日
    作    者   : fWX220878
    修改内容   : 从《Hi3650V100 SOC寄存器手册_SMMU500_NS.xml》自动生成

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#ifndef __SOC_SMMU500_NS_INTERFACE_H__
#define __SOC_SMMU500_NS_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 宏定义
*****************************************************************************/

/****************************************************************************
                     (1/1) SMMU_NS
 ****************************************************************************/
/* 寄存器说明：全局配置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CR0_UNION */
#define SOC_SMMU500_NS_SMMU_CR0_ADDR(base)            ((base) + (0x0000))

/* 寄存器说明：辅助配置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_ACR_UNION */
#define SOC_SMMU500_NS_SMMU_ACR_ADDR(base)            ((base) + (0x0010))

/* 寄存器说明：特性0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_IDR0_UNION */
#define SOC_SMMU500_NS_SMMU_IDR0_ADDR(base)           ((base) + (0x0020))

/* 寄存器说明：特性1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_IDR1_UNION */
#define SOC_SMMU500_NS_SMMU_IDR1_ADDR(base)           ((base) + (0x0024))

/* 寄存器说明：特性2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_IDR2_UNION */
#define SOC_SMMU500_NS_SMMU_IDR2_ADDR(base)           ((base) + (0x0028))

/* 寄存器说明：特性7寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_IDR7_UNION */
#define SOC_SMMU500_NS_SMMU_IDR7_ADDR(base)           ((base) + (0x003C))

/* 寄存器说明：Global Fault低位地址寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_GFAR_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_GFAR_LOW_ADDR(base)       ((base) + (0x0040))

/* 寄存器说明：Global Fault高位地址寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_GFAR_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_GFAR_HIGH_ADDR(base)      ((base) + (0x0044))

/* 寄存器说明：Global Fault状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_GFSR_UNION */
#define SOC_SMMU500_NS_SMMU_GFSR_ADDR(base)           ((base) + (0x0048))

/* 寄存器说明：Global Fault 状态恢复寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_GFSRRESTORE_UNION */
#define SOC_SMMU500_NS_SMMU_GFSRRESTORE_ADDR(base)    ((base) + (0x004C))

/* 寄存器说明：Global Fault 综合0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_GFSYNR0_UNION */
#define SOC_SMMU500_NS_SMMU_GFSYNR0_ADDR(base)        ((base) + (0x0050))

/* 寄存器说明：Global Fault 综合1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_GFSYNR1_UNION */
#define SOC_SMMU500_NS_SMMU_GFSYNR1_ADDR(base)        ((base) + (0x0054))

/* 寄存器说明：Invalidate Entire Non-secure Non-Hyp TLB寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_TLBIALLNSNH_UNION */
#define SOC_SMMU500_NS_SMMU_TLBIALLNSNH_ADDR(base)    ((base) + (0x0068))

/* 寄存器说明：Global Synchronize TLB Invalidate寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_TLBGSYNC_UNION */
#define SOC_SMMU500_NS_SMMU_TLBGSYNC_ADDR(base)       ((base) + (0x0070))

/* 寄存器说明：Global TLB Status 寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_TLBGSTATUS_UNION */
#define SOC_SMMU500_NS_SMMU_TLBGSTATUS_ADDR(base)     ((base) + (0x0074))

/* 寄存器说明：Stream Match 0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_SMR0_UNION */
#define SOC_SMMU500_NS_SMMU_SMR0_ADDR(base)           ((base) + (0x0800))

/* 寄存器说明：Stream Match 1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_SMR1_UNION */
#define SOC_SMMU500_NS_SMMU_SMR1_ADDR(base)           ((base) + (0x0804))

/* 寄存器说明：Stream Match 2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_SMR2_UNION */
#define SOC_SMMU500_NS_SMMU_SMR2_ADDR(base)           ((base) + (0x0808))

/* 寄存器说明：Stream Match 3寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_SMR3_UNION */
#define SOC_SMMU500_NS_SMMU_SMR3_ADDR(base)           ((base) + (0x080C))

/* 寄存器说明：Stream to Context 0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_S2CR0_UNION */
#define SOC_SMMU500_NS_SMMU_S2CR0_ADDR(base)          ((base) + (0x0C00))

/* 寄存器说明：Stream to Context 1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_S2CR1_UNION */
#define SOC_SMMU500_NS_SMMU_S2CR1_ADDR(base)          ((base) + (0x0C04))

/* 寄存器说明：Stream to Context 2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_S2CR2_UNION */
#define SOC_SMMU500_NS_SMMU_S2CR2_ADDR(base)          ((base) + (0x0C08))

/* 寄存器说明：Stream to Context 3寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_S2CR3_UNION */
#define SOC_SMMU500_NS_SMMU_S2CR3_ADDR(base)          ((base) + (0x0C0C))

/* 寄存器说明：Context Bank Attribute 0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CBAR0_UNION */
#define SOC_SMMU500_NS_SMMU_CBAR0_ADDR(base)          ((base) + (0x1000))

/* 寄存器说明：Context Bank Attribute 1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CBAR1_UNION */
#define SOC_SMMU500_NS_SMMU_CBAR1_ADDR(base)          ((base) + (0x1004))

/* 寄存器说明：Context Bank Attribute 2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CBAR2_UNION */
#define SOC_SMMU500_NS_SMMU_CBAR2_ADDR(base)          ((base) + (0x1008))

/* 寄存器说明：Context Bank Attribute 3寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CBAR3_UNION */
#define SOC_SMMU500_NS_SMMU_CBAR3_ADDR(base)          ((base) + (0x100C))

/* 寄存器说明：Context Bank Fault Restricted Syndrome 0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CBFRSYNRA0_UNION */
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA0_ADDR(base)     ((base) + (0x1400))

/* 寄存器说明：Context Bank Fault Restricted Syndrome 1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CBFRSYNRA1_UNION */
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA1_ADDR(base)     ((base) + (0x1404))

/* 寄存器说明：Context Bank Fault Restricted Syndrome 2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CBFRSYNRA2_UNION */
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA2_ADDR(base)     ((base) + (0x1408))

/* 寄存器说明：Context Bank Fault Restricted Syndrome 3寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CBFRSYNRA3_UNION */
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA3_ADDR(base)     ((base) + (0x140C))

/* 寄存器说明：集成模式控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_ITCTRL_UNION */
#define SOC_SMMU500_NS_ITCTRL_ADDR(base)              ((base) + (0x2000))

/* 寄存器说明：中断测试输出寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_ITOP_UNION */
#define SOC_SMMU500_NS_ITOP_ADDR(base)                ((base) + (0x2008))

/* 寄存器说明：中断测试输入寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_ITIP_UNION */
#define SOC_SMMU500_NS_ITIP_ADDR(base)                ((base) + (0x2004))

/* 寄存器说明：性能监控事件计数0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMEVCNTR0_UNION */
#define SOC_SMMU500_NS_PMEVCNTR0_ADDR(base)           ((base) + (0x3000))

/* 寄存器说明：性能监控事件计数1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMEVCNTR1_UNION */
#define SOC_SMMU500_NS_PMEVCNTR1_ADDR(base)           ((base) + (0x3004))

/* 寄存器说明：性能监控事件计数2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMEVCNTR2_UNION */
#define SOC_SMMU500_NS_PMEVCNTR2_ADDR(base)           ((base) + (0x3008))

/* 寄存器说明：性能监控事件类型选择0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMEVTYPE0_UNION */
#define SOC_SMMU500_NS_PMEVTYPE0_ADDR(base)           ((base) + (0x3400))

/* 寄存器说明：性能监控事件类型选择1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMEVTYPE1_UNION */
#define SOC_SMMU500_NS_PMEVTYPE1_ADDR(base)           ((base) + (0x3404))

/* 寄存器说明：性能监控事件类型选择2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMEVTYPE2_UNION */
#define SOC_SMMU500_NS_PMEVTYPE2_ADDR(base)           ((base) + (0x3408))

/* 寄存器说明：性能监控计数器组配置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMCGCR0_UNION */
#define SOC_SMMU500_NS_PMCGCR0_ADDR(base)             ((base) + (0x3800))

/* 寄存器说明：性能监控计数器组流匹配寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMCGSMR0_UNION */
#define SOC_SMMU500_NS_PMCGSMR0_ADDR(base)            ((base) + (0x3A00))

/* 寄存器说明：性能计数器使能设置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMCNTENSET_UNION */
#define SOC_SMMU500_NS_PMCNTENSET_ADDR(base)          ((base) + (0x3C00))

/* 寄存器说明：性能监控计数器使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMCNTENCLR_UNION */
#define SOC_SMMU500_NS_PMCNTENCLR_ADDR(base)          ((base) + (0x3C20))

/* 寄存器说明：性能监控中断使能设置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMINTENSET_UNION */
#define SOC_SMMU500_NS_PMINTENSET_ADDR(base)          ((base) + (0x3C40))

/* 寄存器说明：性能监控中断使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMINTENCLR_UNION */
#define SOC_SMMU500_NS_PMINTENCLR_ADDR(base)          ((base) + (0x3C60))

/* 寄存器说明：性能监控溢出状态清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMOVSCLR_UNION */
#define SOC_SMMU500_NS_PMOVSCLR_ADDR(base)            ((base) + (0x3C80))

/* 寄存器说明：性能监控溢出状态设定寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMOVSSET_UNION */
#define SOC_SMMU500_NS_PMOVSSET_ADDR(base)            ((base) + (0x3CC0))

/* 寄存器说明：性能监控配置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMCFGR_UNION */
#define SOC_SMMU500_NS_PMCFGR_ADDR(base)              ((base) + (0x3E00))

/* 寄存器说明：性能监控控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMCR_UNION */
#define SOC_SMMU500_NS_PMCR_ADDR(base)                ((base) + (0x3E04))

/* 寄存器说明：性能监控一般事件标示寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMCEID0_UNION */
#define SOC_SMMU500_NS_PMCEID0_ADDR(base)             ((base) + (0x3E20))

/* 寄存器说明：性能监控鉴定状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMAUTHSTATUS_UNION */
#define SOC_SMMU500_NS_PMAUTHSTATUS_ADDR(base)        ((base) + (0x3FB8))

/* 寄存器说明：性能监控设备类型寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PMDEVTYPE_UNION */
#define SOC_SMMU500_NS_PMDEVTYPE_ADDR(base)           ((base) + (0x3FCC))

/* 寄存器说明：设备ID4寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PERIPHID4_UNION */
#define SOC_SMMU500_NS_PERIPHID4_ADDR(base)           ((base) + (0xFFD0))

/* 寄存器说明：设备ID5寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PERIPHID5_UNION */
#define SOC_SMMU500_NS_PERIPHID5_ADDR(base)           ((base) + (0xFFD4))

/* 寄存器说明：设备ID6寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PERIPHID6_UNION */
#define SOC_SMMU500_NS_PERIPHID6_ADDR(base)           ((base) + (0xFFD8))

/* 寄存器说明：设备ID7寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PERIPHID7_UNION */
#define SOC_SMMU500_NS_PERIPHID7_ADDR(base)           ((base) + (0xFFDC))

/* 寄存器说明：设备ID0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PERIPHID0_UNION */
#define SOC_SMMU500_NS_PERIPHID0_ADDR(base)           ((base) + (0xFFE0))

/* 寄存器说明：设备ID1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PERIPHID1_UNION */
#define SOC_SMMU500_NS_PERIPHID1_ADDR(base)           ((base) + (0xFFE4))

/* 寄存器说明：设备ID2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PERIPHID2_UNION */
#define SOC_SMMU500_NS_PERIPHID2_ADDR(base)           ((base) + (0xFFE8))

/* 寄存器说明：设备ID3寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_PERIPHID3_UNION */
#define SOC_SMMU500_NS_PERIPHID3_ADDR(base)           ((base) + (0xFFEC))

/* 寄存器说明：模块ID0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_COMPONENTID0_UNION */
#define SOC_SMMU500_NS_COMPONENTID0_ADDR(base)        ((base) + (0xFFF0))

/* 寄存器说明：模块ID1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_COMPONENTID1_UNION */
#define SOC_SMMU500_NS_COMPONENTID1_ADDR(base)        ((base) + (0xFFF4))

/* 寄存器说明：模块ID2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_COMPONENTID2_UNION */
#define SOC_SMMU500_NS_COMPONENTID2_ADDR(base)        ((base) + (0xFFF8))

/* 寄存器说明：模块ID3寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_COMPONENTID3_UNION */
#define SOC_SMMU500_NS_COMPONENTID3_ADDR(base)        ((base) + (0xFFFC))

/* 寄存器说明：CB0系统控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_SCTLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_ADDR(base)      ((base) + (0x8000))

/* 寄存器说明：CB0页表基地址低位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_TTBR0_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_TTBR0_LOW_ADDR(base)  ((base) + (0x8020))

/* 寄存器说明：CB0页表基地址高位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_TTBR0_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_TTBR0_HIGH_ADDR(base) ((base) + (0x8024))

/* 寄存器说明：CB0页表基地址控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_TTBCR_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_ADDR(base)      ((base) + (0x8030))

/* 寄存器说明：Context Bank 0 Fault状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_FSR_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_FSR_ADDR(base)        ((base) + (0x8058))

/* 寄存器说明：Context Bank 0 Fault状态恢复寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_FSRRESTORE_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_FSRRESTORE_ADDR(base) ((base) + (0x805C))

/* 寄存器说明：Context Bank 0 Fault地址低位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_FAR_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_FAR_LOW_ADDR(base)    ((base) + (0x8060))

/* 寄存器说明：Context Bank 0 Fault地址高位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_FAR_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_FAR_HIGH_ADDR(base)   ((base) + (0x8064))

/* 寄存器说明：Context Bank 0 Fault综合寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_FSYNR0_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_ADDR(base)     ((base) + (0x8068))

/* 寄存器说明：Context Bank 0 性能监控事件计数0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR0_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR0_ADDR(base) ((base) + (0x8E00))

/* 寄存器说明：Context Bank 0 性能监控事件计数1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR1_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR1_ADDR(base) ((base) + (0x8E04))

/* 寄存器说明：Context Bank 0 性能监控事件计数2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR2_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR2_ADDR(base) ((base) + (0x8E08))

/* 寄存器说明：Context Bank 0 性能监控事件类型选择0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_ADDR(base) ((base) + (0x8E80))

/* 寄存器说明：Context Bank 0 性能监控事件类型选择1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_ADDR(base) ((base) + (0x8E84))

/* 寄存器说明：Context Bank 0 性能监控事件类型选择2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_ADDR(base) ((base) + (0x8E88))

/* 寄存器说明：Context Bank 0 性能监控配置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMCFGR_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMCFGR_ADDR(base)     ((base) + (0x8F00))

/* 寄存器说明：Context Bank 0 性能监控控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMCR_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMCR_ADDR(base)       ((base) + (0x8F04))

/* 寄存器说明：Context Bank 0 性能监控common event ID寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMCEID0_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMCEID0_ADDR(base)    ((base) + (0x8F20))

/* 寄存器说明：Context Bank 0 性能监控计数器使能寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMCNTENSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMCNTENSET_ADDR(base) ((base) + (0x8F40))

/* 寄存器说明：Context Bank 0 性能监控计数器使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMCNTENCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMCNTENCLR_ADDR(base) ((base) + (0x8F44))

/* 寄存器说明：Context Bank 0 性能监控中断使能寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMINTENSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMINTENSET_ADDR(base) ((base) + (0x8F48))

/* 寄存器说明：Context Bank 0 性能监控中断使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMINTENCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMINTENCLR_ADDR(base) ((base) + (0x8F4C))

/* 寄存器说明：Context Bank 0 性能监控溢出状态清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMOVSRCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMOVSRCLR_ADDR(base)  ((base) + (0x8F50))

/* 寄存器说明：Context Bank 0 性能监控溢出状态设定寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMOVSRSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMOVSRSET_ADDR(base)  ((base) + (0x8F58))

/* 寄存器说明：Context Bank 0 性能监控授权状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB0_PMAUTHSTATUS_UNION */
#define SOC_SMMU500_NS_SMMU_CB0_PMAUTHSTATUS_ADDR(base) ((base) + (0x8FB8))

/* 寄存器说明：Context Bank 1 系统控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_SCTLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_ADDR(base)      ((base) + (0x9000))

/* 寄存器说明：Context Bank 1 页表基地址低位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_TTBR0_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_TTBR0_LOW_ADDR(base)  ((base) + (0x9020))

/* 寄存器说明：Context Bank 1 页表基地址高位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_TTBR0_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_TTBR0_HIGH_ADDR(base) ((base) + (0x9024))

/* 寄存器说明：Context Bank 1 页表基地址控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_TTBCR_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_ADDR(base)      ((base) + (0x9030))

/* 寄存器说明：Context Bank 1 Fault状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_FSR_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_FSR_ADDR(base)        ((base) + (0x9058))

/* 寄存器说明：Context Bank 1 Fault状态恢复寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_FSRRESTORE_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_FSRRESTORE_ADDR(base) ((base) + (0x905C))

/* 寄存器说明：Context Bank 1 Fault地址低位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_FAR_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_FAR_LOW_ADDR(base)    ((base) + (0x9060))

/* 寄存器说明：Context Bank 1 Fault地址高位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_FAR_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_FAR_HIGH_ADDR(base)   ((base) + (0x9064))

/* 寄存器说明：Context Bank 1 Fault综合寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_FSYNR0_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_ADDR(base)     ((base) + (0x9068))

/* 寄存器说明：Context Bank 1 性能监控事件计数0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR0_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR0_ADDR(base) ((base) + (0x9E00))

/* 寄存器说明：Context Bank 1 性能监控事件计数1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR1_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR1_ADDR(base) ((base) + (0x9E04))

/* 寄存器说明：Context Bank 1 性能监控事件计数2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR2_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR2_ADDR(base) ((base) + (0x9E08))

/* 寄存器说明：Context Bank 1 性能监控事件类型选择0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_ADDR(base) ((base) + (0x9E80))

/* 寄存器说明：Context Bank 1 性能监控事件类型选择1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_ADDR(base) ((base) + (0x9E84))

/* 寄存器说明：Context Bank 1 性能监控事件类型选择2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_ADDR(base) ((base) + (0x9E88))

/* 寄存器说明：Context Bank 1 性能监控配置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMCFGR_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMCFGR_ADDR(base)     ((base) + (0x9F00))

/* 寄存器说明：Context Bank 1 性能监控控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMCR_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMCR_ADDR(base)       ((base) + (0x9F04))

/* 寄存器说明：Context Bank 1 性能监控common event ID寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMCEID0_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMCEID0_ADDR(base)    ((base) + (0x9F20))

/* 寄存器说明：Context Bank 1 性能监控计数器使能寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMCNTENSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMCNTENSET_ADDR(base) ((base) + (0x9F40))

/* 寄存器说明：Context Bank 1 性能监控计数器使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMCNTENCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMCNTENCLR_ADDR(base) ((base) + (0x9F44))

/* 寄存器说明：Context Bank 1 性能监控中断使能寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMINTENSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMINTENSET_ADDR(base) ((base) + (0x9F48))

/* 寄存器说明：Context Bank 1 性能监控中断使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMINTENCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMINTENCLR_ADDR(base) ((base) + (0x9F4C))

/* 寄存器说明：Context Bank 1 性能监控溢出状态清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMOVSRCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMOVSRCLR_ADDR(base)  ((base) + (0x9F50))

/* 寄存器说明：Context Bank 1 性能监控溢出状态设定寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMOVSRSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMOVSRSET_ADDR(base)  ((base) + (0x9F58))

/* 寄存器说明：Context Bank 1 性能监控授权状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB1_PMAUTHSTATUS_UNION */
#define SOC_SMMU500_NS_SMMU_CB1_PMAUTHSTATUS_ADDR(base) ((base) + (0x9FB8))

/* 寄存器说明：Context Bank 2 系统控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_SCTLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_ADDR(base)      ((base) + (0xA000))

/* 寄存器说明：Context Bank 2 页表基地址低位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_TTBR0_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_TTBR0_LOW_ADDR(base)  ((base) + (0xA020))

/* 寄存器说明：Context Bank 2 页表基地址高位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_TTBR0_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_TTBR0_HIGH_ADDR(base) ((base) + (0xA024))

/* 寄存器说明：Context Bank 2 页表基地址控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_TTBCR_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_ADDR(base)      ((base) + (0xA030))

/* 寄存器说明：Context Bank 2 Fault状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_FSR_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_FSR_ADDR(base)        ((base) + (0xA058))

/* 寄存器说明：Context Bank 2 Fault状态恢复寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_FSRRESTORE_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_FSRRESTORE_ADDR(base) ((base) + (0xA05C))

/* 寄存器说明：Context Bank 2 Fault地址低位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_FAR_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_FAR_LOW_ADDR(base)    ((base) + (0xA060))

/* 寄存器说明：Context Bank 2 Fault地址高位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_FAR_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_FAR_HIGH_ADDR(base)   ((base) + (0xA064))

/* 寄存器说明：Context Bank 2 Fault综合寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_FSYNR0_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_ADDR(base)     ((base) + (0xA068))

/* 寄存器说明：Context Bank 2 性能监控事件计数0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR0_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR0_ADDR(base) ((base) + (0xAE00))

/* 寄存器说明：Context Bank 2 性能监控事件计数1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR1_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR1_ADDR(base) ((base) + (0xAE04))

/* 寄存器说明：Context Bank 2 性能监控事件计数2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR2_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR2_ADDR(base) ((base) + (0xAE08))

/* 寄存器说明：Context Bank 2 性能监控事件类型选择0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_ADDR(base) ((base) + (0xAE80))

/* 寄存器说明：Context Bank 2 性能监控事件类型选择1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_ADDR(base) ((base) + (0xAE84))

/* 寄存器说明：Context Bank 2 性能监控事件类型选择2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_ADDR(base) ((base) + (0xAE88))

/* 寄存器说明：Context Bank 2 性能监控配置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMCFGR_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMCFGR_ADDR(base)     ((base) + (0xAF00))

/* 寄存器说明：Context Bank 2 性能监控控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMCR_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMCR_ADDR(base)       ((base) + (0xAF04))

/* 寄存器说明：Context Bank 2 性能监控common event ID寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMCEID0_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMCEID0_ADDR(base)    ((base) + (0xAF20))

/* 寄存器说明：Context Bank 2 性能监控计数器使能寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMCNTENSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMCNTENSET_ADDR(base) ((base) + (0xAF40))

/* 寄存器说明：Context Bank 2 性能监控计数器使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMCNTENCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMCNTENCLR_ADDR(base) ((base) + (0xAF44))

/* 寄存器说明：Context Bank 2 性能监控中断使能寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMINTENSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMINTENSET_ADDR(base) ((base) + (0xAF48))

/* 寄存器说明：Context Bank 2 性能监控中断使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMINTENCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMINTENCLR_ADDR(base) ((base) + (0xAF4C))

/* 寄存器说明：Context Bank 2 性能监控溢出状态清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMOVSRCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMOVSRCLR_ADDR(base)  ((base) + (0xAF50))

/* 寄存器说明：Context Bank 2 性能监控溢出状态设定寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMOVSRSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMOVSRSET_ADDR(base)  ((base) + (0xAF58))

/* 寄存器说明：Context Bank 2 性能监控授权状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB2_PMAUTHSTATUS_UNION */
#define SOC_SMMU500_NS_SMMU_CB2_PMAUTHSTATUS_ADDR(base) ((base) + (0xAFB8))

/* 寄存器说明：Context Bank 3 系统控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_SCTLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_ADDR(base)      ((base) + (0xB000))

/* 寄存器说明：Context Bank 3 页表基地址低位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_TTBR0_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_TTBR0_LOW_ADDR(base)  ((base) + (0xB020))

/* 寄存器说明：Context Bank 3 页表基地址高位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_TTBR0_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_TTBR0_HIGH_ADDR(base) ((base) + (0xB024))

/* 寄存器说明：Context Bank 3 页表基地址控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_TTBCR_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_ADDR(base)      ((base) + (0xB030))

/* 寄存器说明：Context Bank 3 Fault状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_FSR_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_FSR_ADDR(base)        ((base) + (0xB058))

/* 寄存器说明：Context Bank 3 Fault状态恢复寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_FSRRESTORE_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_FSRRESTORE_ADDR(base) ((base) + (0xB05C))

/* 寄存器说明：Context Bank 3 Fault地址低位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_FAR_LOW_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_FAR_LOW_ADDR(base)    ((base) + (0xB060))

/* 寄存器说明：Context Bank 3 Fault地址高位寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_FAR_HIGH_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_FAR_HIGH_ADDR(base)   ((base) + (0xB064))

/* 寄存器说明：Context Bank 3 Fault综合寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_FSYNR0_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_ADDR(base)     ((base) + (0xB068))

/* 寄存器说明：Context Bank 3 性能监控事件计数0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR0_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR0_ADDR(base) ((base) + (0xBE00))

/* 寄存器说明：Context Bank 3 性能监控事件计数1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR1_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR1_ADDR(base) ((base) + (0xBE04))

/* 寄存器说明：Context Bank 3 性能监控事件计数2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR2_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR2_ADDR(base) ((base) + (0xBE08))

/* 寄存器说明：Context Bank 3 性能监控事件类型选择0寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_ADDR(base) ((base) + (0xBE80))

/* 寄存器说明：Context Bank 3 性能监控事件类型选择1寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_ADDR(base) ((base) + (0xBE84))

/* 寄存器说明：Context Bank 3 性能监控事件类型选择2寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_ADDR(base) ((base) + (0xBE88))

/* 寄存器说明：Context Bank 3 性能监控配置寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMCFGR_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMCFGR_ADDR(base)     ((base) + (0xBF00))

/* 寄存器说明：Context Bank 3 性能监控控制寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMCR_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMCR_ADDR(base)       ((base) + (0xBF04))

/* 寄存器说明：Context Bank 3 性能监控common event ID寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMCEID0_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMCEID0_ADDR(base)    ((base) + (0xBF20))

/* 寄存器说明：Context Bank 3 性能监控计数器使能寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMCNTENSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMCNTENSET_ADDR(base) ((base) + (0xBF40))

/* 寄存器说明：Context Bank 3 性能监控计数器使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMCNTENCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMCNTENCLR_ADDR(base) ((base) + (0x9F44))

/* 寄存器说明：Context Bank 3 性能监控中断使能寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMINTENSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMINTENSET_ADDR(base) ((base) + (0xBF48))

/* 寄存器说明：Context Bank 3 性能监控中断使能清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMINTENCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMINTENCLR_ADDR(base) ((base) + (0xBF4C))

/* 寄存器说明：Context Bank 3 性能监控溢出状态清除寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMOVSRCLR_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMOVSRCLR_ADDR(base)  ((base) + (0xBF50))

/* 寄存器说明：Context Bank 3 性能监控溢出状态设定寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMOVSRSET_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMOVSRSET_ADDR(base)  ((base) + (0xBF58))

/* 寄存器说明：Context Bank 3 性能监控授权状态寄存器。
   位域定义UNION结构:  SOC_SMMU500_NS_SMMU_CB3_PMAUTHSTATUS_UNION */
#define SOC_SMMU500_NS_SMMU_CB3_PMAUTHSTATUS_ADDR(base) ((base) + (0xBFB8))





/*****************************************************************************
  3 枚举定义
*****************************************************************************/



/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/



/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/



/*****************************************************************************
  7 UNION定义
*****************************************************************************/

/****************************************************************************
                     (1/1) SMMU_NS
 ****************************************************************************/
/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CR0_UNION
 结构说明  : SMMU_CR0 寄存器结构定义。地址偏移量:0x0000，初值:0x00200101，宽度:32
 寄存器说明: 全局配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clientpd : 1;  /* bit[0]    : 客户端口不使能。 0：进入SMMU的操作进行地址转换； 1：进入SMMU的操作不进行地址转换； */
        unsigned int  gfre     : 1;  /* bit[1]    : 全局错误报告使能。 0：从全局错误的abort返回； 1：从全局错误的abort不返回； */
        unsigned int  gfie     : 1;  /* bit[2]    : 全局错误中断使能。 0：全局错误时不发起中断； 1：全局错误是发起中断  */
        unsigned int  reserved_0: 1;  /* bit[3]    : 保留 */
        unsigned int  gcfgfre  : 1;  /* bit[4]    : 全局配置错误报告使能。 0：从全局配置错误的abort返回； 1：从全局配置错误的abort不返回； */
        unsigned int  gcfgfie  : 1;  /* bit[5]    : 全局配置错误中断使能。 0：全局配置错误时不发起中断； 1：全局配置错误是发起中断 */
        unsigned int  reserved_1: 2;  /* bit[6-7]  : 保留 */
        unsigned int  stalld   : 1;  /* bit[8]    : 阻塞不使能。 （接死为1） 0：上下文错误时允许阻塞； 1：上下文错误时阻塞不使能； */
        unsigned int  gse      : 1;  /* bit[9]    : 全局阻塞使能。（接死为0） 0：不强制全局阻塞； 1：强制全局阻塞； */
        unsigned int  smtnmc   : 1;  /* bit[10]   : 流映射表不匹配配置。 0：不匹配的transaction透传； 1：指示一个错误状态； */
        unsigned int  vmidpne  : 1;  /* bit[11]   : VMID私有命名空间使能。 0：VMID的值需和整系统统一管理； 1：VMID的值保持独立； */
        unsigned int  ptm      : 1;  /* bit[12]   : 私有TLB维护。 0：SMMU应参与广播TLB维护； 1：TLB进行私有维护； */
        unsigned int  fb       : 1;  /* bit[13]   : 强制广播TLB。  */
        unsigned int  bsu      : 2;  /* bit[14-15]: Barrier Share属性更新。 00：无影响； 01：Inner Shareable； 10：Outer Shareable； 11：Full System； */
        unsigned int  memattr  : 4;  /* bit[16-19]: memory属性(复位值为不定态) */
        unsigned int  mtcfg    : 1;  /* bit[20]   : memory属性配置。 0：使用transaction自有的memory属性； 1：使用MemAttr域的memory属性； */
        unsigned int  smcfcfg  : 1;  /* bit[21]   : Stream Match Conflict Fault Configuration.
                                                    Controls the handling of client transactions that are identified as matching multiple entries
                                                    in the Stream Mapping Table. The possible values of this are:
                                                    0 Permit pass through
                                                    1 Raise a Stream Match Conflict Fault(接死为1) */
        unsigned int  shcfg    : 2;  /* bit[22-23]: Share属性配置。 00：使用transaction自有的share属性； 01：Outer-shareable； 10：Inner-shareable； 11：Non-shareable；  */
        unsigned int  racfg    : 2;  /* bit[24-25]: 读allocate配置。 00：使用transaction自有的allocation属性； 01：保留； 10：Allocate； 11：No allocate；  */
        unsigned int  wacfg    : 2;  /* bit[26-27]: 写allocate配置。 00：使用transaction自有的allocation属性； 01：保留； 10：Allocate； 11：No allocate；  */
        unsigned int  reserved_2: 4;  /* bit[28-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CR0_clientpd_START  (0)
#define SOC_SMMU500_NS_SMMU_CR0_clientpd_END    (0)
#define SOC_SMMU500_NS_SMMU_CR0_gfre_START      (1)
#define SOC_SMMU500_NS_SMMU_CR0_gfre_END        (1)
#define SOC_SMMU500_NS_SMMU_CR0_gfie_START      (2)
#define SOC_SMMU500_NS_SMMU_CR0_gfie_END        (2)
#define SOC_SMMU500_NS_SMMU_CR0_gcfgfre_START   (4)
#define SOC_SMMU500_NS_SMMU_CR0_gcfgfre_END     (4)
#define SOC_SMMU500_NS_SMMU_CR0_gcfgfie_START   (5)
#define SOC_SMMU500_NS_SMMU_CR0_gcfgfie_END     (5)
#define SOC_SMMU500_NS_SMMU_CR0_stalld_START    (8)
#define SOC_SMMU500_NS_SMMU_CR0_stalld_END      (8)
#define SOC_SMMU500_NS_SMMU_CR0_gse_START       (9)
#define SOC_SMMU500_NS_SMMU_CR0_gse_END         (9)
#define SOC_SMMU500_NS_SMMU_CR0_smtnmc_START    (10)
#define SOC_SMMU500_NS_SMMU_CR0_smtnmc_END      (10)
#define SOC_SMMU500_NS_SMMU_CR0_vmidpne_START   (11)
#define SOC_SMMU500_NS_SMMU_CR0_vmidpne_END     (11)
#define SOC_SMMU500_NS_SMMU_CR0_ptm_START       (12)
#define SOC_SMMU500_NS_SMMU_CR0_ptm_END         (12)
#define SOC_SMMU500_NS_SMMU_CR0_fb_START        (13)
#define SOC_SMMU500_NS_SMMU_CR0_fb_END          (13)
#define SOC_SMMU500_NS_SMMU_CR0_bsu_START       (14)
#define SOC_SMMU500_NS_SMMU_CR0_bsu_END         (15)
#define SOC_SMMU500_NS_SMMU_CR0_memattr_START   (16)
#define SOC_SMMU500_NS_SMMU_CR0_memattr_END     (19)
#define SOC_SMMU500_NS_SMMU_CR0_mtcfg_START     (20)
#define SOC_SMMU500_NS_SMMU_CR0_mtcfg_END       (20)
#define SOC_SMMU500_NS_SMMU_CR0_smcfcfg_START   (21)
#define SOC_SMMU500_NS_SMMU_CR0_smcfcfg_END     (21)
#define SOC_SMMU500_NS_SMMU_CR0_shcfg_START     (22)
#define SOC_SMMU500_NS_SMMU_CR0_shcfg_END       (23)
#define SOC_SMMU500_NS_SMMU_CR0_racfg_START     (24)
#define SOC_SMMU500_NS_SMMU_CR0_racfg_END       (25)
#define SOC_SMMU500_NS_SMMU_CR0_wacfg_START     (26)
#define SOC_SMMU500_NS_SMMU_CR0_wacfg_END       (27)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_ACR_UNION
 结构说明  : SMMU_ACR 寄存器结构定义。地址偏移量:0x0010，初值:0x00000000，宽度:32
 寄存器说明: 辅助配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prefetchen    : 1;  /* bit[0]    : The possible values of this bit are:
                                                         0：Disables the pre-fetch buffer.
                                                         1：Enables the pre-fetch buffer. */
        unsigned int  wc1en         : 1;  /* bit[1]    : The possible values of this bit are:
                                                         0：Disables the walk cache 1.
                                                         1：Enables the walk cache 1. */
        unsigned int  wc2en         : 1;  /* bit[2]    : The possible values of this bit are:
                                                         0：Disables the walk cache 2.
                                                         1：Enables the walk cache 2. */
        unsigned int  reserved_0    : 5;  /* bit[3-7]  : 保留 */
        unsigned int  smtnmb_tlben  : 1;  /* bit[8]    : The possible values of this bit are:
                                                         0：Do not Update TLB with the SMTNMC bypassed transaction details.
                                                         1：Update TLB with the SMTNMC bypassed transaction details. */
        unsigned int  mmudisb_tlben : 1;  /* bit[9]    : The possible values of this bit are:
                                                         0：Do not Update TLB with the MMU-400 disabled transaction details.
                                                         1：Update TLB with the MMU-400 disabled transaction details. */
        unsigned int  s2crb_tlben   : 1;  /* bit[10]   : The possible values of this bit are:
                                                         0：Do not Update TLB with the S2CR bypassed transaction details.
                                                         1：Update TLB with the S2CR bypassed transaction details. */
        unsigned int  reserved_1    : 21; /* bit[11-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_ACR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_ACR_prefetchen_START     (0)
#define SOC_SMMU500_NS_SMMU_ACR_prefetchen_END       (0)
#define SOC_SMMU500_NS_SMMU_ACR_wc1en_START          (1)
#define SOC_SMMU500_NS_SMMU_ACR_wc1en_END            (1)
#define SOC_SMMU500_NS_SMMU_ACR_wc2en_START          (2)
#define SOC_SMMU500_NS_SMMU_ACR_wc2en_END            (2)
#define SOC_SMMU500_NS_SMMU_ACR_smtnmb_tlben_START   (8)
#define SOC_SMMU500_NS_SMMU_ACR_smtnmb_tlben_END     (8)
#define SOC_SMMU500_NS_SMMU_ACR_mmudisb_tlben_START  (9)
#define SOC_SMMU500_NS_SMMU_ACR_mmudisb_tlben_END    (9)
#define SOC_SMMU500_NS_SMMU_ACR_s2crb_tlben_START    (10)
#define SOC_SMMU500_NS_SMMU_ACR_s2crb_tlben_END      (10)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_IDR0_UNION
 结构说明  : SMMU_IDR0 寄存器结构定义。地址偏移量:0x0020，初值:0xF9013E02，宽度:32
 寄存器说明: 特性0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  numsmrg  : 8;  /* bit[0-7]  : Number of Stream Mapping Register Groups */
        unsigned int  reserved_0: 1;  /* bit[8]    : RESERVED */
        unsigned int  numsidb  : 4;  /* bit[9-12] : Number of Stream ID Bits */
        unsigned int  btm      : 1;  /* bit[13]   : Broadcast TLB Maintenance supported. */
        unsigned int  cttw     : 1;  /* bit[14]   : Coherent Translation Table Walk not supported. */
        unsigned int  reserved_1: 1;  /* bit[15]   : RESERVED */
        unsigned int  numirpt  : 8;  /* bit[16-23]: Number of Implementation Context Interrupts.
                                                    NUMIRPT[7:0] indicates the number of context fault interrupts that the
                                                    MMU-500 supports. It supports only one context interrupt. */
        unsigned int  ptfs     : 2;  /* bit[24-25]: Stage 1 followed by stage 2 translation is supported.
                                                    V7L and V7S supported, and V7L format supported. */
        unsigned int  atosns   : 1;  /* bit[26]   : Address translation operations are not supported */
        unsigned int  sms      : 1;  /* bit[27]   : Stream Match Register functionality present. */
        unsigned int  nts      : 1;  /* bit[28]   : Stage 1 followed by stage 2 translation is supported. */
        unsigned int  s2ts     : 1;  /* bit[29]   : Stage 2 translation supported. */
        unsigned int  s1ts     : 1;  /* bit[30]   : Stage 1 translation is supported. */
        unsigned int  ses      : 1;  /* bit[31]   : This bit read as 1 so it supports Security Extensions. */
    } reg;
} SOC_SMMU500_NS_SMMU_IDR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_IDR0_numsmrg_START   (0)
#define SOC_SMMU500_NS_SMMU_IDR0_numsmrg_END     (7)
#define SOC_SMMU500_NS_SMMU_IDR0_numsidb_START   (9)
#define SOC_SMMU500_NS_SMMU_IDR0_numsidb_END     (12)
#define SOC_SMMU500_NS_SMMU_IDR0_btm_START       (13)
#define SOC_SMMU500_NS_SMMU_IDR0_btm_END         (13)
#define SOC_SMMU500_NS_SMMU_IDR0_cttw_START      (14)
#define SOC_SMMU500_NS_SMMU_IDR0_cttw_END        (14)
#define SOC_SMMU500_NS_SMMU_IDR0_numirpt_START   (16)
#define SOC_SMMU500_NS_SMMU_IDR0_numirpt_END     (23)
#define SOC_SMMU500_NS_SMMU_IDR0_ptfs_START      (24)
#define SOC_SMMU500_NS_SMMU_IDR0_ptfs_END        (25)
#define SOC_SMMU500_NS_SMMU_IDR0_atosns_START    (26)
#define SOC_SMMU500_NS_SMMU_IDR0_atosns_END      (26)
#define SOC_SMMU500_NS_SMMU_IDR0_sms_START       (27)
#define SOC_SMMU500_NS_SMMU_IDR0_sms_END         (27)
#define SOC_SMMU500_NS_SMMU_IDR0_nts_START       (28)
#define SOC_SMMU500_NS_SMMU_IDR0_nts_END         (28)
#define SOC_SMMU500_NS_SMMU_IDR0_s2ts_START      (29)
#define SOC_SMMU500_NS_SMMU_IDR0_s2ts_END        (29)
#define SOC_SMMU500_NS_SMMU_IDR0_s1ts_START      (30)
#define SOC_SMMU500_NS_SMMU_IDR0_s1ts_END        (30)
#define SOC_SMMU500_NS_SMMU_IDR0_ses_START       (31)
#define SOC_SMMU500_NS_SMMU_IDR0_ses_END         (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_IDR1_UNION
 结构说明  : SMMU_IDR1 寄存器结构定义。地址偏移量:0x0024，初值:0x20000002，宽度:32
 寄存器说明: 特性1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  numcb       : 8;  /* bit[0-7]  : Number of Context Banks
                                                       Indicates the total number of Translation Context Banks
                                                       that are implemented. */
        unsigned int  numssdndxb  : 4;  /* bit[8-11] : Number of SSD_Index bits */
        unsigned int  ssdtp       : 1;  /* bit[12]   : Number of SSD entries is zero */
        unsigned int  reserved_0  : 2;  /* bit[13-14]: RESERVED */
        unsigned int  smcd        : 1;  /* bit[15]   : Stream Match Conflict Detection. The possible values of this bit are:
                                                       0 Not all Stream match conflicts are guaranteed to be
                                                       detected.
                                                       1 All Stream match conflicts are guaranteed to be
                                                       detected. */
        unsigned int  nums2cb     : 8;  /* bit[16-23]: Number of stage 2 Context Banks Indicates the number of Context Banks that only support the stage 2 translation format. This field is validated by SMMU_IDR0.S2TS. The valid range is 0-127 */
        unsigned int  reserved_1  : 4;  /* bit[24-27]: RESERVED */
        unsigned int  numpagendxb : 3;  /* bit[28-30]: Number of Page Index Bits NUMPAGE=2(NUMPAGENDXB+1) */
        unsigned int  pagesize    : 1;  /* bit[31]   : 0：页表4KB 1：页表64KB  */
    } reg;
} SOC_SMMU500_NS_SMMU_IDR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_IDR1_numcb_START        (0)
#define SOC_SMMU500_NS_SMMU_IDR1_numcb_END          (7)
#define SOC_SMMU500_NS_SMMU_IDR1_numssdndxb_START   (8)
#define SOC_SMMU500_NS_SMMU_IDR1_numssdndxb_END     (11)
#define SOC_SMMU500_NS_SMMU_IDR1_ssdtp_START        (12)
#define SOC_SMMU500_NS_SMMU_IDR1_ssdtp_END          (12)
#define SOC_SMMU500_NS_SMMU_IDR1_smcd_START         (15)
#define SOC_SMMU500_NS_SMMU_IDR1_smcd_END           (15)
#define SOC_SMMU500_NS_SMMU_IDR1_nums2cb_START      (16)
#define SOC_SMMU500_NS_SMMU_IDR1_nums2cb_END        (23)
#define SOC_SMMU500_NS_SMMU_IDR1_numpagendxb_START  (28)
#define SOC_SMMU500_NS_SMMU_IDR1_numpagendxb_END    (30)
#define SOC_SMMU500_NS_SMMU_IDR1_pagesize_START     (31)
#define SOC_SMMU500_NS_SMMU_IDR1_pagesize_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_IDR2_UNION
 结构说明  : SMMU_IDR2 寄存器结构定义。地址偏移量:0x0028，初值:0x00005555，宽度:32
 寄存器说明: 特性2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ias         : 4;  /* bit[0-3]  : IPA Address Size is 48-bit */
        unsigned int  oas         : 4;  /* bit[4-7]  : Output Address Size is 48-bit  */
        unsigned int  ubs         : 4;  /* bit[8-11] : 49-bit upstream bus size. */
        unsigned int  PTFSv8_4kB  : 1;  /* bit[12]   : The 4KB translation granule is supported */
        unsigned int  PTFSv8_16kB : 1;  /* bit[13]   : The 16KB translation granule is not supported */
        unsigned int  PTFSv8_64kB : 1;  /* bit[14]   : The 64KB translation granule is supported */
        unsigned int  reserved    : 17; /* bit[15-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_IDR2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_IDR2_ias_START          (0)
#define SOC_SMMU500_NS_SMMU_IDR2_ias_END            (3)
#define SOC_SMMU500_NS_SMMU_IDR2_oas_START          (4)
#define SOC_SMMU500_NS_SMMU_IDR2_oas_END            (7)
#define SOC_SMMU500_NS_SMMU_IDR2_ubs_START          (8)
#define SOC_SMMU500_NS_SMMU_IDR2_ubs_END            (11)
#define SOC_SMMU500_NS_SMMU_IDR2_PTFSv8_4kB_START   (12)
#define SOC_SMMU500_NS_SMMU_IDR2_PTFSv8_4kB_END     (12)
#define SOC_SMMU500_NS_SMMU_IDR2_PTFSv8_16kB_START  (13)
#define SOC_SMMU500_NS_SMMU_IDR2_PTFSv8_16kB_END    (13)
#define SOC_SMMU500_NS_SMMU_IDR2_PTFSv8_64kB_START  (14)
#define SOC_SMMU500_NS_SMMU_IDR2_PTFSv8_64kB_END    (14)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_IDR7_UNION
 结构说明  : SMMU_IDR7 寄存器结构定义。地址偏移量:0x003C，初值:0x00000021，宽度:32
 寄存器说明: 特性7寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  minor    : 4;  /* bit[0-3] : The minor part of the implementation version number */
        unsigned int  major    : 4;  /* bit[4-7] : The major part of the implementation version number */
        unsigned int  reserved : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_IDR7_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_IDR7_minor_START     (0)
#define SOC_SMMU500_NS_SMMU_IDR7_minor_END       (3)
#define SOC_SMMU500_NS_SMMU_IDR7_major_START     (4)
#define SOC_SMMU500_NS_SMMU_IDR7_major_END       (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_GFAR_LOW_UNION
 结构说明  : SMMU_GFAR_LOW 寄存器结构定义。地址偏移量:0x0040，初值:0x00000000，宽度:32
 寄存器说明: Global Fault低位地址寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_low : 32; /* bit[0-31]: Fault Address; the input address of the faulting access. */
    } reg;
} SOC_SMMU500_NS_SMMU_GFAR_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_GFAR_LOW_faddr_low_START  (0)
#define SOC_SMMU500_NS_SMMU_GFAR_LOW_faddr_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_GFAR_HIGH_UNION
 结构说明  : SMMU_GFAR_HIGH 寄存器结构定义。地址偏移量:0x0044，初值:0x00000000，宽度:32
 寄存器说明: Global Fault高位地址寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_high : 8;  /* bit[0-7] : Fault Address; the input address of the faulting access. */
        unsigned int  reserved   : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_GFAR_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_GFAR_HIGH_faddr_high_START  (0)
#define SOC_SMMU500_NS_SMMU_GFAR_HIGH_faddr_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_GFSR_UNION
 结构说明  : SMMU_GFSR 寄存器结构定义。地址偏移量:0x0048，初值:0x00000000，宽度:32
 寄存器说明: Global Fault状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  icf      : 1;  /* bit[0]   : Invalid Context Fault.
                                                   1 = Transaction mapped to Fault Context encountered.
                                                   0 = Fault condition not encountered. */
        unsigned int  usf      : 1;  /* bit[1]   : Unidentified Stream Fault.
                                                   1 = Fault due to no match in Stream Match Registers.
                                                   0 = Fault condition not encountered. */
        unsigned int  smcf     : 1;  /* bit[2]   : Stream Match Conflict Fault.
                                                   1 = Fault due to multiple match in Stream Match Registers.
                                                   0 = Fault condition not encountered. */
        unsigned int  ucbf     : 1;  /* bit[3]   : Unimplemented Context Bank Fault.
                                                   1 = Fault due to transaction mapped to unimplemented
                                                   Translation Context Bank.
                                                   0 = Fault condition not encountered. */
        unsigned int  ucif     : 1;  /* bit[4]   : Unimplemented Context Interrupt Fault.
                                                   1 = Fault due to transaction fault requesting assertion of
                                                   unimplemented Context Interrupt.
                                                   0 = Fault condition not encountered. */
        unsigned int  caf      : 1;  /* bit[5]   : Configuration Access Fault.
                                                   1 = Fault due to access to disallowed configuration address.
                                                   0 = Fault condition not encountered. */
        unsigned int  ef       : 1;  /* bit[6]   : External Fault
                                                   1 = Fault due to external abort.
                                                   0 = Fault condition not encountered. */
        unsigned int  pf       : 1;  /* bit[7]   : Permission Fault
                                                   1 = Fault due to permission fault.
                                                   0 = Fault condition not encountered. */
        unsigned int  reserved : 23; /* bit[8-30]: RESERVED */
        unsigned int  multi    : 1;  /* bit[31]  : Multiple error condition.
                                                   1 = An error occurred whilst SMMU_GFSR (or
                                                   SMMU_SGFSR) was non-zero.
                                                   0 = No multiple error condition encountered. */
    } reg;
} SOC_SMMU500_NS_SMMU_GFSR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_GFSR_icf_START       (0)
#define SOC_SMMU500_NS_SMMU_GFSR_icf_END         (0)
#define SOC_SMMU500_NS_SMMU_GFSR_usf_START       (1)
#define SOC_SMMU500_NS_SMMU_GFSR_usf_END         (1)
#define SOC_SMMU500_NS_SMMU_GFSR_smcf_START      (2)
#define SOC_SMMU500_NS_SMMU_GFSR_smcf_END        (2)
#define SOC_SMMU500_NS_SMMU_GFSR_ucbf_START      (3)
#define SOC_SMMU500_NS_SMMU_GFSR_ucbf_END        (3)
#define SOC_SMMU500_NS_SMMU_GFSR_ucif_START      (4)
#define SOC_SMMU500_NS_SMMU_GFSR_ucif_END        (4)
#define SOC_SMMU500_NS_SMMU_GFSR_caf_START       (5)
#define SOC_SMMU500_NS_SMMU_GFSR_caf_END         (5)
#define SOC_SMMU500_NS_SMMU_GFSR_ef_START        (6)
#define SOC_SMMU500_NS_SMMU_GFSR_ef_END          (6)
#define SOC_SMMU500_NS_SMMU_GFSR_pf_START        (7)
#define SOC_SMMU500_NS_SMMU_GFSR_pf_END          (7)
#define SOC_SMMU500_NS_SMMU_GFSR_multi_START     (31)
#define SOC_SMMU500_NS_SMMU_GFSR_multi_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_GFSRRESTORE_UNION
 结构说明  : SMMU_GFSRRESTORE 寄存器结构定义。地址偏移量:0x004C，初值:0x00000000，宽度:32
 寄存器说明: Global Fault 状态恢复寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_gfsrrestore : 32; /* bit[0-31]: the Global FSR Restore Register, permits state restoration of the
                                                           SMMU_GFSR; the register is 32 bits in size and is WRITE_ONLY. */
    } reg;
} SOC_SMMU500_NS_SMMU_GFSRRESTORE_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_GFSRRESTORE_smmu_gfsrrestore_START  (0)
#define SOC_SMMU500_NS_SMMU_GFSRRESTORE_smmu_gfsrrestore_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_GFSYNR0_UNION
 结构说明  : SMMU_GFSYNR0 寄存器结构定义。地址偏移量:0x0050，初值:0x00000000，宽度:32
 寄存器说明: Global Fault 综合0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  nested                : 1;  /* bit[0]    : Nested Fault
                                                                 0 – Fault occurred in initial (stream) context
                                                                 1 – Fault occurred in nested context */
        unsigned int  wnr                   : 1;  /* bit[1]    : Write not Read
                                                                 0 – Faulting transaction was a read
                                                                 1 – Faulting transaction was a write */
        unsigned int  pnu                   : 1;  /* bit[2]    : Privileged not User
                                                                 0 – Faulting transaction had the not privileged attribute
                                                                 1 – Faulting transaction was privileged */
        unsigned int  ind                   : 1;  /* bit[3]    : Instruction not Data
                                                                 0 – Faulting transaction had the data access attribute
                                                                 1 – Faulting transaction had the instruction access
                                                                 attribute */
        unsigned int  nsstate               : 1;  /* bit[4]    : Non-secure State
                                                                 0 – Faulting transaction was associated with a secure
                                                                 device
                                                                 1 – Faulting transaction was associated with a non-secure
                                                                 device */
        unsigned int  nsattr                : 1;  /* bit[5]    : Non-secure Attribute
                                                                 0 – Faulting transaction had the secure attribute
                                                                 1 – Faulting transaction had the non-secure attribute */
        unsigned int  reserved_0            : 2;  /* bit[6-7]  : RESERVED */
        unsigned int  implementationdefined : 8;  /* bit[8-15] :  */
        unsigned int  reserved_1            : 16; /* bit[16-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_GFSYNR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_GFSYNR0_nested_START                 (0)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_nested_END                   (0)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_wnr_START                    (1)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_wnr_END                      (1)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_pnu_START                    (2)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_pnu_END                      (2)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_ind_START                    (3)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_ind_END                      (3)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_nsstate_START                (4)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_nsstate_END                  (4)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_nsattr_START                 (5)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_nsattr_END                   (5)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_implementationdefined_START  (8)
#define SOC_SMMU500_NS_SMMU_GFSYNR0_implementationdefined_END    (15)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_GFSYNR1_UNION
 结构说明  : SMMU_GFSYNR1 寄存器结构定义。地址偏移量:0x0054，初值:0x00000000，宽度:32
 寄存器说明: Global Fault 综合1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  streamid : 2;  /* bit[0-1]  : Stream ID of transaction causing fault */
        unsigned int  reserved_0: 14; /* bit[2-15] : 保留 */
        unsigned int  reserved_1: 16; /* bit[16-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_GFSYNR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_GFSYNR1_streamid_START  (0)
#define SOC_SMMU500_NS_SMMU_GFSYNR1_streamid_END    (1)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_TLBIALLNSNH_UNION
 结构说明  : SMMU_TLBIALLNSNH 寄存器结构定义。地址偏移量:0x0068，初值:0x00000000，宽度:32
 寄存器说明: Invalidate Entire Non-secure Non-Hyp TLB寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: This command is required to apply to all non-secure non-Hyp tagged entries within the TLB.
                                                   This command is permitted to apply to all unlocked entries within the TLB. */
    } reg;
} SOC_SMMU500_NS_SMMU_TLBIALLNSNH_UNION;
#endif


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_TLBGSYNC_UNION
 结构说明  : SMMU_TLBGSYNC 寄存器结构定义。地址偏移量:0x0070，初值:0x00000000，宽度:32
 寄存器说明: Global Synchronize TLB Invalidate寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: the Global Synchronize TLB Invalidate operation, initiates a global
                                                   synchronization operation that will ensure completion of any previously accepted TLB Invalidate
                                                   operations; the command is 32 bits in size and is WRITE ONLY. */
    } reg;
} SOC_SMMU500_NS_SMMU_TLBGSYNC_UNION;
#endif


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_TLBGSTATUS_UNION
 结构说明  : SMMU_TLBGSTATUS 寄存器结构定义。地址偏移量:0x0074，初值:0x00000000，宽度:32
 寄存器说明: Global TLB Status 寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gsactive : 1;  /* bit[0]   : Global Synchronize TLB Invalidate Active
                                                   0 – No active Global TLB Sync operation
                                                   1 – Active Global TLB Sync operation */
        unsigned int  reserved : 31; /* bit[1-31]:  */
    } reg;
} SOC_SMMU500_NS_SMMU_TLBGSTATUS_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_TLBGSTATUS_gsactive_START  (0)
#define SOC_SMMU500_NS_SMMU_TLBGSTATUS_gsactive_END    (0)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_SMR0_UNION
 结构说明  : SMMU_SMR0 寄存器结构定义。地址偏移量:0x0800，初值:0x00000000，宽度:32
 寄存器说明: Stream Match 0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id       : 2;  /* bit[0-1]  : Stream ID to match */
        unsigned int  reserved_0: 13; /* bit[2-14] : 接死为0 */
        unsigned int  reserved_1: 1;  /* bit[15]   : 接死为0 */
        unsigned int  mask     : 2;  /* bit[16-17]: MASK[i]==1 ID[i] is ignored.
                                                    MASK[i]==0 ID[i] is relevant to match. */
        unsigned int  reserved_2: 13; /* bit[18-30]: 接死为0 */
        unsigned int  valid    : 1;  /* bit[31]   : VALID 1 Entry included in Stream Mapping table search.
                                                    0 Entry not included in Stream Mapping table search. */
    } reg;
} SOC_SMMU500_NS_SMMU_SMR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_SMR0_id_START        (0)
#define SOC_SMMU500_NS_SMMU_SMR0_id_END          (1)
#define SOC_SMMU500_NS_SMMU_SMR0_mask_START      (16)
#define SOC_SMMU500_NS_SMMU_SMR0_mask_END        (17)
#define SOC_SMMU500_NS_SMMU_SMR0_valid_START     (31)
#define SOC_SMMU500_NS_SMMU_SMR0_valid_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_SMR1_UNION
 结构说明  : SMMU_SMR1 寄存器结构定义。地址偏移量:0x0804，初值:0x00000000，宽度:32
 寄存器说明: Stream Match 1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id       : 2;  /* bit[0-1]  : Stream ID to match */
        unsigned int  reserved_0: 13; /* bit[2-14] : 接死为0 */
        unsigned int  reserved_1: 1;  /* bit[15]   : 接死为0 */
        unsigned int  mask     : 2;  /* bit[16-17]: MASK[i]==1 ID[i] is ignored.
                                                    MASK[i]==0 ID[i] is relevant to match. */
        unsigned int  reserved_2: 13; /* bit[18-30]: 接死为0 */
        unsigned int  valid    : 1;  /* bit[31]   : VALID 1 Entry included in Stream Mapping table search.
                                                    0 Entry not included in Stream Mapping table search. */
    } reg;
} SOC_SMMU500_NS_SMMU_SMR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_SMR1_id_START        (0)
#define SOC_SMMU500_NS_SMMU_SMR1_id_END          (1)
#define SOC_SMMU500_NS_SMMU_SMR1_mask_START      (16)
#define SOC_SMMU500_NS_SMMU_SMR1_mask_END        (17)
#define SOC_SMMU500_NS_SMMU_SMR1_valid_START     (31)
#define SOC_SMMU500_NS_SMMU_SMR1_valid_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_SMR2_UNION
 结构说明  : SMMU_SMR2 寄存器结构定义。地址偏移量:0x0808，初值:0x00000000，宽度:32
 寄存器说明: Stream Match 2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id       : 2;  /* bit[0-1]  : Stream ID to match */
        unsigned int  reserved_0: 13; /* bit[2-14] : 接死为0 */
        unsigned int  reserved_1: 1;  /* bit[15]   : 接死为0 */
        unsigned int  mask     : 2;  /* bit[16-17]: MASK[i]==1 ID[i] is ignored.
                                                    MASK[i]==0 ID[i] is relevant to match. */
        unsigned int  reserved_2: 13; /* bit[18-30]: 接死为0 */
        unsigned int  valid    : 1;  /* bit[31]   : VALID 1 Entry included in Stream Mapping table search.
                                                    0 Entry not included in Stream Mapping table search. */
    } reg;
} SOC_SMMU500_NS_SMMU_SMR2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_SMR2_id_START        (0)
#define SOC_SMMU500_NS_SMMU_SMR2_id_END          (1)
#define SOC_SMMU500_NS_SMMU_SMR2_mask_START      (16)
#define SOC_SMMU500_NS_SMMU_SMR2_mask_END        (17)
#define SOC_SMMU500_NS_SMMU_SMR2_valid_START     (31)
#define SOC_SMMU500_NS_SMMU_SMR2_valid_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_SMR3_UNION
 结构说明  : SMMU_SMR3 寄存器结构定义。地址偏移量:0x080C，初值:0x00000000，宽度:32
 寄存器说明: Stream Match 3寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id       : 2;  /* bit[0-1]  : Stream ID to match */
        unsigned int  reserved_0: 13; /* bit[2-14] : 接死为0 */
        unsigned int  reserved_1: 1;  /* bit[15]   : 接死为0 */
        unsigned int  mask     : 2;  /* bit[16-17]: MASK[i]==1 ID[i] is ignored.
                                                    MASK[i]==0 ID[i] is relevant to match. */
        unsigned int  reserved_2: 13; /* bit[18-30]: 接死为0 */
        unsigned int  valid    : 1;  /* bit[31]   : VALID 1 Entry included in Stream Mapping table search.
                                                    0 Entry not included in Stream Mapping table search. */
    } reg;
} SOC_SMMU500_NS_SMMU_SMR3_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_SMR3_id_START        (0)
#define SOC_SMMU500_NS_SMMU_SMR3_id_END          (1)
#define SOC_SMMU500_NS_SMMU_SMR3_mask_START      (16)
#define SOC_SMMU500_NS_SMMU_SMR3_mask_END        (17)
#define SOC_SMMU500_NS_SMMU_SMR3_valid_START     (31)
#define SOC_SMMU500_NS_SMMU_SMR3_valid_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_S2CR0_UNION
 结构说明  : SMMU_S2CR0 寄存器结构定义。地址偏移量:0x0C00，初值:0x00020000，宽度:32
 寄存器说明: Stream to Context 0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cbndx                 : 2;  /* bit[0-1]  : Context Bank Index. The Translation Context Bank Index used for Stage 2 translation. */
        unsigned int  reserved_0            : 6;  /* bit[2-7]  : 接死0 */
        unsigned int  shcfg                 : 2;  /* bit[8-9]  : Shared Configuration.(复位值为不定态)
                                                                 00 – Use shareable attribute as presented with transaction
                                                                 01 – Outer-shareable
                                                                 10 – Inner-shareable
                                                                 11 – Non-shareable */
        unsigned int  reserved_1            : 1;  /* bit[10]   :  */
        unsigned int  mtcfg                 : 1;  /* bit[11]   : Memory Type Configuration(复位值为不定态)
                                                                 0 = Use memory attributes as presented with transaction
                                                                 1 = Use MemAttr field for memory attributes */
        unsigned int  memattr               : 4;  /* bit[12-15]: Memory Attributes(复位值为不定态) */
        unsigned int  type                  : 2;  /* bit[16-17]: S2CRn Type. Indicates the meaning of the remaining fields
                                                                 within this寄存器。.
                                                                 00 – Translation Context Bank Index
                                                                 01 – Bypass Mode
                                                                 10 – No Index, Fault
                                                                 11 – RESERVED */
        unsigned int  nscfg                 : 2;  /* bit[18-19]: Non-secure Configuration.(复位值为不定态)
                                                                 00 – Use secure attribute as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Secure. Only has effect for secure owned SMMU_S2CRn
                                                                 entry.
                                                                 11 – Non-secure */
        unsigned int  racfg                 : 2;  /* bit[20-21]: Read Allocate Configuration(复位值为不定态)
                                                                 Controls the allocation hint for read accesses.
                                                                 00 – Use allocation attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Allocate
                                                                 11 – No-allocate */
        unsigned int  wacfg                 : 2;  /* bit[22-23]: Write Allocate Configuration(复位值为不定态)
                                                                 Controls the allocation hint for write accesses.
                                                                 00 – Use allocation attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Allocate
                                                                 11 – No-allocate */
        unsigned int  privcfg               : 2;  /* bit[24-25]: Privileged Attribute Configuration(复位值为不定态)
                                                                 00 – Use privileged attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – User
                                                                 11 – Privileged */
        unsigned int  instcfg               : 2;  /* bit[26-27]: Instruction Fetch Attribute Configuration(复位值为不定态)
                                                                 00 – Use instruction fetch attribute as presented with
                                                                 transaction
                                                                 01 – RESERVED
                                                                 10 – Data
                                                                 11 – Instruction */
        unsigned int  implementationdefined : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_S2CR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_S2CR0_cbndx_START                  (0)
#define SOC_SMMU500_NS_SMMU_S2CR0_cbndx_END                    (1)
#define SOC_SMMU500_NS_SMMU_S2CR0_shcfg_START                  (8)
#define SOC_SMMU500_NS_SMMU_S2CR0_shcfg_END                    (9)
#define SOC_SMMU500_NS_SMMU_S2CR0_mtcfg_START                  (11)
#define SOC_SMMU500_NS_SMMU_S2CR0_mtcfg_END                    (11)
#define SOC_SMMU500_NS_SMMU_S2CR0_memattr_START                (12)
#define SOC_SMMU500_NS_SMMU_S2CR0_memattr_END                  (15)
#define SOC_SMMU500_NS_SMMU_S2CR0_type_START                   (16)
#define SOC_SMMU500_NS_SMMU_S2CR0_type_END                     (17)
#define SOC_SMMU500_NS_SMMU_S2CR0_nscfg_START                  (18)
#define SOC_SMMU500_NS_SMMU_S2CR0_nscfg_END                    (19)
#define SOC_SMMU500_NS_SMMU_S2CR0_racfg_START                  (20)
#define SOC_SMMU500_NS_SMMU_S2CR0_racfg_END                    (21)
#define SOC_SMMU500_NS_SMMU_S2CR0_wacfg_START                  (22)
#define SOC_SMMU500_NS_SMMU_S2CR0_wacfg_END                    (23)
#define SOC_SMMU500_NS_SMMU_S2CR0_privcfg_START                (24)
#define SOC_SMMU500_NS_SMMU_S2CR0_privcfg_END                  (25)
#define SOC_SMMU500_NS_SMMU_S2CR0_instcfg_START                (26)
#define SOC_SMMU500_NS_SMMU_S2CR0_instcfg_END                  (27)
#define SOC_SMMU500_NS_SMMU_S2CR0_implementationdefined_START  (28)
#define SOC_SMMU500_NS_SMMU_S2CR0_implementationdefined_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_S2CR1_UNION
 结构说明  : SMMU_S2CR1 寄存器结构定义。地址偏移量:0x0C04，初值:0x00020000，宽度:32
 寄存器说明: Stream to Context 1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cbndx                 : 2;  /* bit[0-1]  : Context Bank Index. The Translation Context Bank Index used for Stage 2 translation. */
        unsigned int  reserved_0            : 6;  /* bit[2-7]  : 接死0 */
        unsigned int  shcfg                 : 2;  /* bit[8-9]  : Shared Configuration.(复位值为不定态)
                                                                 00 – Use shareable attribute as presented with transaction
                                                                 01 – Outer-shareable
                                                                 10 – Inner-shareable
                                                                 11 – Non-shareable */
        unsigned int  reserved_1            : 1;  /* bit[10]   :  */
        unsigned int  mtcfg                 : 1;  /* bit[11]   : Memory Type Configuration(复位值为不定态)
                                                                 0 = Use memory attributes as presented with transaction
                                                                 1 = Use MemAttr field for memory attributes */
        unsigned int  memattr               : 4;  /* bit[12-15]: Memory Attributes(复位值为不定态) */
        unsigned int  type                  : 2;  /* bit[16-17]: S2CRn Type. Indicates the meaning of the remaining fields
                                                                 within this register.
                                                                 00 – Translation Context Bank Index
                                                                 01 – Bypass Mode
                                                                 10 – No Index, Fault
                                                                 11 – RESERVED */
        unsigned int  nscfg                 : 2;  /* bit[18-19]: Non-secure Configuration.(复位值为不定态)
                                                                 00 – Use secure attribute as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Secure. Only has effect for secure owned SMMU_S2CRn
                                                                 entry.
                                                                 11 – Non-secure */
        unsigned int  racfg                 : 2;  /* bit[20-21]: Read Allocate Configuration(复位值为不定态)
                                                                 Controls the allocation hint for read accesses.
                                                                 00 – Use allocation attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Allocate
                                                                 11 – No-allocate */
        unsigned int  wacfg                 : 2;  /* bit[22-23]: Write Allocate Configuration(复位值为不定态)
                                                                 Controls the allocation hint for write accesses.
                                                                 00 – Use allocation attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Allocate
                                                                 11 – No-allocate */
        unsigned int  privcfg               : 2;  /* bit[24-25]: Privileged Attribute Configuration(复位值为不定态)
                                                                 00 – Use privileged attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – User
                                                                 11 – Privileged */
        unsigned int  instcfg               : 2;  /* bit[26-27]: Instruction Fetch Attribute Configuration(复位值为不定态)
                                                                 00 – Use instruction fetch attribute as presented with
                                                                 transaction
                                                                 01 – RESERVED
                                                                 10 – Data
                                                                 11 – Instruction */
        unsigned int  implementationdefined : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_S2CR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_S2CR1_cbndx_START                  (0)
#define SOC_SMMU500_NS_SMMU_S2CR1_cbndx_END                    (1)
#define SOC_SMMU500_NS_SMMU_S2CR1_shcfg_START                  (8)
#define SOC_SMMU500_NS_SMMU_S2CR1_shcfg_END                    (9)
#define SOC_SMMU500_NS_SMMU_S2CR1_mtcfg_START                  (11)
#define SOC_SMMU500_NS_SMMU_S2CR1_mtcfg_END                    (11)
#define SOC_SMMU500_NS_SMMU_S2CR1_memattr_START                (12)
#define SOC_SMMU500_NS_SMMU_S2CR1_memattr_END                  (15)
#define SOC_SMMU500_NS_SMMU_S2CR1_type_START                   (16)
#define SOC_SMMU500_NS_SMMU_S2CR1_type_END                     (17)
#define SOC_SMMU500_NS_SMMU_S2CR1_nscfg_START                  (18)
#define SOC_SMMU500_NS_SMMU_S2CR1_nscfg_END                    (19)
#define SOC_SMMU500_NS_SMMU_S2CR1_racfg_START                  (20)
#define SOC_SMMU500_NS_SMMU_S2CR1_racfg_END                    (21)
#define SOC_SMMU500_NS_SMMU_S2CR1_wacfg_START                  (22)
#define SOC_SMMU500_NS_SMMU_S2CR1_wacfg_END                    (23)
#define SOC_SMMU500_NS_SMMU_S2CR1_privcfg_START                (24)
#define SOC_SMMU500_NS_SMMU_S2CR1_privcfg_END                  (25)
#define SOC_SMMU500_NS_SMMU_S2CR1_instcfg_START                (26)
#define SOC_SMMU500_NS_SMMU_S2CR1_instcfg_END                  (27)
#define SOC_SMMU500_NS_SMMU_S2CR1_implementationdefined_START  (28)
#define SOC_SMMU500_NS_SMMU_S2CR1_implementationdefined_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_S2CR2_UNION
 结构说明  : SMMU_S2CR2 寄存器结构定义。地址偏移量:0x0C08，初值:0x00020000，宽度:32
 寄存器说明: Stream to Context 2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cbndx                 : 2;  /* bit[0-1]  : Context Bank Index. The Translation Context Bank Index used for Stage 2 translation. */
        unsigned int  reserved_0            : 6;  /* bit[2-7]  : 接死0 */
        unsigned int  shcfg                 : 2;  /* bit[8-9]  : Shared Configuration.(复位值为不定态)
                                                                 00 – Use shareable attribute as presented with transaction
                                                                 01 – Outer-shareable
                                                                 10 – Inner-shareable
                                                                 11 – Non-shareable */
        unsigned int  reserved_1            : 1;  /* bit[10]   :  */
        unsigned int  mtcfg                 : 1;  /* bit[11]   : Memory Type Configuration(复位值为不定态)
                                                                 0 = Use memory attributes as presented with transaction
                                                                 1 = Use MemAttr field for memory attributes */
        unsigned int  memattr               : 4;  /* bit[12-15]: Memory Attributes(复位值为不定态) */
        unsigned int  type                  : 2;  /* bit[16-17]: S2CRn Type. Indicates the meaning of the remaining fields
                                                                 within this register.
                                                                 00 – Translation Context Bank Index
                                                                 01 – Bypass Mode
                                                                 10 – No Index, Fault
                                                                 11 – RESERVED */
        unsigned int  nscfg                 : 2;  /* bit[18-19]: Non-secure Configuration.(复位值为不定态)
                                                                 00 – Use secure attribute as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Secure. Only has effect for secure owned SMMU_S2CRn
                                                                 entry.
                                                                 11 – Non-secure */
        unsigned int  racfg                 : 2;  /* bit[20-21]: Read Allocate Configuration(复位值为不定态)
                                                                 Controls the allocation hint for read accesses.
                                                                 00 – Use allocation attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Allocate
                                                                 11 – No-allocate */
        unsigned int  wacfg                 : 2;  /* bit[22-23]: Write Allocate Configuration(复位值为不定态)
                                                                 Controls the allocation hint for write accesses.
                                                                 00 – Use allocation attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Allocate
                                                                 11 – No-allocate */
        unsigned int  privcfg               : 2;  /* bit[24-25]: Privileged Attribute Configuration(复位值为不定态)
                                                                 00 – Use privileged attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – User
                                                                 11 – Privileged */
        unsigned int  instcfg               : 2;  /* bit[26-27]: Instruction Fetch Attribute Configuration(复位值为不定态)
                                                                 00 – Use instruction fetch attribute as presented with
                                                                 transaction
                                                                 01 – RESERVED
                                                                 10 – Data
                                                                 11 – Instruction */
        unsigned int  implementationdefined : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_S2CR2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_S2CR2_cbndx_START                  (0)
#define SOC_SMMU500_NS_SMMU_S2CR2_cbndx_END                    (1)
#define SOC_SMMU500_NS_SMMU_S2CR2_shcfg_START                  (8)
#define SOC_SMMU500_NS_SMMU_S2CR2_shcfg_END                    (9)
#define SOC_SMMU500_NS_SMMU_S2CR2_mtcfg_START                  (11)
#define SOC_SMMU500_NS_SMMU_S2CR2_mtcfg_END                    (11)
#define SOC_SMMU500_NS_SMMU_S2CR2_memattr_START                (12)
#define SOC_SMMU500_NS_SMMU_S2CR2_memattr_END                  (15)
#define SOC_SMMU500_NS_SMMU_S2CR2_type_START                   (16)
#define SOC_SMMU500_NS_SMMU_S2CR2_type_END                     (17)
#define SOC_SMMU500_NS_SMMU_S2CR2_nscfg_START                  (18)
#define SOC_SMMU500_NS_SMMU_S2CR2_nscfg_END                    (19)
#define SOC_SMMU500_NS_SMMU_S2CR2_racfg_START                  (20)
#define SOC_SMMU500_NS_SMMU_S2CR2_racfg_END                    (21)
#define SOC_SMMU500_NS_SMMU_S2CR2_wacfg_START                  (22)
#define SOC_SMMU500_NS_SMMU_S2CR2_wacfg_END                    (23)
#define SOC_SMMU500_NS_SMMU_S2CR2_privcfg_START                (24)
#define SOC_SMMU500_NS_SMMU_S2CR2_privcfg_END                  (25)
#define SOC_SMMU500_NS_SMMU_S2CR2_instcfg_START                (26)
#define SOC_SMMU500_NS_SMMU_S2CR2_instcfg_END                  (27)
#define SOC_SMMU500_NS_SMMU_S2CR2_implementationdefined_START  (28)
#define SOC_SMMU500_NS_SMMU_S2CR2_implementationdefined_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_S2CR3_UNION
 结构说明  : SMMU_S2CR3 寄存器结构定义。地址偏移量:0x0C0C，初值:0x00000000，宽度:32
 寄存器说明: Stream to Context 3寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cbndx                 : 2;  /* bit[0-1]  : Context Bank Index. The Translation Context Bank Index used for Stage 2 translation. */
        unsigned int  reserved_0            : 6;  /* bit[2-7]  : 接死0 */
        unsigned int  shcfg                 : 2;  /* bit[8-9]  : Shared Configuration.(复位值为不定态)
                                                                 00 – Use shareable attribute as presented with transaction
                                                                 01 – Outer-shareable
                                                                 10 – Inner-shareable
                                                                 11 – Non-shareable */
        unsigned int  reserved_1            : 1;  /* bit[10]   :  */
        unsigned int  mtcfg                 : 1;  /* bit[11]   : Memory Type Configuration(复位值为不定态)
                                                                 0 = Use memory attributes as presented with transaction
                                                                 1 = Use MemAttr field for memory attributes */
        unsigned int  memattr               : 4;  /* bit[12-15]: Memory Attributes(复位值为不定态) */
        unsigned int  type                  : 2;  /* bit[16-17]: S2CRn Type. Indicates the meaning of the remaining fields
                                                                 within this register.
                                                                 00 – Translation Context Bank Index
                                                                 01 – Bypass Mode
                                                                 10 – No Index, Fault
                                                                 11 – RESERVED */
        unsigned int  nscfg                 : 2;  /* bit[18-19]: Non-secure Configuration.(复位值为不定态)
                                                                 00 – Use secure attribute as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Secure. Only has effect for secure owned SMMU_S2CRn
                                                                 entry.
                                                                 11 – Non-secure */
        unsigned int  racfg                 : 2;  /* bit[20-21]: Read Allocate Configuration(复位值为不定态)
                                                                 Controls the allocation hint for read accesses.
                                                                 00 – Use allocation attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Allocate
                                                                 11 – No-allocate */
        unsigned int  wacfg                 : 2;  /* bit[22-23]: Write Allocate Configuration(复位值为不定态)
                                                                 Controls the allocation hint for write accesses.
                                                                 00 – Use allocation attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – Allocate
                                                                 11 – No-allocate */
        unsigned int  privcfg               : 2;  /* bit[24-25]: Privileged Attribute Configuration(复位值为不定态)
                                                                 00 – Use privileged attributes as presented with transaction
                                                                 01 – RESERVED
                                                                 10 – User
                                                                 11 – Privileged */
        unsigned int  instcfg               : 2;  /* bit[26-27]: Instruction Fetch Attribute Configuration(复位值为不定态)
                                                                 00 – Use instruction fetch attribute as presented with
                                                                 transaction
                                                                 01 – RESERVED
                                                                 10 – Data
                                                                 11 – Instruction */
        unsigned int  implementationdefined : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_S2CR3_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_S2CR3_cbndx_START                  (0)
#define SOC_SMMU500_NS_SMMU_S2CR3_cbndx_END                    (1)
#define SOC_SMMU500_NS_SMMU_S2CR3_shcfg_START                  (8)
#define SOC_SMMU500_NS_SMMU_S2CR3_shcfg_END                    (9)
#define SOC_SMMU500_NS_SMMU_S2CR3_mtcfg_START                  (11)
#define SOC_SMMU500_NS_SMMU_S2CR3_mtcfg_END                    (11)
#define SOC_SMMU500_NS_SMMU_S2CR3_memattr_START                (12)
#define SOC_SMMU500_NS_SMMU_S2CR3_memattr_END                  (15)
#define SOC_SMMU500_NS_SMMU_S2CR3_type_START                   (16)
#define SOC_SMMU500_NS_SMMU_S2CR3_type_END                     (17)
#define SOC_SMMU500_NS_SMMU_S2CR3_nscfg_START                  (18)
#define SOC_SMMU500_NS_SMMU_S2CR3_nscfg_END                    (19)
#define SOC_SMMU500_NS_SMMU_S2CR3_racfg_START                  (20)
#define SOC_SMMU500_NS_SMMU_S2CR3_racfg_END                    (21)
#define SOC_SMMU500_NS_SMMU_S2CR3_wacfg_START                  (22)
#define SOC_SMMU500_NS_SMMU_S2CR3_wacfg_END                    (23)
#define SOC_SMMU500_NS_SMMU_S2CR3_privcfg_START                (24)
#define SOC_SMMU500_NS_SMMU_S2CR3_privcfg_END                  (25)
#define SOC_SMMU500_NS_SMMU_S2CR3_instcfg_START                (26)
#define SOC_SMMU500_NS_SMMU_S2CR3_instcfg_END                  (27)
#define SOC_SMMU500_NS_SMMU_S2CR3_implementationdefined_START  (28)
#define SOC_SMMU500_NS_SMMU_S2CR3_implementationdefined_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CBAR0_UNION
 结构说明  : SMMU_CBAR0 寄存器结构定义。地址偏移量:0x1000，初值:0x00000000，宽度:32
 寄存器说明: Context Bank Attribute 0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vmid     : 8;  /* bit[0-7]  : The Virtual Machine Identifier to be associated with the Translation context bank.
                                                    Note
                                                    For the Stage 2 Context format, this field is only used when the associated Stage 2 translation
                                                    context bank is the first specified context, that is, specified in an SMMU_S2CRn register. */
        unsigned int  reserved_0: 8;  /* bit[8-15] : 接死为0 */
        unsigned int  type     : 2;  /* bit[16-17]: CBRn Type. Indicates the format of the remaining fields within this register. This field behaves as
                                                    RAZ/WI.（接死为0） */
        unsigned int  sbz      : 2;  /* bit[18-19]: 接死为0 */
        unsigned int  reserved_1: 4;  /* bit[20-23]: 接死为0 */
        unsigned int  irptdx   : 8;  /* bit[24-31]: Interrupt Index. The context interrupt number to assert in the event of an interrupt raising a fault
                                                    in the associated translation context bank. This bit is RO. */
    } reg;
} SOC_SMMU500_NS_SMMU_CBAR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CBAR0_vmid_START      (0)
#define SOC_SMMU500_NS_SMMU_CBAR0_vmid_END        (7)
#define SOC_SMMU500_NS_SMMU_CBAR0_type_START      (16)
#define SOC_SMMU500_NS_SMMU_CBAR0_type_END        (17)
#define SOC_SMMU500_NS_SMMU_CBAR0_sbz_START       (18)
#define SOC_SMMU500_NS_SMMU_CBAR0_sbz_END         (19)
#define SOC_SMMU500_NS_SMMU_CBAR0_irptdx_START    (24)
#define SOC_SMMU500_NS_SMMU_CBAR0_irptdx_END      (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CBAR1_UNION
 结构说明  : SMMU_CBAR1 寄存器结构定义。地址偏移量:0x1004，初值:0x00000000，宽度:32
 寄存器说明: Context Bank Attribute 1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vmid     : 8;  /* bit[0-7]  : The Virtual Machine Identifier to be associated with the Translation context bank.
                                                    Note
                                                    For the Stage 2 Context format, this field is only used when the associated Stage 2 translation
                                                    context bank is the first specified context, that is, specified in an SMMU_S2CRn register. */
        unsigned int  reserved_0: 8;  /* bit[8-15] : 接死为0 */
        unsigned int  type     : 2;  /* bit[16-17]: CBRn Type. Indicates the format of the remaining fields within this register. This field behaves as
                                                    RAZ/WI.（接死为0） */
        unsigned int  sbz      : 2;  /* bit[18-19]: 接死为0 */
        unsigned int  reserved_1: 4;  /* bit[20-23]: 接死为0 */
        unsigned int  irptdx   : 8;  /* bit[24-31]: Interrupt Index. The context interrupt number to assert in the event of an interrupt raising a fault
                                                    in the associated translation context bank. This bit is RO. */
    } reg;
} SOC_SMMU500_NS_SMMU_CBAR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CBAR1_vmid_START      (0)
#define SOC_SMMU500_NS_SMMU_CBAR1_vmid_END        (7)
#define SOC_SMMU500_NS_SMMU_CBAR1_type_START      (16)
#define SOC_SMMU500_NS_SMMU_CBAR1_type_END        (17)
#define SOC_SMMU500_NS_SMMU_CBAR1_sbz_START       (18)
#define SOC_SMMU500_NS_SMMU_CBAR1_sbz_END         (19)
#define SOC_SMMU500_NS_SMMU_CBAR1_irptdx_START    (24)
#define SOC_SMMU500_NS_SMMU_CBAR1_irptdx_END      (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CBAR2_UNION
 结构说明  : SMMU_CBAR2 寄存器结构定义。地址偏移量:0x1008，初值:0x00000000，宽度:32
 寄存器说明: Context Bank Attribute 2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vmid     : 8;  /* bit[0-7]  : The Virtual Machine Identifier to be associated with the Translation context bank.
                                                    Note
                                                    For the Stage 2 Context format, this field is only used when the associated Stage 2 translation
                                                    context bank is the first specified context, that is, specified in an SMMU_S2CRn register. */
        unsigned int  reserved_0: 8;  /* bit[8-15] : 接死为0 */
        unsigned int  type     : 2;  /* bit[16-17]: CBRn Type. Indicates the format of the remaining fields within this register. This field behaves as
                                                    RAZ/WI.（接死为0） */
        unsigned int  sbz      : 2;  /* bit[18-19]: 接死为0 */
        unsigned int  reserved_1: 4;  /* bit[20-23]: 接死为0 */
        unsigned int  irptdx   : 8;  /* bit[24-31]: Interrupt Index. The context interrupt number to assert in the event of an interrupt raising a fault
                                                    in the associated translation context bank. This bit is RO. */
    } reg;
} SOC_SMMU500_NS_SMMU_CBAR2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CBAR2_vmid_START      (0)
#define SOC_SMMU500_NS_SMMU_CBAR2_vmid_END        (7)
#define SOC_SMMU500_NS_SMMU_CBAR2_type_START      (16)
#define SOC_SMMU500_NS_SMMU_CBAR2_type_END        (17)
#define SOC_SMMU500_NS_SMMU_CBAR2_sbz_START       (18)
#define SOC_SMMU500_NS_SMMU_CBAR2_sbz_END         (19)
#define SOC_SMMU500_NS_SMMU_CBAR2_irptdx_START    (24)
#define SOC_SMMU500_NS_SMMU_CBAR2_irptdx_END      (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CBAR3_UNION
 结构说明  : SMMU_CBAR3 寄存器结构定义。地址偏移量:0x100C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank Attribute 3寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vmid     : 8;  /* bit[0-7]  : The Virtual Machine Identifier to be associated with the Translation context bank.
                                                    Note
                                                    For the Stage 2 Context format, this field is only used when the associated Stage 2 translation
                                                    context bank is the first specified context, that is, specified in an SMMU_S2CRn register. */
        unsigned int  reserved_0: 8;  /* bit[8-15] : 接死为0 */
        unsigned int  type     : 2;  /* bit[16-17]: CBRn Type. Indicates the format of the remaining fields within this register. This field behaves as
                                                    RAZ/WI.（接死为0） */
        unsigned int  sbz      : 2;  /* bit[18-19]: 接死为0 */
        unsigned int  reserved_1: 4;  /* bit[20-23]: 接死为0 */
        unsigned int  irptdx   : 8;  /* bit[24-31]: Interrupt Index. The context interrupt number to assert in the event of an interrupt raising a fault
                                                    in the associated translation context bank. This bit is RO. */
    } reg;
} SOC_SMMU500_NS_SMMU_CBAR3_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CBAR3_vmid_START      (0)
#define SOC_SMMU500_NS_SMMU_CBAR3_vmid_END        (7)
#define SOC_SMMU500_NS_SMMU_CBAR3_type_START      (16)
#define SOC_SMMU500_NS_SMMU_CBAR3_type_END        (17)
#define SOC_SMMU500_NS_SMMU_CBAR3_sbz_START       (18)
#define SOC_SMMU500_NS_SMMU_CBAR3_sbz_END         (19)
#define SOC_SMMU500_NS_SMMU_CBAR3_irptdx_START    (24)
#define SOC_SMMU500_NS_SMMU_CBAR3_irptdx_END      (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CBFRSYNRA0_UNION
 结构说明  : SMMU_CBFRSYNRA0 寄存器结构定义。地址偏移量:0x1400，初值:0x00000000，宽度:32
 寄存器说明: Context Bank Fault Restricted Syndrome 0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  streamid  : 2;  /* bit[0-1]  : The Stream ID of the transaction that caused the fault */
        unsigned int  reserved_0: 14; /* bit[2-15] : 保留 */
        unsigned int  ssd_index : 15; /* bit[16-30]: SSD_Index of transaction causing fault(Only Secure Access) */
        unsigned int  reserved_1: 1;  /* bit[31]   : 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CBFRSYNRA0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA0_streamid_START   (0)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA0_streamid_END     (1)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA0_ssd_index_START  (16)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA0_ssd_index_END    (30)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CBFRSYNRA1_UNION
 结构说明  : SMMU_CBFRSYNRA1 寄存器结构定义。地址偏移量:0x1404，初值:0x00000000，宽度:32
 寄存器说明: Context Bank Fault Restricted Syndrome 1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  streamid  : 2;  /* bit[0-1]  : The Stream ID of the transaction that caused the fault */
        unsigned int  reserved_0: 14; /* bit[2-15] : 保留 */
        unsigned int  ssd_index : 15; /* bit[16-30]: SSD_Index of transaction causing fault (Only Secure Access) */
        unsigned int  reserved_1: 1;  /* bit[31]   : 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CBFRSYNRA1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA1_streamid_START   (0)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA1_streamid_END     (1)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA1_ssd_index_START  (16)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA1_ssd_index_END    (30)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CBFRSYNRA2_UNION
 结构说明  : SMMU_CBFRSYNRA2 寄存器结构定义。地址偏移量:0x1408，初值:0x00000000，宽度:32
 寄存器说明: Context Bank Fault Restricted Syndrome 2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  streamid  : 2;  /* bit[0-1]  : The Stream ID of the transaction that caused the fault */
        unsigned int  reserved_0: 14; /* bit[2-15] : 保留 */
        unsigned int  ssd_index : 15; /* bit[16-30]: SSD_Index of transaction causing fault(Only Secure Access) */
        unsigned int  reserved_1: 1;  /* bit[31]   : 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CBFRSYNRA2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA2_streamid_START   (0)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA2_streamid_END     (1)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA2_ssd_index_START  (16)
#define SOC_SMMU500_NS_SMMU_CBFRSYNRA2_ssd_index_END    (30)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CBFRSYNRA3_UNION
 结构说明  : SMMU_CBFRSYNRA3 寄存器结构定义。地址偏移量:0x140C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank Fault Restricted Syndrome 3寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CBFRSYNRA3_UNION;
#endif


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_ITCTRL_UNION
 结构说明  : ITCTRL 寄存器结构定义。地址偏移量:0x2000，初值:0x00000000，宽度:32
 寄存器说明: 集成模式控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  integration_mode : 1;  /* bit[0]   : Enables the component to switch from functional mode to integration mode or back. The possible
                                                           value for this field are:
                                                           0 Disable integration mode.
                                                           1 Enable integration mode. */
        unsigned int  reserved         : 31; /* bit[1-31]: RESERVED */
    } reg;
} SOC_SMMU500_NS_ITCTRL_UNION;
#endif
#define SOC_SMMU500_NS_ITCTRL_integration_mode_START  (0)
#define SOC_SMMU500_NS_ITCTRL_integration_mode_END    (0)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_ITOP_UNION
 结构说明  : ITOP 寄存器结构定义。地址偏移量:0x2008，初值:0x00000000，宽度:32
 寄存器说明: 中断测试输出寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  nscaf    : 1;  /* bit[0]    : Non-secure Configuration Access Fault */
        unsigned int  gnsf     : 1;  /* bit[1]    : Global Non-secure Fault */
        unsigned int  pi       : 1;  /* bit[2]    : Performance Interrupt */
        unsigned int  ci       : 1;  /* bit[3]    : Context Interrupt */
        unsigned int  reserved_0: 4;  /* bit[4-7]  : RESERVED */
        unsigned int  scaf     : 1;  /* bit[8]    : Secure Configuration Access Fault */
        unsigned int  gsf      : 1;  /* bit[9]    : Global Secure Fault */
        unsigned int  reserved_1: 22; /* bit[10-31]: RESERVED */
    } reg;
} SOC_SMMU500_NS_ITOP_UNION;
#endif
#define SOC_SMMU500_NS_ITOP_nscaf_START     (0)
#define SOC_SMMU500_NS_ITOP_nscaf_END       (0)
#define SOC_SMMU500_NS_ITOP_gnsf_START      (1)
#define SOC_SMMU500_NS_ITOP_gnsf_END        (1)
#define SOC_SMMU500_NS_ITOP_pi_START        (2)
#define SOC_SMMU500_NS_ITOP_pi_END          (2)
#define SOC_SMMU500_NS_ITOP_ci_START        (3)
#define SOC_SMMU500_NS_ITOP_ci_END          (3)
#define SOC_SMMU500_NS_ITOP_scaf_START      (8)
#define SOC_SMMU500_NS_ITOP_scaf_END        (8)
#define SOC_SMMU500_NS_ITOP_gsf_START       (9)
#define SOC_SMMU500_NS_ITOP_gsf_END         (9)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_ITIP_UNION
 结构说明  : ITIP 寄存器结构定义。地址偏移量:0x2004，初值:0x00000000，宽度:32
 寄存器说明: 中断测试输入寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  spniden  : 1;  /* bit[0]   : The Secure Debug Input, SPNIDEN is reflected in this register at bit0 */
        unsigned int  reserved : 31; /* bit[1-31]: RESERVED */
    } reg;
} SOC_SMMU500_NS_ITIP_UNION;
#endif
#define SOC_SMMU500_NS_ITIP_spniden_START   (0)
#define SOC_SMMU500_NS_ITIP_spniden_END     (0)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMEVCNTR0_UNION
 结构说明  : PMEVCNTR0 寄存器结构定义。地址偏移量:0x3000，初值:0x00000000，宽度:32
 寄存器说明: 性能监控事件计数0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntrn : 32; /* bit[0-31]: Value of event counter */
    } reg;
} SOC_SMMU500_NS_PMEVCNTR0_UNION;
#endif
#define SOC_SMMU500_NS_PMEVCNTR0_evcntrn_START  (0)
#define SOC_SMMU500_NS_PMEVCNTR0_evcntrn_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMEVCNTR1_UNION
 结构说明  : PMEVCNTR1 寄存器结构定义。地址偏移量:0x3004，初值:0x00000000，宽度:32
 寄存器说明: 性能监控事件计数1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntrn : 32; /* bit[0-31]: Value of event counter */
    } reg;
} SOC_SMMU500_NS_PMEVCNTR1_UNION;
#endif
#define SOC_SMMU500_NS_PMEVCNTR1_evcntrn_START  (0)
#define SOC_SMMU500_NS_PMEVCNTR1_evcntrn_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMEVCNTR2_UNION
 结构说明  : PMEVCNTR2 寄存器结构定义。地址偏移量:0x3008，初值:0x00000000，宽度:32
 寄存器说明: 性能监控事件计数2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntrn : 32; /* bit[0-31]: Value of event counter */
    } reg;
} SOC_SMMU500_NS_PMEVCNTR2_UNION;
#endif
#define SOC_SMMU500_NS_PMEVCNTR2_evcntrn_START  (0)
#define SOC_SMMU500_NS_PMEVCNTR2_evcntrn_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMEVTYPE0_UNION
 结构说明  : PMEVTYPE0 寄存器结构定义。地址偏移量:0x3400，初值:0x00000000，宽度:32
 寄存器说明: 性能监控事件类型选择0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_PMEVTYPE0_UNION;
#endif
#define SOC_SMMU500_NS_PMEVTYPE0_event_START     (0)
#define SOC_SMMU500_NS_PMEVTYPE0_event_END       (4)
#define SOC_SMMU500_NS_PMEVTYPE0_nsu_START       (28)
#define SOC_SMMU500_NS_PMEVTYPE0_nsu_END         (28)
#define SOC_SMMU500_NS_PMEVTYPE0_nsp_START       (29)
#define SOC_SMMU500_NS_PMEVTYPE0_nsp_END         (29)
#define SOC_SMMU500_NS_PMEVTYPE0_u_START         (30)
#define SOC_SMMU500_NS_PMEVTYPE0_u_END           (30)
#define SOC_SMMU500_NS_PMEVTYPE0_p_START         (31)
#define SOC_SMMU500_NS_PMEVTYPE0_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMEVTYPE1_UNION
 结构说明  : PMEVTYPE1 寄存器结构定义。地址偏移量:0x3404，初值:0x00000000，宽度:32
 寄存器说明: 性能监控事件类型选择1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_PMEVTYPE1_UNION;
#endif
#define SOC_SMMU500_NS_PMEVTYPE1_event_START     (0)
#define SOC_SMMU500_NS_PMEVTYPE1_event_END       (4)
#define SOC_SMMU500_NS_PMEVTYPE1_nsu_START       (28)
#define SOC_SMMU500_NS_PMEVTYPE1_nsu_END         (28)
#define SOC_SMMU500_NS_PMEVTYPE1_nsp_START       (29)
#define SOC_SMMU500_NS_PMEVTYPE1_nsp_END         (29)
#define SOC_SMMU500_NS_PMEVTYPE1_u_START         (30)
#define SOC_SMMU500_NS_PMEVTYPE1_u_END           (30)
#define SOC_SMMU500_NS_PMEVTYPE1_p_START         (31)
#define SOC_SMMU500_NS_PMEVTYPE1_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMEVTYPE2_UNION
 结构说明  : PMEVTYPE2 寄存器结构定义。地址偏移量:0x3408，初值:0x00000000，宽度:32
 寄存器说明: 性能监控事件类型选择2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_PMEVTYPE2_UNION;
#endif
#define SOC_SMMU500_NS_PMEVTYPE2_event_START     (0)
#define SOC_SMMU500_NS_PMEVTYPE2_event_END       (4)
#define SOC_SMMU500_NS_PMEVTYPE2_nsu_START       (28)
#define SOC_SMMU500_NS_PMEVTYPE2_nsu_END         (28)
#define SOC_SMMU500_NS_PMEVTYPE2_nsp_START       (29)
#define SOC_SMMU500_NS_PMEVTYPE2_nsp_END         (29)
#define SOC_SMMU500_NS_PMEVTYPE2_u_START         (30)
#define SOC_SMMU500_NS_PMEVTYPE2_u_END           (30)
#define SOC_SMMU500_NS_PMEVTYPE2_p_START         (31)
#define SOC_SMMU500_NS_PMEVTYPE2_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMCGCR0_UNION
 结构说明  : PMCGCR0 寄存器结构定义。地址偏移量:0x3800，初值:0x03000000，宽度:32
 寄存器说明: 性能监控计数器组配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ndx      : 2;  /* bit[0-1]  : Index. Interpreted based on TCEFCFG, only valid if TCEFCFG==10 else RESERVED. */
        unsigned int  reserved_0: 6;  /* bit[2-7]  :  */
        unsigned int  tcefcfg  : 2;  /* bit[8-9]  : Translation Context Event Filtering Configuration
                                                    00 Count Events on a global basis
                                                    01 Count Events restricted to match in corresponding PMCGSMRn
                                                    10 Count Events restricted to Translation Context Bank indicated by NDX
                                                    11 RESERVED */
        unsigned int  cbaen    : 1;  /* bit[10]   : Context Bank Assignment Enable.
                                                    0 Do not reveal counter group n in translation context bank specified by NDX.
                                                    1 Reveal counter group n in translation context bank specified by NDX.
                                                    If CBAEN==1 and TCEFCFG!=10 or 01 then UNPREDICTABLE. */
        unsigned int  cen      : 1;  /* bit[11]   : Count Enable.
                                                    Corresponds to the Performance Monitor Count Enable, PMCR.CEN, for this counter group. */
        unsigned int  ex       : 1;  /* bit[12]   :  */
        unsigned int  reserved_1: 3;  /* bit[13-15]: RESERVED */
        unsigned int  sidg     : 7;  /* bit[16-22]: StreamID Group
                                                    Indicates the StreamID Group that this counter group is affiliated with. This field is RO/WI. For
                                                    the MMU-400, this is set to 0 to indicate only one group is present. */
        unsigned int  reserved_2: 1;  /* bit[23]   : RESERVED */
        unsigned int  cgnc     : 4;  /* bit[24-27]: Counter Group Number of Counters
                                                    Indicates the number of counters in this counter group. This field is RO/WI. For the MMU-400,
                                                    this is fixed at 3. */
        unsigned int  reserved_3: 4;  /* bit[28-31]: RESERVED */
    } reg;
} SOC_SMMU500_NS_PMCGCR0_UNION;
#endif
#define SOC_SMMU500_NS_PMCGCR0_ndx_START       (0)
#define SOC_SMMU500_NS_PMCGCR0_ndx_END         (1)
#define SOC_SMMU500_NS_PMCGCR0_tcefcfg_START   (8)
#define SOC_SMMU500_NS_PMCGCR0_tcefcfg_END     (9)
#define SOC_SMMU500_NS_PMCGCR0_cbaen_START     (10)
#define SOC_SMMU500_NS_PMCGCR0_cbaen_END       (10)
#define SOC_SMMU500_NS_PMCGCR0_cen_START       (11)
#define SOC_SMMU500_NS_PMCGCR0_cen_END         (11)
#define SOC_SMMU500_NS_PMCGCR0_ex_START        (12)
#define SOC_SMMU500_NS_PMCGCR0_ex_END          (12)
#define SOC_SMMU500_NS_PMCGCR0_sidg_START      (16)
#define SOC_SMMU500_NS_PMCGCR0_sidg_END        (22)
#define SOC_SMMU500_NS_PMCGCR0_cgnc_START      (24)
#define SOC_SMMU500_NS_PMCGCR0_cgnc_END        (27)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMCGSMR0_UNION
 结构说明  : PMCGSMR0 寄存器结构定义。地址偏移量:0x3A00，初值:0x00000000，宽度:32
 寄存器说明: 性能监控计数器组流匹配寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id       : 2;  /* bit[0-1]  :  */
        unsigned int  reserved_0: 13; /* bit[2-14] : 接死为0 */
        unsigned int  reserved_1: 1;  /* bit[15]   :  */
        unsigned int  mask     : 2;  /* bit[16-17]:  */
        unsigned int  reserved_2: 13; /* bit[18-30]: 接死为0 */
        unsigned int  reserved_3: 1;  /* bit[31]   : The Performance Monitor Counter Group Stream Match registers, PMCGSMRn,
                                                     specify the StreamID-based filtering of events counted in a counter group. */
    } reg;
} SOC_SMMU500_NS_PMCGSMR0_UNION;
#endif
#define SOC_SMMU500_NS_PMCGSMR0_id_START        (0)
#define SOC_SMMU500_NS_PMCGSMR0_id_END          (1)
#define SOC_SMMU500_NS_PMCGSMR0_mask_START      (16)
#define SOC_SMMU500_NS_PMCGSMR0_mask_END        (17)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMCNTENSET_UNION
 结构说明  : PMCNTENSET 寄存器结构定义。地址偏移量:0x3C00，初值:0x00000000，宽度:32
 寄存器说明: 性能计数器使能设置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: The Performance Monitor Counter Enable Set Register, PMCNTENSET is used
                                                    to set the bits from the Counter Enable Register, CNTENR. */
    } reg;
} SOC_SMMU500_NS_PMCNTENSET_UNION;
#endif
#define SOC_SMMU500_NS_PMCNTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_PMCNTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMCNTENCLR_UNION
 结构说明  : PMCNTENCLR 寄存器结构定义。地址偏移量:0x3C20，初值:0x00000000，宽度:32
 寄存器说明: 性能监控计数器使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: The Performance Monitor Counter Enable Clear Register, PMCNTENCLR is
                                                    used to clear the bits, to read the value of the Counter Enable Register, CNTENR. */
    } reg;
} SOC_SMMU500_NS_PMCNTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_PMCNTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_PMCNTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMINTENSET_UNION
 结构说明  : PMINTENSET 寄存器结构定义。地址偏移量:0x3C40，初值:0x00000000，宽度:32
 寄存器说明: 性能监控中断使能设置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: The Performance Monitor Interrupt Enable Set, PMINTENSET is used to set bits
                                                    from the Interrupt Enable Register, INTENR. */
    } reg;
} SOC_SMMU500_NS_PMINTENSET_UNION;
#endif
#define SOC_SMMU500_NS_PMINTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_PMINTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMINTENCLR_UNION
 结构说明  : PMINTENCLR 寄存器结构定义。地址偏移量:0x3C60，初值:0x00000000，宽度:32
 寄存器说明: 性能监控中断使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: The Performance Monitor Interrupt Enable Clear Register, PMINTENCLR, is
                                                    used to clear the bits, to read the value of the Interrupt Enable Register, INTENR. */
    } reg;
} SOC_SMMU500_NS_PMINTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_PMINTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_PMINTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMOVSCLR_UNION
 结构说明  : PMOVSCLR 寄存器结构定义。地址偏移量:0x3C80，初值:0x00000000，宽度:32
 寄存器说明: 性能监控溢出状态清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: Clears the overflow status of the event counters */
    } reg;
} SOC_SMMU500_NS_PMOVSCLR_UNION;
#endif
#define SOC_SMMU500_NS_PMOVSCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_PMOVSCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMOVSSET_UNION
 结构说明  : PMOVSSET 寄存器结构定义。地址偏移量:0x3CC0，初值:0x00000000，宽度:32
 寄存器说明: 性能监控溢出状态设定寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: Sets the state of the overflow bit for each of the
                                                    implemented event counters. */
    } reg;
} SOC_SMMU500_NS_PMOVSSET_UNION;
#endif
#define SOC_SMMU500_NS_PMOVSSET_enableset_START  (0)
#define SOC_SMMU500_NS_PMOVSSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMCFGR_UNION
 结构说明  : PMCFGR 寄存器结构定义。地址偏移量:0x3E00，初值:0x01011F03，宽度:32
 寄存器说明: 性能监控配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  n        : 8;  /* bit[0-7]  : Enable. The possible values of this bit are:
                                                    0 All counters, including PMCCNTR, are disabled.
                                                    1 All counters are enabled.
                                                    Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  reserved_0: 3;  /* bit[8-10] : Enable. The possible values of this bit are:
                                                     0 All counters, including PMCCNTR, are disabled.
                                                     1 All counters are enabled.
                                                     Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  size     : 2;  /* bit[11-12]: Enable. The possible values of this bit are:
                                                    0 All counters, including PMCCNTR, are disabled.
                                                    1 All counters are enabled.
                                                    Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  reserved_1: 1;  /* bit[13]   : Enable. The possible values of this bit are:
                                                     0 All counters, including PMCCNTR, are disabled.
                                                     1 All counters are enabled.
                                                     Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  cc       : 1;  /* bit[14]   : Enable. The possible values of this bit are:
                                                    0 All counters, including PMCCNTR, are disabled.
                                                    1 All counters are enabled.
                                                    Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  ccd      : 1;  /* bit[15]   : Enable. The possible values of this bit are:
                                                    0 All counters, including PMCCNTR, are disabled.
                                                    1 All counters are enabled.
                                                    Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  ex       : 1;  /* bit[16]   : Enable. The possible values of this bit are:
                                                    0 All counters, including PMCCNTR, are disabled.
                                                    1 All counters are enabled.
                                                    Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  na       : 1;  /* bit[17]   : Event Counter Reset. This is a WO bit. The effects of writing to this
                                                    bit are:
                                                    0 No action.
                                                    1 Reset all event counters to 0. If the cycle counter is
                                                    implemented, the cycle counter is not reset. */
        unsigned int  wt       : 1;  /* bit[18]   :  */
        unsigned int  uen      : 1;  /* bit[19]   : Export enable. The possible values of this bit are:
                                                    0 Export of events is disabled.
                                                    1 Export of events is enabled. */
        unsigned int  reserved_2: 4;  /* bit[20-23]:  */
        unsigned int  ncg      : 8;  /* bit[24-31]: Performance Monitor Configuration Register */
    } reg;
} SOC_SMMU500_NS_PMCFGR_UNION;
#endif
#define SOC_SMMU500_NS_PMCFGR_n_START         (0)
#define SOC_SMMU500_NS_PMCFGR_n_END           (7)
#define SOC_SMMU500_NS_PMCFGR_size_START      (11)
#define SOC_SMMU500_NS_PMCFGR_size_END        (12)
#define SOC_SMMU500_NS_PMCFGR_cc_START        (14)
#define SOC_SMMU500_NS_PMCFGR_cc_END          (14)
#define SOC_SMMU500_NS_PMCFGR_ccd_START       (15)
#define SOC_SMMU500_NS_PMCFGR_ccd_END         (15)
#define SOC_SMMU500_NS_PMCFGR_ex_START        (16)
#define SOC_SMMU500_NS_PMCFGR_ex_END          (16)
#define SOC_SMMU500_NS_PMCFGR_na_START        (17)
#define SOC_SMMU500_NS_PMCFGR_na_END          (17)
#define SOC_SMMU500_NS_PMCFGR_wt_START        (18)
#define SOC_SMMU500_NS_PMCFGR_wt_END          (18)
#define SOC_SMMU500_NS_PMCFGR_uen_START       (19)
#define SOC_SMMU500_NS_PMCFGR_uen_END         (19)
#define SOC_SMMU500_NS_PMCFGR_ncg_START       (24)
#define SOC_SMMU500_NS_PMCFGR_ncg_END         (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMCR_UNION
 结构说明  : PMCR 寄存器结构定义。地址偏移量:0x3E04，初值:0x00000000，宽度:32
 寄存器说明: 性能监控控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  e        : 1;  /* bit[0]   : Enable. The possible values of this bit are:
                                                   0 All counters, including PMCCNTR, are disabled.
                                                   1 All counters are enabled.
                                                   Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  p        : 1;  /* bit[1]   : Event Counter Reset. This is a WO bit. The effects of writing to this
                                                   bit are:
                                                   0 No action.
                                                   1 Reset all event counters to 0. If the cycle counter is
                                                   implemented, the cycle counter is not reset. */
        unsigned int  reserved_0: 2;  /* bit[2-3] :  */
        unsigned int  x        : 1;  /* bit[4]   : Export enable. The possible values of this bit are:
                                                   0 Export of events is disabled.
                                                   1 Export of events is enabled. */
        unsigned int  reserved_1: 3;  /* bit[5-7] :  */
        unsigned int  reserved_2: 24; /* bit[8-31]: Performance Monitor Control Register */
    } reg;
} SOC_SMMU500_NS_PMCR_UNION;
#endif
#define SOC_SMMU500_NS_PMCR_e_START         (0)
#define SOC_SMMU500_NS_PMCR_e_END           (0)
#define SOC_SMMU500_NS_PMCR_p_START         (1)
#define SOC_SMMU500_NS_PMCR_p_END           (1)
#define SOC_SMMU500_NS_PMCR_x_START         (4)
#define SOC_SMMU500_NS_PMCR_x_END           (4)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMCEID0_UNION
 结构说明  : PMCEID0 寄存器结构定义。地址偏移量:0x3E20，初值:0x000000FF，宽度:32
 寄存器说明: 性能监控一般事件标示寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmceid0 : 32; /* bit[0-31]: NS read only */
    } reg;
} SOC_SMMU500_NS_PMCEID0_UNION;
#endif
#define SOC_SMMU500_NS_PMCEID0_pmceid0_START  (0)
#define SOC_SMMU500_NS_PMCEID0_pmceid0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMAUTHSTATUS_UNION
 结构说明  : PMAUTHSTATUS 寄存器结构定义。地址偏移量:0x3FB8，初值:0x00000030，宽度:32
 寄存器说明: 性能监控鉴定状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmauthstatus : 32; /* bit[0-31]: NS read only */
    } reg;
} SOC_SMMU500_NS_PMAUTHSTATUS_UNION;
#endif
#define SOC_SMMU500_NS_PMAUTHSTATUS_pmauthstatus_START  (0)
#define SOC_SMMU500_NS_PMAUTHSTATUS_pmauthstatus_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PMDEVTYPE_UNION
 结构说明  : PMDEVTYPE 寄存器结构定义。地址偏移量:0x3FCC，初值:0x00000046，宽度:32
 寄存器说明: 性能监控设备类型寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmdevtype : 32; /* bit[0-31]:  */
    } reg;
} SOC_SMMU500_NS_PMDEVTYPE_UNION;
#endif
#define SOC_SMMU500_NS_PMDEVTYPE_pmdevtype_START  (0)
#define SOC_SMMU500_NS_PMDEVTYPE_pmdevtype_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PERIPHID4_UNION
 结构说明  : PERIPHID4 寄存器结构定义。地址偏移量:0xFFD0，初值:0x00000044，宽度:32
 寄存器说明: 设备ID4寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  code     : 4;  /* bit[0-3] : JEP106 continuation code */
        unsigned int  count    : 4;  /* bit[4-7] : 4KB Count */
        unsigned int  reserved : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_PERIPHID4_UNION;
#endif
#define SOC_SMMU500_NS_PERIPHID4_code_START      (0)
#define SOC_SMMU500_NS_PERIPHID4_code_END        (3)
#define SOC_SMMU500_NS_PERIPHID4_count_START     (4)
#define SOC_SMMU500_NS_PERIPHID4_count_END       (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PERIPHID5_UNION
 结构说明  : PERIPHID5 寄存器结构定义。地址偏移量:0xFFD4，初值:0x00000000，宽度:32
 寄存器说明: 设备ID5寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_PERIPHID5_UNION;
#endif


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PERIPHID6_UNION
 结构说明  : PERIPHID6 寄存器结构定义。地址偏移量:0xFFD8，初值:0x00000000，宽度:32
 寄存器说明: 设备ID6寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_PERIPHID6_UNION;
#endif


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PERIPHID7_UNION
 结构说明  : PERIPHID7 寄存器结构定义。地址偏移量:0xFFDC，初值:0x00000000，宽度:32
 寄存器说明: 设备ID7寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_PERIPHID7_UNION;
#endif


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PERIPHID0_UNION
 结构说明  : PERIPHID0 寄存器结构定义。地址偏移量:0xFFE0，初值:0x00000080，宽度:32
 寄存器说明: 设备ID0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  partnumber0 : 8;  /* bit[0-7] : Middle and lower-packed BCD value of Device number [7:0] */
        unsigned int  reserved    : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_PERIPHID0_UNION;
#endif
#define SOC_SMMU500_NS_PERIPHID0_partnumber0_START  (0)
#define SOC_SMMU500_NS_PERIPHID0_partnumber0_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PERIPHID1_UNION
 结构说明  : PERIPHID1 寄存器结构定义。地址偏移量:0xFFE4，初值:0x000000B4，宽度:32
 寄存器说明: 设备ID1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  partnumber1        : 4;  /* bit[0-3] : Upper packed-BCD value of Device number [11:8] */
        unsigned int  jep106identitycode : 4;  /* bit[4-7] : JEP106 identity code */
        unsigned int  reserved           : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_PERIPHID1_UNION;
#endif
#define SOC_SMMU500_NS_PERIPHID1_partnumber1_START         (0)
#define SOC_SMMU500_NS_PERIPHID1_partnumber1_END           (3)
#define SOC_SMMU500_NS_PERIPHID1_jep106identitycode_START  (4)
#define SOC_SMMU500_NS_PERIPHID1_jep106identitycode_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PERIPHID2_UNION
 结构说明  : PERIPHID2 寄存器结构定义。地址偏移量:0xFFE8，初值:0x0000000B，宽度:32
 寄存器说明: 设备ID2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  jep106identitycode : 3;  /* bit[0-2] : JEP106 identity code [6:4] */
        unsigned int  jedec              : 1;  /* bit[3]   : Always set, indicates that a JEDEC assigned value is used. */
        unsigned int  revision           : 4;  /* bit[4-7] : Revision number of Peripheral. It starts from 0x0. */
        unsigned int  reserved           : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_PERIPHID2_UNION;
#endif
#define SOC_SMMU500_NS_PERIPHID2_jep106identitycode_START  (0)
#define SOC_SMMU500_NS_PERIPHID2_jep106identitycode_END    (2)
#define SOC_SMMU500_NS_PERIPHID2_jedec_START               (3)
#define SOC_SMMU500_NS_PERIPHID2_jedec_END                 (3)
#define SOC_SMMU500_NS_PERIPHID2_revision_START            (4)
#define SOC_SMMU500_NS_PERIPHID2_revision_END              (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_PERIPHID3_UNION
 结构说明  : PERIPHID3 寄存器结构定义。地址偏移量:0xFFEC，初值:0x00000000，宽度:32
 寄存器说明: 设备ID3寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  customermodified : 4;  /* bit[0-3] : Customer modified number. It must be 0x0 from ARM. */
        unsigned int  revand           : 4;  /* bit[4-7] : RevAnds at top-level. */
        unsigned int  reserved         : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_PERIPHID3_UNION;
#endif
#define SOC_SMMU500_NS_PERIPHID3_customermodified_START  (0)
#define SOC_SMMU500_NS_PERIPHID3_customermodified_END    (3)
#define SOC_SMMU500_NS_PERIPHID3_revand_START            (4)
#define SOC_SMMU500_NS_PERIPHID3_revand_END              (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_COMPONENTID0_UNION
 结构说明  : COMPONENTID0 寄存器结构定义。地址偏移量:0xFFF0，初值:0x0000000D，宽度:32
 寄存器说明: 模块ID0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  preamble : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_COMPONENTID0_UNION;
#endif
#define SOC_SMMU500_NS_COMPONENTID0_preamble_START  (0)
#define SOC_SMMU500_NS_COMPONENTID0_preamble_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_COMPONENTID1_UNION
 结构说明  : COMPONENTID1 寄存器结构定义。地址偏移量:0xFFF4，初值:0x000000F0，宽度:32
 寄存器说明: 模块ID1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  preamble : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_COMPONENTID1_UNION;
#endif
#define SOC_SMMU500_NS_COMPONENTID1_preamble_START  (0)
#define SOC_SMMU500_NS_COMPONENTID1_preamble_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_COMPONENTID2_UNION
 结构说明  : COMPONENTID2 寄存器结构定义。地址偏移量:0xFFF8，初值:0x00000005，宽度:32
 寄存器说明: 模块ID2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  preamble : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_COMPONENTID2_UNION;
#endif
#define SOC_SMMU500_NS_COMPONENTID2_preamble_START  (0)
#define SOC_SMMU500_NS_COMPONENTID2_preamble_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_COMPONENTID3_UNION
 结构说明  : COMPONENTID3 寄存器结构定义。地址偏移量:0xFFFC，初值:0x000000B1，宽度:32
 寄存器说明: 模块ID3寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  preamble : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_COMPONENTID3_UNION;
#endif
#define SOC_SMMU500_NS_COMPONENTID3_preamble_START  (0)
#define SOC_SMMU500_NS_COMPONENTID3_preamble_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_SCTLR_UNION
 结构说明  : SMMU_CB0_SCTLR 寄存器结构定义。地址偏移量:0x8000，初值:0x00000106，宽度:32
 寄存器说明: CB0系统控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m        : 1;  /* bit[0]    : MMU Enable. This is a global enable bit for the involved Translation context bank. The
                                                    possible values of this bit are:
                                                    0 MMU behavior for this Translation context bank is disabled.
                                                    1 MMU behavior for this Translation context bank is enabled. */
        unsigned int  tre      : 1;  /* bit[1]    : TEX Remap Enable.(固定为1) This bit is UNK/SBOP. */
        unsigned int  afe      : 1;  /* bit[2]    : Access Flag Enable.(固定为1) This bit is UNK/SBOP. */
        unsigned int  affd     : 1;  /* bit[3]    : Access Flag Fault Disable.(复位值为不定态) This field determines whether access flag faults are reported
                                                    if they are raised. The possible values of this bit are:
                                                    0 Access flag faults are reported
                                                    1 Access flag faults are not reported */
        unsigned int  e        : 1;  /* bit[4]    : Endianess.(复位值为不定态) This field indicates the endianess format of translation table entries. The
                                                    possible values of this bit are:
                                                    0 Little Endian format
                                                    1 Big Endian format */
        unsigned int  cfre     : 1;  /* bit[5]    : Context Fault Report Enable. The possible values of this bit are:
                                                    0 Do not return an abort when a Context fault occurs.
                                                    1 Return an abort when a Context fault occurs. */
        unsigned int  cfie     : 1;  /* bit[6]    : Context Fault Interrupt Enable. The possible values of this bit are:
                                                    0 Do not raise an interrupt when a Context fault occurs.
                                                    1 Raise an interrupt when a Context fault occurs.
                                                    This field resets to the value 0. */
        unsigned int  cfcfg    : 1;  /* bit[7]    : Context Fault Configuration. The possible values of this bit are:
                                                    0 Terminate(固定为0) */
        unsigned int  hupcf    : 1;  /* bit[8]    : Hit Under Previous Context Fault. The possible values of this Hit-under-fault bit are:
                                                    0 Stall or terminate subsequent transactions in the presence of an
                                                    outstanding context fault.
                                                    1 Process subsequent transactions independent of an outstanding context fault. */
        unsigned int  reserved_0: 4;  /* bit[9-12] :  */
        unsigned int  reserved_1: 1;  /* bit[13]   :  */
        unsigned int  bsu      : 2;  /* bit[14-15]: Barrier Shareability Upgrade. This field upgrades the required shareability domain of
                                                    barriers issued by client devices mapped to this Stream mapping register group by setting
                                                    the minimum shareability domain that is applied to any barrier.
                                                    The encoding of this field is:
                                                    0b00 No effect.
                                                    0b01 Inner Shareable.
                                                    0b10 Outer Shareable.
                                                    0b11 Full system. */
        unsigned int  memattr  : 4;  /* bit[16-19]: Memory Attribute(复位值为不定态)
                                                    The memory attributes are permitted to be overlaid if SMMU_CBn_SCTLR.M has the
                                                    value 0. */
        unsigned int  reserved_2: 1;  /* bit[20]   :  */
        unsigned int  fb       : 1;  /* bit[21]   : Force Broadcast. (复位值为不定态)This field forces the Broadcast of TLB maintenance, BPIALL and
                                                    ICIALLU operations. */
        unsigned int  shcfg    : 2;  /* bit[22-23]: Shared Configuration.(复位值为不定态) Controls the shareable attributes for transactions where the
                                                    context bank is disabled. The encoding of this field is:
                                                    00 Use shareable attribute as presented with transaction.
                                                    01 Outer Shareable.
                                                    10 Inner Shareable.
                                                    11 Non-shareable.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0. */
        unsigned int  racfg    : 2;  /* bit[24-25]: Read Allocate Configuration. (复位值为不定态)Controls the allocation hint for read transactions where the
                                                    context bank is disabled. The encoding of this field is:
                                                    00 Use the default allocation attributes.
                                                    01 RESERVED.
                                                    10 Read-Allocate.
                                                    11 No Read-Allocate.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0. */
        unsigned int  wacfg    : 2;  /* bit[26-27]: Write Allocate Configuration.(复位值为不定态) The encoding of this field is:
                                                    00 Use the default allocateion attributes.
                                                    01 RESERVED.
                                                    10 Write-Allocate.
                                                    11 No Write-Allocate.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0 . */
        unsigned int  reserved_3: 4;  /* bit[28-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_SCTLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_m_START         (0)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_m_END           (0)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_tre_START       (1)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_tre_END         (1)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_afe_START       (2)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_afe_END         (2)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_affd_START      (3)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_affd_END        (3)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_e_START         (4)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_e_END           (4)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_cfre_START      (5)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_cfre_END        (5)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_cfie_START      (6)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_cfie_END        (6)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_cfcfg_START     (7)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_cfcfg_END       (7)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_hupcf_START     (8)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_hupcf_END       (8)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_bsu_START       (14)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_bsu_END         (15)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_memattr_START   (16)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_memattr_END     (19)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_fb_START        (21)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_fb_END          (21)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_shcfg_START     (22)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_shcfg_END       (23)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_racfg_START     (24)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_racfg_END       (25)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_wacfg_START     (26)
#define SOC_SMMU500_NS_SMMU_CB0_SCTLR_wacfg_END       (27)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_TTBR0_LOW_UNION
 结构说明  : SMMU_CB0_TTBR0_LOW 寄存器结构定义。地址偏移量:0x8020，初值:0x00000000，宽度:32
 寄存器说明: CB0页表基地址低位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  translationtablebaseregister_low : 32; /* bit[0-31]: hold the base address of translation tables */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_TTBR0_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_TTBR0_LOW_translationtablebaseregister_low_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_TTBR0_LOW_translationtablebaseregister_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_TTBR0_HIGH_UNION
 结构说明  : SMMU_CB0_TTBR0_HIGH 寄存器结构定义。地址偏移量:0x8024，初值:0x00000000，宽度:32
 寄存器说明: CB0页表基地址高位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  translationtablebaseregister_high : 8;  /* bit[0-7] : hold the base address of translation tables */
        unsigned int  reserved                          : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_TTBR0_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_TTBR0_HIGH_translationtablebaseregister_high_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_TTBR0_HIGH_translationtablebaseregister_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_TTBCR_UNION
 结构说明  : SMMU_CB0_TTBCR 寄存器结构定义。地址偏移量:0x8030，初值:0x80000000，宽度:32
 寄存器说明: CB0页表基地址控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  t0sz     : 4;  /* bit[0-3]  : The Size offset of the SMMU_CBn_TTBR0 addressed region, encoded as a 4 bits signed number
                                                    giving the size of the region as 232-T0SZ.(复位值为不定态) */
        unsigned int  s        : 1;  /* bit[4]    : This bit must be programmed to T0SZ[3], or the effect is UNPREDICTABLE.
                                                    This bit is a sign extension of the T0SZ field, and is allocated this way for future compatibility for
                                                    translation table systems with a larger input address.(复位值为不定态) */
        unsigned int  reserved_0: 1;  /* bit[5]    :  */
        unsigned int  sl0      : 2;  /* bit[6-7]  : Starting Level for SMMU_CBn_TTBR0 addressed region. (复位值为不定态)The encoding of this field is:
                                                    0 Level 2.
                                                    1 Level 1.
                                                    2 UNPREDICTABLE.
                                                    3 UNPREDICTABLE. */
        unsigned int  irgn0    : 2;  /* bit[8-9]  : Inner cacheability attributes for the memory associated with the translation table walks using
                                                    SMMU_CBn_TTBR0.(复位值为不定态) */
        unsigned int  orgn0    : 2;  /* bit[10-11]: Outer cacheability attributes for the memory associated with the translation table walks using
                                                    SMMU_CBn_TTBR0.(复位值为不定态) */
        unsigned int  sh0      : 2;  /* bit[12-13]: Sharebility attributes for the memory associated with the translation table walks using TTBR0.(复位值为不定态) */
        unsigned int  reserved_1: 17; /* bit[14-30]:  */
        unsigned int  eae      : 1;  /* bit[31]   : Extended Address Enable.(固定为1)
                                                    This field always reads as the value 1. Writes are ignored.
                                                    A value of 1 means use the translation system defined in the LPAE. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_TTBCR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_t0sz_START      (0)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_t0sz_END        (3)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_s_START         (4)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_s_END           (4)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_sl0_START       (6)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_sl0_END         (7)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_irgn0_START     (8)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_irgn0_END       (9)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_orgn0_START     (10)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_orgn0_END       (11)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_sh0_START       (12)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_sh0_END         (13)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_eae_START       (31)
#define SOC_SMMU500_NS_SMMU_CB0_TTBCR_eae_END         (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_FSR_UNION
 结构说明  : SMMU_CB0_FSR 寄存器结构定义。地址偏移量:0x8058，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 Fault状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 1;  /* bit[0]   : RESERVED */
        unsigned int  tf       : 1;  /* bit[1]   : Translation Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Translation Fault condition – invalid mapping for address
                                                   being accessed. */
        unsigned int  aff      : 1;  /* bit[2]   : Access Flag Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to Access Flag set for address being
                                                   accessed. */
        unsigned int  pf       : 1;  /* bit[3]   : Permission Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to insufficient access permissions to complete
                                                   access. */
        unsigned int  ef       : 1;  /* bit[4]   : External Fault
                                                   0 = Fault condition does not apply.
                                                   1 = External Fault Condition. */
        unsigned int  tlbmcf   : 1;  /* bit[5]   : TLB Match Conflict Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to multiple matches detected in TLB. */
        unsigned int  tlblkf   : 1;  /* bit[6]   : TLB Lock Fault
                                                   0 = Fault condition does not apply.
                                                   1 = TLB Lock Fault Condition. */
        unsigned int  reserved_1: 23; /* bit[7-29]: RESERVED */
        unsigned int  ss       : 1;  /* bit[30]  : Stalled Status. Indicates whether or not the System MMU is
                                                   currently stalled due to an exception within this context
                                                   bank.（接死为0） */
        unsigned int  multi    : 1;  /* bit[31]  : Multiple Faults. Indicates that an additional context fault
                                                   occurred while SMMU_CBn_FSR was non-zero. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_FSR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_FSR_tf_START        (1)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_tf_END          (1)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_aff_START       (2)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_aff_END         (2)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_pf_START        (3)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_pf_END          (3)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_ef_START        (4)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_ef_END          (4)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_tlbmcf_START    (5)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_tlbmcf_END      (5)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_tlblkf_START    (6)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_tlblkf_END      (6)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_ss_START        (30)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_ss_END          (30)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_multi_START     (31)
#define SOC_SMMU500_NS_SMMU_CB0_FSR_multi_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_FSRRESTORE_UNION
 结构说明  : SMMU_CB0_FSRRESTORE 寄存器结构定义。地址偏移量:0x805C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 Fault状态恢复寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_cb0_fsrrestore : 32; /* bit[0-31]: used to restore the contents of
                                                              SMMU_CBn_FSR. The register is 32 bits in size and is WRITE ONLY. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_FSRRESTORE_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_FSRRESTORE_smmu_cb0_fsrrestore_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_FSRRESTORE_smmu_cb0_fsrrestore_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_FAR_LOW_UNION
 结构说明  : SMMU_CB0_FAR_LOW 寄存器结构定义。地址偏移量:0x8060，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 Fault地址低位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_low : 32; /* bit[0-31]: holds the input address of the access that caused a
                                                    synchronous abort exception. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_FAR_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_FAR_LOW_faddr_low_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_FAR_LOW_faddr_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_FAR_HIGH_UNION
 结构说明  : SMMU_CB0_FAR_HIGH 寄存器结构定义。地址偏移量:0x8064，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 Fault地址高位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_high : 8;  /* bit[0-7] : holds the input address of the access that caused a
                                                     synchronous abort exception. */
        unsigned int  reserved   : 24; /* bit[8-31]: RESERVED */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_FAR_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_FAR_HIGH_faddr_high_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_FAR_HIGH_faddr_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_FSYNR0_UNION
 结构说明  : SMMU_CB0_FSYNR0 寄存器结构定义。地址偏移量:0x8068，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 Fault综合寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  plvl     : 2;  /* bit[0-1]  :  */
        unsigned int  reserved_0: 2;  /* bit[2-3]  :  */
        unsigned int  wnr      : 1;  /* bit[4]    :  */
        unsigned int  pnu      : 1;  /* bit[5]    :  */
        unsigned int  ind      : 1;  /* bit[6]    :  */
        unsigned int  nsstate  : 1;  /* bit[7]    :  */
        unsigned int  nsattr   : 1;  /* bit[8]    :  */
        unsigned int  atof     : 1;  /* bit[9]    : 接死为0 */
        unsigned int  ptwf     : 1;  /* bit[10]   :  */
        unsigned int  afr      : 1;  /* bit[11]   :  */
        unsigned int  reserved_1: 20; /* bit[12-31]: hold fault syndrome
                                                     information of the access that caused a synchronous abort exception */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_FSYNR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_plvl_START      (0)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_plvl_END        (1)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_wnr_START       (4)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_wnr_END         (4)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_pnu_START       (5)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_pnu_END         (5)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_ind_START       (6)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_ind_END         (6)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_nsstate_START   (7)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_nsstate_END     (7)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_nsattr_START    (8)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_nsattr_END      (8)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_atof_START      (9)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_atof_END        (9)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_ptwf_START      (10)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_ptwf_END        (10)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_afr_START       (11)
#define SOC_SMMU500_NS_SMMU_CB0_FSYNR0_afr_END         (11)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR0_UNION
 结构说明  : SMMU_CB0_PMXEVCNTR0 寄存器结构定义。地址偏移量:0x8E00，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控事件计数0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr0 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR0_evcntr0_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR0_evcntr0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR1_UNION
 结构说明  : SMMU_CB0_PMXEVCNTR1 寄存器结构定义。地址偏移量:0x8E04，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控事件计数1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr1 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR1_evcntr1_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR1_evcntr1_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR2_UNION
 结构说明  : SMMU_CB0_PMXEVCNTR2 寄存器结构定义。地址偏移量:0x8E08，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控事件计数2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr2 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR2_evcntr2_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVCNTR2_evcntr2_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_UNION
 结构说明  : SMMU_CB0_PMXEVTYPER0 寄存器结构定义。地址偏移量:0x8E80，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控事件类型选择0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER0_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_UNION
 结构说明  : SMMU_CB0_PMXEVTYPER1 寄存器结构定义。地址偏移量:0x8E84，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控事件类型选择1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER1_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_UNION
 结构说明  : SMMU_CB0_PMXEVTYPER2 寄存器结构定义。地址偏移量:0x8E88，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控事件类型选择2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB0_PMXEVTYPER2_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMCFGR_UNION
 结构说明  : SMMU_CB0_PMCFGR 寄存器结构定义。地址偏移量:0x8F00，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cb0_pmcfgr : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMCFGR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMCFGR_cb0_pmcfgr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMCFGR_cb0_pmcfgr_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMCR_UNION
 结构说明  : SMMU_CB0_PMCR 寄存器结构定义。地址偏移量:0x8F04，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  e        : 1;  /* bit[0]   : Enable. The possible values of this bit are:
                                                   0 All counters, including PMCCNTR, are disabled.
                                                   1 All counters are enabled.
                                                   Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  p        : 1;  /* bit[1]   : Event Counter Reset. This is a WO bit. The effects of writing to this
                                                   bit are:
                                                   0 No action.
                                                   1 Reset all event counters to 0. If the cycle counter is
                                                   implemented, the cycle counter is not reset. */
        unsigned int  reserved_0: 2;  /* bit[2-3] :  */
        unsigned int  x        : 1;  /* bit[4]   : Export enable. The possible values of this bit are:
                                                   0 Export of events is disabled.
                                                   1 Export of events is enabled. */
        unsigned int  reserved_1: 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMCR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMCR_e_START         (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMCR_e_END           (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMCR_p_START         (1)
#define SOC_SMMU500_NS_SMMU_CB0_PMCR_p_END           (1)
#define SOC_SMMU500_NS_SMMU_CB0_PMCR_x_START         (4)
#define SOC_SMMU500_NS_SMMU_CB0_PMCR_x_END           (4)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMCEID0_UNION
 结构说明  : SMMU_CB0_PMCEID0 寄存器结构定义。地址偏移量:0x8F20，初值:0x000000FF，宽度:32
 寄存器说明: Context Bank 0 性能监控common event ID寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmceid0 : 32; /* bit[0-31]: provides the equivalent of the PMCEID0 registers within the register
                                                  map of a Translation Context Bank. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMCEID0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMCEID0_pmceid0_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMCEID0_pmceid0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMCNTENSET_UNION
 结构说明  : SMMU_CB0_PMCNTENSET 寄存器结构定义。地址偏移量:0x8F40，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控计数器使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMCNTENSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMCNTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMCNTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMCNTENCLR_UNION
 结构说明  : SMMU_CB0_PMCNTENCLR 寄存器结构定义。地址偏移量:0x8F44，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控计数器使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMCNTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMCNTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMCNTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMINTENSET_UNION
 结构说明  : SMMU_CB0_PMINTENSET 寄存器结构定义。地址偏移量:0x8F48，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控中断使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMINTENSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMINTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMINTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMINTENCLR_UNION
 结构说明  : SMMU_CB0_PMINTENCLR 寄存器结构定义。地址偏移量:0x8F4C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控中断使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMINTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMINTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMINTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMOVSRCLR_UNION
 结构说明  : SMMU_CB0_PMOVSRCLR 寄存器结构定义。地址偏移量:0x8F50，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控溢出状态清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMOVSRCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMOVSRCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMOVSRCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMOVSRSET_UNION
 结构说明  : SMMU_CB0_PMOVSRSET 寄存器结构定义。地址偏移量:0x8F58，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 0 性能监控溢出状态设定寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMOVSRSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMOVSRSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMOVSRSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB0_PMAUTHSTATUS_UNION
 结构说明  : SMMU_CB0_PMAUTHSTATUS 寄存器结构定义。地址偏移量:0x8FB8，初值:0x00000030，宽度:32
 寄存器说明: Context Bank 0 性能监控授权状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmauthstatus : 32; /* bit[0-31]: NS read only */
    } reg;
} SOC_SMMU500_NS_SMMU_CB0_PMAUTHSTATUS_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB0_PMAUTHSTATUS_pmauthstatus_START  (0)
#define SOC_SMMU500_NS_SMMU_CB0_PMAUTHSTATUS_pmauthstatus_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_SCTLR_UNION
 结构说明  : SMMU_CB1_SCTLR 寄存器结构定义。地址偏移量:0x9000，初值:0x00000106，宽度:32
 寄存器说明: Context Bank 1 系统控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m        : 1;  /* bit[0]    : MMU Enable. This is a global enable bit for the involved Translation context bank. The
                                                    possible values of this bit are:
                                                    0 MMU behavior for this Translation context bank is disabled.
                                                    1 MMU behavior for this Translation context bank is enabled. */
        unsigned int  tre      : 1;  /* bit[1]    : TEX Remap Enable.(固定为1) This bit is UNK/SBOP. */
        unsigned int  afe      : 1;  /* bit[2]    : Access Flag Enable.(固定为1) This bit is UNK/SBOP. */
        unsigned int  affd     : 1;  /* bit[3]    : Access Flag Fault Disable.(复位值为不定态) This field determines whether access flag faults are reported
                                                    if they are raised. The possible values of this bit are:
                                                    0 Access flag faults are reported
                                                    1 Access flag faults are not reported */
        unsigned int  e        : 1;  /* bit[4]    : Endianess.(复位值为不定态) This field indicates the endianess format of translation table entries. The
                                                    possible values of this bit are:
                                                    0 Little Endian format
                                                    1 Big Endian format */
        unsigned int  cfre     : 1;  /* bit[5]    : Context Fault Report Enable. The possible values of this bit are:
                                                    0 Do not return an abort when a Context fault occurs.
                                                    1 Return an abort when a Context fault occurs. */
        unsigned int  cfie     : 1;  /* bit[6]    : Context Fault Interrupt Enable. The possible values of this bit are:
                                                    0 Do not raise an interrupt when a Context fault occurs.
                                                    1 Raise an interrupt when a Context fault occurs.
                                                    This field resets to the value 0. */
        unsigned int  cfcfg    : 1;  /* bit[7]    : Context Fault Configuration. The possible values of this bit are:
                                                    0 Terminate(固定为0) */
        unsigned int  hupcf    : 1;  /* bit[8]    : Hit Under Previous Context Fault. The possible values of this Hit-under-fault bit are:
                                                    0 Stall or terminate subsequent transactions in the presence of an
                                                    outstanding context fault.
                                                    1 Process subsequent transactions independent of an outstanding context fault. */
        unsigned int  reserved_0: 4;  /* bit[9-12] :  */
        unsigned int  reserved_1: 1;  /* bit[13]   :  */
        unsigned int  bsu      : 2;  /* bit[14-15]: Barrier Shareability Upgrade. This field upgrades the required shareability domain of
                                                    barriers issued by client devices mapped to this Stream mapping register group by setting
                                                    the minimum shareability domain that is applied to any barrier.
                                                    The encoding of this field is:
                                                    0b00 No effect.
                                                    0b01 Inner Shareable.
                                                    0b10 Outer Shareable.
                                                    0b11 Full system. */
        unsigned int  memattr  : 4;  /* bit[16-19]: Memory Attribute(复位值为不定态)
                                                    The memory attributes are permitted to be overlaid if SMMU_CBn_SCTLR.M has the
                                                    value 0. */
        unsigned int  reserved_2: 1;  /* bit[20]   :  */
        unsigned int  fb       : 1;  /* bit[21]   : Force Broadcast. (复位值为不定态)This field forces the Broadcast of TLB maintenance, BPIALL and
                                                    ICIALLU operations. */
        unsigned int  shcfg    : 2;  /* bit[22-23]: Shared Configuration.(复位值为不定态) Controls the shareable attributes for transactions where the
                                                    context bank is disabled. The encoding of this field is:
                                                    00 Use shareable attribute as presented with transaction.
                                                    01 Outer Shareable.
                                                    10 Inner Shareable.
                                                    11 Non-shareable.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0. */
        unsigned int  racfg    : 2;  /* bit[24-25]: Read Allocate Configuration. (复位值为不定态)Controls the allocation hint for read transactions where the
                                                    context bank is disabled. The encoding of this field is:
                                                    00 Use the default allocation attributes.
                                                    01 RESERVED.
                                                    10 Read-Allocate.
                                                    11 No Read-Allocate.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0. */
        unsigned int  wacfg    : 2;  /* bit[26-27]: Write Allocate Configuration.(复位值为不定态) The encoding of this field is:
                                                    00 Use the default allocateion attributes.
                                                    01 RESERVED.
                                                    10 Write-Allocate.
                                                    11 No Write-Allocate.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0 . */
        unsigned int  reserved_3: 4;  /* bit[28-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_SCTLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_m_START         (0)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_m_END           (0)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_tre_START       (1)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_tre_END         (1)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_afe_START       (2)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_afe_END         (2)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_affd_START      (3)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_affd_END        (3)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_e_START         (4)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_e_END           (4)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_cfre_START      (5)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_cfre_END        (5)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_cfie_START      (6)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_cfie_END        (6)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_cfcfg_START     (7)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_cfcfg_END       (7)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_hupcf_START     (8)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_hupcf_END       (8)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_bsu_START       (14)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_bsu_END         (15)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_memattr_START   (16)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_memattr_END     (19)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_fb_START        (21)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_fb_END          (21)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_shcfg_START     (22)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_shcfg_END       (23)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_racfg_START     (24)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_racfg_END       (25)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_wacfg_START     (26)
#define SOC_SMMU500_NS_SMMU_CB1_SCTLR_wacfg_END       (27)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_TTBR0_LOW_UNION
 结构说明  : SMMU_CB1_TTBR0_LOW 寄存器结构定义。地址偏移量:0x9020，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 页表基地址低位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  translationtablebaseregister_low : 32; /* bit[0-31]: hold the base address of translation tables */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_TTBR0_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_TTBR0_LOW_translationtablebaseregister_low_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_TTBR0_LOW_translationtablebaseregister_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_TTBR0_HIGH_UNION
 结构说明  : SMMU_CB1_TTBR0_HIGH 寄存器结构定义。地址偏移量:0x9024，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 页表基地址高位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  translationtablebaseregister_high : 8;  /* bit[0-7] : hold the base address of translation tables */
        unsigned int  reserved                          : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_TTBR0_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_TTBR0_HIGH_translationtablebaseregister_high_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_TTBR0_HIGH_translationtablebaseregister_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_TTBCR_UNION
 结构说明  : SMMU_CB1_TTBCR 寄存器结构定义。地址偏移量:0x9030，初值:0x80000000，宽度:32
 寄存器说明: Context Bank 1 页表基地址控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  t0sz     : 4;  /* bit[0-3]  : The Size offset of the SMMU_CBn_TTBR0 addressed region, encoded as a 4 bits signed number
                                                    giving the size of the region as 232-T0SZ.(复位值为不定态) */
        unsigned int  s        : 1;  /* bit[4]    : This bit must be programmed to T0SZ[3], or the effect is UNPREDICTABLE.
                                                    This bit is a sign extension of the T0SZ field, and is allocated this way for future compatibility for
                                                    translation table systems with a larger input address.(复位值为不定态) */
        unsigned int  reserved_0: 1;  /* bit[5]    :  */
        unsigned int  sl0      : 2;  /* bit[6-7]  : Starting Level for SMMU_CBn_TTBR0 addressed region. (复位值为不定态)The encoding of this field is:
                                                    0 Level 2.
                                                    1 Level 1.
                                                    2 UNPREDICTABLE.
                                                    3 UNPREDICTABLE. */
        unsigned int  irgn0    : 2;  /* bit[8-9]  : Inner cacheability attributes for the memory associated with the translation table walks using
                                                    SMMU_CBn_TTBR0.(复位值为不定态) */
        unsigned int  orgn0    : 2;  /* bit[10-11]: Outer cacheability attributes for the memory associated with the translation table walks using
                                                    SMMU_CBn_TTBR0.(复位值为不定态) */
        unsigned int  sh0      : 2;  /* bit[12-13]: Sharebility attributes for the memory associated with the translation table walks using TTBR0.(复位值为不定态) */
        unsigned int  reserved_1: 17; /* bit[14-30]:  */
        unsigned int  eae      : 1;  /* bit[31]   : Extended Address Enable.(固定为1)
                                                    This field always reads as the value 1. Writes are ignored.
                                                    A value of 1 means use the translation system defined in the LPAE. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_TTBCR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_t0sz_START      (0)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_t0sz_END        (3)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_s_START         (4)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_s_END           (4)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_sl0_START       (6)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_sl0_END         (7)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_irgn0_START     (8)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_irgn0_END       (9)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_orgn0_START     (10)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_orgn0_END       (11)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_sh0_START       (12)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_sh0_END         (13)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_eae_START       (31)
#define SOC_SMMU500_NS_SMMU_CB1_TTBCR_eae_END         (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_FSR_UNION
 结构说明  : SMMU_CB1_FSR 寄存器结构定义。地址偏移量:0x9058，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 Fault状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 1;  /* bit[0]   : RESERVED */
        unsigned int  tf       : 1;  /* bit[1]   : Translation Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Translation Fault condition – invalid mapping for address
                                                   being accessed. */
        unsigned int  aff      : 1;  /* bit[2]   : Access Flag Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to Access Flag set for address being
                                                   accessed. */
        unsigned int  pf       : 1;  /* bit[3]   : Permission Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to insufficient access permissions to complete
                                                   access. */
        unsigned int  ef       : 1;  /* bit[4]   : External Fault
                                                   0 = Fault condition does not apply.
                                                   1 = External Fault Condition. */
        unsigned int  tlbmcf   : 1;  /* bit[5]   : TLB Match Conflict Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to multiple matches detected in TLB. */
        unsigned int  tlblkf   : 1;  /* bit[6]   : TLB Lock Fault
                                                   0 = Fault condition does not apply.
                                                   1 = TLB Lock Fault Condition. */
        unsigned int  reserved_1: 23; /* bit[7-29]: RESERVED */
        unsigned int  ss       : 1;  /* bit[30]  : Stalled Status. Indicates whether or not the System MMU is
                                                   currently stalled due to an exception within this context
                                                   bank.（接死为0） */
        unsigned int  multi    : 1;  /* bit[31]  : Multiple Faults. Indicates that an additional context fault
                                                   occurred while SMMU_CBn_FSR was non-zero. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_FSR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_FSR_tf_START        (1)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_tf_END          (1)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_aff_START       (2)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_aff_END         (2)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_pf_START        (3)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_pf_END          (3)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_ef_START        (4)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_ef_END          (4)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_tlbmcf_START    (5)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_tlbmcf_END      (5)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_tlblkf_START    (6)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_tlblkf_END      (6)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_ss_START        (30)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_ss_END          (30)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_multi_START     (31)
#define SOC_SMMU500_NS_SMMU_CB1_FSR_multi_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_FSRRESTORE_UNION
 结构说明  : SMMU_CB1_FSRRESTORE 寄存器结构定义。地址偏移量:0x905C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 Fault状态恢复寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_cb1_fsrrestore : 32; /* bit[0-31]: used to restore the contents of
                                                              SMMU_CBn_FSR. The register is 32 bits in size and is WRITE ONLY. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_FSRRESTORE_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_FSRRESTORE_smmu_cb1_fsrrestore_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_FSRRESTORE_smmu_cb1_fsrrestore_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_FAR_LOW_UNION
 结构说明  : SMMU_CB1_FAR_LOW 寄存器结构定义。地址偏移量:0x9060，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 Fault地址低位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_low : 32; /* bit[0-31]: holds the input address of the access that caused a
                                                    synchronous abort exception. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_FAR_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_FAR_LOW_faddr_low_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_FAR_LOW_faddr_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_FAR_HIGH_UNION
 结构说明  : SMMU_CB1_FAR_HIGH 寄存器结构定义。地址偏移量:0x9064，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 Fault地址高位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_high : 8;  /* bit[0-7] : holds the input address of the access that caused a
                                                     synchronous abort exception. */
        unsigned int  reserved   : 24; /* bit[8-31]: RESERVED */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_FAR_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_FAR_HIGH_faddr_high_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_FAR_HIGH_faddr_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_FSYNR0_UNION
 结构说明  : SMMU_CB1_FSYNR0 寄存器结构定义。地址偏移量:0x9068，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 Fault综合寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  plvl     : 2;  /* bit[0-1]  :  */
        unsigned int  reserved_0: 2;  /* bit[2-3]  :  */
        unsigned int  wnr      : 1;  /* bit[4]    :  */
        unsigned int  pnu      : 1;  /* bit[5]    :  */
        unsigned int  ind      : 1;  /* bit[6]    :  */
        unsigned int  nsstate  : 1;  /* bit[7]    :  */
        unsigned int  nsattr   : 1;  /* bit[8]    :  */
        unsigned int  atof     : 1;  /* bit[9]    : 接死为0 */
        unsigned int  ptwf     : 1;  /* bit[10]   :  */
        unsigned int  afr      : 1;  /* bit[11]   :  */
        unsigned int  reserved_1: 20; /* bit[12-31]: hold fault syndrome
                                                     information of the access that caused a synchronous abort exception */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_FSYNR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_plvl_START      (0)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_plvl_END        (1)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_wnr_START       (4)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_wnr_END         (4)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_pnu_START       (5)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_pnu_END         (5)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_ind_START       (6)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_ind_END         (6)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_nsstate_START   (7)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_nsstate_END     (7)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_nsattr_START    (8)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_nsattr_END      (8)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_atof_START      (9)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_atof_END        (9)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_ptwf_START      (10)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_ptwf_END        (10)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_afr_START       (11)
#define SOC_SMMU500_NS_SMMU_CB1_FSYNR0_afr_END         (11)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR0_UNION
 结构说明  : SMMU_CB1_PMXEVCNTR0 寄存器结构定义。地址偏移量:0x9E00，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控事件计数0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr0 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR0_evcntr0_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR0_evcntr0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR1_UNION
 结构说明  : SMMU_CB1_PMXEVCNTR1 寄存器结构定义。地址偏移量:0x9E04，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控事件计数1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr1 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR1_evcntr1_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR1_evcntr1_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR2_UNION
 结构说明  : SMMU_CB1_PMXEVCNTR2 寄存器结构定义。地址偏移量:0x9E08，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控事件计数2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr2 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR2_evcntr2_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVCNTR2_evcntr2_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_UNION
 结构说明  : SMMU_CB1_PMXEVTYPER0 寄存器结构定义。地址偏移量:0x9E80，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控事件类型选择0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER0_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_UNION
 结构说明  : SMMU_CB1_PMXEVTYPER1 寄存器结构定义。地址偏移量:0x9E84，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控事件类型选择1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER1_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_UNION
 结构说明  : SMMU_CB1_PMXEVTYPER2 寄存器结构定义。地址偏移量:0x9E88，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控事件类型选择2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB1_PMXEVTYPER2_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMCFGR_UNION
 结构说明  : SMMU_CB1_PMCFGR 寄存器结构定义。地址偏移量:0x9F00，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  CB1_pmcfgr : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMCFGR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMCFGR_CB1_pmcfgr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMCFGR_CB1_pmcfgr_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMCR_UNION
 结构说明  : SMMU_CB1_PMCR 寄存器结构定义。地址偏移量:0x9F04，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  e        : 1;  /* bit[0]   : Enable. The possible values of this bit are:
                                                   0 All counters, including PMCCNTR, are disabled.
                                                   1 All counters are enabled.
                                                   Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  p        : 1;  /* bit[1]   : Event Counter Reset. This is a WO bit. The effects of writing to this
                                                   bit are:
                                                   0 No action.
                                                   1 Reset all event counters to 0. If the cycle counter is
                                                   implemented, the cycle counter is not reset. */
        unsigned int  reserved_0: 2;  /* bit[2-3] :  */
        unsigned int  x        : 1;  /* bit[4]   : Export enable. The possible values of this bit are:
                                                   0 Export of events is disabled.
                                                   1 Export of events is enabled. */
        unsigned int  reserved_1: 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMCR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMCR_e_START         (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMCR_e_END           (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMCR_p_START         (1)
#define SOC_SMMU500_NS_SMMU_CB1_PMCR_p_END           (1)
#define SOC_SMMU500_NS_SMMU_CB1_PMCR_x_START         (4)
#define SOC_SMMU500_NS_SMMU_CB1_PMCR_x_END           (4)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMCEID0_UNION
 结构说明  : SMMU_CB1_PMCEID0 寄存器结构定义。地址偏移量:0x9F20，初值:0x000000FF，宽度:32
 寄存器说明: Context Bank 1 性能监控common event ID寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmceid0 : 32; /* bit[0-31]: provides the equivalent of the PMCEID0 registers within the register
                                                  map of a Translation Context Bank. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMCEID0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMCEID0_pmceid0_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMCEID0_pmceid0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMCNTENSET_UNION
 结构说明  : SMMU_CB1_PMCNTENSET 寄存器结构定义。地址偏移量:0x9F40，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控计数器使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMCNTENSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMCNTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMCNTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMCNTENCLR_UNION
 结构说明  : SMMU_CB1_PMCNTENCLR 寄存器结构定义。地址偏移量:0x9F44，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控计数器使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMCNTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMCNTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMCNTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMINTENSET_UNION
 结构说明  : SMMU_CB1_PMINTENSET 寄存器结构定义。地址偏移量:0x9F48，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控中断使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMINTENSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMINTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMINTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMINTENCLR_UNION
 结构说明  : SMMU_CB1_PMINTENCLR 寄存器结构定义。地址偏移量:0x9F4C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控中断使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMINTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMINTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMINTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMOVSRCLR_UNION
 结构说明  : SMMU_CB1_PMOVSRCLR 寄存器结构定义。地址偏移量:0x9F50，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控溢出状态清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMOVSRCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMOVSRCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMOVSRCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMOVSRSET_UNION
 结构说明  : SMMU_CB1_PMOVSRSET 寄存器结构定义。地址偏移量:0x9F58，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 1 性能监控溢出状态设定寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMOVSRSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMOVSRSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMOVSRSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB1_PMAUTHSTATUS_UNION
 结构说明  : SMMU_CB1_PMAUTHSTATUS 寄存器结构定义。地址偏移量:0x9FB8，初值:0x00000030，宽度:32
 寄存器说明: Context Bank 1 性能监控授权状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmauthstatus : 32; /* bit[0-31]: NS read only */
    } reg;
} SOC_SMMU500_NS_SMMU_CB1_PMAUTHSTATUS_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB1_PMAUTHSTATUS_pmauthstatus_START  (0)
#define SOC_SMMU500_NS_SMMU_CB1_PMAUTHSTATUS_pmauthstatus_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_SCTLR_UNION
 结构说明  : SMMU_CB2_SCTLR 寄存器结构定义。地址偏移量:0xA000，初值:0x00000106，宽度:32
 寄存器说明: Context Bank 2 系统控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m        : 1;  /* bit[0]    : MMU Enable. This is a global enable bit for the involved Translation context bank. The
                                                    possible values of this bit are:
                                                    0 MMU behavior for this Translation context bank is disabled.
                                                    1 MMU behavior for this Translation context bank is enabled. */
        unsigned int  tre      : 1;  /* bit[1]    : TEX Remap Enable.(固定为1) This bit is UNK/SBOP. */
        unsigned int  afe      : 1;  /* bit[2]    : Access Flag Enable.(固定为1) This bit is UNK/SBOP. */
        unsigned int  affd     : 1;  /* bit[3]    : Access Flag Fault Disable.(复位值为不定态) This field determines whether access flag faults are reported
                                                    if they are raised. The possible values of this bit are:
                                                    0 Access flag faults are reported
                                                    1 Access flag faults are not reported */
        unsigned int  e        : 1;  /* bit[4]    : Endianess.(复位值为不定态) This field indicates the endianess format of translation table entries. The
                                                    possible values of this bit are:
                                                    0 Little Endian format
                                                    1 Big Endian format */
        unsigned int  cfre     : 1;  /* bit[5]    : Context Fault Report Enable. The possible values of this bit are:
                                                    0 Do not return an abort when a Context fault occurs.
                                                    1 Return an abort when a Context fault occurs. */
        unsigned int  cfie     : 1;  /* bit[6]    : Context Fault Interrupt Enable. The possible values of this bit are:
                                                    0 Do not raise an interrupt when a Context fault occurs.
                                                    1 Raise an interrupt when a Context fault occurs.
                                                    This field resets to the value 0. */
        unsigned int  cfcfg    : 1;  /* bit[7]    : Context Fault Configuration. The possible values of this bit are:
                                                    0 Terminate(固定为0) */
        unsigned int  hupcf    : 1;  /* bit[8]    : Hit Under Previous Context Fault. The possible values of this Hit-under-fault bit are:
                                                    0 Stall or terminate subsequent transactions in the presence of an
                                                    outstanding context fault.
                                                    1 Process subsequent transactions independent of an outstanding context fault. */
        unsigned int  reserved_0: 4;  /* bit[9-12] :  */
        unsigned int  reserved_1: 1;  /* bit[13]   :  */
        unsigned int  bsu      : 2;  /* bit[14-15]: Barrier Shareability Upgrade. This field upgrades the required shareability domain of
                                                    barriers issued by client devices mapped to this Stream mapping register group by setting
                                                    the minimum shareability domain that is applied to any barrier.
                                                    The encoding of this field is:
                                                    0b00 No effect.
                                                    0b01 Inner Shareable.
                                                    0b10 Outer Shareable.
                                                    0b11 Full system. */
        unsigned int  memattr  : 4;  /* bit[16-19]: Memory Attribute(复位值为不定态)
                                                    The memory attributes are permitted to be overlaid if SMMU_CBn_SCTLR.M has the
                                                    value 0. */
        unsigned int  reserved_2: 1;  /* bit[20]   :  */
        unsigned int  fb       : 1;  /* bit[21]   : Force Broadcast. (复位值为不定态)This field forces the Broadcast of TLB maintenance, BPIALL and
                                                    ICIALLU operations. */
        unsigned int  shcfg    : 2;  /* bit[22-23]: Shared Configuration.(复位值为不定态) Controls the shareable attributes for transactions where the
                                                    context bank is disabled. The encoding of this field is:
                                                    00 Use shareable attribute as presented with transaction.
                                                    01 Outer Shareable.
                                                    10 Inner Shareable.
                                                    11 Non-shareable.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0. */
        unsigned int  racfg    : 2;  /* bit[24-25]: Read Allocate Configuration. (复位值为不定态)Controls the allocation hint for read transactions where the
                                                    context bank is disabled. The encoding of this field is:
                                                    00 Use the default allocation attributes.
                                                    01 RESERVED.
                                                    10 Read-Allocate.
                                                    11 No Read-Allocate.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0. */
        unsigned int  wacfg    : 2;  /* bit[26-27]: Write Allocate Configuration.(复位值为不定态) The encoding of this field is:
                                                    00 Use the default allocateion attributes.
                                                    01 RESERVED.
                                                    10 Write-Allocate.
                                                    11 No Write-Allocate.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0 . */
        unsigned int  reserved_3: 4;  /* bit[28-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_SCTLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_m_START         (0)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_m_END           (0)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_tre_START       (1)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_tre_END         (1)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_afe_START       (2)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_afe_END         (2)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_affd_START      (3)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_affd_END        (3)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_e_START         (4)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_e_END           (4)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_cfre_START      (5)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_cfre_END        (5)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_cfie_START      (6)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_cfie_END        (6)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_cfcfg_START     (7)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_cfcfg_END       (7)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_hupcf_START     (8)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_hupcf_END       (8)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_bsu_START       (14)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_bsu_END         (15)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_memattr_START   (16)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_memattr_END     (19)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_fb_START        (21)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_fb_END          (21)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_shcfg_START     (22)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_shcfg_END       (23)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_racfg_START     (24)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_racfg_END       (25)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_wacfg_START     (26)
#define SOC_SMMU500_NS_SMMU_CB2_SCTLR_wacfg_END       (27)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_TTBR0_LOW_UNION
 结构说明  : SMMU_CB2_TTBR0_LOW 寄存器结构定义。地址偏移量:0xA020，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 页表基地址低位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  translationtablebaseregister_low : 32; /* bit[0-31]: hold the base address of translation tables */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_TTBR0_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_TTBR0_LOW_translationtablebaseregister_low_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_TTBR0_LOW_translationtablebaseregister_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_TTBR0_HIGH_UNION
 结构说明  : SMMU_CB2_TTBR0_HIGH 寄存器结构定义。地址偏移量:0xA024，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 页表基地址高位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  translationtablebaseregister_high : 8;  /* bit[0-7] : hold the base address of translation tables */
        unsigned int  reserved                          : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_TTBR0_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_TTBR0_HIGH_translationtablebaseregister_high_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_TTBR0_HIGH_translationtablebaseregister_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_TTBCR_UNION
 结构说明  : SMMU_CB2_TTBCR 寄存器结构定义。地址偏移量:0xA030，初值:0x80000000，宽度:32
 寄存器说明: Context Bank 2 页表基地址控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  t0sz     : 4;  /* bit[0-3]  : The Size offset of the SMMU_CBn_TTBR0 addressed region, encoded as a 4 bits signed number
                                                    giving the size of the region as 232-T0SZ.(复位值为不定态) */
        unsigned int  s        : 1;  /* bit[4]    : This bit must be programmed to T0SZ[3], or the effect is UNPREDICTABLE.
                                                    This bit is a sign extension of the T0SZ field, and is allocated this way for future compatibility for
                                                    translation table systems with a larger input address.(复位值为不定态) */
        unsigned int  reserved_0: 1;  /* bit[5]    :  */
        unsigned int  sl0      : 2;  /* bit[6-7]  : Starting Level for SMMU_CBn_TTBR0 addressed region. (复位值为不定态)The encoding of this field is:
                                                    0 Level 2.
                                                    1 Level 1.
                                                    2 UNPREDICTABLE.
                                                    3 UNPREDICTABLE. */
        unsigned int  irgn0    : 2;  /* bit[8-9]  : Inner cacheability attributes for the memory associated with the translation table walks using
                                                    SMMU_CBn_TTBR0.(复位值为不定态) */
        unsigned int  orgn0    : 2;  /* bit[10-11]: Outer cacheability attributes for the memory associated with the translation table walks using
                                                    SMMU_CBn_TTBR0.(复位值为不定态) */
        unsigned int  sh0      : 2;  /* bit[12-13]: Sharebility attributes for the memory associated with the translation table walks using TTBR0.(复位值为不定态) */
        unsigned int  reserved_1: 17; /* bit[14-30]:  */
        unsigned int  eae      : 1;  /* bit[31]   : Extended Address Enable.(固定为1)
                                                    This field always reads as the value 1. Writes are ignored.
                                                    A value of 1 means use the translation system defined in the LPAE. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_TTBCR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_t0sz_START      (0)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_t0sz_END        (3)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_s_START         (4)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_s_END           (4)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_sl0_START       (6)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_sl0_END         (7)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_irgn0_START     (8)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_irgn0_END       (9)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_orgn0_START     (10)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_orgn0_END       (11)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_sh0_START       (12)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_sh0_END         (13)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_eae_START       (31)
#define SOC_SMMU500_NS_SMMU_CB2_TTBCR_eae_END         (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_FSR_UNION
 结构说明  : SMMU_CB2_FSR 寄存器结构定义。地址偏移量:0xA058，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 Fault状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 1;  /* bit[0]   : RESERVED */
        unsigned int  tf       : 1;  /* bit[1]   : Translation Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Translation Fault condition – invalid mapping for address
                                                   being accessed. */
        unsigned int  aff      : 1;  /* bit[2]   : Access Flag Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to Access Flag set for address being
                                                   accessed. */
        unsigned int  pf       : 1;  /* bit[3]   : Permission Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to insufficient access permissions to complete
                                                   access. */
        unsigned int  ef       : 1;  /* bit[4]   : External Fault
                                                   0 = Fault condition does not apply.
                                                   1 = External Fault Condition. */
        unsigned int  tlbmcf   : 1;  /* bit[5]   : TLB Match Conflict Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to multiple matches detected in TLB. */
        unsigned int  tlblkf   : 1;  /* bit[6]   : TLB Lock Fault
                                                   0 = Fault condition does not apply.
                                                   1 = TLB Lock Fault Condition. */
        unsigned int  reserved_1: 23; /* bit[7-29]: RESERVED */
        unsigned int  ss       : 1;  /* bit[30]  : Stalled Status. Indicates whether or not the System MMU is
                                                   currently stalled due to an exception within this context
                                                   bank.（接死为0） */
        unsigned int  multi    : 1;  /* bit[31]  : Multiple Faults. Indicates that an additional context fault
                                                   occurred while SMMU_CBn_FSR was non-zero. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_FSR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_FSR_tf_START        (1)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_tf_END          (1)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_aff_START       (2)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_aff_END         (2)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_pf_START        (3)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_pf_END          (3)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_ef_START        (4)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_ef_END          (4)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_tlbmcf_START    (5)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_tlbmcf_END      (5)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_tlblkf_START    (6)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_tlblkf_END      (6)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_ss_START        (30)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_ss_END          (30)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_multi_START     (31)
#define SOC_SMMU500_NS_SMMU_CB2_FSR_multi_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_FSRRESTORE_UNION
 结构说明  : SMMU_CB2_FSRRESTORE 寄存器结构定义。地址偏移量:0xA05C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 Fault状态恢复寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_cb2_fsrrestore : 32; /* bit[0-31]: used to restore the contents of
                                                              SMMU_CBn_FSR. The register is 32 bits in size and is WRITE ONLY. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_FSRRESTORE_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_FSRRESTORE_smmu_cb2_fsrrestore_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_FSRRESTORE_smmu_cb2_fsrrestore_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_FAR_LOW_UNION
 结构说明  : SMMU_CB2_FAR_LOW 寄存器结构定义。地址偏移量:0xA060，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 Fault地址低位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_low : 32; /* bit[0-31]: holds the input address of the access that caused a
                                                    synchronous abort exception. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_FAR_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_FAR_LOW_faddr_low_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_FAR_LOW_faddr_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_FAR_HIGH_UNION
 结构说明  : SMMU_CB2_FAR_HIGH 寄存器结构定义。地址偏移量:0xA064，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 Fault地址高位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_high : 8;  /* bit[0-7] : holds the input address of the access that caused a
                                                     synchronous abort exception. */
        unsigned int  reserved   : 24; /* bit[8-31]: RESERVED */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_FAR_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_FAR_HIGH_faddr_high_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_FAR_HIGH_faddr_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_FSYNR0_UNION
 结构说明  : SMMU_CB2_FSYNR0 寄存器结构定义。地址偏移量:0xA068，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 Fault综合寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  plvl     : 2;  /* bit[0-1]  :  */
        unsigned int  reserved_0: 2;  /* bit[2-3]  :  */
        unsigned int  wnr      : 1;  /* bit[4]    :  */
        unsigned int  pnu      : 1;  /* bit[5]    :  */
        unsigned int  ind      : 1;  /* bit[6]    :  */
        unsigned int  nsstate  : 1;  /* bit[7]    :  */
        unsigned int  nsattr   : 1;  /* bit[8]    :  */
        unsigned int  atof     : 1;  /* bit[9]    : 接死为0 */
        unsigned int  ptwf     : 1;  /* bit[10]   :  */
        unsigned int  afr      : 1;  /* bit[11]   :  */
        unsigned int  reserved_1: 20; /* bit[12-31]: hold fault syndrome
                                                     information of the access that caused a synchronous abort exception */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_FSYNR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_plvl_START      (0)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_plvl_END        (1)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_wnr_START       (4)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_wnr_END         (4)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_pnu_START       (5)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_pnu_END         (5)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_ind_START       (6)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_ind_END         (6)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_nsstate_START   (7)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_nsstate_END     (7)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_nsattr_START    (8)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_nsattr_END      (8)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_atof_START      (9)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_atof_END        (9)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_ptwf_START      (10)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_ptwf_END        (10)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_afr_START       (11)
#define SOC_SMMU500_NS_SMMU_CB2_FSYNR0_afr_END         (11)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR0_UNION
 结构说明  : SMMU_CB2_PMXEVCNTR0 寄存器结构定义。地址偏移量:0xAE00，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控事件计数0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr0 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR0_evcntr0_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR0_evcntr0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR1_UNION
 结构说明  : SMMU_CB2_PMXEVCNTR1 寄存器结构定义。地址偏移量:0xAE04，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控事件计数1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr1 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR1_evcntr1_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR1_evcntr1_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR2_UNION
 结构说明  : SMMU_CB2_PMXEVCNTR2 寄存器结构定义。地址偏移量:0xAE08，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控事件计数2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr2 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR2_evcntr2_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVCNTR2_evcntr2_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_UNION
 结构说明  : SMMU_CB2_PMXEVTYPER0 寄存器结构定义。地址偏移量:0xAE80，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控事件类型选择0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER0_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_UNION
 结构说明  : SMMU_CB2_PMXEVTYPER1 寄存器结构定义。地址偏移量:0xAE84，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控事件类型选择1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER1_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_UNION
 结构说明  : SMMU_CB2_PMXEVTYPER2 寄存器结构定义。地址偏移量:0xAE88，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控事件类型选择2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB2_PMXEVTYPER2_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMCFGR_UNION
 结构说明  : SMMU_CB2_PMCFGR 寄存器结构定义。地址偏移量:0xAF00，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cb0_pmcfgr : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMCFGR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMCFGR_cb0_pmcfgr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMCFGR_cb0_pmcfgr_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMCR_UNION
 结构说明  : SMMU_CB2_PMCR 寄存器结构定义。地址偏移量:0xAF04，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  e        : 1;  /* bit[0]   : Enable. The possible values of this bit are:
                                                   0 All counters, including PMCCNTR, are disabled.
                                                   1 All counters are enabled.
                                                   Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  p        : 1;  /* bit[1]   : Event Counter Reset. This is a WO bit. The effects of writing to this
                                                   bit are:
                                                   0 No action.
                                                   1 Reset all event counters to 0. If the cycle counter is
                                                   implemented, the cycle counter is not reset. */
        unsigned int  reserved_0: 2;  /* bit[2-3] :  */
        unsigned int  x        : 1;  /* bit[4]   : Export enable. The possible values of this bit are:
                                                   0 Export of events is disabled.
                                                   1 Export of events is enabled. */
        unsigned int  reserved_1: 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMCR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMCR_e_START         (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMCR_e_END           (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMCR_p_START         (1)
#define SOC_SMMU500_NS_SMMU_CB2_PMCR_p_END           (1)
#define SOC_SMMU500_NS_SMMU_CB2_PMCR_x_START         (4)
#define SOC_SMMU500_NS_SMMU_CB2_PMCR_x_END           (4)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMCEID0_UNION
 结构说明  : SMMU_CB2_PMCEID0 寄存器结构定义。地址偏移量:0xAF20，初值:0x000000FF，宽度:32
 寄存器说明: Context Bank 2 性能监控common event ID寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmceid0 : 32; /* bit[0-31]: provides the equivalent of the PMCEID0 registers within the register
                                                  map of a Translation Context Bank. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMCEID0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMCEID0_pmceid0_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMCEID0_pmceid0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMCNTENSET_UNION
 结构说明  : SMMU_CB2_PMCNTENSET 寄存器结构定义。地址偏移量:0xAF40，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控计数器使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMCNTENSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMCNTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMCNTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMCNTENCLR_UNION
 结构说明  : SMMU_CB2_PMCNTENCLR 寄存器结构定义。地址偏移量:0xAF44，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控计数器使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMCNTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMCNTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMCNTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMINTENSET_UNION
 结构说明  : SMMU_CB2_PMINTENSET 寄存器结构定义。地址偏移量:0xAF48，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控中断使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMINTENSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMINTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMINTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMINTENCLR_UNION
 结构说明  : SMMU_CB2_PMINTENCLR 寄存器结构定义。地址偏移量:0xAF4C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控中断使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMINTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMINTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMINTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMOVSRCLR_UNION
 结构说明  : SMMU_CB2_PMOVSRCLR 寄存器结构定义。地址偏移量:0xAF50，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控溢出状态清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMOVSRCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMOVSRCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMOVSRCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMOVSRSET_UNION
 结构说明  : SMMU_CB2_PMOVSRSET 寄存器结构定义。地址偏移量:0xAF58，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 2 性能监控溢出状态设定寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMOVSRSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMOVSRSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMOVSRSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB2_PMAUTHSTATUS_UNION
 结构说明  : SMMU_CB2_PMAUTHSTATUS 寄存器结构定义。地址偏移量:0xAFB8，初值:0x00000030，宽度:32
 寄存器说明: Context Bank 2 性能监控授权状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmauthstatus : 32; /* bit[0-31]: NS read only */
    } reg;
} SOC_SMMU500_NS_SMMU_CB2_PMAUTHSTATUS_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB2_PMAUTHSTATUS_pmauthstatus_START  (0)
#define SOC_SMMU500_NS_SMMU_CB2_PMAUTHSTATUS_pmauthstatus_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_SCTLR_UNION
 结构说明  : SMMU_CB3_SCTLR 寄存器结构定义。地址偏移量:0xB000，初值:0x00000106，宽度:32
 寄存器说明: Context Bank 3 系统控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m        : 1;  /* bit[0]    : MMU Enable. This is a global enable bit for the involved Translation context bank. The
                                                    possible values of this bit are:
                                                    0 MMU behavior for this Translation context bank is disabled.
                                                    1 MMU behavior for this Translation context bank is enabled. */
        unsigned int  tre      : 1;  /* bit[1]    : TEX Remap Enable.(固定为1) This bit is UNK/SBOP. */
        unsigned int  afe      : 1;  /* bit[2]    : Access Flag Enable.(固定为1) This bit is UNK/SBOP. */
        unsigned int  affd     : 1;  /* bit[3]    : Access Flag Fault Disable.(复位值为不定态) This field determines whether access flag faults are reported
                                                    if they are raised. The possible values of this bit are:
                                                    0 Access flag faults are reported
                                                    1 Access flag faults are not reported */
        unsigned int  e        : 1;  /* bit[4]    : Endianess.(复位值为不定态) This field indicates the endianess format of translation table entries. The
                                                    possible values of this bit are:
                                                    0 Little Endian format
                                                    1 Big Endian format */
        unsigned int  cfre     : 1;  /* bit[5]    : Context Fault Report Enable. The possible values of this bit are:
                                                    0 Do not return an abort when a Context fault occurs.
                                                    1 Return an abort when a Context fault occurs. */
        unsigned int  cfie     : 1;  /* bit[6]    : Context Fault Interrupt Enable. The possible values of this bit are:
                                                    0 Do not raise an interrupt when a Context fault occurs.
                                                    1 Raise an interrupt when a Context fault occurs.
                                                    This field resets to the value 0. */
        unsigned int  cfcfg    : 1;  /* bit[7]    : Context Fault Configuration. The possible values of this bit are:
                                                    0 Terminate(固定为0) */
        unsigned int  hupcf    : 1;  /* bit[8]    : Hit Under Previous Context Fault. The possible values of this Hit-under-fault bit are:
                                                    0 Stall or terminate subsequent transactions in the presence of an
                                                    outstanding context fault.
                                                    1 Process subsequent transactions independent of an outstanding context fault. */
        unsigned int  reserved_0: 4;  /* bit[9-12] :  */
        unsigned int  reserved_1: 1;  /* bit[13]   :  */
        unsigned int  bsu      : 2;  /* bit[14-15]: Barrier Shareability Upgrade. This field upgrades the required shareability domain of
                                                    barriers issued by client devices mapped to this Stream mapping register group by setting
                                                    the minimum shareability domain that is applied to any barrier.
                                                    The encoding of this field is:
                                                    0b00 No effect.
                                                    0b01 Inner Shareable.
                                                    0b10 Outer Shareable.
                                                    0b11 Full system. */
        unsigned int  memattr  : 4;  /* bit[16-19]: Memory Attribute(复位值为不定态)
                                                    The memory attributes are permitted to be overlaid if SMMU_CBn_SCTLR.M has the
                                                    value 0. */
        unsigned int  reserved_2: 1;  /* bit[20]   :  */
        unsigned int  fb       : 1;  /* bit[21]   : Force Broadcast. (复位值为不定态)This field forces the Broadcast of TLB maintenance, BPIALL and
                                                    ICIALLU operations. */
        unsigned int  shcfg    : 2;  /* bit[22-23]: Shared Configuration.(复位值为不定态) Controls the shareable attributes for transactions where the
                                                    context bank is disabled. The encoding of this field is:
                                                    00 Use shareable attribute as presented with transaction.
                                                    01 Outer Shareable.
                                                    10 Inner Shareable.
                                                    11 Non-shareable.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0. */
        unsigned int  racfg    : 2;  /* bit[24-25]: Read Allocate Configuration. (复位值为不定态)Controls the allocation hint for read transactions where the
                                                    context bank is disabled. The encoding of this field is:
                                                    00 Use the default allocation attributes.
                                                    01 RESERVED.
                                                    10 Read-Allocate.
                                                    11 No Read-Allocate.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0. */
        unsigned int  wacfg    : 2;  /* bit[26-27]: Write Allocate Configuration.(复位值为不定态) The encoding of this field is:
                                                    00 Use the default allocateion attributes.
                                                    01 RESERVED.
                                                    10 Write-Allocate.
                                                    11 No Write-Allocate.
                                                    Note
                                                    This field applies to the processing of transactions where the context bank translation is
                                                    disabled, that is, where SMMU_CBn_SCTLR.M has the value 0 . */
        unsigned int  reserved_3: 4;  /* bit[28-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_SCTLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_m_START         (0)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_m_END           (0)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_tre_START       (1)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_tre_END         (1)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_afe_START       (2)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_afe_END         (2)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_affd_START      (3)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_affd_END        (3)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_e_START         (4)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_e_END           (4)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_cfre_START      (5)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_cfre_END        (5)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_cfie_START      (6)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_cfie_END        (6)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_cfcfg_START     (7)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_cfcfg_END       (7)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_hupcf_START     (8)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_hupcf_END       (8)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_bsu_START       (14)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_bsu_END         (15)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_memattr_START   (16)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_memattr_END     (19)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_fb_START        (21)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_fb_END          (21)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_shcfg_START     (22)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_shcfg_END       (23)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_racfg_START     (24)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_racfg_END       (25)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_wacfg_START     (26)
#define SOC_SMMU500_NS_SMMU_CB3_SCTLR_wacfg_END       (27)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_TTBR0_LOW_UNION
 结构说明  : SMMU_CB3_TTBR0_LOW 寄存器结构定义。地址偏移量:0xB020，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 页表基地址低位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  translationtablebaseregister_low : 32; /* bit[0-31]: hold the base address of translation tables */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_TTBR0_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_TTBR0_LOW_translationtablebaseregister_low_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_TTBR0_LOW_translationtablebaseregister_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_TTBR0_HIGH_UNION
 结构说明  : SMMU_CB3_TTBR0_HIGH 寄存器结构定义。地址偏移量:0xB024，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 页表基地址高位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  translationtablebaseregister_high : 8;  /* bit[0-7] : hold the base address of translation tables */
        unsigned int  reserved                          : 24; /* bit[8-31]: 保留 */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_TTBR0_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_TTBR0_HIGH_translationtablebaseregister_high_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_TTBR0_HIGH_translationtablebaseregister_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_TTBCR_UNION
 结构说明  : SMMU_CB3_TTBCR 寄存器结构定义。地址偏移量:0xB030，初值:0x80000000，宽度:32
 寄存器说明: Context Bank 3 页表基地址控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  t0sz     : 4;  /* bit[0-3]  : The Size offset of the SMMU_CBn_TTBR0 addressed region, encoded as a 4 bits signed number
                                                    giving the size of the region as 232-T0SZ.(复位值为不定态) */
        unsigned int  s        : 1;  /* bit[4]    : This bit must be programmed to T0SZ[3], or the effect is UNPREDICTABLE.
                                                    This bit is a sign extension of the T0SZ field, and is allocated this way for future compatibility for
                                                    translation table systems with a larger input address.(复位值为不定态) */
        unsigned int  reserved_0: 1;  /* bit[5]    :  */
        unsigned int  sl0      : 2;  /* bit[6-7]  : Starting Level for SMMU_CBn_TTBR0 addressed region. (复位值为不定态)The encoding of this field is:
                                                    0 Level 2.
                                                    1 Level 1.
                                                    2 UNPREDICTABLE.
                                                    3 UNPREDICTABLE. */
        unsigned int  irgn0    : 2;  /* bit[8-9]  : Inner cacheability attributes for the memory associated with the translation table walks using
                                                    SMMU_CBn_TTBR0.(复位值为不定态) */
        unsigned int  orgn0    : 2;  /* bit[10-11]: Outer cacheability attributes for the memory associated with the translation table walks using
                                                    SMMU_CBn_TTBR0.(复位值为不定态) */
        unsigned int  sh0      : 2;  /* bit[12-13]: Sharebility attributes for the memory associated with the translation table walks using TTBR0.(复位值为不定态) */
        unsigned int  reserved_1: 17; /* bit[14-30]:  */
        unsigned int  eae      : 1;  /* bit[31]   : Extended Address Enable.(固定为1)
                                                    This field always reads as the value 1. Writes are ignored.
                                                    A value of 1 means use the translation system defined in the LPAE. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_TTBCR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_t0sz_START      (0)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_t0sz_END        (3)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_s_START         (4)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_s_END           (4)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_sl0_START       (6)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_sl0_END         (7)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_irgn0_START     (8)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_irgn0_END       (9)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_orgn0_START     (10)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_orgn0_END       (11)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_sh0_START       (12)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_sh0_END         (13)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_eae_START       (31)
#define SOC_SMMU500_NS_SMMU_CB3_TTBCR_eae_END         (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_FSR_UNION
 结构说明  : SMMU_CB3_FSR 寄存器结构定义。地址偏移量:0xB058，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 Fault状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 1;  /* bit[0]   : RESERVED */
        unsigned int  tf       : 1;  /* bit[1]   : Translation Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Translation Fault condition – invalid mapping for address
                                                   being accessed. */
        unsigned int  aff      : 1;  /* bit[2]   : Access Flag Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to Access Flag set for address being
                                                   accessed. */
        unsigned int  pf       : 1;  /* bit[3]   : Permission Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to insufficient access permissions to complete
                                                   access. */
        unsigned int  ef       : 1;  /* bit[4]   : External Fault
                                                   0 = Fault condition does not apply.
                                                   1 = External Fault Condition. */
        unsigned int  tlbmcf   : 1;  /* bit[5]   : TLB Match Conflict Fault
                                                   0 = Fault condition does not apply.
                                                   1 = Fault due to multiple matches detected in TLB. */
        unsigned int  tlblkf   : 1;  /* bit[6]   : TLB Lock Fault
                                                   0 = Fault condition does not apply.
                                                   1 = TLB Lock Fault Condition. */
        unsigned int  reserved_1: 23; /* bit[7-29]: RESERVED */
        unsigned int  ss       : 1;  /* bit[30]  : Stalled Status. Indicates whether or not the System MMU is
                                                   currently stalled due to an exception within this context
                                                   bank.（接死为0） */
        unsigned int  multi    : 1;  /* bit[31]  : Multiple Faults. Indicates that an additional context fault
                                                   occurred while SMMU_CBn_FSR was non-zero. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_FSR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_FSR_tf_START        (1)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_tf_END          (1)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_aff_START       (2)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_aff_END         (2)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_pf_START        (3)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_pf_END          (3)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_ef_START        (4)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_ef_END          (4)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_tlbmcf_START    (5)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_tlbmcf_END      (5)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_tlblkf_START    (6)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_tlblkf_END      (6)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_ss_START        (30)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_ss_END          (30)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_multi_START     (31)
#define SOC_SMMU500_NS_SMMU_CB3_FSR_multi_END       (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_FSRRESTORE_UNION
 结构说明  : SMMU_CB3_FSRRESTORE 寄存器结构定义。地址偏移量:0xB05C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 Fault状态恢复寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_cb3_fsrrestore : 32; /* bit[0-31]: used to restore the contents of
                                                              SMMU_CBn_FSR. The register is 32 bits in size and is WRITE ONLY. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_FSRRESTORE_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_FSRRESTORE_smmu_cb3_fsrrestore_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_FSRRESTORE_smmu_cb3_fsrrestore_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_FAR_LOW_UNION
 结构说明  : SMMU_CB3_FAR_LOW 寄存器结构定义。地址偏移量:0xB060，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 Fault地址低位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_low : 32; /* bit[0-31]: holds the input address of the access that caused a
                                                    synchronous abort exception. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_FAR_LOW_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_FAR_LOW_faddr_low_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_FAR_LOW_faddr_low_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_FAR_HIGH_UNION
 结构说明  : SMMU_CB3_FAR_HIGH 寄存器结构定义。地址偏移量:0xB064，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 Fault地址高位寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faddr_high : 8;  /* bit[0-7] : holds the input address of the access that caused a
                                                     synchronous abort exception. */
        unsigned int  reserved   : 24; /* bit[8-31]: RESERVED */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_FAR_HIGH_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_FAR_HIGH_faddr_high_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_FAR_HIGH_faddr_high_END    (7)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_FSYNR0_UNION
 结构说明  : SMMU_CB3_FSYNR0 寄存器结构定义。地址偏移量:0xB068，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 Fault综合寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  plvl     : 2;  /* bit[0-1]  :  */
        unsigned int  reserved_0: 2;  /* bit[2-3]  :  */
        unsigned int  wnr      : 1;  /* bit[4]    :  */
        unsigned int  pnu      : 1;  /* bit[5]    :  */
        unsigned int  ind      : 1;  /* bit[6]    :  */
        unsigned int  nsstate  : 1;  /* bit[7]    :  */
        unsigned int  nsattr   : 1;  /* bit[8]    :  */
        unsigned int  atof     : 1;  /* bit[9]    : 接死为0 */
        unsigned int  ptwf     : 1;  /* bit[10]   :  */
        unsigned int  afr      : 1;  /* bit[11]   :  */
        unsigned int  reserved_1: 20; /* bit[12-31]: hold fault syndrome
                                                     information of the access that caused a synchronous abort exception */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_FSYNR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_plvl_START      (0)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_plvl_END        (1)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_wnr_START       (4)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_wnr_END         (4)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_pnu_START       (5)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_pnu_END         (5)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_ind_START       (6)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_ind_END         (6)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_nsstate_START   (7)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_nsstate_END     (7)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_nsattr_START    (8)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_nsattr_END      (8)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_atof_START      (9)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_atof_END        (9)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_ptwf_START      (10)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_ptwf_END        (10)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_afr_START       (11)
#define SOC_SMMU500_NS_SMMU_CB3_FSYNR0_afr_END         (11)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR0_UNION
 结构说明  : SMMU_CB3_PMXEVCNTR0 寄存器结构定义。地址偏移量:0xBE00，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控事件计数0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr0 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR0_evcntr0_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR0_evcntr0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR1_UNION
 结构说明  : SMMU_CB3_PMXEVCNTR1 寄存器结构定义。地址偏移量:0xBE04，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控事件计数1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr1 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR1_evcntr1_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR1_evcntr1_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR2_UNION
 结构说明  : SMMU_CB3_PMXEVCNTR2 寄存器结构定义。地址偏移量:0xBE08，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控事件计数2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  evcntr2 : 32; /* bit[0-31]: Reads from PMEVCNTRn return the complete counter value and writes update
                                                  the complete counter value. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR2_evcntr2_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVCNTR2_evcntr2_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_UNION
 结构说明  : SMMU_CB3_PMXEVTYPER0 寄存器结构定义。地址偏移量:0xBE80，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控事件类型选择0寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER0_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_UNION
 结构说明  : SMMU_CB3_PMXEVTYPER1 寄存器结构定义。地址偏移量:0xBE84，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控事件类型选择1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER1_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_UNION
 结构说明  : SMMU_CB3_PMXEVTYPER2 寄存器结构定义。地址偏移量:0xBE88，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控事件类型选择2寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  event    : 5;  /* bit[0-4] : Event type */
        unsigned int  reserved : 23; /* bit[5-27]: reserved */
        unsigned int  nsu      : 1;  /* bit[28]  : Non-secure unprivileged transactions filtering bit. Controls counting of Non-secure unprivileged transactions.
                                                   The behavior depends on the combined values of the U and NSU bits. The possible values of this 
                                                   bit are:
                                                   U==NSU Count events relating to Non-secure unprivileged transactions.
                                                   U!=NSU Do not count events relating to Non-secure unprivileged transactions. */
        unsigned int  nsp      : 1;  /* bit[29]  : Non-secure Privileged transactions filtering bit. Controls the counting of Non-secure privileged 
                                                   transactions.The behavior depends on the combined values of the P and NSP bits. The possible values of this bit are:
                                                   P==NSP Count events relating to Non-secure privileged transactions.
                                                   P!=NSP Do not count events relating to Non-secure privileged transactions. */
        unsigned int  u        : 1;  /* bit[30]  : Unprivileged transactions filtering bit. Controls the counting of Secure unprivileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure unprivileged transactions.
                                                   1 Do not count events relating to Secure unprivileged transactions. */
        unsigned int  p        : 1;  /* bit[31]  : Privileged transactions filtering bit. Controls the counting of Secure privileged transactions.
                                                   The possible values of this bit are:
                                                   0 Count events relating to Secure privileged transactions.
                                                   1 Do not count events relating to Secure privileged transactions */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_event_START     (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_event_END       (4)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_nsu_START       (28)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_nsu_END         (28)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_nsp_START       (29)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_nsp_END         (29)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_u_START         (30)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_u_END           (30)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_p_START         (31)
#define SOC_SMMU500_NS_SMMU_CB3_PMXEVTYPER2_p_END           (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMCFGR_UNION
 结构说明  : SMMU_CB3_PMCFGR 寄存器结构定义。地址偏移量:0xBF00，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cb3_pmcfgr : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMCFGR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMCFGR_cb3_pmcfgr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMCFGR_cb3_pmcfgr_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMCR_UNION
 结构说明  : SMMU_CB3_PMCR 寄存器结构定义。地址偏移量:0xBF04，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  e        : 1;  /* bit[0]   : Enable. The possible values of this bit are:
                                                   0 All counters, including PMCCNTR, are disabled.
                                                   1 All counters are enabled.
                                                   Overflow interrupts are only enabled if the event counters are enabled. */
        unsigned int  p        : 1;  /* bit[1]   : Event Counter Reset. This is a WO bit. The effects of writing to this
                                                   bit are:
                                                   0 No action.
                                                   1 Reset all event counters to 0. If the cycle counter is
                                                   implemented, the cycle counter is not reset. */
        unsigned int  reserved_0: 2;  /* bit[2-3] :  */
        unsigned int  x        : 1;  /* bit[4]   : Export enable. The possible values of this bit are:
                                                   0 Export of events is disabled.
                                                   1 Export of events is enabled. */
        unsigned int  reserved_1: 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMCR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMCR_e_START         (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMCR_e_END           (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMCR_p_START         (1)
#define SOC_SMMU500_NS_SMMU_CB3_PMCR_p_END           (1)
#define SOC_SMMU500_NS_SMMU_CB3_PMCR_x_START         (4)
#define SOC_SMMU500_NS_SMMU_CB3_PMCR_x_END           (4)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMCEID0_UNION
 结构说明  : SMMU_CB3_PMCEID0 寄存器结构定义。地址偏移量:0xBF20，初值:0x000000FF，宽度:32
 寄存器说明: Context Bank 3 性能监控common event ID寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmceid0 : 32; /* bit[0-31]: provides the equivalent of the PMCEID0 registers within the register
                                                  map of a Translation Context Bank. */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMCEID0_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMCEID0_pmceid0_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMCEID0_pmceid0_END    (31)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMCNTENSET_UNION
 结构说明  : SMMU_CB3_PMCNTENSET 寄存器结构定义。地址偏移量:0xBF40，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控计数器使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMCNTENSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMCNTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMCNTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMCNTENCLR_UNION
 结构说明  : SMMU_CB3_PMCNTENCLR 寄存器结构定义。地址偏移量:0x9F44，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控计数器使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMCNTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMCNTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMCNTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMINTENSET_UNION
 结构说明  : SMMU_CB3_PMINTENSET 寄存器结构定义。地址偏移量:0xBF48，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控中断使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMINTENSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMINTENSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMINTENSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMINTENCLR_UNION
 结构说明  : SMMU_CB3_PMINTENCLR 寄存器结构定义。地址偏移量:0xBF4C，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控中断使能清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMINTENCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMINTENCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMINTENCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMOVSRCLR_UNION
 结构说明  : SMMU_CB3_PMOVSRCLR 寄存器结构定义。地址偏移量:0xBF50，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控溢出状态清除寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableclr : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMOVSRCLR_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMOVSRCLR_enableclr_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMOVSRCLR_enableclr_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMOVSRSET_UNION
 结构说明  : SMMU_CB3_PMOVSRSET 寄存器结构定义。地址偏移量:0xBF58，初值:0x00000000，宽度:32
 寄存器说明: Context Bank 3 性能监控溢出状态设定寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enableset : 3;  /* bit[0-2] :  */
        unsigned int  reserved  : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMOVSRSET_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMOVSRSET_enableset_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMOVSRSET_enableset_END    (2)


/*****************************************************************************
 结构名    : SOC_SMMU500_NS_SMMU_CB3_PMAUTHSTATUS_UNION
 结构说明  : SMMU_CB3_PMAUTHSTATUS 寄存器结构定义。地址偏移量:0xBFB8，初值:0x00000030，宽度:32
 寄存器说明: Context Bank 3 性能监控授权状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmauthstatus : 32; /* bit[0-31]: NS read only */
    } reg;
} SOC_SMMU500_NS_SMMU_CB3_PMAUTHSTATUS_UNION;
#endif
#define SOC_SMMU500_NS_SMMU_CB3_PMAUTHSTATUS_pmauthstatus_START  (0)
#define SOC_SMMU500_NS_SMMU_CB3_PMAUTHSTATUS_pmauthstatus_END    (31)






/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/



/*****************************************************************************
  9 全局变量声明
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_smmu500_ns_interface.h */
