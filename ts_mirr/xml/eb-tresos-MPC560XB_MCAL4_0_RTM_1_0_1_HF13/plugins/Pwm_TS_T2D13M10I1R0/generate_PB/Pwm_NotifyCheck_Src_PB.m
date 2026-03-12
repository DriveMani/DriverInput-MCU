[!NOCODE!][!//

/*!
*   @file    Pwm_NotifyCheck_Src_PB.m
*   @version 1.0.1
*
*   @brief   AUTOSAR Pwm macro to check for notification config, variant pre-compile
*   @details    macro to check for notification config, variant pre-compile
*
*   @addtogroup PWM_MODULE
*   @{
*/
/*!==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : eMIOS200
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
/*!==================================================================================================
==================================================================================================*/
[!ENDNOCODE!][!// 


[!/* avoid multiple inclusion */!]
[!IF "not(var:defined('PWM_NOTIFY_CHECK_SRC_PB_M'))"!]
[!VAR "PWM_NOTIFY_CHECK_SRC_PB_M"="'true'"!]


[!NOCODE!][!//
[!MACRO "PwmNotifyCheck_PB"!][!//
[!VAR "already_parsed"!][!ENDVAR!][!//
[!LOOP "PwmChannelConfigSet/*/PwmChannel/*"!][!//
[!IF "node:exists('PwmNotification')"!][!//
[!IF "(PwmNotification != 'NULL_PTR') and (PwmNotification != '"NULL"') and (PwmNotification != 'NULL')"!][!//
[!IF "contains($already_parsed, concat(PwmNotification,'|')) = false()"!][!CODE!][!//
extern void [!"PwmNotification"!](void);
[!VAR "already_parsed"="concat($already_parsed,PwmNotification,'|')"!][!//
[!ENDCODE!][!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDMACRO!][!//
[!ENDNOCODE!]


[!ENDIF!][!// avoid multiple inclusion ENDIF
