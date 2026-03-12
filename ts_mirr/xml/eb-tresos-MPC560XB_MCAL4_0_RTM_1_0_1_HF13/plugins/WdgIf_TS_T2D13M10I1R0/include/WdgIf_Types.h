/**
*   @file    WdgIf_Types.h
*   @version 1.0.1
*
*   @brief   AUTOSAR WdgIf - Interface Types header file.
*   @details Contains information about Interface Types header file.
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

#ifndef WDGIF_TYPES_H
#define WDGIF_TYPES_H

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

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define WDGIF_TYPES_VENDOR_ID                    43
#define WDGIF_TYPES_MODULE_ID                    43
#define WDGIF_TYPES_AR_RELEASE_MAJOR_VERSION     4
#define WDGIF_TYPES_AR_RELEASE_MINOR_VERSION     0
#define WDGIF_TYPES_AR_RELEASE_REVISION_VERSION  3
#define WDGIF_TYPES_SW_MAJOR_VERSION             1
#define WDGIF_TYPES_SW_MINOR_VERSION             0
#define WDGIF_TYPES_SW_PATCH_VERSION             1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and WDGIF_TYPES configuration header file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((WDGIF_TYPES_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION) || \
         (WDGIF_TYPES_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of WdgIf.h and Std_Types.h are different"
    #endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/** 
*   @brief  This enumerated type will contain the watchdog driver's possible states 
*/
typedef enum
{
    WDGIF_UNINIT         = 0x00,  /**< @brief The watchdog driver is not uninitialized.  This shall be the default value after reset */
    WDGIF_IDLE,                   /**< @brief = 0x01 The watchdog driver is currently idle, i.e not beeing triggered or mode changed */
    WDGIF_BUSY                    /**< @brief = 0x02 The watchdog driver is currently busy, i.e triggered or switchd between modes */
}WdgIf_StatusType;

/** 
*   @brief  This enumerated type will contain the watchdog driver's possible modes 
*/
typedef enum {
    WDGIF_OFF_MODE      = 0,/**< @brief  In this mode, the watchdog driver is disabled (switched off). */
    WDGIF_SLOW_MODE,        /**< @brief  =0x01 In this mode, the watchdog driver is set up for a long timeout period (slow triggering).*/
    WDGIF_FAST_MODE         /**< @brief  =0x02 In this mode, the watchdog driver is set up for a short timeout period (fast triggering).*/
} WdgIf_ModeType;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*WDGIF_TYPES_H*/
