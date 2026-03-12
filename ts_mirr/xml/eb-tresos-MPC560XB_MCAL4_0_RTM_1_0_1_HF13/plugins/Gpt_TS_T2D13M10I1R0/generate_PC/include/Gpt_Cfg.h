/**
*   @file    Gpt_Cfg.h
*   @version 1.0.1
*
*   @brief   AUTOSAR Gpt  - Gpt driver configuration header file.
*   @details GPT driver header file, containing C and XPath constructs for generating Gpt
*   configuration header file.
*
*   @addtogroup GPT_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : eMIOS_Stm_Pit_Rtc
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

#ifndef GPT_CFG_H
#define GPT_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section GPT_CFG_H_REF_1
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely on the significance
* of more than 31 characters.
* The long identifiers are maintained for better readability.
*
* @section GPT_CFG_H_REF_2
* Violates MISRA 2004 Required Rule 20.2, The names of standard library macros, objects and functions
* shall not be reused
*
* @section GPT_CFG_H_REF_3
* Violates MISRA 2004 Required Rule 19.4, C macros shall only expand to a braced initialiser, a constant, a
* parenthesised expression, a type qualifier, a storage class specifier, or a do-while-zero construct
*
* @section GPT_CFG_H_REF_4
* Violates MISRA 2004 Required Rule 1.4, Identifier clash.
* This violation is due to large macro name. This is maintained for better readability.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Reg_eSys_eMIOS_CfgEx.h"
#include "Gpt_eMIOS_LLD_CfgEx.h"
#include "Gpt_Stm_LLD_CfgEx.h"
#include "Gpt_Pit_LLD_CfgEx.h"
#include "Gpt_Rtc_LLD_CfgEx.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
@{
* @brief          Gpt_Cfg.h
* @requirements   BSW00374, BSW00379, BSW00318
* @implements     DGPT03600
*/
#define GPT_VENDOR_ID_CFG                    43
/* @violates @ref GPT_CFG_H_REF_1 Violates MISRA 2004 Required Rule 5.1, The long identifiers are maintained for better readability. */
#define GPT_AR_RELEASE_MAJOR_VERSION_CFG     4
/* @violates @ref GPT_CFG_H_REF_1 Violates MISRA 2004 Required Rule 5.1, The long identifiers are maintained for better readability. */
#define GPT_AR_RELEASE_MINOR_VERSION_CFG     0
/* @violates @ref GPT_CFG_H_REF_1 Violates MISRA 2004 Required Rule 5.1, The long identifiers are maintained for better readability. */
#define GPT_AR_RELEASE_REVISION_VERSION_CFG  3
#define GPT_SW_MAJOR_VERSION_CFG             1
#define GPT_SW_MINOR_VERSION_CFG             0
#define GPT_SW_PATCH_VERSION_CFG             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Gpt_Cfg.h file and Gpt_eMIOS_LLD_CfgEx.h header file are of the same vendor */
#if (GPT_VENDOR_ID_CFG != GPT_EMIOS_LLD_CFGEX_H_VENDOR_ID)
    #error "Gpt_Cfg.h and eMios_Gpt_eMIOS_LLD_CfgEx.h have different vendor ids"
#endif
/* Check if header file and Emios Cfg LLD header file are of the same Autosar version */
#if ((GPT_AR_RELEASE_MAJOR_VERSION_CFG != GPT_EMIOS_LLD_CFGEX_H_AR_RELEASE_MAJOR_VERSION) || \
     (GPT_AR_RELEASE_MINOR_VERSION_CFG != GPT_EMIOS_LLD_CFGEX_H_AR_RELEASE_MINOR_VERSION) || \
     (GPT_AR_RELEASE_REVISION_VERSION_CFG != GPT_EMIOS_LLD_CFGEX_H_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Gpt_Cfg.h and Gpt_eMIOS_LLD_CfgEx.h are different"
#endif
/* Check if header file and Emios Cfg LLD header file are of the same software version */
#if ((GPT_SW_MAJOR_VERSION_CFG != GPT_EMIOS_LLD_CFGEX_H_SW_MAJOR_VERSION) || \
     (GPT_SW_MINOR_VERSION_CFG != GPT_EMIOS_LLD_CFGEX_H_SW_MINOR_VERSION) || \
     (GPT_SW_PATCH_VERSION_CFG != GPT_EMIOS_LLD_CFGEX_H_SW_PATCH_VERSION))
    #error "Software Version Numbers of Gpt_Cfg.h and eMios_Gpt_LLD_CfgEx.h are different"
