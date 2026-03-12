/**
*   @file    Lin_Cfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Lin - Lin precompile configuration parameters.
*   @details This file contains the Lin precompile configuration parameters.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : LINFlex
*   Dependencies         : 
*
*   Autosar Version      : 4.0.3
*   Autosar Revision     : ASR_REL_4_0_REV_0003
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_HF5_ASR_REL_4_0_REV_0003_20140822
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
* @section Lin_Cfg_c_REF_1
* Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h,
* Precautions shall be taken in order to prevent the contents of a header file
* being included twice This is not a violation since all header files are
* protected against multiple inclusions
*
* @section Lin_Cfg_c_REF_2
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
* before '#include' MemMap.h included after each section define in order to set
* the current memory section
*
* @section Lin_Cfg_c_REF_3
* Violates MISRA 2004 Required Rule 1.4, Identifier clash
* This violation is due to the requirement that request to have a file version check.
*
* @section Lin_Cfg_c_REF_4
* Violates MISRA 2004 Required Rule 9.2, Braces shall be used to indicate and match the structure
* in the non-zero initialisation of arrays and structure
* This violation is due to the config data refer to config datas of channels by pointer.
*
* @section Lin_Cfg_c_REF_5
* Violates MISRA 2004 Required Rule 10.1,
* The value of an expression of integer type shall not be implicitly
* converted to a different underlying type
*
* @section Lin_Cfg_c_REF_6
* Violates MISRA 2004 Required Rule 8.10, Not required from Autosar
* specification.
*
* @section Lin_Cfg_c_REF_7
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal
* and external) shall not rely on the significance of more 
* than 31 characters.
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Std_Types.h"
#include "Lin.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Lin_Cfg.c
* @implements     DLIN03301
*/
#define LIN_VENDOR_ID_CFG_C                      43
/*
* @violates @ref Lin_Cfg_c_REF_3 The compiler/linker shall be checked to
* ensure that 31 character signifiance and case sensitivity are supported for
* external identifiers.
*/
/* @violates @ref Lin_Cfg_c_REF_7 This is required as per Autosar Requirement. */
#define LIN_AR_RELEASE_MAJOR_VERSION_CFG_C       4
/*
* @violates @ref Lin_Cfg_c_REF_3 The compiler/linker shall be checked to
* ensure that 31 character signifiance and case sensitivity are supported for
* external identifiers.
*/
/* @violates @ref Lin_Cfg_c_REF_7 This is required as per Autosar Requirement. */
#define LIN_AR_RELEASE_MINOR_VERSION_CFG_C       0
/*
* @violates @ref Lin_Cfg_c_REF_3 The compiler/linker shall be checked to
* ensure that 31 character signifiance and case sensitivity are supported for
* external identifiers.
*/
/* @violates @ref Lin_Cfg_c_REF_7 This is required as per Autosar Requirement. */
#define LIN_AR_RELEASE_REVISION_VERSION_CFG_C    3
#define LIN_SW_MAJOR_VERSION_CFG_C               1
#define LIN_SW_MINOR_VERSION_CFG_C               0
#define LIN_SW_PATCH_VERSION_CFG_C               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
[!NOCODE!][!//
[!INCLUDE "Lin_VersionCheck_Src.m"!][!//
[!ENDNOCODE!][!//
/* Check if current file and Lin.h header file are of the same Autosar version */
#if ((LIN_AR_RELEASE_MAJOR_VERSION_CFG_C    != LIN_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_AR_RELEASE_MINOR_VERSION_CFG_C    != LIN_AR_RELEASE_MINOR_VERSION) || \
     (LIN_AR_RELEASE_REVISION_VERSION_CFG_C != LIN_AR_RELEASE_REVISION_VERSION))
  #error "AutoSar Version Numbers of Lin_Cfg.c and Lin.h are different"
#endif
/* Check if current file and Lin.h header file are of the same Software version */
#if ((LIN_SW_MAJOR_VERSION_CFG_C != LIN_SW_MAJOR_VERSION) || \
     (LIN_SW_MINOR_VERSION_CFG_C != LIN_SW_MINOR_VERSION))
  #error "Software Version Numbers of Lin_Cfg.c and Lin.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
  #if ((LIN_AR_RELEASE_MAJOR_VERSION_CFG_C != STD_TYPES_AR_RELEASE_MAJOR_VERSION) || \
       (LIN_AR_RELEASE_MINOR_VERSION_CFG_C != STD_TYPES_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Lin_Cfg.c and Std_Types.h are different"
  #endif
#endif

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
[!VAR "tmp_LinPhysicalErrorNotificationFunction" = "NonAutosar/LinPhysicalErrorNotificationFunction"!]
#ifdef LIN_PHYSICAL_ERROR_NOTIFICATION_SUPPORT
/* Physical error notification */
extern void [!"$tmp_LinPhysicalErrorNotificationFunction"!](VAR(uint8, AUTOMATIC) Channel, VAR(uint32, AUTOMATIC) errorFlags); 
#endif /* defined(LIN_PHYSICAL_ERROR_NOTIFICATION_SUPPORT) */

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/* @violates @ref Lin_Cfg_c_REF_7 This is required as per Autosar Requirement. */
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
/** 
* @violates @ref Lin_Cfg_c_REF_1 #include statements in a file should
*                only be preceded by other preprocessor directives or comments.
*/
#include "MemMap.h"
[!NOCODE!][!//
[!VAR "LFDIV"="0"!][!//
[!VAR "temp1" = "0"!][!//
[!VAR "temp2" = "0"!][!//
[!VAR "LINIBRR" = "0"!][!//
[!VAR "LINFBRR" = "0"!][!//
[!VAR "LINIBRR_LINFBRR" = "0"!][!//
[!VAR "ECUM_WAKE_UP_SOURCE" = "0"!][!//
[!VAR "DUALCLOCK"!][!"NonAutosar/LinEnableDualClockMode"!][!ENDVAR!]
[!VAR "LinDemErrorEnable" = "'false'"!]
[!IF "NonAutosar/ LinDisableDemReportErrorStatus ='false'"!][!//
    [!VAR "nconf" = "count(LinGlobalConfig/*)"!]
    [!VAR "iconf" = "0"!]
    [!FOR "iconf" = "1" TO "$nconf"!]
        [!IF "node:exists(LinGlobalConfig/*[$iconf]/LinDemEventParameterRefs)"!]
            [!VAR "LinDemErrorEnable" = "'true'"!]
        [!ENDIF!]
    [!ENDFOR!]
[!ENDIF!]
[!ENDNOCODE!][!//
#if (LIN_PRECOMPILE_SUPPORT == STD_ON)

[!LOOP "LinGlobalConfig/*"!][!//
[!VAR "nodeName" = "name(.)"!][!//
[!VAR "shortNodeName" = "concat('_C', substring-after($nodeName, '_'))"!]
[!LOOP "LinChannel/*"!][!//
/**
* @brief          Configuration for Lin Channel [!"LinChannelId"!] - Configuration:
*                 [!"$nodeName"!].
*
* @implements     DLIN03303
* 
* @api
*/
CONST(Lin_ChannelConfigType,LIN_APPL_CONST) Lin_[!"node:name(.)"!][!"$shortNodeName"!]=
    {
    [!"LinHwChannel"!],             /* Lin Hardware channel*/
[!NOCODE!][!//
    [!VAR "linBaudrate" = "LinChannelBaudRate"!]
    [!SELECT "node:ref(LinClockRef)"!]
    [!INCLUDE "Lin_BaudRate_Comp.m"!][!//
    [!ENDSELECT!]
[!ENDNOCODE!][!//
[!NOCODE!][!//
  [!IF "$DUALCLOCK"!]
      [!CODE!]    [!"$LINIBRR_LINFBRR"!]U,               /* Baudrate [!"LinChannelBaudRate"!] */
[!ENDCODE!]
      [!VAR "linBaudrate" = "LinChannelBaudRate"!]
      [!SELECT "node:ref(LinClockRef_Alternate)"!]
      [!INCLUDE "Lin_BaudRate_Comp.m"!][!//
      [!ENDSELECT!]
      [!CODE!]    [!"$LINIBRR_LINFBRR"!]U,               /* Alternate Baudrate [!"LinChannelBaudRate"!] */[!ENDCODE!]
  [!ELSE!]
      [!CODE!]    [!"$LINIBRR_LINFBRR"!]U,               /* Baudrate [!"LinChannelBaudRate"!] */[!ENDCODE!]
  [!ENDIF!]
[!ENDNOCODE!]
[!IF "LinChannelWakeupSupport"!]
    (uint16)STD_ON,                /* Wakeup support enabled */
[!ELSE!]
    (uint16)STD_OFF,               /* Wakeup support disabled */[!ENDIF!]
[!NOCODE!][!//
  [!VAR "IntegerBrkLength" = "substring-after(BreakLength,'_')"!]
  [!IF "$IntegerBrkLength = 36"!]
    [!VAR "VarBreakLength"="14"!]
  [!ELSEIF "$IntegerBrkLength = 50"!]
    [!VAR "VarBreakLength"="15"!]
  [!ELSE!]
    [!VAR "VarBreakLength"="$IntegerBrkLength - 10"!]
  [!ENDIF!]
[!ENDNOCODE!][!//
    [!"num:inttohex($VarBreakLength,2)"!]U,                /* BreakLength = [!"BreakLength"!] bits */
[!IF "LinChannelWakeupSupport ='true'"!][!//
        [!VAR "ECUM_WAKE_UP_SOURCE"!][!"as:ref(LinChannelEcuMWakeupSource)/@name"!][!ENDVAR!][!//
#ifdef LIN_GLOBAL_WAKEUP_SUPPORT
    (EcuM_WakeupSourceType)EcuMConf_EcuMWakeupSource_[!"$ECUM_WAKE_UP_SOURCE"!],            /* Wakeup Source transmitted to the Ecu State Manager (used only when Wakeup Support is true) */
#endif /* LIN_GLOBAL_WAKEUP_SUPPORT */
[!ELSE!][!//
#ifdef LIN_GLOBAL_WAKEUP_SUPPORT
    (EcuM_WakeupSourceType) 0,            /* Wakeup Source transmitted to the Ecu State Manager (used only when Wakeup Support is true) */
#endif /* LIN_GLOBAL_WAKEUP_SUPPORT */
[!ENDIF!][!//
 };

[!ENDLOOP!][!//
[!ENDLOOP!][!//

[!LOOP "LinGlobalConfig/*"!]
[!VAR "nodeName" = "name(.)"!][!//
[!VAR "shortNodeName" = "concat('_C', substring-after($nodeName, '_'))"!]
/**
* @brief          Lin Configuration data for Lin_ConfigPC.
*
* @implements     DLIN03302
* 
* @api
*/
CONST(Lin_ConfigType,LIN_CONST)Lin_ConfigPC =
    {
[!VAR "LoopVar"="0"!][!//
[!VAR "count"="0"!][!//
[!FOR "count" = "0" TO "num:i(count(LinChannel/*))"!][!//
[!LOOP "LinChannel/*"!][!//
[!IF "$LoopVar = num:i(LinChannelId)"!][!//
    /**
     * @brief   Configuration for Lin Channel [!"LinChannelId"!].
     */

    &Lin_[!"node:name(.)"!][!"$shortNodeName"!],
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//

    /**
     * @brief   DEM error parameters
     */
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
    /*
    * @violates @ref Lin_Cfg_c_REF_5 The value of an expression of
    * integer type shall not be implicitlyconverted to a different
    * underlying type
    */
[!IF "$LinDemErrorEnable"!][!//
[!IF "node:exists(./LinDemEventParameterRefs/LIN_E_TIMEOUT)"!][!//
[!IF "node:exists(node:ref(./LinDemEventParameterRefs/LIN_E_TIMEOUT))"!][!//
    { STD_ON, [!"node:value(node:ref(./LinDemEventParameterRefs/LIN_E_TIMEOUT)/DemEventId)"!]U} /* LIN_E_TIMEOUT parameters*/ [!//
[!ELSE!][!//
    [!ERROR "Invalid reference for LIN_E_ERROR"!][!//
[!ENDIF!][!//
[!ELSE!][!//
    {STD_OFF, 0U} /* LIN_E_TIMEOUT parameters*/[!//
[!ENDIF!][!// 
[!ELSE!][!//
    {STD_OFF, 0U}/* LIN_E_TIMEOUT parameters*/ [!//
[!ENDIF!][!// 
#endif /* LIN_DEM_ERROR_DETECT == STD_ON */  
#ifdef LIN_PHYSICAL_ERROR_NOTIFICATION_SUPPORT
    &[!"$tmp_LinPhysicalErrorNotificationFunction"!] /* Physical error notification */
#endif /* defined(LIN_PHYSICAL_ERROR_NOTIFICATION_SUPPORT) */
    };

[!ENDLOOP!][!//
#endif /* LIN_PRECOMPILE_SUPPORT == STD_ON */

/* @violates @ref Lin_Cfg_c_REF_7 This is required as per Autosar Requirement. */
#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED

/*
* @violates @ref Lin_Cfg_c_REF_1 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
/*
* @violates @ref Lin_Cfg_c_REF_2 Only preprocessor
*                            statements and comments before '#include'
*/
#include "MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
