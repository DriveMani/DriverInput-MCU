/**
*   @file    Lin_Cfg.h
*   @version 1.0.1
*
*   @brief   AUTOSAR Lin - High level header of LIN driver.
*   @details This file contains declarations of the functions defined by AutoSAR.
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

#ifndef LIN_CFG_H
#define LIN_CFG_H

#ifdef __cplusplus
extern "C"
{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Lin_Cfg_h_REF_1
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken
* in order to prevent the contents of a header file being included twice.
* This comes from the order of includes in the .c file and from
* include dependencies. As a safe approach, any file must include all
* its dependencies. Header files are already protected against double
* inclusions. The inclusion of MemMap.h is as per Autosar
* requirement MEMMAP003.
*
* @section Lin_Cfg_h_REF_2
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall
* be checked to ensure that 31 character signifiance and
* case sensitivity are supported for external identifiers.
* This violation is due to the requirement that requests to have
* a file version check.
*
* @section Lin_Cfg_h_REF_3
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
[!NOCODE!][!//
[!// check for duplicated channel id, or hw channel id
[!VAR "iconf" = "0"!]
[!VAR "ichnn" = "0"!]
[!VAR "iter" = "0"!]
[!VAR "tmp_wakeup_support" = "0"!]
[!VAR "nconf" = "count(LinGlobalConfig/*)"!]
[!FOR "iconf" = "1" TO "$nconf"!]
    [!VAR "nchnn" = "count(LinGlobalConfig/*[$iconf]/LinChannel/*)"!]
    [!FOR "ichnn" = "1" TO "$nchnn"!]
        [!VAR "hwLoopChannel" = "substring-after(LinGlobalConfig/*[$iconf]/LinChannel/*[$ichnn]/LinHwChannel,'_')"!]
        [!VAR "chnnID" = "LinGlobalConfig/*[$iconf]/LinChannel/*[$ichnn]/LinChannelId"!]
        [!FOR "iter" = "$ichnn + 1" TO "$nchnn"!]
            [!IF "($hwLoopChannel = substring-after(LinGlobalConfig/*[$iconf]/LinChannel/*[$iter + 1 - 1]/LinHwChannel,'_'))"!]
                [!ERROR!] Duplicate LinHwChannel IDs.[!ENDERROR!]
            [!ENDIF!]
            [!IF "($chnnID = LinGlobalConfig/*[$iconf]/LinChannel/*[$iter + 1 - 1]/LinChannelId)"!]
                [!ERROR!] Duplicate LinChannelId.[!ENDERROR!]
            [!ENDIF!]
        [!ENDFOR!]
        /* check for wake-up support */
        [!IF "LinGlobalConfig/*[$iconf]/LinChannel/*[$ichnn]/LinChannelWakeupSupport ='true'"!]
            [!VAR "tmp_wakeup_support" = "1"!]
        [!ENDIF!]
    [!ENDFOR!]