#endif

/* Check if Gpt_Cfg.h file and Gpt_Stm_LLD_CfgEx.h header file are of the same vendor */
#if (GPT_VENDOR_ID_CFG != GPT_STM_LLD_CFG_EX_VENDOR_ID)
    #error "Gpt_Cfg.h and Gpt_Stm_LLD_CfgEx.h have different vendor ids"
#endif
/* Check if Gpt_Cfg.h file and Gpt_Stm_LLD_CfgEx.h header file are of the same Autosar version */
#if ((GPT_AR_RELEASE_MAJOR_VERSION_CFG != GPT_STM_LLD_CFG_EX_AR_RELEASE_MAJOR_VERSION) || \
     (GPT_AR_RELEASE_MINOR_VERSION_CFG != GPT_STM_LLD_CFG_EX_AR_RELEASE_MINOR_VERSION) || \
     (GPT_AR_RELEASE_REVISION_VERSION_CFG != GPT_STM_LLD_CFG_EX_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Gpt_Cfg.h and Gpt_Stm_LLD_CfgEx.h are different"
#endif
/* Check if Gpt_Cfg.h file and Gpt_Stm_LLD_CfgEx.h header file are of the same software version */
#if ((GPT_SW_MAJOR_VERSION_CFG != GPT_STM_LLD_CFG_EX_SW_MAJOR_VERSION) || \
     (GPT_SW_MINOR_VERSION_CFG != GPT_STM_LLD_CFG_EX_SW_MINOR_VERSION) || \
     (GPT_SW_PATCH_VERSION_CFG != GPT_STM_LLD_CFG_EX_SW_PATCH_VERSION))
    #error "Software Version Numbers of Gpt_Cfg.h and Gpt_Stm_LLD_CfgEx.h are different"
#endif

/* Check if Gpt_Cfg.h file and Reg_eSys_eMIOS_CfgEx.h header file are of the same vendor */
#if (GPT_VENDOR_ID_CFG != REG_ESYS_EMIOS_CFGEX_H_VENDOR_ID)
    #error "Gpt_Cfg.h and Reg_eSys_eMIOS_Cfgex.h have different vendor ids"
#endif
/* Check if header file and Reg_eSys_EMIOS_Cfgex header file are of the same Autosar version */
#if ((GPT_AR_RELEASE_MAJOR_VERSION_CFG != REG_ESYS_EMIOS_CFGEX_H_AR_RELEASE_MAJOR_VERSION) || \
     (GPT_AR_RELEASE_MINOR_VERSION_CFG != REG_ESYS_EMIOS_CFGEX_H_AR_RELEASE_MINOR_VERSION) || \
     (GPT_AR_RELEASE_REVISION_VERSION_CFG != REG_ESYS_EMIOS_CFGEX_H_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Gpt_Cfg.h and Reg_eSys_eMIOS_Cfgex.h are different"
#endif
/* Check if header file and Reg_eSys_EMIOS_Cfgex header file are of the same software version */
#if ((GPT_SW_MAJOR_VERSION_CFG != REG_ESYS_EMIOS_CFGEX_H_SW_MAJOR_VERSION) || \
     (GPT_SW_MINOR_VERSION_CFG != REG_ESYS_EMIOS_CFGEX_H_SW_MINOR_VERSION) || \
     (GPT_SW_PATCH_VERSION_CFG != REG_ESYS_EMIOS_CFGEX_H_SW_PATCH_VERSION))
    #error "Software Version Numbers of Gpt_Cfg.h and Reg_eSys_EMIOS_Cfgex.h are different"
