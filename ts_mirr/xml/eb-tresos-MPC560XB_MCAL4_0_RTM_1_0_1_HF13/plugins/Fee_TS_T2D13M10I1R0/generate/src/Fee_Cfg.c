[!CODE!][!//
/**
*   @file    Fee_Cfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Fee - AUTOSAR Module Flash EEPROM Emulation Driver.
*   @details Definitions of all Pre-compile configuration structures.
*
*   @addtogroup FEE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : none
*   Dependencies         : Fls
*
*   Autosar Version      : 4.0.3
*   Autosar Revision     : ASR_REL_4_0_REV_0003
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_HF7_ASR_REL_4_0_REV_0003_20150304
*
*   (c) Copyright 2006-2015 Freescale Semiconductor Inc and STMicroelectronics
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Fee_cfg_h_REF_1
* Violates MISRA 2004 Required Rule 19.15, Repeated include file.
* Repeatedly included but does not have a standard include guard due to AUTOSAR 
* requirement MEMMAP003.
*
* @section Fee_cfg_h_REF_2
* Violates MISRA 2004 Required Rule 5.1, Identifier exceeds 31 characters
*
* @section Fee_cfg_h_REF_3
* Violates MISRA 2004 Required Rule 19.4, Disallowed definition for macro
*
* @section Fee_cfg_h_REF_4
* Violates MISRA 2004 Required Rule 1.4, Identifier clash
*
* @section Fee_cfg_h_REF_5
* Violates MISRA 2004 Advisory Rule 19.1, #include statement preceded by some code 
* #include statements should only be preceded by other preprocessor directiove or comments.
*
*/


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fee.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FEE_VENDOR_ID_CFG_C                      43U
/* @violates @ref Fee_cfg_h_REF_2 Identifier exceeds 31 characters */
/* @violates @ref Fee_cfg_h_REF_4 Identifier clash */
#define FEE_AR_RELEASE_MAJOR_VERSION_CFG_C       4
/* @violates @ref Fee_cfg_h_REF_2 Identifier exceeds 31 characters */
/* @violates @ref Fee_cfg_h_REF_4 Identifier clash */
#define FEE_AR_RELEASE_MINOR_VERSION_CFG_C       0
/* @violates @ref Fee_cfg_h_REF_2 Identifier exceeds 31 characters */
/* @violates @ref Fee_cfg_h_REF_4 Identifier clash */
#define FEE_AR_RELEASE_REVISION_VERSION_CFG_C    3
/* @violates @ref Fee_cfg_h_REF_2 Identifier exceeds 31 characters */
/* @violates @ref Fee_cfg_h_REF_4 Identifier clash */
#define FEE_SW_MAJOR_VERSION_CFG_C               1
#define FEE_SW_MINOR_VERSION_CFG_C               0
#define FEE_SW_PATCH_VERSION_CFG_C               1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Fee header file are of the same vendor */
#if (FEE_VENDOR_ID_CFG_C != FEE_VENDOR_ID)
    #error "Fee_Cfg.c and Fee.h have different vendor ids"
#endif
/* Check if current file and Fls header file are of the same Autosar version */
#if ((FEE_AR_RELEASE_MAJOR_VERSION_CFG_C    != FEE_AR_RELEASE_MAJOR_VERSION) || \
     (FEE_AR_RELEASE_MINOR_VERSION_CFG_C    != FEE_AR_RELEASE_MINOR_VERSION) || \
     (FEE_AR_RELEASE_REVISION_VERSION_CFG_C != FEE_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Fee_Cfg.c and Fee.h are different"
#endif
/* Check if current file and Fls header file are of the same Software version */
#if ((FEE_SW_MAJOR_VERSION_CFG_C != FEE_SW_MAJOR_VERSION) || \
     (FEE_SW_MINOR_VERSION_CFG_C != FEE_SW_MINOR_VERSION) || \
     (FEE_SW_PATCH_VERSION_CFG_C != FEE_SW_PATCH_VERSION))
    #error "Software Version Numbers of Fee_Cfg.c and Fee.h are different"
#endif



/* @violates @ref Fee_cfg_h_REF_2 Identifier exceeds 31 characters */
#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Fee_cfg_h_REF_1 Repeated include file */
#include "MemMap.h"

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

[!VAR "FEE_VIRTUAL_PAGE_SIZE" = "num:i(FeeGeneral/FeeVirtualPageSize)"!][!//
[!VAR "FEE_BLOCK_OVERHEAD" = "num:i(ceiling(12 div $FEE_VIRTUAL_PAGE_SIZE + 2) * [!//
                                                    $FEE_VIRTUAL_PAGE_SIZE)"!][!//
[!VAR "FEE_CLUSTER_OVERHEAD" = "num:i(ceiling(16 div $FEE_VIRTUAL_PAGE_SIZE + 2) * [!//
                                                     $FEE_VIRTUAL_PAGE_SIZE)"!][!//

[!LOOP "FeeClusterGroup/*"!][!//

/* Configuration of cluster group [!"node:name(.)"!] */
STATIC CONST(Fee_ClusterType, FEE_CONST) Fee_[!"node:name(.)"!][[!"num:i(count(FeeCluster/*))"!]] =
{
[!VAR "FEE_SMALLEST_CLUSTER_SIZE" = "2147483647"!][!//
[!VAR "FEE_LOOP_IT" = "count(FeeCluster/*)"!][!//
[!LOOP "FeeCluster/*"!][!//
[!VAR "FEE_CLUSTER_SIZE" = "0"!][!//
[!LOOP "FeeSector/*"!][!//
[!VAR "FEE_CLUSTER_SIZE" = "$FEE_CLUSTER_SIZE + num:i(node:ref(./FeeSectorRef)/FlsSectorSize) * [!//
                                        num:i(node:ref(./FeeSectorRef)/FlsNumberOfSectors)"!][!//
[!ENDLOOP!][!//
    /* [!"node:name(.)"!] */
    {
        [!"num:i(node:ref(FeeSector/*[1]/FeeSectorRef)/FlsSectorStartaddress)"!]U, /* Start address */
        [!"num:i($FEE_CLUSTER_SIZE)"!]U /* Size */
    }[!VAR "FEE_LOOP_IT" = "$FEE_LOOP_IT - 1"!][!IF "$FEE_LOOP_IT != 0"!],[!ENDIF!]
[!IF "$FEE_CLUSTER_SIZE < $FEE_SMALLEST_CLUSTER_SIZE"!][!//
[!VAR "FEE_SMALLEST_CLUSTER_SIZE" = "$FEE_CLUSTER_SIZE"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
};
[!VAR "FEE_AVAIL_CLUSTER_SIZE" = "$FEE_SMALLEST_CLUSTER_SIZE - $FEE_CLUSTER_OVERHEAD - [!//
                                                              $FEE_BLOCK_OVERHEAD"!][!//
[!VAR "FEE_BIGGER_BLOCK_SIZE" = "0"!][!//
[!LOOP "../../FeeBlockConfiguration/*[node:name(node:ref(FeeClusterGroupRef)) = [!//
                                                        node:current()/@name]"!][!//
[!VAR "FEE_BLOCK_SIZE" = "num:i(ceiling(./FeeBlockSize div $FEE_VIRTUAL_PAGE_SIZE) * [!//
                                           $FEE_VIRTUAL_PAGE_SIZE + $FEE_BLOCK_OVERHEAD)"!][!//
[!VAR "FEE_AVAIL_CLUSTER_SIZE" = "$FEE_AVAIL_CLUSTER_SIZE - $FEE_BLOCK_SIZE"!][!//
[!IF "$FEE_BLOCK_SIZE > $FEE_BIGGER_BLOCK_SIZE"!][!//
[!VAR "FEE_BIGGER_BLOCK_SIZE" = "$FEE_BLOCK_SIZE"!][!//
[!ENDIF!][!//
[!IF "$FEE_AVAIL_CLUSTER_SIZE < 0"!][!//
[!ERROR!][!//
The block [!"node:name(.)"!] is too big. The block doesn't fit into the cluster group [!//
                                        [!"node:name(node:ref(./FeeClusterGroupRef))"!].
[!ENDERROR!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$FEE_AVAIL_CLUSTER_SIZE - $FEE_BIGGER_BLOCK_SIZE < 0"!][!//
[!ERROR!][!//
This configuration is not able to swap all the blocks into the cluster group [!//
[!ENDERROR!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

/* Configuration of cluster group set */
CONST(Fee_ClusterGroupType, FEE_CONST) Fee_ClrGrps[FEE_NUMBER_OF_CLUSTER_GROUPS] =
{
[!VAR "FEE_LOOP_IT" = "count(FeeClusterGroup/*)"!][!//
[!LOOP "FeeClusterGroup/*"!][!//
    /* [!"node:name(.)"!] */
    {
        Fee_[!"node:name(.)"!], /* Cluster set */
        [!"num:i(count(./FeeCluster/*))"!]U /* Number of clusters */
    }[!VAR "FEE_LOOP_IT" = "$FEE_LOOP_IT - 1"!][!IF "$FEE_LOOP_IT != 0"!],[!ENDIF!]
[!ENDLOOP!][!//
};

/* Configuration of Fee blocks */
CONST(Fee_BlockConfigType, FEE_CONST) Fee_BlockConfig[FEE_NUMBER_OF_BLOCKS] =
{
[!VAR "FEE_LOOP_IT" = "count(FeeBlockConfiguration/*)"!][!//
[!LOOP "node:order(FeeBlockConfiguration/*,'node:value(./FeeBlockNumber)')"!][!//
    /* [!"node:name(.)"!] */
    {
        FeeConf_FeeBlockConfiguration_[!"node:name(.)"!], /* FeeBlockNumber */
        [!"./FeeBlockSize"!]U, /* FeeBlockSize */
        [!"node:ref(./FeeClusterGroupRef)/@index"!]U, /* FeeClusterGroup */
        (boolean) [!IF "./FeeImmediateData"!]TRUE[!ELSE!]FALSE[!ENDIF!], /* FeeImmediateData */
    }[!VAR "FEE_LOOP_IT" = "$FEE_LOOP_IT - 1"!][!IF "$FEE_LOOP_IT != 0"!],[!ENDIF!]
[!ENDLOOP!][!//
};

[!ENDCODE!][!//

/* @violates @ref Fee_cfg_h_REF_2 Identifier exceeds 31 characters */
#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Fee_cfg_h_REF_1 Repeated include file */
/* @violates @ref Fee_cfg_h_REF_5 #include statement preceded by some code */
#include "MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
