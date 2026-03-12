/**
*   @file    Mcu_PBcfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Mcu - Mcu postbuild configuration parameters.
*   @details This file contains the mcu postbuild configuration parameters.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : MC
*   Dependencies         : none
*
*   Autosar Version      : 4.0.3
*   Autosar Revision     : ASR_REL_4_0_REV_0003
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_HF2_ASR_REL_4_0_REV_0003_20140721
*
*   (c) Copyright 2006-2014 Freescale Semiconductor Inc and STMicroelectronics
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
* @section Mcu_PBcfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.7, Function-like macro defined
* This violation is due to function like macros defined for register operations.
* Function like macros are used to reduce code complexity.
*
* @section Mcu_PBcfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section Mcu_PBcfg_c_REF_3
* Violates MISRA 2004 Required Rule 11.1, This violation is due to
* the casting pointers to other types used in macros for reading or
* writing data from address location of controller register.
*
* @section Mcu_PBcfg_c_REF_4
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*
* @section Mcu_PBcfg_c_REF_5
* Violates MISRA 2004 Required Rule 1.4, Identifier clash. Define name is required by the AUTOSAR
* specifications although it exceeds the max length of 31 characters.
*
* @section Mcu_PBcfg_c_REF_6
* Violates MISRA 2004 Required Rule 8.10,
* All declarations and definitions of objects or functions at file scope shall
* have internal linkage unless external linkage is required.
* State variables may be used by LLD layer.
*
* @section Mcu_PBcfg_c_REF_7
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
* before '#include' MemMap.h included after each section define in order to set the current memory
* section
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcu_LLD.h"

#ifndef MCU_PRECOMPILE_SUPPORT
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*
* @implements     DMCU04030, DMCU04031, DMCU04032, DMCU04033, DMCU04034, DMCU04035,
*                 DMCU04036
*/
#define MCU_VENDOR_ID_PBCFG_C                      43
/*
* @violates @ref Mcu_PBcfg_c_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define MCU_AR_RELEASE_MAJOR_VERSION_PBCFG_C       4
/*
* @violates @ref Mcu_PBcfg_c_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define MCU_AR_RELEASE_MINOR_VERSION_PBCFG_C       0
/*
* @violates @ref Mcu_PBcfg_c_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
/**
* @violates @ref Mcu_PBcfg_c_REF_5 MISRA 2004 Required Rule 1.4, Identifier clash
*/
#define MCU_AR_RELEASE_REVISION_VERSION_PBCFG_C    3
#define MCU_SW_MAJOR_VERSION_PBCFG_C               1
#define MCU_SW_MINOR_VERSION_PBCFG_C               0
#define MCU_SW_PATCH_VERSION_PBCFG_C               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Mcu header file are of the same vendor */
#if (MCU_VENDOR_ID_PBCFG_C != MCU_LLD_VENDOR_ID)
    #error "Mcu_PBcfg.c and Mcu_LLD.h have different vendor ids"
#endif
/*
* @implements     DMCU06001
*/
/* Check if current file and Mcu_lld.h header file are of the same Autosar version */
#if ((MCU_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != MCU_LLD_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_AR_RELEASE_MINOR_VERSION_PBCFG_C    != MCU_LLD_AR_RELEASE_MINOR_VERSION) || \
     (MCU_AR_RELEASE_REVISION_VERSION_PBCFG_C != MCU_LLD_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Mcu_PBcfg and Mcu_lld.h are different"
#endif
/* Check if current file and Mcu_lld.h header file are of the same Software version */
#if ((MCU_SW_MAJOR_VERSION_PBCFG_C != MCU_LLD_SW_MAJOR_VERSION) || \
     (MCU_SW_MINOR_VERSION_PBCFG_C != MCU_LLD_SW_MINOR_VERSION) || \
     (MCU_SW_PATCH_VERSION_PBCFG_C != MCU_LLD_SW_PATCH_VERSION))
    #error "Software Version Numbers of Mcu_PBcfg and Mcu_lld.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/*
* @violates @ref Mcu_PBcfg_c_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Mcu_PBcfg_c_REF_2 MISRA 2004 Advisory Rule 19.1, only preprocessor 
*                            statements and comments before '#include' 
*/

#include "MemMap.h"


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/





/*
* @violates @ref Mcu_PBcfg_c_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Mcu_PBcfg_c_REF_2 MISRA 2004 Required Rule 19.15, Repeated include file
* @violates @ref Mcu_PBcfg_c_REF_7 MISRA 2004 Advisory Rule 19.1, only preprocessor 
*                            statements and comments before '#include'
*/

#include "MemMap.h"

#endif /* MCU_PRECOMPILE_SUPPORT */

#ifdef __cplusplus
}
#endif

/** @} */
