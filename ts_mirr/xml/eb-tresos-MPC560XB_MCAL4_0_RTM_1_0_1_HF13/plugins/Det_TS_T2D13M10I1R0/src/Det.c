/**
*   @file    Det.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Det - module implementation
*   @details This module implements stubs for the AUTOSAR Det
*            This file contains sample code only. It is not part of the production code deliverables
*
*   @addtogroup DET_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : 
*   Dependencies         : none
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

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/**
* @file           Det.c
* @requirements   DET004
*/
#include "Std_Types.h"
#include "Det.h"

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/
#define DET_VENDOR_ID_C                     43
#define DET_AR_RELEASE_MAJOR_VERSION_C      4
#define DET_AR_RELEASE_MINOR_VERSION_C      0
#define DET_AR_RELEASE_REVISION_VERSION_C   3
#define DET_SW_MAJOR_VERSION_C              1
#define DET_SW_MINOR_VERSION_C              0
#define DET_SW_PATCH_VERSION_C              1
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and DET header file are of the same vendor */
#if (DET_VENDOR_ID_C != DET_VENDOR_ID)
    #error "Det.c and Det.h have different vendor ids"
#endif

/* Check if source file and DET header file are of the same Autosar version */
#if ((DET_AR_RELEASE_MAJOR_VERSION_C != DET_AR_RELEASE_MAJOR_VERSION) || \
     (DET_AR_RELEASE_MINOR_VERSION_C != DET_AR_RELEASE_MINOR_VERSION) || \
     (DET_AR_RELEASE_REVISION_VERSION_C != DET_AR_RELEASE_REVISION_VERSION))
  #error "AutoSar Version Numbers of Det.c and Det.h are different"
#endif

/* Check if source file and DET header file are of the same Software version */
#if ((DET_SW_MAJOR_VERSION_C != DET_SW_MAJOR_VERSION) || \
     (DET_SW_MINOR_VERSION_C != DET_SW_MINOR_VERSION) || \
     (DET_SW_PATCH_VERSION_C != DET_SW_PATCH_VERSION))
    #error "Software Version Numbers of Det.c and Det.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if DET source file and STD header file are of the same Autosar version */
    #if ((DET_AR_RELEASE_MAJOR_VERSION_C != STD_TYPES_AR_RELEASE_MAJOR_VERSION) || \
        (DET_AR_RELEASE_MINOR_VERSION_C != STD_TYPES_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Det.c and Std_Types.h are different"
    #endif
#endif
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/* put all DET variables into defined section */
#define DET_START_SEC_VAR_NO_INIT_8
#include "MemMap.h"

/* Variables to store last DET error */
VAR(uint8 , DET_VAR) Det_InstanceId;     /**< @brief DET instance ID*/
VAR(uint8 , DET_VAR) Det_ApiId;          /**< @brief DET API ID*/
VAR(uint8 , DET_VAR) Det_ErrorId;        /**< @brief DET Error ID*/

#define DET_STOP_SEC_VAR_NO_INIT_8
#include "MemMap.h"


/* put all DET variables into defined section */
#define DET_START_SEC_VAR_NO_INIT_16
#include "MemMap.h"

/* Variables to store last DET error */
VAR(uint16, DET_VAR) Det_ModuleId;       /**< @brief DET module ID*/

#define DET_STOP_SEC_VAR_NO_INIT_16
#include "MemMap.h"
/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/* put all DET code into defined section */
#define DET_START_SEC_CODE
#include "MemMap.h"

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/*================================================================================================*/
/**
* @brief          This function initializes the DET module.
* @details        This is a function stub only. Functionality is void in this implementation
*
* @requirements   DET008
*
*/
FUNC(void, DET_CODE) Det_Init(void)
{
    
}

/*================================================================================================*/
/** 
* @brief   This function provides the service for reporting of development errors. 
* @details This is a function stub only. It only loads the global IDs with the IDs of the latest error that occured
*    
* @param[in]     ModuleId    Module ID of Calling Module
* @param[in]     InstanceId  Index of Module starting at 0
* @param[in]     ApiId       ID of API with Error
* @param[in]     ErrorId     ID of Error
*
* @requirement DET009
*/
FUNC(void, DET_CODE) Det_ReportError(VAR(uint16, AUTOMATIC) ModuleId, VAR(uint8, AUTOMATIC) InstanceId, VAR(uint8, AUTOMATIC) ApiId, VAR(uint8, AUTOMATIC) ErrorId)
{
    Det_ModuleId = ModuleId; 
    Det_InstanceId = InstanceId;
    Det_ApiId = ApiId; 
    Det_ErrorId = ErrorId;
}

/*================================================================================================*/
/** 
* @brief   This function provides the starting after the Det_Init has been called. 
* @details This is a function stub only.  Det_Init and Det_Start shall always be available. 
*          Functionality is void in this implementation
*    
* @requirement DET010   
*/
FUNC(void, DET_CODE) Det_Start(void)
{
    
}

#define DET_STOP_SEC_CODE
#include "MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