#endif

/* Check if Gpt_Cfg.h file and Gpt_Pit_LLD_CfgEx.h header file are of the same vendor */
#if (GPT_VENDOR_ID_CFG != GPT_PIT_LLD_CFG_EX_VENDOR_ID)
    #error "Gpt_Cfg.h and Gpt_Pit_LLD_CfgEx.h have different vendor ids"
#endif
/* Check if Gpt_Cfg.h file and Gpt_Pit_LLD_CfgEx.h header file are of the same Autosar version */
#if ((GPT_AR_RELEASE_MAJOR_VERSION_CFG != GPT_PIT_LLD_CFG_EX_AR_RELEASE_MAJOR_VERSION) || \
     (GPT_AR_RELEASE_MINOR_VERSION_CFG != GPT_PIT_LLD_CFG_EX_AR_RELEASE_MINOR_VERSION) || \
     (GPT_AR_RELEASE_REVISION_VERSION_CFG != GPT_PIT_LLD_CFG_EX_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Gpt_Cfg.h and Gpt_Pit_LLD_CfgEx.h are different"
#endif
/* Check if Gpt_Cfg.h file and Gpt_Pit_LLD_CfgEx.h header file are of the same software version */
#if ((GPT_SW_MAJOR_VERSION_CFG != GPT_PIT_LLD_CFG_EX_SW_MAJOR_VERSION) || \
     (GPT_SW_MINOR_VERSION_CFG != GPT_PIT_LLD_CFG_EX_SW_MINOR_VERSION) || \
     (GPT_SW_PATCH_VERSION_CFG != GPT_PIT_LLD_CFG_EX_SW_PATCH_VERSION))
#error "Software Version Numbers of Gpt_Cfg.h and Gpt_Pit_LLD_CfgEx.h are different"
#endif

#if (GPT_VENDOR_ID_CFG != GPT_RTC_LLD_CFG_EX_VENDOR_ID)
    #error "Gpt_Cfg.h and Gpt_Rtc_LLD_CfgEx.h have different vendor ids"
#endif
/* Check if header file and Rtc Cfg LLD header file are of the same Autosar version */
#if ((GPT_AR_RELEASE_MAJOR_VERSION_CFG != GPT_RTC_LLD_CFG_EX_AR_RELEASE_MAJOR_VERSION) || \
     (GPT_AR_RELEASE_MINOR_VERSION_CFG != GPT_RTC_LLD_CFG_EX_AR_RELEASE_MINOR_VERSION) || \
     (GPT_AR_RELEASE_REVISION_VERSION_CFG != GPT_RTC_LLD_CFG_EX_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Gpt_Cfg.h and Gpt_Rtc_LLD_CfgEx.h are different"
#endif
/* Check if header file and Rtc Cfg LLD header file are of the same software version */
#if ((GPT_SW_MAJOR_VERSION_CFG != GPT_RTC_LLD_CFG_EX_SW_MAJOR_VERSION) || \
     (GPT_SW_MINOR_VERSION_CFG != GPT_RTC_LLD_CFG_EX_SW_MINOR_VERSION) || \
     (GPT_SW_PATCH_VERSION_CFG != GPT_RTC_LLD_CFG_EX_SW_PATCH_VERSION))
    #error "Software Version Numbers of Gpt_Cfg.h and Gpt_Rtc_LLD_CfgEx.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
