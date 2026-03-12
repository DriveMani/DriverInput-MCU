[!NOCODE!][!//
/**
   @file    Wdg_PluginMacros.m
   @version 1.0.1

   @brief   AUTOSAR Wdg - contains the data exported by the watchodg module
   @details Version checks.

   Project              : AUTOSAR 4.0 MCAL
   Platform             : PA
   Peripheral           : Swt
   Dependencies         : none

   Autosar Version      : 4.0.3
   Autosar Revision     : ASR_REL_4_0_REV_0003
   Autosar Conf.Variant :
   SW Version           : 1.0.1
   Build Version        : MPC560xB_MCAL_1_0_1_RTM_HF12_ASR_REL_4_0_REV_0003_20161209

   (c) Copyright 2006-2016 Freescale Semiconductor Inc and STMicroelectronics
   All Rights Reserved.
*/
/*==================================================================================================
==================================================================================================*/
[!// MACRO for defining which instances will be used
[!MACRO "WDG_INSTANCE","SWT_INSTANCE"!]
[!NOCODE!]
[!VAR "WdgFoundInstance"="0"!]
[!LOOP "WdgSettingsConfig/*"!]
       [!IF "node:value(./WdgInstance) = $SWT_INSTANCE"!]
       [!VAR "WdgFoundInstance"="1"!]
    [!ENDIF!]
[!ENDLOOP!]
[!ENDNOCODE!]
/**
  * @brief  This constant specifies if the instance of the WDG is selected or not
  */
[!IF "$WdgFoundInstance = 1 "!][!/*
    */!]#define WDG_INSTANCE[!"substring-after($SWT_INSTANCE,'SWT')"!] STD_ON
[!ELSE!][!/*
    */!]#define WDG_INSTANCE[!"substring-after($SWT_INSTANCE,'SWT')"!] STD_OFF
[!ENDIF!]
[!ENDMACRO!]

[!// MACRO for checking that the Gpt callback has been set
[!MACRO "WDG_CHECK_CBK_NOTIFICATION","SWT_INSTANCE"!]
[!NOCODE!]
[!LOOP "WdgSettingsConfig/*"!]
    [!IF "./WdgInstance = $SWT_INSTANCE"!]
        [!IF "node:exists(node:ref(./WdgExternalTriggerCounterRef)/GptNotification)"!]
            [!IF "node:ref(./WdgExternalTriggerCounterRef)/GptNotification != concat('Wdg_Cbk_GptNotification',substring-after($SWT_INSTANCE,'SWT'))"!]
                [!ERROR!] The notification handler for [!"$SWT_INSTANCE"!] must be Wdg_Cbk_GptNotification[!"substring-after($SWT_INSTANCE,'SWT')"!][!ENDERROR!]
            [!ENDIF!]
        [!ELSE!]
            [!ERROR!] The channel notification for [!"$SWT_INSTANCE"!] must be set up and the notification handler must be Wdg_Cbk_GptNotification[!"substring-after($SWT_INSTANCE,'SWT')"!][!ENDERROR!]
        [!ENDIF!]
    [!ENDIF!]
[!ENDLOOP!]
[!ENDNOCODE!]
[!ENDMACRO!]

[!// MACRO for defining wich isrs are used configuration
[!MACRO "WDG_NOTIFICATION","WDG_SWT_INSTANCE"!]
[!IF "(normalize-space(node:value(concat('WdgGeneral/',concat('WdgCallbackNotification', substring-after($WDG_SWT_INSTANCE,'SWT'))))) !='NULL_PTR') and (normalize-space(node:value(concat('WdgGeneral/',concat('WdgCallbackNotification', substring-after($WDG_SWT_INSTANCE,'SWT'))))) !='NULL')"!]
/**
 *   @brief External Notifications for Wdg Interrupt
 */[!CR!]
extern FUNC (void, WDG_CODE) [!"node:value(concat('WdgGeneral/',concat('WdgCallbackNotification', substring-after($WDG_SWT_INSTANCE,'SWT'))))"!](void);
[!ENDIF!]
[!ENDMACRO!]

[!// MACRO for defining wich isrs are used configuration
[!MACRO "WDG_ISR","WDG_SWT_INSTANCE"!]
[!LOOP "WdgSettingsConfig/*"!][!//
[!IF "./WdgInstance = $WDG_SWT_INSTANCE and (./WdgSettingsSlow/WdgOperationMode = 'Interrupt' [!//
        or ./WdgSettingsFast/WdgOperationMode = 'Interrupt')"!][!//

/**
* @brief  This variable will indicate if the ISR[!"substring-after($WDG_SWT_INSTANCE,'SWT')"!] is used
*/
#define  WDG_ISR[!"substring-after($WDG_SWT_INSTANCE,'SWT')"!]_USED
[!BREAK!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDMACRO!]

[!ENDNOCODE!]