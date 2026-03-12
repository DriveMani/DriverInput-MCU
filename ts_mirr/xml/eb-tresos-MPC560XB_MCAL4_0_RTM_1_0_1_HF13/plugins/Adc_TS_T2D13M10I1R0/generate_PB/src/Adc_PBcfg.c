[!CODE!][!//
/**
*   @file    Adc_PBcfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Adc - Post Build configuration Adc source file.
*   @details Post Build configuration file for Adc driver.
*
*   @addtogroup ADC
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : ADCDIG
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
* @section Adc_PBcfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before "#include"
* This violation is not fixed since the inclusion of MemMap.h is as per Autosar requirement.
*
* @section Adc_PBcfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section Adc_PBcfg_c_REF_3
* Violates MISRA 2004 Required Rule 8.10, Declaration and definition of objects or function
* Declaration and definition of objects or function at file scope shall have internal linkage unless
* external linkage is required
*
* @section Adc_PBcfg_c_REF_4
* Violates MISRA 2004 Required Rule 5.1, Identifiers shall not more than 31 characters
* Violation is needed because of Autosar restrictions for naming File version check macros.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/* @implements     DADC00009 */
#include "Adc.h"
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "Reg_eSys_ADCDig.h"

#ifndef ADC_PRECOMPILE_SUPPORT

[!NOCODE!][!//
[!INCLUDE "Adc_VersionCheck_Src_PB.m"!][!//
[!ENDNOCODE!][!//

[!NOCODE!][!//
[!INCLUDE "Adc_RegOperations_PB.m"!][!//
[!ENDNOCODE!][!//

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Adc_PBcfg.c
* @implements     DADC04098
*/
#define ADC_PBCFG_C_VENDOR_ID                    (43)
/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_PBCFG_C_AR_RELEASE_MAJOR_VERSION     (4)
/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_PBCFG_C_AR_ERLEASE_MINOR_VERSION     (0)
/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_PBCFG_C_AR_RELEASE_REVISION_VERSION  (3)
#define ADC_PBCFG_C_SW_MAJOR_VERSION             (1)
#define ADC_PBCFG_C_SW_MINOR_VERSION             (0)
#define ADC_PBCFG_C_SW_PATCH_VERSION             (1)

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* @implements     DADC06009 */
/* Check if source file and ADC header file are of the same vendor */
#if (ADC_PBCFG_C_VENDOR_ID != ADC_VENDOR_ID)
    #error "Adc_PBcfg.c and Adc.h have different vendor ids"
#endif

/* Check if source file and ADC header file are of the same Autosar version */
#if ((ADC_PBCFG_C_AR_RELEASE_MAJOR_VERSION != ADC_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_PBCFG_C_AR_ERLEASE_MINOR_VERSION != ADC_AR_RELEASE_MINOR_VERSION) || \
     (ADC_PBCFG_C_AR_RELEASE_REVISION_VERSION != ADC_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Adc_PBcfg.c and Adc.h are different"
#endif

/* Check if source file and ADC header file are of the same Software version */
#if ((ADC_PBCFG_C_SW_MAJOR_VERSION != ADC_SW_MAJOR_VERSION) || \
     (ADC_PBCFG_C_SW_MINOR_VERSION != ADC_SW_MINOR_VERSION) || \
     (ADC_PBCFG_C_SW_PATCH_VERSION != ADC_SW_PATCH_VERSION))
    #error "Software Version Numbers of Adc_PBcfg.c and Adc.h are different"
#endif

/* Check if source file and Reg_eSys_ADCDig header file are of the same vendor */
#if (ADC_PBCFG_C_VENDOR_ID != ADC_REG_VENDOR_ID)
    #error "Adc_PBcfg.c and Reg_eSys_ADCDig.h have different vendor ids"
#endif

/* Check if source file and Reg_eSys_ADCDig header file are of the same Autosar version */
#if ((ADC_PBCFG_C_AR_RELEASE_MAJOR_VERSION != ADC_REG_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_PBCFG_C_AR_ERLEASE_MINOR_VERSION != ADC_REG_AR_RELEASE_MINOR_VERSION) || \
     (ADC_PBCFG_C_AR_RELEASE_REVISION_VERSION != ADC_REG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Adc_PBcfg.c and Reg_eSys_ADCDig.h are different"
#endif

/* Check if source file and Reg_eSys_ADCDig header file are of the same Software version */
#if ((ADC_PBCFG_C_SW_MAJOR_VERSION != ADC_REG_SW_MAJOR_VERSION) || \
     (ADC_PBCFG_C_SW_MINOR_VERSION != ADC_REG_SW_MINOR_VERSION) || \
     (ADC_PBCFG_C_SW_PATCH_VERSION != ADC_REG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Adc_PBcfg.c and Reg_eSys_ADCDig.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define ADC_START_SEC_CODE
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "MemMap.h"

[!NOCODE!][!//
[!VAR "BOLERO256K" = "0"!][!//
[!SELECT "as:modconf('Resource')[1]"!][!//
[!IF "(ResourceGeneral/ResourceSubderivative = 'mpc5601dxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5601dxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5602dxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5602dxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560d30xlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560d30xll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560d40xlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560d40xll_lqfp100')"!][!//
    [!VAR "BOLERO256K" = "1"!][!//
[!ENDIF!][!//
[!ENDSELECT!][!//
[!ENDNOCODE!][!//

/**
* @brief          ADC Notification functions.
* @details        ADC Nofification functions defined inside the Plugin.
*
* @implements    DADC04099 
*/
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*"!][!//
[!IF "../../../../../../AdcGeneral/AdcGrpNotifCapability = 'true'"!][!//
[!IF "AdcNotification != 'NULL_PTR'"!][!//
/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
extern void [!"AdcNotification"!](void); /**< @brief for Group - [!"./AdcGroupId"!] */
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

/**
* @brief          Adc Watchdog notification functions.
* @details        Adc Watchdog notification functions defined inside the Plugin.
*
* @implements     DADC04085 
*/
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcChannel/*/AdcThresholdControl"!][!//
[!IF "AdcEnableThresholds = 'true'"!][!//
[!IF "AdcWdogNotification != 'NULL_PTR'"!][!//
extern void [!"AdcWdogNotification"!](void); /**< @brief for Channel - [!"../AdcChannelId"!] */
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

#define ADC_STOP_SEC_CODE
/* @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "MemMap.h"

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/**
* @brief          Total number of groups in Config.
*
* @implements     DADC04086
*/
[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
#define ADC_GROUPS_[!"num:i($CSET_NR)"!]  [!"num:i(count(AdcHwUnit/*/AdcGroup/*))"!]
[!ENDLOOP!][!//

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_START_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "MemMap.h"

/**
* @brief          Adc Result Buffer RAM initializations.
* @details        Array for all ADC group result ram buffers.
*
* @implements     DADC04087
*/
STATIC P2VAR(Adc_ValueGroupType, ADC_VAR, ADC_APPL_DATA) ADC_ResultsBufferPtr[] =
{
[!VAR "MAX_NUM"="count(AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*)"!][!//
[!VAR "CRT_NUM"="1"!][!//
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*"!][!//
 NULL_PTR[!IF "$CRT_NUM<$MAX_NUM"!],[!ELSE!][!ENDIF!]
[!VAR "CRT_NUM"="$CRT_NUM+1"!][!//
[!ENDLOOP!][!//
};

/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "MemMap.h"

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "MemMap.h"

[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
[!LOOP "AdcHwUnit/*/AdcGroup/*"!][!//
[!IF "AdcGroupTriggSrc = 'ADC_TRIGG_SRC_HW'"!][!//
[!VAR "HWNUM" ="num:i(count(AdcHwTrig/*))"!]
/**
* @brief          Hardware trigger sources configured for group - Configuration [!"num:i($CSET_NR)"!].
* @implements     DADC04088 
*/
/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
STATIC CONST(Adc_HwTriggerTimerType, ADC_CONST) Adc_GroupTriggerSource[!"AdcGroupId"!]_CFG[!"num:i($CSET_NR)"!]_PB[[!"num:i(count(AdcHwTrig/*))"!]] =
{
[!VAR "INTINDEX" = "0"!][!//
[!LOOP "AdcHwTrig/*"!][!//
[!VAR "HWRES"!][!CALL "HWRESOURCE" , "SOURCE" = "AdcHwTrigSrc"!][!ENDVAR!][!//
 (Adc_HwTriggerTimerType)[!"num:i(number($HWRES))"!][!//
[!IF "$INTINDEX < ($HWNUM - 1)"!],[!ENDIF!][!VAR "INTINDEX"="$INTINDEX + 1"!]
[!ENDLOOP!][!//
};
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//

[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
[!LOOP "AdcHwUnit/*/AdcGroup/*"!][!//
[!IF "../../AdcHwUnitId = 'ADC_UNIT_0'"!][!//
/**
* @brief          Group Assignments on ADC Hardware unit 0 - Configuration [!"num:i($CSET_NR)"!].
* @implements     DADC04089
*/
STATIC CONST(Adc_ChannelType, ADC_CONST) ADC_Group[!"AdcGroupId"!]_Assignment_PB_0_[!"num:i($CSET_NR)"!][ADC_CFGSET[!"num:i($CSET_NR)"!]_GROUP_[!"AdcGroupId"!]_CHANNELS] =
{
[!VAR "MAX_COUNT" = "count(AdcGroupDefinition/*)-1"!][!//
[!VAR "CRT_COUNT" = "0"!][!//
[!LOOP "AdcGroupDefinition/*"!][!//
[!VAR "CurrAdcChannel" = "."!][!//
[!VAR "CurrAdcChannel1" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel,'/'),'/'),'/'),'/'),'/')"!][!//
[!VAR "INDEX" = "0"!][!//
[!LOOP "../../../../AdcChannel/*"!][!//
[!IF "@name = $CurrAdcChannel1"!][!//
 [!"AdcChannelId"!]U[!IF "$CRT_COUNT < $MAX_COUNT"!],[!ELSE!][!ENDIF!]
[!ENDIF!][!//
[!VAR "INDEX" = "$INDEX + 1"!][!//
[!ENDLOOP!][!//
[!VAR "CRT_COUNT" = "$CRT_COUNT + 1"!][!//
[!ENDLOOP!][!//
};
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//

[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
[!LOOP "AdcHwUnit/*/AdcGroup/*"!][!//
[!IF "../../AdcHwUnitId = 'ADC_UNIT_1'"!][!//
/**
* @brief          Group Assignments on ADC Hardware unit 1 - Configuration [!"num:i($CSET_NR)"!].
* @implements     DADC04090
*/
STATIC CONST(Adc_ChannelType, ADC_CONST) ADC_Group[!"AdcGroupId"!]_Assignment_PB_1_[!"num:i($CSET_NR)"!][ADC_CFGSET[!"num:i($CSET_NR)"!]_GROUP_[!"AdcGroupId"!]_CHANNELS] =
{
[!VAR "MAX_COUNT" = "count(AdcGroupDefinition/*)-1"!][!//
[!VAR "CRT_COUNT" = "0"!][!//
[!LOOP "AdcGroupDefinition/*"!][!//
[!VAR "CurrAdcChannel" = "."!][!//
[!VAR "CurrAdcChannel1" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel,'/'),'/'),'/'),'/'),'/')"!][!//
[!VAR "INDEX" = "0"!][!//
[!LOOP "../../../../AdcChannel/*"!][!//
[!IF "@name = $CurrAdcChannel1"!][!//
 [!"AdcChannelId"!]U[!IF "$CRT_COUNT<$MAX_COUNT"!],[!ELSE!][!ENDIF!]
[!ENDIF!][!//
[!VAR "INDEX" = "$INDEX + 1"!][!//
[!ENDLOOP!][!//
[!VAR "CRT_COUNT" = "$CRT_COUNT + 1"!][!//
[!ENDLOOP!][!//
};
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//

[!NOCODE!][!//
/**
* @brief          Definition of Precise PSR and Wdg Enable CWENR for HWUnit_0
*/
[!VAR "AdcPrecisePsr_Hw0"="0"!][!//
[!VAR "AdcExtdPsr_Hw0"="0"!][!//
[!VAR "AdcExternalPsr_Hw0"="0"!][!//
[!VAR "AdcWer0_Hw0"="0"!][!//
[!VAR "AdcWer1_Hw0"="0"!][!//
[!VAR "AdcWer2_Hw0"="0"!][!//
[!VAR "CurrAdcChannel" = "0"!][!//
[!VAR "CurrAdcChannel1" = "0"!][!//
[!VAR "AdcTemp_Ch" = "0"!][!//
[!LOOP "AdcConfigSet/*[1]/AdcHwUnit/*[AdcHwUnitId='ADC_UNIT_0']/AdcGroup/*"!][!//
[!LOOP "AdcGroupDefinition/*"!][!//
    [!VAR "CurrAdcChannel" = "."!][!//
    [!VAR "CurrAdcChannel1" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel,'/'),'/'),'/'),'/'),'/')"!]
[!LOOP "../../../../AdcChannel/*"!][!//
[!IF "$CurrAdcChannel1 = @name"!][!//
    [!IF "contains(AdcHwChannel,'ANP_')"!][!//
        [!VAR "AdcTemp_Ch" = "substring-after(AdcHwChannel,'ANP_')"!][!//
        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!IF "AdcEnablePresampling"!][!//
            [!VAR "AdcPrecisePsr_Hw0" = "bit:or($AdcPrecisePsr_Hw0,$AdcTemp_Ch)"!][!//
        [!ENDIF!][!//
        [!SELECT "AdcThresholdControl"!][!//
          [!IF "AdcEnableThresholds"!][!//
            [!VAR "AdcWer0_Hw0" = "bit:or($AdcWer0_Hw0,$AdcTemp_Ch)"!][!//
          [!ENDIF!][!//
        [!ENDSELECT!][!//
    [!ELSEIF "contains(AdcHwChannel,'ANS_')"!][!//
        [!VAR "AdcTemp_Ch" = "substring-after(AdcHwChannel,'ANS_')"!][!//
        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!IF "AdcEnablePresampling"!][!//
            [!VAR "AdcExtdPsr_Hw0" = "bit:or($AdcExtdPsr_Hw0,$AdcTemp_Ch)"!][!//
        [!ENDIF!][!//
        [!SELECT "AdcThresholdControl"!][!//
          [!IF "AdcEnableThresholds"!][!//
            [!VAR "AdcWer1_Hw0" = "bit:or($AdcWer1_Hw0,$AdcTemp_Ch)"!][!//
          [!ENDIF!][!//
        [!ENDSELECT!][!//
    [!ELSEIF "contains(AdcHwChannel,'ANX_')"!][!//
        [!VAR "AdcTemp_Ch" = "num:i(substring-after(AdcHwChannel,'CH_') - 64)"!][!//
        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!IF "AdcEnablePresampling"!][!//
            [!VAR "AdcExternalPsr_Hw0" = "bit:or($AdcExternalPsr_Hw0,$AdcTemp_Ch)"!][!//
        [!ENDIF!][!//
        [!SELECT "AdcThresholdControl"!][!//
          [!IF "AdcEnableThresholds"!][!//
            [!VAR "AdcWer2_Hw0" = "bit:or($AdcWer2_Hw0,$AdcTemp_Ch)"!][!//
          [!ENDIF!][!//
        [!ENDSELECT!][!//
    [!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//

[!NOCODE!][!//
/**
* @brief          Definition of Precise PSR and Wdg Enable CWENR for HWUnit_1
*/
[!VAR "AdcPrecisePsr_Hw1"="0"!][!//
[!VAR "AdcExtdPsr_Hw1"="0"!][!//
[!VAR "AdcExternalPsr_Hw1"="0"!][!//
[!VAR "AdcWer0_Hw1"="0"!][!//
[!VAR "AdcWer1_Hw1"="0"!][!//
[!VAR "AdcWer2_Hw1"="0"!][!//
[!VAR "CurrAdcChannel" = "0"!][!//
[!VAR "CurrAdcChannel1" = "0"!][!//
[!VAR "AdcTemp_Ch" = "0"!][!//
[!LOOP "AdcConfigSet/*[1]/AdcHwUnit/*[AdcHwUnitId='ADC_UNIT_1']/AdcGroup/*"!][!//
[!LOOP "AdcGroupDefinition/*"!][!//
    [!VAR "CurrAdcChannel" = "."!][!//
    [!VAR "CurrAdcChannel1" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel,'/'),'/'),'/'),'/'),'/')"!]
[!LOOP "../../../../AdcChannel/*"!][!//
[!IF "$CurrAdcChannel1 = @name"!][!//
    [!IF "contains(AdcHwChannel,'ANP_')"!][!//
        [!VAR "AdcTemp_Ch" = "substring-after(AdcHwChannel,'ANP_')"!][!//
        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!IF "AdcEnablePresampling"!][!//
            [!VAR "AdcPrecisePsr_Hw1" = "bit:or($AdcPrecisePsr_Hw1,$AdcTemp_Ch)"!][!//
        [!ENDIF!][!//
        [!SELECT "AdcThresholdControl"!][!//
          [!IF "AdcEnableThresholds"!][!//
            [!VAR "AdcWer0_Hw1" = "bit:or($AdcWer0_Hw1,$AdcTemp_Ch)"!][!//
          [!ENDIF!][!//
        [!ENDSELECT!][!//
    [!ELSEIF "contains(AdcHwChannel,'ANS_')"!][!//
        [!VAR "AdcTemp_Ch" = "substring-after(AdcHwChannel,'ANS_')"!][!//
        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!IF "AdcEnablePresampling"!][!//
            [!VAR "AdcExtdPsr_Hw1" = "bit:or($AdcExtdPsr_Hw1,$AdcTemp_Ch)"!][!//
        [!ENDIF!][!//
        [!SELECT "AdcThresholdControl"!][!//
          [!IF "AdcEnableThresholds"!][!//
            [!VAR "AdcWer1_Hw1" = "bit:or($AdcWer1_Hw1,$AdcTemp_Ch)"!][!//
          [!ENDIF!][!//
        [!ENDSELECT!][!//
    [!ELSEIF "contains(AdcHwChannel,'ANX_')"!][!//
        [!VAR "AdcTemp_Ch" = "num:i(substring-after(AdcHwChannel,'CH_') - 64)"!][!//
        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!IF "AdcEnablePresampling"!][!//
            [!VAR "AdcExternalPsr_Hw1" = "bit:or($AdcExternalPsr_Hw1,$AdcTemp_Ch)"!][!//
        [!ENDIF!][!//
        [!SELECT "AdcThresholdControl"!][!//
          [!IF "AdcEnableThresholds"!][!//
            [!VAR "AdcWer2_Hw1" = "bit:or($AdcWer2_Hw1,$AdcTemp_Ch)"!][!//
          [!ENDIF!][!//
        [!ENDSELECT!][!//
    [!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//

[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
/**
* @brief          Definition of Hw units Configuration [!"num:i($CSET_NR)"!].
* @implements     DADC04091
*/
STATIC CONST(Adc_LLD_HWUnitConfiguration, ADC_CONST) Adc_HWUnit_CfgPB_[!"num:i($CSET_NR)"!][] =
{
[!VAR "MAX_COUNT"="count(AdcHwUnit/*) - 1"!][!//
[!VAR "CRT_COUNT"="0"!][!//
[!LOOP "AdcHwUnit/*"!][!//
[!CODE!][!//
  /**< @brief Hardware Unit [!"AdcHwUnitId"!] */
  {
    /**< @brief Hardware unit id */
    (Adc_HwUnitType)[!"AdcHwUnitId"!],
    /**< @brief Main configuration for control register */
    (ADC_CLOCK_PRESCALER_DIV2 | [!IF "AdcAutoClockOff = 'true'"!]ADC_AUTO_CLKOFF_EN[!ELSE!]ADC_AUTO_CLKOFF_DIS[!ENDIF!] | ADC_OVERWRITE_EN | [!IF "../../../../AdcGeneral/AdcResultAlignment = 'ADC_ALIGN_RIGHT'"!]ADC_WRITE_RIGHT_ALIGNED[!ELSE!]ADC_WRITE_LEFT_ALIGNED[!ENDIF!]),
    /**< @brief Power down exit delay when ADC runs on normal system frequency */
    (ADC_POWERDOWN_EXIT_DELAY_VALUE([!"num:i(AdcPowerDownDelay)"!])),
[!IF "(../../../../NonAutosar/AdcEnableDualClockMode)"!][!//
    /**< @brief Alternate Power down exit delay when ADC runs on low power system frequency */
    (ADC_POWERDOWN_EXIT_DELAY_VALUE([!"num:i(AdcAltPowerDownDelay)"!])),
[!ENDIF!][!//
    /**< @brief Mux delay value */
[!IF "(../../../../AdcGeneral/AdcMuxDelaySupport)"!][!//
    (MUX_DELAY_VALUE([!"num:i(AdcMuxDelay)"!])), /* Mux delay value */
[!ENDIF!][!//
[!IF "AdcPresamplingEnableSignal = 'ADC_PRESAMP_VOLTAGE_V1' "!][!//
    /**< @brief ADC_PRESAMP_VOLTAGE_V1 -> Vdd=5V */
    (uint8)0x1,
[!ELSE!][!//
    /**< @brief DC_PRESAMP_VOLTAGE_V0 -> Vss=0V */
    (uint8)0x0,
[!ENDIF!][!//
[!IF "AdcBypassSampling = 'true'"!][!//
    /**< @brief Bypass the sampling phase */
    (uint8)0x1,
[!ELSE!][!//
    /**< @brief do not bypass the sampling phase */
    (uint8)0x0,
[!ENDIF!][!//
[!IF "(../../../../NonAutosar/AdcEnableDualClockMode)"!][!//
    (Adc_ConversionTimeType)(ADC_INPLATCH_VALUE([!"(AdcNormalAltConvTimings/AdcLatchingDurationNormal)"!])|ADC_INPCMP_VALUE([!"(AdcNormalAltConvTimings/AdcComparisonDurationNormal)"!])|ADC_INPSAMP_VALUE([!"num:i(AdcNormalAltConvTimings/AdcSamplingDurationNormal)"!])), /* Normal Conversion time */
    (Adc_ConversionTimeType)(ADC_INPLATCH_VALUE([!"(AdcNormalAltConvTimings/AdcLatchingDurationAlt)"!])|ADC_INPCMP_VALUE([!"(AdcNormalAltConvTimings/AdcComparisonDurationAlt)"!])|ADC_INPSAMP_VALUE([!"num:i(AdcNormalAltConvTimings/AdcSamplingDurationAlt)"!])), /* Alternate Conversion time */
[!ELSE!][!//
    (Adc_ConversionTimeType)0x0,
    (Adc_ConversionTimeType)0x0,
[!ENDIF!][!//
    /**< @brief Bit resolution */
[!IF "AdcHwUnitId = 'ADC_UNIT_1'"!][!//
    (Adc_ResolutionType)ADC_BITS_RESOLUTION_12[!//
[!ELSE!][!//
[!SELECT "as:modconf('Resource')[1]"!][!//
[!IF "(ResourceGeneral/ResourceSubderivative = 'mpc5601dxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5601dxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5602dxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5602dxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560d30xlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560d30xll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560d40xlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560d40xll_lqfp100')"!][!//
    (Adc_ResolutionType)ADC_BITS_RESOLUTION_12[!//
[!ELSE!][!//
    (Adc_ResolutionType)ADC_BITS_RESOLUTION_10[!//
[!ENDIF!][!//
[!ENDSELECT!][!//
[!ENDIF!][!//
[!IF "(../../../../AdcGeneral/AdcPreSamplingOnce) = 'true'"!][!//
[!IF "AdcHwUnitId = 'ADC_UNIT_0'"!],
    /**< @brief Presampling for Precision channels */
    (uint32)[!"num:inttohex($AdcPrecisePsr_Hw0)"!]U,
    /**< @brief Presampling for Extended channels */
    (uint32)[!"num:inttohex($AdcExtdPsr_Hw0)"!]U,
    /**< @brief Presampling for External channels */
    (uint32)[!"num:inttohex($AdcExternalPsr_Hw0)"!]U[!//
[!ENDIF!][!//
[!IF "AdcHwUnitId = 'ADC_UNIT_1'"!],
    /**< @brief Presampling for Precision channels */
    (uint32)[!"num:inttohex($AdcPrecisePsr_Hw1)"!]U,
    /**< @brief Presampling for Extended channels */
    (uint32)[!"num:inttohex($AdcExtdPsr_Hw1)"!]U,
    /**< @brief Presampling for External channels */
    (uint32)[!"num:inttohex($AdcExternalPsr_Hw1)"!]U[!//
[!ENDIF!][!//
[!ENDIF!][!//
[!IF "(../../../../AdcGeneral/AdcWdgThresholdOnce) = 'true'"!][!//
[!IF "AdcHwUnitId = 'ADC_UNIT_0'"!],
    /**< @brief Wer0 for precision channels */
    (uint32)[!"num:inttohex($AdcWer0_Hw0)"!]U,
    /**< @brief Wer1 for extended(medi.accuracy channels) */
    (uint32)[!"num:inttohex($AdcWer1_Hw0)"!]U,
    /**< @brief Wer2 for external channels */
    (uint32)[!"num:inttohex($AdcWer2_Hw0)"!]U[!//
[!ENDIF!][!//
[!IF "AdcHwUnitId = 'ADC_UNIT_1'"!],
    /**< @brief Wer0 for precision channels */
    (uint32)[!"num:inttohex($AdcWer0_Hw1)"!]U,
    /**< @brief Wer1 for extended(medi.accuracy channels) */
    (uint32)[!"num:inttohex($AdcWer1_Hw1)"!]U,
    /**< @brief Wer2 for external channels */
    (uint32)[!"num:inttohex($AdcWer2_Hw1)"!]U[!//
[!ENDIF!][!//
[!ENDIF!][!//
[!NOCODE!][!//
    [!IF "(../../../../AdcGeneral/AdcConvTimeOnce) = 'true'"!][!//
        [!IF "node:exists(AdcGroup/*[@index=0]) = 'true'"!][!//
            [!VAR "AdcGrpLatchDuration" = "AdcGroup/*[@index=0]/AdcGroupConversionConfiguration/AdcLatchingDuration"!][!//
            [!VAR "AdcGrpComparisionDuration" = "AdcGroup/*[@index=0]/AdcGroupConversionConfiguration/AdcComparisonDuration"!][!//
            [!VAR "AdcGrpSamplingDuration" = "AdcGroup/*[@index=0]/AdcGroupConversionConfiguration/AdcSamplingDuration"!][!//
        [!ENDIF!][!//
    [!ENDIF!][!//
[!ENDNOCODE!][!//
[!IF "(../../../../AdcGeneral/AdcConvTimeOnce) = 'true'"!],
    /**< @brief Conversion time */
    (ADC_INPLATCH_VALUE([!"$AdcGrpLatchDuration"!])|ADC_INPCMP_VALUE([!"$AdcGrpComparisionDuration"!])|ADC_INPSAMP_VALUE([!"$AdcGrpSamplingDuration"!]))
[!ENDIF!]
  }[!IF "$CRT_COUNT<$MAX_COUNT"!],[!ELSE!][!ENDIF!]
[!VAR "CRT_COUNT"="$CRT_COUNT+1"!][!//
[!ENDCODE!][!//
[!ENDLOOP!][!//
};
[!ENDLOOP!][!//

[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
[!VAR "ADC0_EXISTS" = "0"!][!//
[!VAR "ADC1_EXISTS" = "0"!][!//
[!LOOP "AdcHwUnit/*"!][!//
[!IF "AdcHwUnitId = 'ADC_UNIT_0'"!][!//
[!VAR "ADC0_EXISTS" = "1"!][!//
[!ENDIF!][!//
[!IF "AdcHwUnitId = 'ADC_UNIT_1'"!][!//
[!VAR "ADC1_EXISTS" = "1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

[!VAR "LoopVar"="0"!][!//
[!IF "num:i($ADC0_EXISTS) = '1'"!][!//
/**
* @brief          Definition of channels on ADC Hardware unit 0 - Configuration [!"num:i($CSET_NR)"!].
* @details         array of conversion command messages
* @implements     DADC04092
*/
STATIC CONST(Adc_LLD_ChannelConfiguration, ADC_CONST) Adc_Channels_CfgPB_0_[!"num:i($CSET_NR)"!][] =
{
[!FOR "x" = "0" TO "num:i(count(AdcHwUnit/*[AdcHwUnitId='ADC_UNIT_0']/AdcChannel/*)-1)"!][!//
[!LOOP "AdcHwUnit/*/AdcChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "../../AdcHwUnitId = 'ADC_UNIT_0'"!][!//
[!IF "AdcChannelId = $Loop"!][!//
  /**< @brief Hardware Unit [!"../../AdcHwUnitId"!]  --  [!"AdcHwChannel"!] */
  {
    /**< @brief Adc physical channel */
    (Adc_ChannelType)(ADC_ID_CHANNEL([!IF "contains(AdcHwChannel,'ANP_')"!][!"num:i(substring-after(AdcHwChannel,'ANP_'))"!][!ELSE!][!IF "contains(AdcHwChannel,'ANS_')"!][!"num:i(substring-after(AdcHwChannel,'ANS_')+32)"!][!ELSE!][!IF "contains(AdcHwChannel,'ANX_')"!][!"num:i(substring-after(AdcHwChannel,'CH_'))"!][!ENDIF!][!ENDIF!][!ENDIF!])),
    [!IF "AdcThresholdControl/AdcEnableThresholds = 'true'"!][!//
    /**< @brief Threshold register configured */
    [!"AdcThresholdControl/AdcThresholdControlRegister"!],
    /**< @brief Threshold register value */
    (ADC_LOW_TH0_VALUE([!"AdcThresholdControl/AdcLowThreshold"!])|ADC_HIGH_TH0_VALUE([!"AdcThresholdControl/AdcHighThreshold"!])),
    /**< @brief Threshold control register value */
    (ADC_TH_ENABLE|ADC_CH_THRESHOLD_COMP([!IF "contains(AdcHwChannel,'ANP_')"!][!"num:i(substring-after(AdcHwChannel,'ANP_'))"!][!ELSE!][!IF "contains(AdcHwChannel,'ANS_')"!][!"num:i(substring-after(AdcHwChannel,'ANS_')+32)"!][!ELSE!][!IF "contains(AdcHwChannel,'ANX_')"!][!"num:i(substring-after(AdcHwChannel,'ANX_')+64)"!][!ENDIF!][!ENDIF!][!ENDIF!])),
[!ELSE!][!//
    /**< @brief Threshold register configured */
    ADC_THRESHOLD_REG_0,
    /**< @brief Threshold register value */
    ADC_UNUSED_THRESHOLD,
    /**< @brief Threshold control register value */
    ADC_TH_DISABLE,
[!ENDIF!][!//
[!IF "AdcThresholdControl/AdcEnableThresholds = 'true'"!][!//
[!IF "AdcThresholdControl/AdcWdogNotification != 'NULL_PTR'"!][!//
    /**< @brief Channel WDOG Notification function pointer */
    &[!"AdcThresholdControl/AdcWdogNotification"!],
[!ELSE!][!//
    /**< @brief No WDOG notification */
    NULL_PTR,
[!ENDIF!][!//
[!ELSE!][!//
    /**< @brief No WDOG notification */
    NULL_PTR,
[!ENDIF!][!//
[!IF "AdcEnablePresampling ='true' "!][!//
    /**< @brief presampling enabled */
    (uint8)0x1
[!ELSE!][!//
    /**< @brief presampling disabled */
    (uint8)0x0
[!ENDIF!][!//
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    ,
[!IF "AdcChannelLimitCheck ='true' "!][!//
    /**< @brief limit check enabled */
    (boolean)TRUE,
    /**< @brief range for limit check */
    (Adc_ChannelRangeSelectType)[!"AdcChannelRangeSelect"!],
    [!IF "../../../../../../AdcGeneral/AdcResultAlignment = 'ADC_ALIGN_LEFT'"!][!//
        (uint32)[!"num:i(bit:shl(AdcChannelHighLimit,(16 - AdcChannelResolution)))"!],
        (uint32)[!"num:i(bit:shl(AdcChannelLowLimit,(16 - AdcChannelResolution)))"!],
    [!ELSE!][!//
    /**< @brief high limit value */
    (uint32)[!"num:i(AdcChannelHighLimit)"!],
    /**< @brief low limit value */
    (uint32)[!"num:i(AdcChannelLowLimit)"!]
    [!ENDIF!][!//
[!ELSE!][!//
    /**< @brief limit check disabled */
    (boolean)FALSE,
    /**< @brief range for limit check */
    (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
    /**< @brief high limit value */
    (uint32)0,
    /**< @brief low limit value */
    (uint32)0
[!ENDIF!][!//
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
  }[!IF "$x < (count(AdcHwUnit/*[AdcHwUnitId='ADC_UNIT_0']/AdcChannel/*)-1)"!],[!ELSE!][!ENDIF!]
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//
};
[!ENDIF!][!//

[!VAR "LoopVar"="0"!][!//
[!IF "num:i($ADC1_EXISTS) = '1'"!][!//
/**
* @brief          Definition of channels on ADC Hardware unit 1 - Configuration [!"num:i($CSET_NR)"!].
* @details         array of conversion command messages
* @implements     DADC04093
*/
STATIC CONST(Adc_LLD_ChannelConfiguration, ADC_CONST) Adc_Channels_CfgPB_1_[!"num:i($CSET_NR)"!][] =
{
[!FOR "x" = "0" TO "num:i(count(AdcHwUnit/*[AdcHwUnitId='ADC_UNIT_1']/AdcChannel/*)-1)"!][!//
[!LOOP "AdcHwUnit/*/AdcChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "../../AdcHwUnitId = 'ADC_UNIT_1'"!][!//
[!IF "AdcChannelId = $Loop"!][!//
  /**< @brief Hardware Unit [!"../../AdcHwUnitId"!]  --  [!"AdcHwChannel"!] */
  {
    /**< @brief Adc physical channel */
      (Adc_ChannelType)(ADC_ID_CHANNEL([!IF "contains(AdcHwChannel,'ANP_')"!][!"num:i(substring-after(AdcHwChannel,'ANP_'))"!][!ELSE!][!IF "contains(AdcHwChannel,'ANS_')"!][!"num:i(substring-after(AdcHwChannel,'ANS_')+32)"!][!ELSE!][!IF "contains(AdcHwChannel,'ANX_')"!][!"num:i(substring-after(AdcHwChannel,'CH_'))"!][!ENDIF!][!ENDIF!][!ENDIF!])),
     [!IF "AdcThresholdControl/AdcEnableThresholds = 'true'"!][!//
    /**< @brief Threshold register configured */
    [!"AdcThresholdControl/AdcThresholdControlRegister"!],
    /**< @brief Threshold register value */
    (ADC_LOW_TH0_VALUE([!"AdcThresholdControl/AdcLowThreshold"!])|ADC_HIGH_TH0_VALUE([!"AdcThresholdControl/AdcHighThreshold"!])),
    /**< @brief Threshold control register value */
    (ADC_TH_ENABLE|ADC_CH_THRESHOLD_COMP([!IF "contains(AdcHwChannel,'ANP_')"!][!"num:i(substring-after(AdcHwChannel,'ANP_'))"!][!ELSE!][!IF "contains(AdcHwChannel,'ANS_')"!][!"num:i(substring-after(AdcHwChannel,'ANS_')+32)"!][!ELSE!][!IF "contains(AdcHwChannel,'ANX_')"!][!"num:i(substring-after(AdcHwChannel,'ANX_')+64)"!][!ENDIF!][!ENDIF!][!ENDIF!])),
[!ELSE!][!//
    /**< @brief Threshold register configured */
    ADC_THRESHOLD_REG_0,
    /**< @brief Threshold register value */
    ADC_UNUSED_THRESHOLD,
    /**< @brief Threshold control register value */
    ADC_TH_DISABLE,
[!ENDIF!][!//
[!IF "AdcThresholdControl/AdcEnableThresholds = 'true'"!][!//
[!IF "AdcThresholdControl/AdcWdogNotification != 'NULL_PTR'"!][!//
    /**< @brief Channel WDOG Notification function pointer */
    &[!"AdcThresholdControl/AdcWdogNotification"!],
[!ELSE!][!//
    /**< @brief No WDOG notification */
    NULL_PTR,
[!ENDIF!][!//
[!ELSE!][!//
    /**< @brief No WDOG notification */
    NULL_PTR,
[!ENDIF!][!//
[!IF "AdcEnablePresampling ='true' "!][!//
    /**< @brief presampling enabled */
    (uint8)0x1
[!ELSE!][!//
    /**< @brief presampling disabled */
    (uint8)0x0
[!ENDIF!][!//
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    ,
[!IF "AdcChannelLimitCheck ='true' "!][!//
    /**< @brief limit check enabled */
    (boolean)TRUE,
    /**< @brief range for limit check */
    (Adc_ChannelRangeSelectType)[!"AdcChannelRangeSelect"!],
    [!IF "../../../../../../AdcGeneral/AdcResultAlignment = 'ADC_ALIGN_LEFT'"!][!//
        (uint32)[!"num:i(bit:shl(AdcChannelHighLimit,(16 - AdcChannelResolution)))"!],
        (uint32)[!"num:i(bit:shl(AdcChannelLowLimit,(16 - AdcChannelResolution)))"!],
    [!ELSE!][!//
    /**< @brief high limit value */
    (uint32)[!"num:i(AdcChannelHighLimit)"!],
    /**< @brief low limit value */
    (uint32)[!"num:i(AdcChannelLowLimit)"!]
    [!ENDIF!][!//
[!ELSE!][!//
    /**< @brief limit check disabled */
    (boolean)FALSE,
    /**< @brief range for limit check */
    (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
    /**< @brief high limit value */
    (uint32)0,
    /**< @brief low limit value */
    (uint32)0
[!ENDIF!][!//
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
  }[!IF "$x < (count(AdcHwUnit/*[AdcHwUnitId='ADC_UNIT_1']/AdcChannel/*)-1)"!],[!ELSE!][!ENDIF!]
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//
};
[!ENDIF!][!//
[!ENDLOOP!][!//

[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
/**
* @brief          Definition of channel's pointer structure for configuration [!"num:i($CSET_NR)"!].
* @implements     DADC04094
*/
STATIC P2CONST(Adc_LLD_ChannelConfiguration, ADC_VAR, ADC_APPL_CONST) Adc_Channels_CfgPB_[!"num:i($CSET_NR)"!][] =
{
[!IF "AdcHwUnit/*/AdcHwUnitId = 'ADC_UNIT_0'"!][!//
  Adc_Channels_CfgPB_0_[!"num:i($CSET_NR)"!],
[!ELSE!][!//
  NULL_PTR,
[!ENDIF!][!//
[!IF "AdcHwUnit/*/AdcHwUnitId = 'ADC_UNIT_1'"!][!//
  Adc_Channels_CfgPB_1_[!"num:i($CSET_NR)"!]
[!ELSE!][!//
  NULL_PTR
[!ENDIF!][!//
};
[!ENDLOOP!][!//

[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "AdcGrpLatchDuration" = "0"!][!//
[!VAR "AdcGrpComparisionDuration" = "0"!][!//
[!VAR "AdcGrpSamplingDuration" = "0"!][!//
[!VAR "EnableCHDisableCHIndex" ="0"!][!//
/**
* @brief          Definition of groups for configuration [!"num:i($CSET_NR)"!].
* @implements     DADC04096
*/
STATIC CONST(Adc_LLD_GroupConfiguration, ADC_CONST) Adc_Groups_CfgPB_[!"num:i($CSET_NR)"!][] =
{
[!FOR "x" = "0" TO "num:i(count(AdcHwUnit/*/AdcGroup/*)-1)"!][!//
[!LOOP "AdcHwUnit/*/AdcGroup/*"!][!//
[!VAR "NUM_TRIGGER" = "count(AdcHwTrig/*)"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "AdcGroupId = $Loop"!][!//
[!NOCODE!][!//
[!VAR "AdcExternalChExist" = "0"!]
[!VAR "AdcTemp_Ch" = "0"!]
[!VAR "AdcPrecise_Ch" = "0"!]
[!VAR "AdcExtd_Ch" = "0"!]
[!VAR "AdcExternal_Ch" = "0"!]
[!VAR "AdcPrecise_Psr" = "0"!]
[!VAR "AdcExtd_Psr" = "0"!]
[!VAR "AdcExternal_Psr" = "0"!]
[!VAR "AdcWer0" = "0"!]
[!VAR "AdcWer1" = "0"!]
[!VAR "AdcWer2" = "0"!]
[!VAR "FirstDmaCh" = "0"!]
[!VAR "LastDmaCh" = "0"!]
[!VAR "PreFlag" = "0"!]
[!VAR "ExtdFlag" = "0"!]
[!VAR "ExtrFlag" = "0"!]

[!LOOP "AdcGroupDefinition/*"!]
    [!VAR "CurrAdcChannel" = "."!]
    [!VAR "CurrAdcChannel1" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel,'/'),'/'),'/'),'/'),'/')"!]
[!LOOP "../../../../AdcChannel/*"!]
[!IF "$CurrAdcChannel1 = @name"!]
[!IF "contains(AdcHwChannel,'ANP_')"!]
[!VAR "AdcTemp_Ch" = "substring-after(AdcHwChannel,'ANP_')"!]

[!IF "$PreFlag = 0"!]
[!VAR "FirstDmaCh" = "$AdcTemp_Ch"!]
[!VAR "PreFlag" ="2"!]
[!VAR "ExtdFlag" ="1"!]
[!VAR "ExtrFlag" = "1"!]
[!ENDIF!]

[!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!]
[!VAR "AdcPrecise_Ch" = "bit:or($AdcPrecise_Ch,$AdcTemp_Ch)"!]
[!IF "AdcEnablePresampling"!]
[!VAR "AdcPrecise_Psr" = "bit:or($AdcPrecise_Psr,$AdcTemp_Ch)"!]
[!ENDIF!]

    [!SELECT "AdcThresholdControl"!]
    [!IF "AdcEnableThresholds"!]
        [!VAR "AdcWer0" = "bit:or($AdcWer0,$AdcTemp_Ch)"!]
    [!ENDIF!]
    [!ENDSELECT!]

[!ELSE!][!IF "contains(AdcHwChannel,'ANS_')"!]
[!VAR "AdcTemp_Ch" = "substring-after(AdcHwChannel,'ANS_')"!]

[!IF "$ExtdFlag = 0"!]
[!VAR "FirstDmaCh" = "$AdcTemp_Ch + 32"!]
[!VAR "PreFlag" ="1"!]
[!VAR "ExtdFlag" ="2"!]
[!VAR "ExtrFlag" = "1"!]
[!ENDIF!]

[!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!]
[!VAR "AdcExtd_Ch" = "bit:or($AdcExtd_Ch,$AdcTemp_Ch)"!]
[!IF "AdcEnablePresampling"!]
[!VAR "AdcExtd_Psr" = "bit:or($AdcExtd_Psr,$AdcTemp_Ch)"!]
[!ENDIF!]

    [!SELECT "AdcThresholdControl"!]
    [!IF "AdcEnableThresholds"!]
        [!VAR "AdcWer1" = "bit:or($AdcWer1,$AdcTemp_Ch)"!]
    [!ENDIF!]
    [!ENDSELECT!]

[!ELSE!][!IF "contains(AdcHwChannel,'ANX_')"!]
[!VAR "AdcExternalChExist" ="1"!]
[!VAR "AdcTemp_Ch" = "num:i(substring-after(AdcHwChannel,'CH_') - 64)"!]
[!IF "$ExtrFlag = 0"!]
[!VAR "FirstDmaCh" = "$AdcTemp_Ch + 64"!]
[!VAR "PreFlag" ="1"!]
[!VAR "ExtdFlag" ="1"!]
[!VAR "ExtrFlag" = "2"!]
[!ENDIF!]

[!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!]
[!VAR "AdcExternal_Ch" = "bit:or($AdcExternal_Ch,$AdcTemp_Ch)"!]
[!IF "AdcEnablePresampling"!]
[!VAR "AdcExternal_Psr" = "bit:or($AdcExternal_Psr,$AdcTemp_Ch)"!]
[!ENDIF!]

    [!SELECT "AdcThresholdControl"!]
    [!IF "AdcEnableThresholds"!]
        [!VAR "AdcWer2" = "bit:or($AdcWer2,$AdcTemp_Ch)"!]
    [!ENDIF!]
    [!ENDSELECT!]

[!ENDIF!]
[!ENDIF!]
[!ENDIF!]

[!ENDIF!]
[!ENDLOOP!]
[!ENDLOOP!]

[!IF "$PreFlag = 2"!]
        [!VAR "Position" = "32768"!][!//Position =0x8000U(32768), 16 precision channel max
        [!FOR "Loop" = "0" TO "15"!]
        [!VAR "Value" = "bit:shr($Position,$Loop)"!]
        [!VAR "Ret_Value" = "bit:and($AdcPrecise_Ch,$Value)"!]
        [!IF "$Ret_Value>0"!][!VAR "LastDmaCh" = "15-$Loop"!][!BREAK!][!ENDIF!]
        [!ENDFOR!]
[!ELSE!][!IF "$ExtdFlag = 2"!]
        [!VAR "Position" = "134217728"!][!//Position =0x8000000U(134217728), 28 medium accuracy channel max.
        [!FOR "Loop" = "0" TO "27"!]
        [!VAR "Value" = "bit:shr($Position,$Loop)"!]
        [!VAR "Ret_Value" = "bit:and($AdcExtd_Ch,$Value)"!]
        [!IF "$Ret_Value>0"!][!VAR "LastDmaCh" = "59-$Loop"!][!BREAK!][!ENDIF!]
        [!ENDFOR!]
[!ELSE!][!IF "$ExtrFlag = 2"!]
        [!VAR "Position" = "2147483648"!][!//Position =0x80000000U(2147483648), 32 external channel max.
        [!FOR "Loop" = "0" TO "31"!]
        [!VAR "Value" = "bit:shr($Position,$Loop)"!]
        [!VAR "Ret_Value" = "bit:and($AdcExternal_Ch,$Value)"!]
        [!IF "$Ret_Value>0"!][!VAR "LastDmaCh" = "95-$Loop"!][!BREAK!][!ENDIF!]
        [!ENDFOR!]
[!ENDIF!]
[!ENDIF!]
[!ENDIF!]
[!ENDNOCODE!][!//
[!NOCODE!]
[!IF "(../../AdcHwUnitId = '0') and (../../../../../../AdcGeneral/AdcMuxDelaySupport = 'true') and ($AdcExternalChExist = 1) and
      ((AdcGroupTriggSrc = 'ADC_TRIGG_SRC_HW') or ((AdcGroupTriggSrc = 'ADC_TRIGG_SRC_SW') and (AdcGroupConversionType = 'ADC_CONV_TYPE_INJECTED'))) and
      (num:i(../../AdcMuxDelay) > 0)"!]
[!ERROR!]
     Group configured as HW TRIGGER GROUP or SW INJECTED GROUP with at least one ANX channel and AdcMuxDelay value
     greater than 0 is not supported. Please check the configuration for the Group with ID [!"AdcGroupId"!] for the ADC HW Unit with ID [!"../../AdcHwUnitId"!].
[!ENDERROR!]
[!ENDIF!]
[!ENDNOCODE!]

  /**< @brief Group[!"AdcGroupId"!] -- Hardware Unit [!"../../AdcHwUnitId"!] */
  {
    /**< @brief Hardware unit configured */
    (Adc_HwUnitType)[!"../../AdcHwUnitId"!],
    /**< @brief Access mode */
    [!"AdcGroupAccessMode"!],
    /**< @brief Conversion mode */
    [!"AdcGroupConversionMode"!],
    /**< @brief Conversion type */
    [!"AdcGroupConversionType"!],
    #if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
    /**< @brief Priority configured */
    [!IF "../../../../../../AdcGeneral/AdcPriorityImplementation != 'ADC_PRIORITY_NONE'"!]ADC_GROUP_PRIORITY([!"AdcGroupPriority"!]),[!ELSE!]ADC_GROUP_PRIORITY(0U),[!ENDIF!]
    #endif
    /**< @brief Replacement mode */
    ADC_GROUP_REPL_ABORT_RESTART,
    /**< @brief Trigger source configured */
    [!"AdcGroupTriggSrc"!],
    #if (STD_ON==ADC_HW_TRIGGER_API)
    #if (STD_ON == ADC_MULTIPLE_HARDWARE_TRIGGERS)
    [!IF "AdcMultipleHardwareTriggerGroup"!][!//
    /**< @brief This is an MHT group */
    (Adc_MhtGroupType)ADC_MHT_GROUP_TYPE,
    [!ELSE!][!//
    /**< @brief This a Regular Group */
    (Adc_MhtGroupType)ADC_REGULAR_GROUP_TYPE,
    [!ENDIF!][!//
    #endif /* (STD_ON == ADC_MULTIPLE_HARDWARE_TRIGGERS) */
    /**< @brief Hardware trigger signal */
    [!IF "(../../../../../../AdcGeneral/AdcHwTriggerApi = 'true') and (AdcGroupTriggSrc = 'ADC_TRIGG_SRC_HW')"!][!"AdcHwTrigSignal"!],[!ELSE!]ADC_HW_TRIG_BOTH_EDGES,[!ENDIF!]
    /**< @brief Number of hardware trigger sources */
    [!IF "(../../../../../../AdcGeneral/AdcHwTriggerApi = 'true') and (AdcGroupTriggSrc = 'ADC_TRIGG_SRC_HW')"!](Adc_HwTriggerTimerType)[!"num:i($NUM_TRIGGER)"!][!ELSE!][!"num:i(0)"!]U[!ENDIF!],
    /**< @brief Hardware resource for the group*/
    [!IF "(../../../../../../AdcGeneral/AdcHwTriggerApi = 'true') and (AdcGroupTriggSrc = 'ADC_TRIGG_SRC_HW')"!]Adc_GroupTriggerSource[!"AdcGroupId"!]_CFG[!"num:i($CSET_NR)"!]_PB,[!ELSE!][!"num:i(0)"!]U,[!ENDIF!]
    #endif /* (STD_ON==ADC_HW_TRIGGER_API) */
    #if (STD_ON==ADC_GRP_NOTIF_CAPABILITY)
    /**< @brief Notification function */
    [!IF "../../../../../../AdcGeneral/AdcGrpNotifCapability = 'true'"!][!//
    [!IF "AdcNotification != 'NULL_PTR'"!]&[!"AdcNotification"!],[!ELSE!][!"AdcNotification"!],[!ENDIF!]
    [!ELSE!]NULL_PTR,
    [!ENDIF!][!//
    #endif /* (STD_ON==ADC_GRP_NOTIF_CAPABILITY) */
    /**< @brief Precision configured channels */
    (uint32)[!"num:inttohex($AdcPrecise_Ch)"!]U,
    /**< @brief Extended configured channels */
    (uint32)[!"num:inttohex($AdcExtd_Ch)"!]U,
    /**< @brief External configured channels */
    (uint32)[!"num:inttohex($AdcExternal_Ch)"!]U,
[!IF "(../../../../../../AdcGeneral/AdcPreSamplingOnce)='false'"!][!//
    /**< @brief Presampling for Precision channels */
    (uint32)[!"num:inttohex($AdcPrecise_Psr)"!]U,
    /**< @brief Presampling for Extended channels */
    (uint32)[!"num:inttohex($AdcExtd_Psr)"!]U,
    /**< @brief Presampling for External channels */
    (uint32)[!"num:inttohex($AdcExternal_Psr)"!]U,
[!ENDIF!][!//
[!IF "(../../../../../../AdcGeneral/AdcWdgThresholdOnce)='false'"!][!//
    /**< @brief Wer0 for precision channels */
    (uint32)[!"num:inttohex($AdcWer0)"!]U,
    /**< @brief Wer1 for extended(medi.accuracy channels) */
    (uint32)[!"num:inttohex($AdcWer1)"!]U,
    /**< @brief Wer2 for external channels */
    (uint32)[!"num:inttohex($AdcWer2)"!]U,
[!ENDIF!][!//
[!IF "(../../../../../../AdcGeneral/AdcMuxDelaySupport = 'true') and (../../../../../../AdcGeneral/AdcMuxDelaySupportPerGroup = 'true')"!][!//
[!IF "($AdcExternalChExist = 1) and (AdcGroupTriggSrc = 'ADC_TRIGG_SRC_SW') and (AdcGroupConversionType = 'ADC_CONV_TYPE_NORMAL') and (../../AdcHwUnitId = 'ADC_UNIT_0')"!][!//
    (uint8)[!IF "AdcMuxDelayNeeded"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!], /* Enables or Disables Adc Mux Delay */
[!ELSE!][!//
    (uint8)STD_OFF, /* Enables or Disables Adc Mux Delay */
[!ENDIF!][!//
[!ENDIF!][!//
    /**< @brief ADC Group Result Buffers RAM array */
    ADC_ResultsBufferPtr,
    /**< @brief Group Streaming Buffer Mode */
    [!"AdcStreamingBufferMode"!],
    #if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
    /**< @brief Index of the group with AdcEnableChDisableChGroup enabled */
    (Adc_GroupType)[!IF "AdcEnableChDisableChGroup = 'true'"!][!"num:i($EnableCHDisableCHIndex)"!][!VAR "EnableCHDisableCHIndex" = "$EnableCHDisableCHIndex + 1"!][!ELSE!]ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX[!ENDIF!],
    #endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */
    /**< @brief Number of streaming samples */
    ADC_STREAMING_NUM_SAMPLES([!"AdcStreamingNumSamples"!]),
    /**< @brief Channels assigned to the group*/
    [!IF "../../AdcHwUnitId = 'ADC_UNIT_0' "!]ADC_Group[!"AdcGroupId"!]_Assignment_PB_0_[!"num:i($CSET_NR)"!],[!ELSE!]ADC_Group[!"AdcGroupId"!]_Assignment_PB_1_[!"num:i($CSET_NR)"!],[!ENDIF!]
    /**< @brief Number of channels in the group*/
    (Adc_ChannelType)ADC_CFGSET[!"num:i($CSET_NR)"!]_GROUP_[!"AdcGroupId"!]_CHANNELS,
[!IF "(../../../../../../AdcGeneral/AdcConvTimeOnce)='false'"!][!//
[!NOCODE!][!//
    [!VAR "AdcGrpLatchDuration" = "AdcGroupConversionConfiguration/AdcLatchingDuration"!][!//
    [!VAR "AdcGrpComparisionDuration" = "AdcGroupConversionConfiguration/AdcComparisonDuration"!][!//
    [!VAR "AdcGrpSamplingDuration" = "AdcGroupConversionConfiguration/AdcSamplingDuration"!][!//
[!ENDNOCODE!][!//
    /**< @brief Conversion time */
    (ADC_INPLATCH_VALUE([!"$AdcGrpLatchDuration"!])|ADC_INPCMP_VALUE([!"$AdcGrpComparisionDuration"!])|ADC_INPSAMP_VALUE([!"$AdcGrpSamplingDuration"!])),
[!ENDIF!][!//
    /**< @brief Last Channel configured */
    (uint32)([!"num:i($LastDmaCh)"!]),
    /**< @brief First Channel Configured */
    (ADC_ID_CHANNEL([!"num:i($FirstDmaCh)"!])<<(uint32)2),
    /**< @brief Enables or Disables the ADC and DMA interrupts */
    (uint8)[!IF "AdcWithoutInterrupts"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!]
[!ENDIF!][!//
[!ENDLOOP!][!//
  }[!IF "$x < (count(AdcHwUnit/*/AdcGroup/*)-1)"!],[!ELSE!][!ENDIF!]
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//
};
[!ENDLOOP!][!//

/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "MemMap.h"

[!NOCODE!]
[!VAR "AdcDemErrorEnable" = "'false'"!]
[!IF "NonAutosar/AdcDisableDemReportErrorStatus ='false'"!][!//
    [!IF "node:exists(AdcDemEventParameterRefs)"!]
        [!VAR "AdcDemErrorEnable" = "'true'"!]
    [!ENDIF!]
[!ENDIF!]
[!ENDNOCODE!][!//

#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
/**
* @brief         Values for production code Event Ids.
* @details       ADC production code Event Ids.
*
* @implements    DADC04106
*/
CONST(Mcal_DemErrorType,ADC_CONST)Adc_E_TimeoutCfg = [!//
[!IF "$AdcDemErrorEnable"!][!//
[!IF "node:exists(AdcDemEventParameterRefs/ADC_E_TIMEOUT)"!][!//
[!IF "node:exists(node:ref(AdcDemEventParameterRefs/ADC_E_TIMEOUT))"!][!//
{ (uint32)STD_ON, (uint32)[!"node:value(node:ref(AdcDemEventParameterRefs/ADC_E_TIMEOUT)/DemEventId)"!]U}; /* ADC_E_TIMEOUT parameters*/
[!ELSE!][!//
    [!ERROR "Invalid reference for ADC_E_ERROR"!][!//
[!ENDIF!][!//
[!ELSE!][!//
{(uint32)STD_OFF, (uint32)0U}; /* ADC_E_TIMEOUT parameters*/
[!ENDIF!][!//
[!ELSE!][!//
{(uint32)STD_OFF, (uint32)0U};/* ADC_E_TIMEOUT parameters*/
[!ENDIF!][!// 
#endif /* ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON */

[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "ADC0_EXISTS" = "0"!][!//
[!VAR "ADC1_EXISTS" = "0"!][!//
[!LOOP "AdcHwUnit/*"!][!//
[!IF "AdcHwUnitId = 'ADC_UNIT_0'"!][!//
[!VAR "ADC0_EXISTS" = "1"!][!//
[!ENDIF!][!//
[!IF "AdcHwUnitId = 'ADC_UNIT_1'"!][!//
[!VAR "ADC1_EXISTS" = "1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
/**
* @brief          Configuration structure [!"num:i($CSET_NR)"!].
* @implements     DADC04097
*/
/* @violates @ref Adc_PBcfg_c_REF_3 Declaration and definition of objects or function */
CONST(Adc_ConfigType, ADC_CONST) [!"@name"!] =
{
    /**< @brief pointer to Hw unit configurations */
    Adc_HWUnit_CfgPB_[!"num:i($CSET_NR)"!],
    /**< @brief pointer to group configurations */
    Adc_Groups_CfgPB_[!"num:i($CSET_NR)"!],
    /**< @brief pointer to channel configurations */
    Adc_Channels_CfgPB_[!"num:i($CSET_NR)"!],
    /**< @brief total number of groups */
    (Adc_GroupType)ADC_GROUPS_[!"num:i($CSET_NR)"!],
    /**< @brief Miscellaneous configuration parameters. - Adc_LLD_MultiConfig */
    {
  [!IF "AdcGeneric/AdcTransferType = 'ADC_DMA'"!][!//
    /**< @brief DMA driven mode */
    [!"AdcGeneric/AdcTransferType"!],
  [!ELSE!][!//
    /**< @brief Interrupt driven Mode */
    ADC_INTERRUPT,
  [!ENDIF!][!//
    /**< @brief ADC is CTUV2 driven or not */
    (uint8)STD_OFF,
    /**< @brief number of the maximum groups in the current configuration */
    [!"num:i(count(AdcHwUnit/*/AdcGroup/*))"!]U,
    /**< @brief number of the maximum hardware units in the current configuration */
    [!"num:i(count(AdcHwUnit/*))"!]U,
    /**< @brief depth of the queue */
    [!"AdcGeneric/AdcPriorityQueueMaxDepth"!]U,
   [!NOCODE!][!//
      [!VAR "groups_hw_unit0" = "0"!][!//
     [!VAR "groups_hw_unit1" = "0"!][!//
    [!LOOP "AdcHwUnit/*/AdcGroup/*"!][!//
    [!IF "../../AdcHwUnitId = 'ADC_UNIT_0'"!][!//
    [!VAR "groups_hw_unit0" = "$groups_hw_unit0 + 1"!][!//
   [!ENDIF!][!//
   [!IF "../../AdcHwUnitId = 'ADC_UNIT_1'"!][!//
   [!VAR "groups_hw_unit1" = "$groups_hw_unit1 + 1"!][!//
   [!ENDIF!][!//
   [!ENDLOOP!][!//
 [!ENDNOCODE!][!//
    {[!//
      /**< @brief number of groups of the hw unit 0 */
      (uint8)[!"num:i($groups_hw_unit0)"!][!//
[!IF "$BOLERO256K=0"!],
      /**< @brief number of groups of the hw unit 1 */
      (uint8)[!"num:i($groups_hw_unit1)"!]
[!ENDIF!][!//  
    },[!//
[!NOCODE!][!//
  [!VAR "channels_hw_unit0" = "0"!][!//
  [!VAR "channels_hw_unit1" = "0"!][!//
  [!LOOP "AdcHwUnit/*/AdcChannel/*"!][!//
    [!IF "../../AdcHwUnitId = 'ADC_UNIT_0'"!][!//
      [!VAR "channels_hw_unit0" = "$channels_hw_unit0 + 1"!][!//
    [!ENDIF!][!//
    [!IF "../../AdcHwUnitId = 'ADC_UNIT_1'"!][!//
      [!VAR "channels_hw_unit1" = "$channels_hw_unit1 + 1"!][!//
    [!ENDIF!][!//
  [!ENDLOOP!][!//
 [!ENDNOCODE!][!//
    {
      /**< @brief number of channels of the ADC Hardware unit 0 */
      (uint8)[!"num:i($channels_hw_unit0)"!][!//
[!IF "$BOLERO256K=0"!],
      /**< @brief number of channels of the ADC Hardware unit 1 */
      (uint8)[!"num:i($channels_hw_unit1)"!] 
[!ENDIF!][!//
    },
    {[!//
      [!IF "AdcGeneric/AdcTransferType = 'ADC_DMA'"!][!//
      [!NOCODE!][!//
        [!FOR "x" = "0" TO "num:i(count(AdcHwUnit/*))"!][!//
        [!LOOP "AdcHwUnit/*"!][!//
        [!VAR "Loop"="num:i($LoopVar)"!][!//
        [!IF "num:i(number(substring-after(AdcHwUnitId,'ADC_UNIT_'))) = $Loop"!][!//
          [!VAR "temp_name"="concat('ADC',num:i(number(substring-after(AdcHwUnitId,'ADC_UNIT_'))),'_EOC')"!][!// /**< @brief if concat is used directly in the following expresion the match will fail */
          [!IF "$temp_name = 'ADC0_EOC' and (node:refs('ASPathDataOfSchema:/AUTOSAR/Mcu')/McuModuleConfiguration/*/McuDMA/*/DMAChannelEnable[.='true'])"!][!//
            [!IF "$BOLERO256K=1"!][!//
              [!VAR "temp_name"="concat('ADC','1','_EOC')"!][!// in Mcu plugin related to McuDMA for hw 0 in Bolero 256K the name of the container is ADC1_EOC
            [!ENDIF!][!//
      [!CODE!][!//
      /**< @brief the DMA channel number for ADC Hardware unit 0 */
      (uint8)[!"node:refs('ASPathDataOfSchema:/AUTOSAR/Mcu')/McuModuleConfiguration/*/McuDMA/*/DMAChannelEnable[.='true']/../McuDMASource[.=$temp_name]/../DMAChannelId"!],
      [!ENDCODE!][!//
            [!VAR "temp_name"="concat('ADC',AdcHwUnitId,'_EOC')"!][!// if concat is used directly in the following expresion the match will fail
          [!ELSEIF "$ADC0_EXISTS = 0"!][!//
      [!CODE!][!//
      /**< @brief the DMA channel number for ADC Hardware unit 0 */
      (uint8)0,
      [!ENDCODE!][!//
          [!ENDIF!]
          [!IF "$temp_name = 'ADC1_EOC' and (node:refs('ASPathDataOfSchema:/AUTOSAR/Mcu')/McuModuleConfiguration/*/McuDMA/*/DMAChannelEnable[.='true'])"!][!//
      [!CODE!][!//
      /**< @brief the DMA channel number for ADC Hardware unit 1 */
      (uint8)[!"node:refs('ASPathDataOfSchema:/AUTOSAR/Mcu')/McuModuleConfiguration/*/McuDMA/*/DMAChannelEnable[.='true']/../McuDMASource[.=$temp_name]/../DMAChannelId"!]
      [!ENDCODE!][!//
          [!ELSEIF "$ADC1_EXISTS = 0"!][!//
            [!IF "$BOLERO256K=0"!][!//
      [!CODE!][!//
      /**< @brief the DMA channel number for ADC Hardware unit 1 */
      (uint8)0
      [!ENDCODE!][!//
            [!ENDIF!][!//
          [!ENDIF!][!//
        [!ENDIF!][!//
        [!ENDLOOP!][!//
      [!VAR "LoopVar"="$LoopVar + 1"!][!//
      [!ENDFOR!][!//
      [!ENDNOCODE!][!//
      [!ELSE!][!//
      /**< @brief the DMA channel number for both ADC Hardware units */
      (uint8)0,
      [!IF "$BOLERO256K=0"!][!//
      (uint8)0
      [!ENDIF!][!//
      [!ENDIF!][!//
    },
    {
      /**< @brief ADC_UNIT_0 - ON/OFF */
      [!IF "AdcHwUnit/*/AdcHwUnitId = 'ADC_UNIT_0'"!](uint8)STD_ON[!ELSE!](uint8)STD_OFF[!ENDIF!],
        [!IF "$BOLERO256K=0"!][!//
      /**< @brief ADC_UNIT_1 - ON/OFF */
      [!IF "AdcHwUnit/*/AdcHwUnitId = 'ADC_UNIT_1'"!](uint8)STD_ON[!ELSE!](uint8)STD_OFF[!ENDIF!]
        [!ENDIF!][!//
    },
    {
    [!NOCODE!][!//
      [!VAR "mhtGroups_hw_0" = "0"!][!//
      [!VAR "mhtGroups_hw_1" = "0"!][!//
      [!LOOP "AdcHwUnit/*/AdcGroup/*"!][!//
        [!IF "../../AdcHwUnitId = 'ADC_UNIT_0'"!][!//
          [!IF "AdcMultipleHardwareTriggerGroup = 'true'"!][!//
            [!VAR "mhtGroups_hw_0" = "$mhtGroups_hw_0 + 1"!][!//
          [!ENDIF!][!//
        [!ENDIF!][!//
        [!IF "../../AdcHwUnitId = 'ADC_UNIT_1'"!][!//
          [!IF "AdcMultipleHardwareTriggerGroup = 'true'"!][!//
            [!VAR "mhtGroups_hw_1" = "$mhtGroups_hw_1 + 1"!][!//
          [!ENDIF!][!//
        [!ENDIF!][!//
      [!ENDLOOP!][!//
      [!ENDNOCODE!][!//
      /**< @brief number of MHT groups of the ADC Hardware unit 0 */
      (uint8)[!"num:i($mhtGroups_hw_0)"!],
      [!IF "$BOLERO256K=0"!][!//
      /**< @brief number of MHT groups of the ADC Hardware unit 1 */
      (uint8)[!"num:i($mhtGroups_hw_1)"!]
      [!ENDIF!][!//
    }
    }
};
[!ENDLOOP!][!//

/* @violates @ref Adc_PBcfg_c_REF_4 Identifier exceeds 31 characters */
#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/* @violates @ref Adc_PBcfg_c_REF_2 Repeated include file */
#include "MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#endif /* ADC_PRECOMPILE_SUPPORT */

#ifdef __cplusplus
}
#endif

/** @} */

[!ENDCODE!][!//
