/**
*   @file    Gpt_Cfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Gpt -  GPT driver configuration source file..
*   @details GPT driver source file, containing C and XPath constructs for generating Gpt
*            configuration source file for the Precompile configuration variant.
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

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Gpt_Cfg_C_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, Only preprocessor statements and comments before '#include'
* This violation is not fixed since the inclusion of MemMap.h is as per Autosar requirement
* MEMMAP003.
*
* @section Gpt_Cfg_C_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section Gpt_Cfg_C_REF_3
* Violates MISRA 2004 Required Rule 1.4, Identifier clash.
* The long names are maintained for better readability..
*
* @section Gpt_Cfg_C_REF_4
* Violates MISRA 2004 Required Rule 8.10, Declarations and definitions of Objects or Functions at File scope
* If a variable to be used within a Function in the same file use Static.Similarly if a function is called 
* from elsewhere within the same file use Static.
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/**
* @file           Gpt_Cfg.c
* @requirements   BSW00374, BSW00318
* @violates @ref Gpt_Cfg_C_REF_3 Violates MISRA 2004 Required Rule 1.4, Identifier clash
* @implements     DGPT03700
*/
#include "Gpt.h"
#include "Mcal.h"

#if (GPT_PRECOMPILE_SUPPORT == STD_ON)
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Gpt_Cfg.c
* @requirements   BSW00374, BSW00318
*/
#define GPT_VENDOR_ID_CFG_C                    43
#define GPT_AR_RELEASE_MAJOR_VERSION_CFG_C     4
#define GPT_AR_RELEASE_MINOR_VERSION_CFG_C     0
/* @violates @ref Gpt_Cfg_C_REF_3 Violates MISRA 2004 Required Rule 1.4, Identifier clash */
#define GPT_AR_RELEASE_REVISION_VERSION_CFG_C  3
#define GPT_SW_MAJOR_VERSION_CFG_C             1
#define GPT_SW_MINOR_VERSION_CFG_C             0
#define GPT_SW_PATCH_VERSION_CFG_C             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Gpt_Cfg.c file and Gpt.h header file are of the same vendor */
#if (GPT_VENDOR_ID_CFG_C != GPT_VENDOR_ID)
    #error "Gpt_Cfg.c and Gpt.h have different vendor ids"
#endif
/* Check if Gpt_Cfg.c file and Gpt.h header file are of the same Autosar version */
#if ((GPT_AR_RELEASE_MAJOR_VERSION_CFG_C != GPT_AR_RELEASE_MAJOR_VERSION) || \
     (GPT_AR_RELEASE_MINOR_VERSION_CFG_C != GPT_AR_RELEASE_MINOR_VERSION) || \
     (GPT_AR_RELEASE_REVISION_VERSION_CFG_C != GPT_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Gpt_Cfg.c and Gpt.h are different"
#endif
/* Check if Gpt_Cfg.c file and Gpt.h header file are of the same Software version */
#if ((GPT_SW_MAJOR_VERSION_CFG_C != GPT_SW_MAJOR_VERSION) || \
     (GPT_SW_MINOR_VERSION_CFG_C != GPT_SW_MINOR_VERSION) || \
     (GPT_SW_PATCH_VERSION_CFG_C != GPT_SW_PATCH_VERSION))
    #error "Software Version Numbers of Gpt_Cfg.c and Gpt.h are different"
#endif

