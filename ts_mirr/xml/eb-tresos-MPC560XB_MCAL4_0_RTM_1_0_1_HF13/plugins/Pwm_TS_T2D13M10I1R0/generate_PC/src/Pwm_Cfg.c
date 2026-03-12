[!CODE!]
/**
*   @file    Pwm_Cfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Pwm - Brief file description (one line).
*   @details Detailed file description (can be multiple lines).
*
*   @addtogroup PWM_MODULE
*   @{
*/
/*==================================================================================================
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
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Pwm_Cfg_C_REF_1
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the
* contents of a header file being included twice
* @section Pwm_Cfg_C_REF_2
* Violates MISRA 2004 Required Rule 5.1, This violation is not fixed since naming convention of
* Identifiers (internal and external) are followed as per Autosar standards, some times which may
* exceeds more than 31 characters.
* @section Pwm_Cfg_C_REF_3
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before "#include"
* MemMap.h included after each section define in order to set the current memory section
* @section Pwm_Cfg_C_REF_4
* Violates MISRA 2004 Required Rule 8.10, all declarations and definitions of objects or functions at
* file scope shall have internal linkage unless external linkage is required.
*
*/



/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Pwm.h"
#include "Mcal.h"
#include "Pwm_Cfg.h"
#include "Dem.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @{
* @file           Pwm_Cfg.c
* @implements   BSW00374, BSW00379, BSW00318
*/
#define PWM_PC_CFG_C_VENDOR_ID                      43
#define PWM_PC_CFG_C_MODULE_ID                      121

/*
* @violates @ref Pwm_Cfg_C_REF_2 This is required as per autosar Requirement, 
*/
#define PWM_PC_CFG_C_AR_RELEASE_MAJOR_VERSION       4
/*
* @violates @ref Pwm_Cfg_C_REF_2 This is required as per autosar Requirement, 
*/
#define PWM_PC_CFG_C_AR_RELEASE_MINOR_VERSION       0
/*
* @violates @ref Pwm_Cfg_C_REF_2 This is required as per autosar Requirement, 
*/
#define PWM_PC_CFG_C_AR_RELEASE_REVISION_VERSION    3

#define PWM_PC_CFG_C_SW_MAJOR_VERSION               1
#define PWM_PC_CFG_C_SW_MINOR_VERSION               0
#define PWM_PC_CFG_C_SW_PATCH_VERSION               1
/**@}*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (PWM_PC_CFG_C_VENDOR_ID != PWM_VENDOR_ID)
    #error "Pwm_Cfg.c and Pwm.h have different vendor ids"
#endif

#if ((PWM_PC_CFG_C_AR_RELEASE_MAJOR_VERSION != PWM_AR_RELEASE_MAJOR_VERSION) || \
        (PWM_PC_CFG_C_AR_RELEASE_MINOR_VERSION != PWM_AR_RELEASE_MINOR_VERSION) || \
        (PWM_PC_CFG_C_AR_RELEASE_REVISION_VERSION != PWM_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Pwm_Cfg.c and Pwm.h are different"
#endif


#if ((PWM_PC_CFG_C_SW_MAJOR_VERSION != PWM_SW_MAJOR_VERSION) || \
        (PWM_PC_CFG_C_SW_MINOR_VERSION != PWM_SW_MINOR_VERSION)  || \
        (PWM_PC_CFG_C_SW_PATCH_VERSION != PWM_SW_PATCH_VERSION))
    #error "Software Version Numbers of Pwm_Cfg.c and Pwm.h are different"
#endif


/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/
[!NOCODE!]
/* Variable storing number of Emios Modules available on the current platform */
[!VAR "numEmiosModules" = "ecu:get('Pwm.EmiosModules')"!]

