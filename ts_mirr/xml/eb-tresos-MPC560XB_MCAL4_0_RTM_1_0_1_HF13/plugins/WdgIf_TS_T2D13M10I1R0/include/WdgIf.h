/**
*   @file    WdgIf.h
*   @version 1.0.1
*
*   @brief   AUTOSAR WdgIf - Interface header file.
*   @details Contains information about Interface header file.
*            This file contains sample code only. It is not part of the production code deliverables.
*
*   @addtogroup Wdg
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : generic
*   Dependencies         : 
*
*   Autosar Version      : 4.0.3
*   Autosar Revision     : ASR_REL_4_0_REV_0003
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_ASR_REL_4_0_REV_0003_20140606
*
*   (c) Copyright 2006-2014 Freescale Semiconductor Inc and STMicroelectronics
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef WDGIF_H
#define WDGIF_H

#ifdef __cplusplus
extern "C"{
#endif



/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Std_Types.h"
#include "WdgIf_Cfg.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define WDGIF_VENDOR_ID                    43
#define WDGIF_MODULE_ID                    43
#define WDGIF_AR_RELEASE_MAJOR_VERSION     3
#define WDGIF_AR_RELEASE_MINOR_VERSION     1
#define WDGIF_AR_RELEASE_REVISION_VERSION  0
#define WDGIF_SW_MAJOR_VERSION             1
#define WDGIF_SW_MINOR_VERSION             0
#define WDGIF_SW_PATCH_VERSION             1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and WDGIF configuration header file are of the same Autosar version */
#if ((WDGIF_AR_RELEASE_MAJOR_VERSION    != WDGIF_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (WDGIF_AR_RELEASE_MINOR_VERSION    != WDGIF_AR_RELEASE_MINOR_VERSION_CFG) || \
     (WDGIF_AR_RELEASE_REVISION_VERSION != WDGIF_AR_RELEASE_REVISION_VERSION_CFG))
    #error "AutoSar Version Numbers of WdgIf.h and WdgIf_Cfg.h are different"
#endif
/* Check if current file and WDGIF configuration header file are of the same software version */
#if ((WDGIF_SW_MAJOR_VERSION != WDGIF_SW_MAJOR_VERSION_CFG) || \
     (WDGIF_SW_MINOR_VERSION != WDGIF_SW_MINOR_VERSION_CFG) || \
     (WDGIF_SW_PATCH_VERSION != WDGIF_SW_PATCH_VERSION_CFG))
#error "Software Version Numbers of WdgIf.h and WdgIf_Cfg.h are different"
#endif
/* Check if current file and Std_Types header file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((WDGIF_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION) || \
         (WDGIF_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of WdgIf.h and Std_Types.h are different"
    #endif
#endif

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
*   @brief  This define indicates the error detectable by the Watchdog Driver Interface
*/
#define WDGIF_E_PARAM_DEVICE    (uint8)0x01

/**
*    @brief  Service id for the setmode function
*/
#define WDGIF_SETMODE_ID   (uint8)0x01

/**
*   @brief  Service id for the trigger function
*/
#define WDGIF_TRIGGER_ID   (uint8)0x02


#if (WDGIF_NUMBER_OF_DEVICES == (uint8)1) 
    /* Only one WDG module defined */

/** 
*   @brief  Define the setmode function
*/  
    #define WdgIf_SetMode(DeviceIndex, WdgMode) Wdg_SetMode(WdgMode) 

/** 
*   @brief  Define the setmode function
*/  
    #define WdgIf_SetTriggerCondition(DeviceIndex, Timeout) Wdg_SetTriggerCondition(Timeout) 
#else 
    /* More than one WDG modules defined */ 

/** 
*   @brief  Define the setmode function
*/  
   #define WdgIf_SetMode(DeviceIndex, WdgMode)  
        WdgIf_SetModeFctPtr[DeviceIndex](WdgMode) 
 
/** 
*   @brief  Define the setmode function
*/  
    #define WdgIf_SetTriggerCondition(DeviceIndex, Timeout) WdgIf_SetTriggerConditionFctPtr[DeviceIndex](Timeout) 
#endif 

#if (WDGIF_VERSION_INFO_API==STD_ON)

/**
*   @brief  Service id for the trigger function
*/
    #define WDGIF_VERSION_ID   (uint8)0x03
    
/**
*   @brief  WdgIf_GetVersionInfo function
*/
    #define WdgIf_GetVersionInfo(versioninfo) { (versioninfo)->vendorID = WDGIF_VENDOR_ID; \
                                                (versioninfo)->moduleID = WDGIF_MODULE_ID; \
                                                (versioninfo)->sw_major_version = WDGIF_SW_MAJOR_VERSION; \
                                                (versioninfo)->sw_minor_version = WDGIF_SW_MINOR_VERSION; \
                                                (versioninfo)->sw_patch_version = WDGIF_SW_PATCH_VERSION; \
                                              }                                         
#endif /* WDGIF_VERSION_INFO_API==STD_ON */
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*WDGIF_H*/