[!ENDFOR!]
[!// end check for duplicated channel id, or hw channel id

[!VAR "I"="1"!][!//
[!VAR "NC" = "0"!]
[!VAR "NN"="count(LinGlobalConfig/*)"!][!//
[!VAR "NCS" = "count(LinGlobalConfig/*[1]/LinChannel/*)"!]
[!LOOP "LinGlobalConfig/*"!]
    [!VAR "NC" ="count(LinChannel/*)"!]
    [!IF "($NC!=$NCS)"!]
        [!ERROR!] The configurations must have the same number of channels.[!ENDERROR!]
    [!ENDIF!]
[!ENDLOOP!]
[!ENDNOCODE!][!//
[!IF "$tmp_wakeup_support = 1"!]
#include "EcuM_Cbk.h"
[!ENDIF!]
/*
* @violates @ref Lin_Cfg_h_REF_1 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "Mcal.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Lin_Cfg.h
* @implements     DLIN03012
*/
[!NOCODE!][!//
[!INCLUDE "Lin_VersionCheck_Inc.m"!][!//
[!ENDNOCODE!][!//

/* Inclusion of incompatible header files shall be avoided */

#define LIN_VENDOR_ID_CFG                    43
#define LIN_MODULE_ID_CFG                    82

/* @violates @ref Lin_Cfg_h_REF_3 This is required as per Autosar Requirement. */
#define LIN_AR_RELEASE_MAJOR_VERSION_CFG     4

/* @violates @ref Lin_Cfg_h_REF_3 This is required as per Autosar Requirement. */
#define LIN_AR_RELEASE_MINOR_VERSION_CFG     0
/*
* @violates @ref Lin_Cfg_h_REF_2 The compiler/linker shall be checked to
* ensure that 31 character signifiance and case sensitivity are supported for
* external identifiers.
*/
/* @violates @ref Lin_Cfg_h_REF_3 This is required as per Autosar Requirement. */
#define LIN_AR_RELEASE_REVISION_VERSION_CFG  3
#define LIN_SW_MAJOR_VERSION_CFG             1
#define LIN_SW_MINOR_VERSION_CFG             0
#define LIN_SW_PATCH_VERSION_CFG             1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
[!IF "$tmp_wakeup_support = 1"!]
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and EcuM header file are of the same version */
    #if ((LIN_AR_RELEASE_MAJOR_VERSION_CFG != ECUM_CBK_AR_RELEASE_MAJOR_VERSION) || \
         (LIN_AR_RELEASE_MINOR_VERSION_CFG != ECUM_CBK_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Lin_Cfg.h. and EcuM_Cbk.h are different"
    #endif
#endif
[!ENDIF!]
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
[!IF "IMPLEMENTATION_CONFIG_VARIANT = 'VariantPreCompile'"!]
/**
* @brief          Precompile Support On.
* @details        VARIANT-PRE-COMPILE: Only parameters with "Pre-compile time"
*                 configuration are allowed in this variant.
*
* @implements     DLIN03007
* 
* @api
*/
#define LIN_PRECOMPILE_SUPPORT (STD_ON)
[!ELSE!][!//
#define LIN_PRECOMPILE_SUPPORT (STD_OFF)
[!ENDIF!][!//


/**
* @brief   No of Channels configured.
*
* @implements     DLIN03005
* 
* @api
*/
#define LIN_HW_MAX_MODULES [!"num:i(count(LinGlobalConfig/*[1]/LinChannel/*))"!]U[!//*/

/**
* @brief   Total number of available hardware lin channels.
*
* @implements     DLIN03004
* 
* @api
*/
#define LIN_HW_MAX_AVAILABLE_MODULES [!"num:i(ecu:get('Lin.LinGlobalConfig.LinChannel'))"!]U

/**
* @brief   Max data length of the LIN SDU buffer to be returned.
*
* @implements     DLIN03006
* 
* @api
*/
#define LIN_MAX_DATA_LENGTH  8U

/**
* @brief   Number of loops before returning LIN_E_TIMEOUT.
*
* @implements     DLIN03008
* 
* @api
*/
#define  LIN_TIMEOUT_LOOPS [!"LinGeneral/LinTimeoutDuration"!]U

/**
* @brief   Switches the Development Error Detection and Notification ON or OFF.
*
* @implements     DLIN03001
* 
* @api
*/
#define LIN_DEV_ERROR_DETECT      [!IF "LinGeneral/LinDevErrorDetect"!](STD_ON)  /* Enable Development Error Detection */[!ELSE!](STD_OFF) /* Disable Development Error Detection */[!ENDIF!]

/**
* @brief          Support for version info API.
* @details        Switches the Lin_GetVersionInfo() API ON or OFF.
*
* @implements     DLIN03009
* 
* @api
*/
#define LIN_VERSION_INFO_API      [!IF "LinGeneral/LinVersionInfoApi"!](STD_ON)  /* Enable API Lin_GetVersionInfo      */[!ELSE!](STD_OFF) /* Disable API Lin_GetVersionInfo     */[!ENDIF!]

/**
* @brief          Enable Non-Autosar API for Dual-Clock support.
* @details        Enable/diasble API Lin_SetClockMode() to set the 
*                 clock to be used by the LIN driver (Normal clock: default mode;
*                 Alternate clock: when the driver is in Low-Power mode).
*                 This can be set to STD_ON only if it is activated from xdm file
*                 (Lin.NonAutosar.LinEnableDualClockMode = STD_ON).
*
* @implements     DLIN03002
* 
* @api
*/
#define LIN_DUAL_CLOCK_MODE       [!IF "NonAutosar/LinEnableDualClockMode"!](STD_ON)  /* Enable API Lin_SetClockMode        */[!ELSE!](STD_OFF) /* Disable API Lin_SetClockMode       */[!ENDIF!]
[!NOCODE!]
[!IF "$tmp_wakeup_support = 1"!]
[!CODE!]
/**
* @brief          At least 1 LIN channel has WAKEUP support enabled.
* @details        At least 1 LIN channel has WAKEUP support enabled.
*
* @implements     DLIN03003
* 
* @api
*/
#define  LIN_GLOBAL_WAKEUP_SUPPORT
[!ENDCODE!]
[!ENDIF!]

[!IF "NonAutosar/LinEnablePhyscicalErrorNotification ='true'"!]
[!CODE!]
/**
* @brief          Support Physical Error Notification
* @details        
*
* @implements     
* 
* @api
*/
#define  LIN_PHYSICAL_ERROR_NOTIFICATION_SUPPORT
[!ENDCODE!]
[!ENDIF!]
[!CODE!]
/**
* @brief          Link Lin channels symbolic names with Lin channel IDs.
* @details        Link Lin channels symbolic names with Lin channel IDs.
*
* @implements     DLIN03010
* 
* @api
*/
[!ENDCODE!][!//
[!LOOP "LinGlobalConfig/*[1]/LinChannel/*"!]
    [!VAR "HardwareChannel" = "substring-after(LinHwChannel,'_')"!]
[!CODE!][!//
#define LinHWCh_[!"$HardwareChannel"!]    [!"$HardwareChannel"!]U
[!ENDCODE!]
[!ENDLOOP!]
[!ENDNOCODE!]

/**
* @brief          Symbolic names for configured channels  (as per ecuc_sws_2108).
* @details        Symbolic names for configured channels  (as per ecuc_sws_2108).
*
* @implements     DLIN03011
* 
* @api
*/

[!LOOP "LinGlobalConfig/*[1]/LinChannel/*"!][!//
/*
* @violates @ref Lin_Cfg_h_REF_2 The compiler/linker shall be checked to
* ensure that 31 character signifiance and case sensitivity are supported for
* external identifiers.
*/
/* @violates @ref Lin_Cfg_h_REF_3 This is required as per Autosar Requirement. */
#define LinConf_LinChannel_[!"node:name(.)"!]         [!"LinChannelId"!]
[!ENDLOOP!][!//

/**
* @brief   Switches the Production Error Detection and Notification OFF
*
* @implements     DLIN03016
* 
* @api
*/
/* @violates @ref Lin_Cfg_h_REF_3 This is required as per Autosar Requirement. */
[!NOCODE!]
[!VAR "LinDemErrorEnable" = "'false'"!]
[!IF "NonAutosar/LinDisableDemReportErrorStatus ='false'"!][!//
    [!VAR "nconf" = "count(LinGlobalConfig/*)"!]
    [!VAR "iconf" = "0"!]
    [!FOR "iconf" = "1" TO "$nconf"!]
        [!IF "node:exists(LinGlobalConfig/*[$iconf]/LinDemEventParameterRefs)"!]
            [!VAR "LinDemErrorEnable" = "'true'"!]
        [!ENDIF!]
    [!ENDFOR!]
[!ENDIF!]
[!ENDNOCODE!]
#define LIN_DISABLE_DEM_REPORT_ERROR_STATUS   [!IF "$LinDemErrorEnable"!](STD_ON)  /* Enable Production Error Detection */[!ELSE!](STD_OFF) /* Disable Production Error Detection */[!ENDIF!]
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
* @brief          LIN channel configuration type structure.
* @details        This is the type of the external data structure containing
*                 the overall initialization data for one LIN Channel.
*                 A pointer to such a structure is provided to the LIN channel
*                 initialization routine for configuration of the LIN hardware
*                 channel.
*
* @implements     DLIN03013
* 
* @api
*/
typedef struct
    {
    VAR(uint8, LIN_VAR) LinChannelID;             /*!< Hardware channel.*/
[!NOCODE!]
  [!IF "NonAutosar/LinEnableDualClockMode"!]
    [!CODE!]    VAR(uint32, LIN_VAR) Lin_BaudRate_RegValue;   /*!< LIN baudrate value.*/
    VAR(uint32, LIN_VAR) Lin_BaudRate_RegValue_Alternate;   /*!< LIN baudrate value with alternate clock.*/[!ENDCODE!]
  [!ELSE!]
    [!CODE!]    VAR(uint32, LIN_VAR) Lin_BaudRate_RegValue;   /*!< LIN baudrate value.*/[!ENDCODE!]
  [!ENDIF!]
[!ENDNOCODE!]
    VAR(uint16, LIN_VAR) LinChannelWakeupSupport; /*!< Is wake-up supported by the LIN channel ?.*/
    VAR(uint8, LIN_VAR) LinChannelBreakLength;    /*!< These bits indicate the Break length in Master mode.*/
#ifdef LIN_GLOBAL_WAKEUP_SUPPORT
    VAR(EcuM_WakeupSourceType, LIN_VAR) LinChannelEcuMWakeupSource;    /*!< [LIN098] This parameter contains a reference to the Wakeup Source for this controller as defined in the ECU State Manager.*/
#endif /* LIN_GLOBAL_WAKEUP_SUPPORT */
    } Lin_ChannelConfigType;

/**
* @brief          LIN channel physical error notification callback.
* @details        
*
* @implements     
* 
* @api
*/
typedef void (Lin_NotifyType) (VAR(uint8, AUTOMATIC) Channel, VAR(uint32, AUTOMATIC) errorFlags);

/**
* @brief          LIN driver configuration type structure.
* @details        This is the type of the pointer to the external data
*                 LIN Channels.
*                 A pointer of such a structure is provided to the LIN driver
*                 initialization routine for configuration of the LIN hardware
*                 channel.
*
* @implements     DLIN03014
* 
* @api
*/
typedef struct
    {
    /**
     * @brief     Hardware channel.
     * @details   Constant pointer of the constant external data
     *            structure containing the overall initialization data
     *            for all the LIN Channels.
     */
    CONSTP2CONST (Lin_ChannelConfigType,LIN_APPL_CONST,LIN_CONST) Lin_Channel[LIN_HW_MAX_MODULES];
    #if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
        CONST(Mcal_DemErrorType, LIN_CONST) Lin_E_TimeoutCfg;
    #endif
    #ifdef LIN_PHYSICAL_ERROR_NOTIFICATION_SUPPORT
      P2FUNC(Lin_NotifyType, LIN_VAR, PhysicalErrorNotification); /*!< This call back function will be called when one physical error happen on this channel.*/
    #endif
    } Lin_ConfigType;

/*==================================================================================================
*                                  EXTERNAL CONSTANTS
==================================================================================================*/

/* @violates @ref Lin_Cfg_h_REF_3 This is required as per Autosar Requirement. */
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
/** 
* @violates @ref Lin_Cfg_h_REF_1 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

[!NOCODE!][!//
[!LOOP "LinGlobalConfig/*"!][!//
[!VAR "nodeName" = "name(.)"!][!//
[!VAR "shortNodeName" = "concat('_C', substring-after($nodeName, '_'))"!]
[!CODE!]

#if (LIN_PRECOMPILE_SUPPORT == STD_ON)

/**
* @brief          Lin Configuration data for Lin_ConfigPC.
*
* @implements     DLIN03302
* 
* @api
*/
extern CONST(Lin_ConfigType,LIN_CONST)Lin_ConfigPC;

#else

/**
* @brief          Lin Configuration data for [!"$nodeName"!].
*
* @implements     DLIN03304
* 
* @api
*/
extern CONST(Lin_ConfigType,LIN_CONST)[!"$nodeName"!];

#endif /* LIN_PRECOMPILE_SUPPORT == STD_ON */
[!ENDCODE!][!//
[!LOOP "LinChannel/*"!][!//
[!CODE!][!//

/**
* @brief          Configuration for Lin Channel [!"LinChannelId"!] - Configuration:
*                 [!"$nodeName"!].
*
* @implements     DLIN03303
* 
* @api
*/
extern CONST(Lin_ChannelConfigType,LIN_CONST)Lin_[!"node:name(.)"!][!"$shortNodeName"!];
[!ENDCODE!][!//
[!ENDLOOP!]
[!ENDLOOP!][!//
[!ENDNOCODE!]

/* @violates @ref Lin_Cfg_h_REF_3 This is required as per Autosar Requirement. */
#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED

/** 
* @violates @ref Lin_Cfg_h_REF_1 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

#endif /* LIN_CFG_H */

#ifdef __cplusplus
}
#endif