/**
* @{
* @brief IDs for peripherals
*/
#define GPT_EMIOS_MODULE  0u
#define GPT_PIT_MODULE    1u
#define GPT_STM_MODULE    2u
#define GPT_RTC_MODULE    3u
/** @} */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/** 
* @brief Gpt Dev error detect switch
*
* @implements     DGPT01004
*/
#define GPT_DEV_ERROR_DETECT ([!IF "GptDriverConfiguration/GptDevErrorDetect"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/** 
* @brief Report Wakeup Source switch
*/
#define GPT_REPORT_WAKEUP_SOURCE ([!IF "GptDriverConfiguration/GptReportWakeupSource"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief GPT_VERSION_INFO_API switch
*
* @implements     DGPT01018
*/
#define GPT_VERSION_INFO_API ([!IF "GptConfigurationOfOptApiServices/GptVersionInfoApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/** 
* @brief GPT_DEINIT_API switch
*
* @implements     DGPT01019
*/
#define GPT_DEINIT_API ([!IF "GptConfigurationOfOptApiServices/GptDeinitApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/** 
* @brief GPT_TIME_ELAPSED_API switch
*
* @implements     DGPT01020
*/
#define GPT_TIME_ELAPSED_API ([!IF "GptConfigurationOfOptApiServices/GptTimeElapsedApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/** 
* @brief GPT_TIME_REMAINING_API switch
*
* @implements     DGPT01021
*/
#define GPT_TIME_REMAINING_API ([!IF "GptConfigurationOfOptApiServices/GptTimeRemainingApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/** 
* @brief GPT_ENABLE_DISABLE_NOTIFICATION_API switch
*
* @implements     DGPT01016
*/
/* @violates @ref GPT_CFG_H_REF_1 Violates MISRA 2004 Required Rule 5.1, The long identifiers are maintained for better readability. */
#define GPT_ENABLE_DISABLE_NOTIFICATION_API ([!IF "GptConfigurationOfOptApiServices/GptEnableDisableNotificationApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/** 
* @brief GPT_WAKEUP_FUNCTIONALITY_API switch
*
* @implements     DGPT01017
*/
#define GPT_WAKEUP_FUNCTIONALITY_API ([!IF "GptConfigurationOfOptApiServices/GptWakeupFunctionalityApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/**
* @brief Enable Non-Autosar API for Dual Mode support.
*
* @implements     DGPT01031
*/
#define GPT_DUAL_CLOCK_MODE ([!IF "GptNonAUTOSAR/GptEnableDualClockMode"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/* EMIOS counter has 16 bits - Bolero specific */
/* @violates @ref GPT_CFG_H_REF_2 This is not a standard library macro. */
/* @violates @ref GPT_CFG_H_REF_3 C macros shall only expand to a braced initialiser,  a constant, a parenthesised expression */
#define EMIOS_EMIOSCNT_MAX_VALUE      ((uint32)0x000FFFFuL)