/*================================================================================================*/
#define GPT_START_SEC_CODE
/* @violates @ref Gpt_Cfg_REF_2 Short description of the violated MISRA rule (rule headline) */
#include "MemMap.h"
/**
* @{
* @brief The callback functions defined by the user to be called as channel notifications 
*/
[!VAR "already_parsed_notification"!][!ENDVAR!][!//
[!LOOP "GptChannelConfigSet/*[1]/GptChannelConfiguration/*/GptNotification"!][!//
[!IF "(. != 'NULL_PTR') and (. != 'NULL')"!][!//
[!IF "contains($already_parsed_notification, concat(.,'|')) = false()"!][!//
extern void [!"."!](void);
[!VAR "already_parsed_notification"="concat($already_parsed_notification,.,'|')"!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
#define GPT_STOP_SEC_CODE
/* @violates @ref Gpt_Cfg_REF_2 Short description of the violated MISRA rule (rule headline) */
#include "MemMap.h"
/** @} */

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
#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Gpt_Cfg_C_REF_1 Violates MISRA 2004 Advisory Rule 19.1, Only preprocessor statements and comments before '#include' */
/* @violates @ref Gpt_Cfg_C_REF_2 Violates MISRA 2004 Required Rule 19.15, Short description of the violated MISRA rule (rule headline) */
#include "MemMap.h"

STATIC CONST(Gpt_LLD_ChannelConfigType, GPT_CONST) Gpt_InitChannelPC_[!"num:i(@index+1)"!][GPT_CHANNEL_NUM_[!"num:i(@index+1)"!]]=
{
[!VAR "GptPrescConf_Alt" = "(number(GptChannelConfigSet/*[1]/GptSTMChannelPrescale_Alternate))"!][!//
[!VAR "STMErrorFlag" = "0"!][!//
[!FOR "x" = "0" TO "num:i(count(GptChannelConfigSet/*[1]/GptChannelConfiguration/*))"!][!//
[!SELECT "GptChannelConfigSet/*[1]/GptChannelConfiguration/*/GptChannelId[.=$x]/.."!][!//
[!IF "not(contains(GptHwChannel, 'RTC'))"!][!//
[!VAR "ModuleFreq"="node:ref(node:ref(GptChannelClkSrcRef)/GptClockReference)/McuClockReferencePointFrequency"!][!//
[!ENDIF!][!//
    {
        (Gpt_ChannelType)([!"GptHwChannel"!]), /* GPT physical channel no. */
        (Gpt_ChannelType)(GPT_[!"substring-before(GptHwChannel, '_')"!]_MODULE), /* hardware module ID */
        [!"GptChannelMode"!], /* Timer mode:continous/one-shot */
[!IF "contains(GptHwChannel, 'RTC')"!][!//
        [!IF "GptChannelClkSrc = '0'"!]RTC_GPT_LLD_CLKSRC_32_KHZ[!ELSEIF "GptChannelClkSrc = '1'"!]RTC_GPT_LLD_CLKSRC_128_KHZ[!ELSE!]RTC_GPT_LLD_CLKSRC_16_MHZ[!ENDIF!], /* RTC clock source */[!//
[!ELSE!][!//
        (uint8)0, /* not used*/
[!ENDIF!][!//
[!NOCODE!]
[!IF "contains(GptHwChannel, 'EMIOS') or contains(GptHwChannel, 'STM') or contains(GptHwChannel, 'RTC')"!][!VAR "ChannelFreq" = "num:i(GptChannelTickFrequency)"!][!ENDIF!][!//
[!IF "contains(GptHwChannel, 'RTC')"!][!//
[!IF "GptChannelClkSrc = '0'"!][!//
[!VAR "ModuleFreq" = "32000"!][!//
[!ELSEIF "GptChannelClkSrc = '1'"!][!//
[!VAR "ModuleFreq" = "128000"!][!//
[!ELSE!][!//
[!VAR "ModuleFreq" = "16000000"!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//
[!IF "contains(GptHwChannel, 'EMIOS') or contains(GptHwChannel, 'STM') or contains(GptHwChannel, 'RTC')"!][!IF "(($ChannelFreq) <= ($ModuleFreq))"!][!//
    [!VAR "ChannelClkPrescalerValue" = "($ModuleFreq) div ($ChannelFreq)"!][!//
[!ELSE!][!//
    [!ERROR!]
The configured channel ticks frequency is larger than the module clock frequency (configured in the MCU plugin).
    [!ENDERROR!]
[!ENDIF!][!ENDIF!][!//
[!IF "contains(GptHwChannel, 'STM')"!][!//
[!IF "($STMErrorFlag = 0)"!][!//
[!VAR "STMErrorFlag" = "number(GptChannelTickFrequency)"!][!//
[!ELSE!][!//
[!IF "($STMErrorFlag = GptChannelTickFrequency)"!][!//
[!ELSE!][!//
    [!ERROR!]
For the STM module all the channels must have the same value for the GptChannelTickFrequency parameter, because this module has one general clock prescaler for all its counter channels.
    [!ENDERROR!]
[!ENDIF!][!//
[!ENDIF!][!//
[!IF "(num:i($ChannelClkPrescalerValue) < 256)"!][!//
    (Gpt_PrescaleType)([!"num:i(($ChannelClkPrescalerValue)-1)"!]U), /* STM Clock divider */
[!ELSE!][!//
    [!ERROR!]
The configured channel ticks frequency is too low: the value cannot be reached using the module settings.
To solve this problem change the configured channel ticks frequency or change the STM module clock tree settings.
    [!ENDERROR!]
[!ENDIF!][!//
[!ELSE!][!//
[!IF "contains(GptHwChannel, 'EMIOS')"!][!//
[!IF "(num:i($ChannelClkPrescalerValue) < 5) and (num:i($ChannelClkPrescalerValue) > 0)"!][!//
    (Gpt_PrescaleType)GPT_EMIOS_LLD_CH_PRES_[!"num:i($ChannelClkPrescalerValue)"!], /* EMIOS Clock divider */
[!ELSE!][!//
    [!ERROR!]
The value set for the channel ticks frequency is wrong: the value cannot be reached using the prescaling module settings.
To solve this problem change the configured channel ticks frequency or change the EMIOS module clock tree settings.
    [!ENDERROR!]
[!ENDIF!][!//
[!ELSE!][!//
    [!IF "contains(GptHwChannel, 'RTC')"!]
    [!IF "(num:i($ChannelClkPrescalerValue) = 1)"!][!//
    (Gpt_PrescaleType)RTC_GPT_LLD_NO_PRESCALER, /* RTC Clock divider */
[!ELSEIF "(num:i($ChannelClkPrescalerValue) = 32)"!][!//
    (Gpt_PrescaleType)RTC_GPT_LLD_DIV_32, /* RTC Clock divider */
[!ELSEIF "(num:i($ChannelClkPrescalerValue) = 512)"!][!//
    (Gpt_PrescaleType)RTC_GPT_LLD_DIV_512, /* RTC Clock divider */
[!ELSEIF "(num:i($ChannelClkPrescalerValue) = 16384)"!][!//
    (Gpt_PrescaleType)RTC_GPT_LLD_DIV_16384, /* RTC Clock divider */
[!ELSE!]
    [!ERROR!]
The value set for the RTC channel ticks frequency is wrong: the value cannot be reached using the prescaling module settings.
To solve this problem change the configured channel ticks frequency or change the RTC module clock source.
    [!ENDERROR!]
[!ENDIF!][!ELSE!][!//
    (Gpt_PrescaleType)(0), /* Not used */
[!ENDIF!][!ENDIF!][!ENDIF!][!//
[!IF "../../../../GptNonAUTOSAR/GptEnableDualClockMode"!][!//
#if GPT_DUAL_CLOCK_MODE==STD_ON
    [!IF "contains(GptHwChannel, 'STM')"!][!//
[!IF "(num:i($GptPrescConf_Alt) < 256)"!][!//
    (Gpt_PrescaleType)([!"num:dectoint(($GptPrescConf_Alt)-1)"!]U), /* STM Clock Dual Mode divider */
[!ELSE!]
    [!ERROR!]
The value cannot be set using the module settings. It has to be lower than 256.
    [!ENDERROR!]
[!ENDIF!][!//
[!ELSEIF "contains(GptHwChannel, 'EMIOS')"!][!//
[!IF "(num:dectoint(GptChannelPrescale_Alternate) < 5) and (num:dectoint(GptChannelPrescale_Alternate) > 0)"!][!//
    (Gpt_PrescaleType)GPT_EMIOS_LLD_CH_PRES_[!"num:dectoint(GptChannelPrescale_Alternate)"!], /* EMIOS Clock divider */
[!ELSE!][!//
    [!ERROR!]
The value cannot be reached using the prescaling module settings. It has to be 1, 2, 3 or 4.
    [!ENDERROR!]
[!ENDIF!][!//
[!ELSE!][!//
    (Gpt_PrescaleType)0U, /* Not used */
[!ENDIF!][!//
#endif
[!ENDIF!][!//
        [!IF "GptFreezeEnable"!](boolean)TRUE[!ELSE!](boolean)FALSE[!ENDIF!], /* Freeze Enable */
        [!IF "node:exists(GptEnableWakeup)"!][!IF "GptEnableWakeup"!](boolean)TRUE[!ELSE!](boolean)FALSE[!ENDIF!][!ELSE!](boolean)FALSE[!ENDIF!], /* Wakeup capability */
        [!IF "node:exists(GptNotification)"!][!IF "(GptNotification != '') and (GptNotification != 'NULL_PTR') and (GptNotification != 'NULL')"!]&[!"GptNotification"!][!ELSE!]NULL_PTR[!ENDIF!][!ELSE!]NULL_PTR[!ENDIF!], /* Channel notification */
         (Gpt_WakeUpType) [!IF "node:exists(GptEnableWakeup)"!][!IF "GptEnableWakeup"!]EcuMConf_EcuMWakeupSource_[!"as:ref(GptWakeupConfiguration/GptWakeupSourceRef)/@name"!][!ELSE!]0U[!ENDIF!][!ELSE!]0U[!ENDIF!], /* Wakeup information */ 
        [!IF "node:exists(GptEnableWakeup)"!][!IF "GptEnableWakeup"!][!IF "GptWakeupConfiguration/GptDisableEcumWakeupSourceNotification"!](boolean)TRUE[!ELSE!](boolean)FALSE[!ENDIF!][!ELSE!](boolean)FALSE[!ENDIF!][!ELSE!](boolean)FALSE[!ENDIF!] /*Enable/Disable Ecum Notification */
    }[!//
[!ENDSELECT!][!//
[!IF "$x < num:i(count(GptChannelConfigSet/*[1]/GptChannelConfiguration/*)) - 1"!],[!ENDIF!]
[!ENDFOR!][!//
};
/* @violates @ref Gpt_Cfg_C_REF_4 Violates MISRA 2004 Required Rule 8.10, Declarations and definitions of Objects or Functions at File scope */
CONST(Gpt_ConfigType, GPT_CONST) Gpt_InitConfigPC =
{
    (uint8)GPT_CHANNEL_NUM_[!"num:i(@index+1)"!],
    Gpt_InitChannelPC_[!"num:i(@index+1)"!]
};


#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Gpt_Cfg_C_REF_1 Violates MISRA 2004 Advisory Rule 19.1, Only preprocessor statements and comments before '#include' */
/* @violates @ref Gpt_Cfg_C_REF_2 Violates MISRA 2004 Required Rule 19.15, Short description of the violated MISRA rule (rule headline) */
#include "MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#endif  /* GPT_PRECOMPILE_SUPPORT */

#ifdef __cplusplus
}
#endif

/** @} */