/* Macro used to validate the Emios configured Pwm mode and bus selection */
[!MACRO "ValidatePwmBusSelection"!]
  [!NOCODE!]
  [!VAR "OutNumPwmChannels"             = "num:i(count(PwmChannel/*))"!]
  [!VAR "MacOuterLoopCounter" = "0"!]
  
  [!FOR "mIdx" = "0" TO "num:i($numEmiosModules - 1)"!]
    [!VAR "MatchBus_A_Config" = "0"!][!VAR "MatchBus_F_Config" = "0"!][!VAR "MatchBus_B_Config" = "0"!][!VAR "MatchBus_C_Config" = "0"!][!VAR "MatchBus_D_Config" = "0"!][!VAR "MatchBus_E_Config" = "0"!][!//
    [!LOOP "../../PwmChannel/*"!]
        [!VAR "MacIdxEMIOSModule"     = "substring-after(PwmHwChannel,'_')"!]
        [!VAR "ch_no"  = "text:split($MacIdxEMIOSModule, '_')[1]*32 + text:split($MacIdxEMIOSModule, '_')[3]"!]
        [!IF "(num:i($ch_no) = $mIdx*32 + 0)"!][!//
            [!IF "((contains(PwmModeSelect,'PWM_MODE_OPWFMB')))"!][!//
                [!VAR "MatchBus_B_Config" = "2"!][!//
            [!ELSE!]
                [!VAR "MatchBus_B_Config" = "1"!][!//
            [!ENDIF!]
        [!ELSEIF "(num:i($ch_no) = $mIdx*32 + 8)"!][!//
            [!IF "((contains(PwmModeSelect,'PWM_MODE_OPWFMB')))"!][!//
                [!VAR "MatchBus_C_Config" = "2"!][!//
            [!ELSE!]
                [!VAR "MatchBus_C_Config" = "1"!][!//
            [!ENDIF!]
        [!ELSEIF "(num:i($ch_no) = $mIdx*32 + 16)"!][!//
            [!IF "((contains(PwmModeSelect,'PWM_MODE_OPWFMB')))"!][!//
                [!VAR "MatchBus_D_Config" = "2"!][!//
            [!ELSE!]
                [!VAR "MatchBus_D_Config" = "1"!][!//
            [!ENDIF!]
        [!ELSEIF "(num:i($ch_no) = $mIdx*32 + 24)"!][!//
            [!IF "((contains(PwmModeSelect,'PWM_MODE_OPWFMB')))"!][!//
                [!VAR "MatchBus_E_Config" = "2"!][!//
            [!ELSE!]
                [!VAR "MatchBus_E_Config" = "1"!][!//
            [!ENDIF!]
        [!ELSEIF "(num:i($ch_no) = $mIdx*32 + 23)"!][!//
            [!IF "((contains(PwmModeSelect,'PWM_MODE_OPWFMB')))"!][!//
                [!VAR "MatchBus_A_Config" = "2"!][!//
            [!ELSE!]
                [!VAR "MatchBus_A_Config" = "1"!][!//
            [!ENDIF!]
        [!ELSEIF "(num:i($ch_no) = $mIdx*32 + 22)"!][!//
            [!IF "((contains(PwmModeSelect,'PWM_MODE_OPWFMB')))"!][!//
                [!VAR "MatchBus_F_Config" = "2"!][!//
            [!ELSE!]
                [!VAR "MatchBus_F_Config" = "1"!][!//
            [!ENDIF!]
        [!ENDIF!][!//
    [!ENDLOOP!][!//

    [!VAR "MatchBus_A" = "0"!][!VAR "MatchBus_F" = "0"!][!VAR "MatchBus_B" = "0"!][!VAR "MatchBus_C" = "0"!][!VAR "MatchBus_D" = "0"!][!VAR "MatchBus_E" = "0"!][!//
    [!LOOP "../../PwmChannel/*"!]
        [!VAR "MacIdxEMIOSModule"     = "substring-after(PwmHwChannel,'_')"!]
        [!VAR "mod_no"  = "text:split($MacIdxEMIOSModule, '_')[1]"!]
        [!VAR "ch_no"  = "text:split($MacIdxEMIOSModule, '_')[3]"!]
        [!IF "(num:i($mod_no) = $mIdx)"!][!//
            [!IF "contains(EmiosUnifiedChannelBusSelect,'PWM_BUS_A')"!][!//
                [!IF "((contains(PwmModeSelect,'OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'OPWMCB_TRAIL_DEADTIME')))"!][!//
                    [!IF "($MatchBus_A_Config != 0)"!][!//
                        [!ERROR!]BUS A cannot used because the EMIOS channel 23 has been configured [!ENDERROR!][!//
                    [!ENDIF!][!//
                    [!IF "($MatchBus_A = 0)"!][!//
                        [!VAR "MatchBus_A" = "1"!][!//
                    [!ELSEIF "($MatchBus_A != 1)"!][!//
                        [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMCB mode with BUS A, because EMIOS channel 23 has been configured for other mode [!ENDERROR!][!//
                    [!ENDIF!][!//
                [!ELSEIF "((contains(PwmModeSelect,'OPWMT')) or (contains(PwmModeSelect,'OPWMB')))"!][!//
                    [!IF "($MatchBus_A_Config = 1)"!][!//
                        [!ERROR!]BUS A cannot used because the EMIOS channel 23 has been configured [!ENDERROR!][!//
                    [!ENDIF!][!//
                    [!IF "($MatchBus_A = 0)"!][!//
                        [!VAR "MatchBus_A" = "2"!][!//
                    [!ELSEIF "($MatchBus_A != 2)"!][!//
                        [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMB, OPWMT mode with BUS A, because EMIOS channel 23 has been configured for other mode [!ENDERROR!][!//
                    [!ENDIF!][!//
                [!ENDIF!][!//
            [!ELSEIF "contains(EmiosUnifiedChannelBusSelect,'PWM_BUS_F')"!][!//
                [!IF "((contains(PwmModeSelect,'OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'OPWMCB_TRAIL_DEADTIME')))"!][!//
                    [!IF "($MatchBus_F_Config != 0)"!][!//
                        [!ERROR!]BUS F cannot used because the EMIOS channel 22 has been configured [!ENDERROR!][!//
                    [!ENDIF!][!//
                    [!IF "($MatchBus_F = 0)"!][!//
                        [!VAR "MatchBus_F" = "1"!][!//
                    [!ELSEIF "($MatchBus_F != 1)"!][!//
                        [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMCB mode with BUS F, because EMIOS channel 22 has been configured for other mode [!ENDERROR!][!//
                    [!ENDIF!][!//
                [!ELSEIF "((contains(PwmModeSelect,'OPWMT')) or (contains(PwmModeSelect,'OPWMB')))"!][!//
                    [!IF "($MatchBus_F_Config = 1)"!][!//
                        [!ERROR!]BUS F cannot used because the EMIOS channel 22 has been configured [!ENDERROR!][!//
                    [!ENDIF!][!//
                    [!IF "($MatchBus_F = 0)"!][!//
                        [!VAR "MatchBus_F" = "2"!][!//
                    [!ELSEIF "($MatchBus_F != 2)"!][!//
                        [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMB, OPWMT mode with BUS F, because EMIOS channel 22 has been configured for other mode [!ENDERROR!][!//
                    [!ENDIF!][!//
                [!ENDIF!][!//
            [!ELSEIF "contains(EmiosUnifiedChannelBusSelect,'PWM_BUS_DIVERSE')"!][!//
                [!IF "(num:i($ch_no) >= 0) and (num:i($ch_no) < 8)"!][!//
                    [!IF "((contains(PwmModeSelect,'OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'OPWMCB_TRAIL_DEADTIME')))"!][!//
                        [!IF "($MatchBus_B_Config != 0)"!][!//
                            [!ERROR!]BUS B cannot used because the EMIOS channel 0 has been configured [!ENDERROR!][!//
                        [!ENDIF!][!//
                        [!IF "($MatchBus_B = 0)"!][!//
                            [!VAR "MatchBus_B" = "1"!][!//
                        [!ELSEIF "($MatchBus_B != 1)"!][!//
                            [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMCB mode with BUS B, because EMIOS channel 0 has been configured for other mode [!ENDERROR!][!//
                        [!ENDIF!][!//
                    [!ELSEIF "((contains(PwmModeSelect,'OPWMT')) or (contains(PwmModeSelect,'OPWMB')))"!][!//
                        [!IF "($MatchBus_B_Config = 1)"!][!//
                            [!ERROR!]BUS B cannot used because the EMIOS channel 0 has been configured [!ENDERROR!][!//
                        [!ENDIF!][!//
                        [!IF "($MatchBus_B = 0)"!][!//
                            [!VAR "MatchBus_B" = "2"!][!//
                        [!ELSEIF "($MatchBus_B != 2)"!][!//
                            [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMB, OPWMT mode with BUS B, because EMIOS channel 0 has been configured for other mode [!ENDERROR!][!//
                        [!ENDIF!][!//
                    [!ENDIF!][!//
                [!ELSEIF "(num:i($ch_no) >= 8) and (num:i($ch_no) < 16)"!][!//
                    [!IF "((contains(PwmModeSelect,'OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'OPWMCB_TRAIL_DEADTIME')))"!][!//
                        [!IF "($MatchBus_C_Config != 0)"!][!//
                            [!ERROR!]BUS C cannot used because the EMIOS channel 8 has been configured [!ENDERROR!][!//
                        [!ENDIF!][!//
                        [!IF "($MatchBus_C = 0)"!][!//
                            [!VAR "MatchBus_C" = "1"!][!//
                        [!ELSEIF "($MatchBus_C != 1)"!][!//
                            [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMCB mode with BUS C, because EMIOS channel 8 has been configured for other mode [!ENDERROR!][!//
                        [!ENDIF!][!//
                    [!ELSEIF "((contains(PwmModeSelect,'OPWMT')) or (contains(PwmModeSelect,'OPWMB')))"!][!//
                        [!IF "($MatchBus_C_Config = 1)"!][!//
                            [!ERROR!]BUS C cannot used because the EMIOS channel 8 has been configured [!ENDERROR!][!//
                        [!ENDIF!][!//
                        [!IF "($MatchBus_C = 0)"!][!//
                            [!VAR "MatchBus_C" = "2"!][!//
                        [!ELSEIF "($MatchBus_C != 2)"!][!//
                            [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMB, OPWMT mode with BUS C, because EMIOS channel 8 has been configured for other mode [!ENDERROR!][!//
                        [!ENDIF!][!//
                    [!ENDIF!][!//
                [!ELSEIF "(num:i($ch_no) >= 16) and (num:i($ch_no) < 24)"!][!//
                    [!IF "((contains(PwmModeSelect,'OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'OPWMCB_TRAIL_DEADTIME')))"!][!//
                        [!IF "($MatchBus_D_Config != 0)"!][!//
                            [!ERROR!]BUS D cannot used because the EMIOS channel 16 has been configured [!ENDERROR!][!//
                        [!ENDIF!][!//
                        [!IF "($MatchBus_D = 0)"!][!//
                            [!VAR "MatchBus_D" = "1"!][!//
                        [!ELSEIF "($MatchBus_D != 1)"!][!//
                            [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMCB mode with BUS D, because EMIOS channel 16 has been configured for other mode [!ENDERROR!][!//
                        [!ENDIF!][!//
                    [!ELSEIF "((contains(PwmModeSelect,'OPWMT')) or (contains(PwmModeSelect,'OPWMB')))"!][!//
                        [!IF "($MatchBus_D_Config = 1)"!][!//
                            [!ERROR!]BUS D cannot used because the EMIOS channel 16 has been configured [!ENDERROR!][!//
                        [!ENDIF!][!//
                        [!IF "($MatchBus_D = 0)"!][!//
                            [!VAR "MatchBus_D" = "2"!][!//
                        [!ELSEIF "($MatchBus_D != 2)"!][!//
                            [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMB, OPWMT mode with BUS D, because EMIOS channel 16 has been configured for other mode [!ENDERROR!][!//
                        [!ENDIF!][!//
                    [!ENDIF!][!//
                [!ELSE!]
                    [!IF "((contains(PwmModeSelect,'OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'OPWMCB_TRAIL_DEADTIME')))"!][!//
                        [!IF "($MatchBus_E_Config != 0)"!][!//
                            [!ERROR!]BUS E cannot used because the EMIOS channel 24 has been configured [!ENDERROR!][!//
                        [!ENDIF!][!//
                        [!IF "($MatchBus_E = 0)"!][!//
                            [!VAR "MatchBus_E" = "1"!][!//
                        [!ELSEIF "($MatchBus_E != 1)"!][!//
                            [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMCB mode with BUS E, because EMIOS channel 24 has been configured for other mode [!ENDERROR!][!//
                        [!ENDIF!][!//
                    [!ELSEIF "((contains(PwmModeSelect,'OPWMT')) or (contains(PwmModeSelect,'OPWMB')))"!][!//
                        [!IF "($MatchBus_E_Config = 1)"!][!//
                            [!ERROR!]BUS E cannot used because the EMIOS channel 24 has been configured [!ENDERROR!][!//
                        [!ENDIF!][!//
                        [!IF "($MatchBus_E = 0)"!][!//
                            [!VAR "MatchBus_E" = "2"!][!//
                        [!ELSEIF "($MatchBus_E != 2)"!][!//
                            [!ERROR!]For PwmChannel_[!"PwmChannelId"!] cannot use with OPWMB, OPWMT mode with BUS E, because EMIOS channel 24 has been configured for other mode [!ENDERROR!][!//
                        [!ENDIF!][!//
                    [!ENDIF!][!//
                [!ENDIF!][!//
            [!ENDIF!][!//
        [!ENDIF!][!//
    [!ENDLOOP!][!//
  [!ENDFOR!]
  [!ENDNOCODE!]
[!ENDMACRO!]
[!ENDNOCODE!]

#if (PWM_PRECOMPILE_SUPPORT == STD_ON)

/* put Pwm_InitChannel structure into specified section */
/* @violates @ref Pwm_Cfg_C_REF_2 This is required as per autosar Requirement */
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Pwm_Cfg_C_REF_1 precautions to prevent header file being included twice */
#include "MemMap.h"

/**
* @brief Dem Event report ID
* @implements
*/
[!IF "PwmNonAUTOSAR/PwmDisableDemReportErrorStatus"!][!//
[!ELSE!][!//
/* @violates @ref Pwm_Cfg_C_REF_4 declarations and definitions at file scope shall have internal linkage */
CONST(Mcal_DemErrorType, PWM_CONST) Pwm_E_UnexpectedIrqCfg=
[!IF "node:exists(PwmGeneral/PWM_E_UNEXPECTED_IRQ)"!][!//
[!IF "node:exists(node:ref(PwmGeneral/PWM_E_UNEXPECTED_IRQ))"!][!//
    { (uint32)STD_ON, (uint32)[!"node:value(node:ref(PwmGeneral/PWM_E_UNEXPECTED_IRQ)/DemEventId)"!]U}; /* PWM_E_UNEXPECTED_IRQ parameters*/ [!//
[!ELSE!][!//
    [!ERROR "Invalid reference for PWM_E_UNEXPECTED_IRQ"!][!//
[!ENDIF!][!//
[!ELSE!][!//
    {(uint32)STD_OFF, (uint32)0U}; /* PWM_E_UNEXPECTED_IRQ parameters*/[!//
[!ENDIF!][!//
[!ENDIF!][!CR!][!//


/**
* @brief Prototype of User Notifications
*/
[!NOCODE!]
[!INCLUDE "Pwm_NotifyCheck_Src.m"!]
[!ENDNOCODE!]

[!NOCODE!]
[!CALL "PwmNotifyCheck_PC"!]
[!ENDNOCODE!]


[!NOCODE!]
[!INCLUDE "Pwm_Clock_Tree.m"!]
[!ENDNOCODE!]



/**
* @brief Number of configured Pwm channels
* @implements DPWM03302
*/
#define PWM_CONF_CHANNELS_PC  ((Pwm_ChannelType)[!"num:i(count(PwmChannelConfigSet/*[1]/PwmChannel/*))"!])

[!IF "PwmNonAUTOSAR/PwmEnableDualClockMode"!]
[!VAR "SelectPresApi" = "1"!][!//
[!ELSE!]
[!VAR "SelectPresApi" = "0"!][!//
[!ENDIF!][!//

/**
* @brief   pwm channel high level configuration structure
* @details Defines the class of PWM channel
*          \n Pwm_ChannelClassValue - channel type: Variable/Fixed period
*          \n Pwm_Polarity - Pwm signal polarity:   High or low
*          \n Pwm_DefaultPeriodValue - Default value for period
*          \n Pwm_DefaultDutyCycleValue - Default value for duty cycle: [0-0x8000] (0-100%)
*          \n Pwm_IdleState - Pwm signal idle state: High or low
*          \n Pwm_Channel_Notification - Pointer to notification function
*          \n IpType - the IP used to implement this specific Pwm channel
*          \n SpecificCfg - Pwm channel IP specific parameters
*
* @implements DPWM03301
*/
/* @violates @ref Pwm_Cfg_C_REF_4 declarations and definitions at file scope shall have internal linkage */
CONST(Pwm_ChannelConfigType, PWM_CONST) Pwm_Channels_PC[PWM_CONF_CHANNELS_PC] =
{
[!AUTOSPACING!]
[!FOR "x" = "0" TO "num:i(count(PwmChannelConfigSet/*[1]/PwmChannel/*))"!][!//
[!SELECT "PwmChannelConfigSet/*[1]/PwmChannel/*/PwmChannelId[.=$x]/.."!][!//
{
    [!IF "node:exists('PwmChannelClass')"!]
        [!IF "PwmChannelClass= 'PWM_FIXED_PERIOD'"!]PWM_FIXED_PERIOD[!ELSEIF "PwmChannelClass= 'PWM_VARIABLE_PERIOD'"!]PWM_VARIABLE_PERIOD[!ENDIF!],/* channel type: Variable/Fixed period */
    [!ELSE!]
        PWM_VARIABLE_PERIOD,
    [!ENDIF!]
[!"PwmPolarity"!],/* signal polarity */

[!NOCODE!]

    [!VAR "PwmPrescaler_val" = "substring-after(PwmPrescaler,'PwmPrescalerDiv')"!]

    [!IF "contains(PwmHwChannel,'EMIOS_0_')"!]
            [!VAR "this_unified_channel_clock_frequency" = "$EMIOS0_ClockFrequency div $PwmPrescaler_val"!]
    [!ELSE!]
        [!IF "contains(PwmHwChannel,'EMIOS_1_')"!]
            [!VAR "this_unified_channel_clock_frequency" = "$EMIOS1_ClockFrequency div $PwmPrescaler_val"!]
        [!ENDIF!]
    [!ENDIF!]


    [!VAR "this_unified_channel_clock_period" = "1 div $this_unified_channel_clock_frequency"!]


    [!IF "PwmPeriodDefaultUnits = 'Period_in_seconds'"!]
        /* the pwm signal period is specified in seconds - perform conversion to ticks */
        [!VAR "this_unified_channel_period_in_ticks" = "num:i(round(PwmPeriodDefault div $this_unified_channel_clock_period))"!]
    [!ELSE!]

        [!IF "PwmPeriodDefaultUnits = 'Period_in_ticks'"!]
            /* the pwm signal period is specified in ticks - nothing to do */
            [!VAR "this_unified_channel_period_in_ticks" = "num:i(PwmPeriodDefault)"!]
        [!ELSE!]
            /* the pwm signal period is specified in frequency (Hz) - convert to ticks */
            [!VAR "this_unified_channel_period_in_ticks" = "num:i(round((1 div PwmPeriodDefault) div $this_unified_channel_clock_period))"!]
        [!ENDIF!]

    [!ENDIF!]


    [!IF "$this_unified_channel_period_in_ticks < 1"!]
        [!ERROR!]
The configured period for channel: [!"PwmChannelId"!] is smaller than 1 tick: [!"$this_unified_channel_period_in_ticks"!]
The plugin performs the conversion from Period_in_seconds or Frequency_in_Hz to ticks.
If the result is smaller than 1 tick then this error message is generated.
To solve this problem change the configured Period_in_seconds / Frequency_in_Hz or change the eMIOS
clock tree settings.
        [!ENDERROR!]
    [!ENDIF!]


    [!IF "$this_unified_channel_period_in_ticks > 65534"!]
        [!ERROR!]
The configured period for channel: [!"PwmChannelId"!] is larger than 65534 ticks: [!"$this_unified_channel_period_in_ticks"!]
The plugin performs the conversion from Period_in_seconds or Frequency_in_Hz to ticks.
If the result is larger than 65534 ticks then this error message is generated.
To solve this problem change the configured Period_in_seconds / Frequency_in_Hz or change the eMIOS
clock tree settings.
        [!ENDERROR!]
    [!ENDIF!]

[!IF "../../../../PwmGeneral/PwmGenerateClockTreeDebugInfo = 'true'"!]
[!CODE!]
/* --- Unified Channel clock debug information ---
PwmPeriodDefaultUnits:[!"PwmPeriodDefaultUnits"!]
PwmPeriodDefault:[!"PwmPeriodDefault"!]
this_unified_channel_period_in_ticks:[!"$this_unified_channel_period_in_ticks"!]
[!IF "EmiosUnifiedChannelBusSelect = 'PWM_BUS_INTERNAL_COUNTER'"!]
emios unified channel clock source: INTERNAL COUNTER
this_unified_channel_prescaler_value:[!"$PwmPrescaler_val"!]
this_unified_channel_clock_frequency:[!"$this_unified_channel_clock_frequency"!] Hz
this_unified_channel_clock_period:[!"$this_unified_channel_clock_period"!]
configured_channel_period:[!"number($this_unified_channel_period_in_ticks) * $this_unified_channel_clock_period"!] seconds
configured_channel_freq:[!"1.0 div (number($this_unified_channel_period_in_ticks) * $this_unified_channel_clock_period)"!] Hz
[!IF "PwmPeriodDefaultUnits = 'Frequency_in_Hz'"!]
frequency_error:[!"(1.0 div (number($this_unified_channel_period_in_ticks) * $this_unified_channel_clock_period)) - number(PwmPeriodDefault)"!] Hz
[!ELSE!]
    [!IF "PwmPeriodDefaultUnits = 'Period_in_seconds'"!]
period_error:[!"(number($this_unified_channel_period_in_ticks) * $this_unified_channel_clock_period) - number(PwmPeriodDefault)"!] seconds
    [!ENDIF!]
[!ENDIF!]
[!ELSE!]
[!IF "EmiosUnifiedChannelBusSelect = 'PWM_BUS_A'"!]emios unified channel clock source: BUS_A
[!ELSE!]emios unified channel clock source: PWM_BUS_DIVERSE[!ENDIF!]
[!ENDIF!]
*/[!ENDCODE!]
[!ENDIF!]
[!ENDNOCODE!]
(Pwm_PeriodType)[!"num:inttohex($this_unified_channel_period_in_ticks)"!], /* [!"$this_unified_channel_period_in_ticks"!] ticks - default period value */
(uint16)[!"num:inttohex(PwmDutycycleDefault,4)"!],/* default duty cycle value */
[!"PwmIdleState"!],/* signal idle state */
[!IF "node:exists('PwmNotification')"!]
    [!IF "(PwmNotification = '') or (PwmNotification = 'NULL_PTR') or (PwmNotification = 'NULL')"!]NULL_PTR[!ELSE!]&[!"PwmNotification"!][!ENDIF!], /* Pwm notification function */
[!ELSE!]
    NULL_PTR,
[!ENDIF!]

PWM_EMIOS_CHANNEL, /* channel ip type */
/* PWM eMIOS channel specific configuration structure */
    {{
             (Pwm_ChannelType)[!"node:name(.)"!]_[!"PwmHwChannel"!],/* assigned eMIOS HW channel id */
    /*EMiOS  channel Addr*/
    [!VAR "pwm_hw_channel_index" = "0"!][!//
    [!VAR "pwm_hw_channel"="0"!][!//
    [!VAR "pwm_hw_channel_macro"="0"!][!//
    [!VAR "pwm_hw_channel"="PwmHwChannel"!][!//

        [!IF "contains(PwmHwChannel,'EMIOS_0')"!][!//
           (uint32)[!"num:inttohex(num:hextoint(ecu:get('Pwm.EMIOS_0_BaseAddress')))"!]UL, /*EMiOS 0 Module Addr*/
           [!VAR "pwm_hw_channel_index"="substring-after($pwm_hw_channel, 'EMIOS_0_CH_')"!]
           (uint32)[!"num:inttohex(num:hextoint(ecu:get('Pwm.EMIOS_0_BaseAddress')) + (32 + (num:i(number($pwm_hw_channel_index)) * 32)))"!]UL, /*EMiOS 0 channel Addr*/
           [!ELSEIF "contains(PwmHwChannel,'EMIOS_1')"!][!//
           (uint32)[!"num:inttohex(num:hextoint(ecu:get('Pwm.EMIOS_1_BaseAddress')))"!]UL, /*EMiOS 1 Module Addr*/
           [!VAR "pwm_hw_channel_index"="substring-after($pwm_hw_channel, 'EMIOS_1_CH_')"!]
           (uint32)[!"num:inttohex(num:hextoint(ecu:get('Pwm.EMIOS_1_BaseAddress')) + (32 + (num:i(number($pwm_hw_channel_index)) * 32)))"!]UL, /*EMiOS 1 channel Addr*/
        [!ENDIF!][!//
    [!NOCODE!][!//
    #ifdef PWM_FEATURE_OPWMCB
        #if (PWM_FEATURE_OPWMCB == STD_ON)
    [!ENDNOCODE!][!//
    [!CALL "ValidatePwmBusSelection"!]
    [!NOCODE!][!//
        #endif
    #endif
    [!ENDNOCODE!][!//
(Pwm_EmiosCtrlParamType)([!"EmiosUnifiedChannelBusSelect"!] | [!"PwmModeSelect"!]  [!IF "PwmFreezeEnable"!] | PWM_FREEZE_ENABLE[!ENDIF!]
[!IF "(contains(PwmModeSelect,'OPWFMB') or (contains(PwmModeSelect,'PWM_MODE_OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'PWM_MODE_OPWMCB_TRAIL_DEADTIME')) or contains(PwmModeSelect,'DAOC'))"!]
    [!IF "(contains(EmiosUnifiedChannelBusSelect,'PWM_BUS_INTERNAL_COUNTER') or (contains(PwmModeSelect,'PWM_MODE_OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'PWM_MODE_OPWMCB_TRAIL_DEADTIME')))"!]
[!IF "node:exists(PwmPrescaler)"!]
[!IF "PwmPrescaler= 'PwmPrescalerDiv1'"!] | PWM_PRES_1
[!ELSEIF "PwmPrescaler= 'PwmPrescalerDiv2'"!] | PWM_PRES_2
[!ELSEIF "PwmPrescaler= 'PwmPrescalerDiv3'"!] | PWM_PRES_3
[!ELSEIF "PwmPrescaler= 'PwmPrescalerDiv4'"!] | PWM_PRES_4[!ENDIF!]
 [!ELSE!] | 0UL /* prescaler not used */[!ENDIF!]
 [!ENDIF!]
 [!ELSE!] | 0UL /* prescaler not used */[!ENDIF!]
 ),
[!IF "$SelectPresApi = 1"!][!//
[!IF "(contains(PwmModeSelect,'OPWFMB') or (contains(PwmModeSelect,'PWM_MODE_OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'PWM_MODE_OPWMCB_TRAIL_DEADTIME')) or (contains(PwmModeSelect,'DAOC')))"!][!//
[!IF "(contains(EmiosUnifiedChannelBusSelect,'PWM_BUS_INTERNAL_COUNTER') or (contains(PwmModeSelect,'PWM_MODE_OPWMCB_LEAD_DEADTIME')) or (contains(PwmModeSelect,'PWM_MODE_OPWMCB_TRAIL_DEADTIME')) or (contains(PwmModeSelect,'DAOC')))"!][!//
[!IF "node:exists(PwmPrescaler_Alternate)"!][!//
[!IF "PwmPrescaler_Alternate= 'PwmPrescalerDiv1'"!]PWM_PRES_1,[!//
[!ELSEIF "PwmPrescaler_Alternate= 'PwmPrescalerDiv2'"!]PWM_PRES_2,[!//
[!ELSEIF "PwmPrescaler_Alternate= 'PwmPrescalerDiv3'"!]PWM_PRES_3,[!//
[!ELSEIF "PwmPrescaler_Alternate= 'PwmPrescalerDiv4'"!]PWM_PRES_4,[!//
[!ENDIF!][!//
[!ELSE!][!//
0UL,
[!ENDIF!][!//
[!ENDIF!][!//
[!ELSE!][!//
0UL,
[!ENDIF!][!//
[!ENDIF!][!//
[!IF "((contains(PwmModeSelect,'OPWMB')) or (contains(PwmModeSelect,'OPWMT')))"!][!//
[!IF "((contains(EmiosUnifiedChannelBusSelect,'PWM_BUS_A')) or (contains(EmiosUnifiedChannelBusSelect,'PWM_BUS_DIVERSE')))"!][!//
[!IF "node:exists(PwmOffset)"!](Pwm_PeriodType)[!"PwmOffset"!],/* leading edge of the PWM output pulse in OPWMB, OPWMT modes */[!//

[!ENDIF!][!//
[!ENDIF!][!//
[!ELSE!][!//
(Pwm_PeriodType)0,/* leading edge of the PWM output pulse in OPWMB, OPWMT modes */
[!ENDIF!][!//

#ifdef PWM_FEATURE_OPWMT
    #if (PWM_FEATURE_OPWMT == STD_ON)
    [!IF "node:exists(PwmTriggerDelay)"!](Pwm_PeriodType)[!"PwmTriggerDelay"!],/* delay for generating the trigger event in OPWMT mode */
    [!ELSE!](Pwm_PeriodType)0,/* delay for generating the trigger event in OPWMT mode */
    [!ENDIF!]
        #endif
#endif
    (boolean)[!IF "OffsetDelayAdjust"!]TRUE,[!ELSE!]FALSE,[!ENDIF!] /* Pwm_Offset and Pwm_TriggerDelay adjusted during runtime */
    #ifdef PWM_FEATURE_OPWMCB
        #if (PWM_FEATURE_OPWMCB == STD_ON)
    (uint16)[!IF "node:exists(Pwm_Deadtime)"!][!"Pwm_Deadtime"!][!ELSE!]0[!ENDIF!]/*deadtime parameter */[!CR!]
        #endif
    #endif
}}
}[!ENDSELECT!][!IF "$x < num:i(count(PwmChannelConfigSet/*[1]/PwmChannel/*)) - 1"!],/* end channel */
[!ENDIF!][!//
[!ENDFOR!]
};

/**
* @brief   pwm high level configuration structure
* @details This is the type of data structure containing the initialization data for the PWM driver.
*          \n ChannelCount - number of configured channels
*          \n ChannelsPtr - pointer to the configured channels
* @implements DPWM03303
*/
CONST(Pwm_ConfigType, PWM_CONST) Pwm_InitConfig_PC =
{
    PWM_CONF_CHANNELS_PC,  /* number of configured PWM channels in the array */
    Pwm_Channels_PC        /* pointer to array of channes */
};


/* stop putting configuration structure into section PWM_STOP_SEC_CONST_UNSPECIFIED */
/* @violates @ref Pwm_Cfg_C_REF_2 This is required as per autosar Requirement */
#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Pwm_Cfg_C_REF_1 precautions to prevent header file being included twice */
/* @violates @ref Pwm_Cfg_C_REF_3 only preprocessor statements and comments before "#include" MemMap.h */
#include "MemMap.h"

#endif  /* end #ifdef PWM_PRECOMPILE_SUPPORT*/

 /*==================================================================================================
                                        GLOBAL VARIABLES
 ==================================================================================================*/

 /*==================================================================================================
                                    LOCAL FUNCTION PROTOTYPES
 ==================================================================================================*/

 /*==================================================================================================
                                        LOCAL FUNCTIONS
 ==================================================================================================*/

 /*==================================================================================================
                                        GLOBAL FUNCTIONS
 ==================================================================================================*/


#ifdef __cplusplus
}
#endif
[!ENDCODE!]