[!MACRO "CHECK_FREEZE" , "MODULE_TYPE"!]
[!LOOP "GptChannelConfigSet/*"!]
[!VAR "num_channels" = "0"!][!//
[!VAR "freezeenabled_channels" = "0"!][!//
[!LOOP "GptChannelConfiguration/*/GptHwChannel[contains(., $MODULE_TYPE)]/.."!]
[!IF "GptFreezeEnable"!] [!VAR "freezeenabled_channels" = "$freezeenabled_channels + 1"!][!ENDIF!][!//
[!VAR "num_channels" = "$num_channels + 1"!][!//
[!ENDLOOP!]
[!IF "not($num_channels = $freezeenabled_channels) and not($freezeenabled_channels = 0)"!]
[!ERROR !][!//
Module [!"$MODULE_TYPE"!] has channels configured with different values for FreezeEnable. Please select the same value for FreezeEnable accross all [!"$MODULE_TYPE"!] channels
[!ENDERROR!][!//
[!ENDIF!]
[!ENDLOOP!]
[!ENDMACRO!]

[!NOCODE!]
[!//PIT and STM channels have a generic FreezeEnable bit. Check that FreezeEnable is consistent.
[!CALL "CHECK_FREEZE","MODULE_TYPE"="string('STM')"!]
[!CALL "CHECK_FREEZE","MODULE_TYPE"="string('PIT')"!]
[!ENDNOCODE!]

[!NOCODE!][!//
[!CODE!][!//
[!IF "IMPLEMENTATION_CONFIG_VARIANT ='VariantPreCompile'"!]
/* Gpt Pre Compile Switch */
#define GPT_PRECOMPILE_SUPPORT (STD_ON)
[!ELSE!]
#define GPT_PRECOMPILE_SUPPORT (STD_OFF)
[!ENDIF!]
[!ENDCODE!][!//
[!ENDNOCODE!][!//

/**
* @{
* @brief Number of Gpt channels configured 
*/
[!LOOP "GptChannelConfigSet/*"!][!//
#define GPT_CHANNEL_NUM_[!"num:i(@index+1)"!]   [!"num:i(count(GptChannelConfiguration/*))"!]
[!ENDLOOP!][!//
/** @} */

[!NOCODE!][!//
[!VAR "max_channels"  = "0"!]
[!LOOP "GptChannelConfigSet/*"!]
   [!VAR "current_max_channels"="num:i(count(GptChannelConfiguration/*))"!]
   [!IF "$current_max_channels >= $max_channels"!]
            [!VAR "max_channels"="$current_max_channels"!]
   [!ENDIF!]
[!ENDLOOP!]
[!ENDNOCODE!][!//
/**
* @brief   Specific the max channels of one config set in all config sets.
*/
#define GPT_MAX_EXCLUSIVE_AREA  ([!"$max_channels"!]U)


[!NOCODE!][!//
// Loop on all Configuration Sets
[!LOOP "GptChannelConfigSet/*"!][!//
    [!VAR "ConfigSetIndex" = "../../@index"!][!//
    // Loop on all STM channels inside the same Configuration Set
    [!LOOP "./GptChannelConfiguration/*"!][!//
        [!VAR "SavedIndex" = "GptChannelId"!][!//
        [!VAR "Name" = "@name"!][!//
        // Loop on all other Configuration Sets
        [!LOOP "../../../*[@index>$ConfigSetIndex]/GptChannelConfiguration/*"!][!//
            [!IF "($Name = node:name(.))"!][!//
                [!IF "($SavedIndex != GptChannelId)"!][!//
                    // Error!!!!!!!!
                    [!ERROR !][!//
                        [!"$Name"!][!"'- Symbolic name for channels can be repeated only if they have the same ChannelId in each of the config set.'"!][!//
                    [!ENDERROR!][!//
                [!ENDIF!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
    [!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//

/**
* @{
* @brief Symbolic names of channels 
*/
[!VAR "already_parsed_names"!][!ENDVAR!][!//
[!LOOP "GptChannelConfigSet/*/GptChannelConfiguration/*"!]
[!IF "contains($already_parsed_names, concat(node:name(.),'|')) = false()"!][!//
/* @violates @ref GPT_CFG_H_REF_4 Violates MISRA 2004 Required Rule 1.4, Identifier clash */
/* @violates @ref GPT_CFG_H_REF_1 Violates MISRA 2004 Required Rule 5.1, The long identifiers are maintained for better readability. */
#define GptConf_GptChannelConfiguration_[!"node:name(.)"!]  [!"GptChannelId"!]
[!VAR "already_parsed_names"="concat($already_parsed_names,node:name(.),'|')"!][!//
[!ENDIF!]
[!ENDLOOP!]
/** @} */

/**
* @{
* @brief IRQ Defines 
*/
[!VAR "already_parsed"!][!ENDVAR!][!//
[!LOOP "GptChannelConfigSet/*/GptChannelConfiguration/*/GptHwChannel"!][!//
[!IF "contains($already_parsed, concat(.,'|')) = false()"!][!//
#define GPT_[!"."!]_ISR_USED
[!VAR "already_parsed"="concat($already_parsed,.,'|')"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
/** @} */

[!IF "IMPLEMENTATION_CONFIG_VARIANT ='VariantPostBuild'"!]
/* Configuration structures for PB*/
/* @violates @ref GPT_CFG_H_REF_3 C macros shall only expand to a braced initialiser,  a constant, a parenthesised expression */
#define GPT_CFG_EXTERN_DECLARATIONS \
[!NOCODE!][!VAR "var_count1"="num:i(count(GptChannelConfigSet/*))"!][!VAR "w"="0"!][!ENDNOCODE!][!//
[!LOOP "GptChannelConfigSet/*"!][!VAR "w"="$w + 1"!][!//
extern CONST(Gpt_ConfigType, GPT_CONST) [!"@name"!];[!IF "$w < $var_count1"!]\[!ENDIF!]
[!ENDLOOP!][!//
[!ENDIF!]

/**
* @brief The number of HW channels
*/
#define GPT_HW_CHANNEL_NUM   [!"num:i(count(ecu:list('Gpt.GptChannelConfigSet.GptChannelConfiguration.GptHwChannel')))"!]

/* The number of EMIOS HW channels */
[!NOCODE!][!//
[!VAR "MAX_CH"="num:i(-1)"!] [!//max number of channels for the hardware unit with the higher number - will be calculated
[!VAR "CRT_HW"="num:i(-1)"!] [!//number of hardware units available for this derivative - will be calculated
[!VAR "MAX_HW" = "num:i(2)"!] [!//max number of hardware units available for this family
[!//calculate MAX_HW
[!FOR "x" = "0" TO "$MAX_HW"!]
    [!IF "count(text:grep(ecu:list('Gpt.GptChannelConfigSet.GptChannelConfiguration.GptHwChannel'),concat('EMIOS_',$x,'.*'))) > 0"!]
    [!VAR "CRT_HW"="$x"!]
[!ENDIF!]
[!ENDFOR!]

[!LOOP "text:grep(ecu:list('Gpt.GptChannelConfigSet.GptChannelConfiguration.GptHwChannel'),concat('EMIOS_',$CRT_HW,'.*'))"!]
    [!VAR "CRT_CH" = "substring-after(.,concat('EMIOS_',$CRT_HW,'_CH_'))"!]
    [!IF "$MAX_CH < $CRT_CH"!]
        [!VAR "MAX_CH" = "$CRT_CH"!]
    [!ENDIF!]
[!ENDLOOP!]

[!IF "$MAX_CH > -1"!] 
    [!VAR "MAX_CH"="num:i($CRT_HW*32 + $MAX_CH + 1)"!]
[!ELSE!][!//
    [!ERROR !][!//
        [!"$Name"!][!"'-MAX_CH should be >= 0 at this stage'"!][!//
    [!ENDERROR!][!//
[!ENDIF!]
[!ENDNOCODE!][!//

/**
* @brief The number of EMIOS HW channels 
*/
#define GPT_EMIOS_CHAN_NUM [!"$MAX_CH"!]

/**
* @brief The number of PIT HW channels 
*/
#define GPT_PIT_CHAN_NUM      [!"num:i(count(text:grep(ecu:list('Gpt.GptChannelConfigSet.GptChannelConfiguration.GptHwChannel'),'PIT.*')))"!]

/**
* @brief The number of STM HW channels 
*/
#define GPT_STM_CHAN_NUM      [!"num:i(count(text:grep(ecu:list('Gpt.GptChannelConfigSet.GptChannelConfiguration.GptHwChannel'),'STM.*')))"!]

/**
* @brief The number of RTC HW channels
*/
#define GPT_RTC_CHAN_NUM      [!"num:i(count(text:grep(ecu:list('Gpt.GptChannelConfigSet.GptChannelConfiguration.GptHwChannel'),'RTC.*')))"!]

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

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

#endif  /* GPT_CFG_H */

/** @} */
