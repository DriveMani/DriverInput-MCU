/**
*   @file    Adc_Cfg.h
*   @version 1.0.1
*
*   @brief   AUTOSAR Adc - Module configuration interface for Adc driver.
*   @details Contains the module configuration interface for Adc driver.
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

#ifndef ADC_CFG_H
#define ADC_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Adc_Cfg_h_REF_1
* Violates MISRA 2004 Advisory Rule 19.7, Use of function like macro. This violation is due to 
* function like macros defined for register operations.
* Function like macros are used to reduce code complexity.
*
* @section Adc_Cfg_h_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions. 
*
* @section Adc_Cfg_h_REF_3
* Violates MISRA 2004 Required Rule 5.1, Identifiers shall not more than 31 characters
* Violation is needed because of Autosar restrictions for naming File version check macros.
*
*
* @section Adc_Cfg_h_REF_4
* Violates MISRA 2004 Required Rule 8.7, the scope of objects shall be restricted to function when possible
*
* @section Adc_Cfg_h_REF_5
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that
* 31 characters signifiance and case sensitivity are supported for external identifiers.
* This violation is due to the requirement that requests to have a file version check.
*
*/

/** 
* @brief The following definitions SHOULD be before the inclusion of the ADCDig_LLD_CfgEx.h header
*        file, cause in this file some conditional compilation flags are defined, and in the
*        ADCDig_LLD_CfgEx.h file some structure members are guarded by these defines.
*        According to this, these definitions should be predefined before the inclusion of the
*        mentioned header file, in order to correctly define the ADC driver internal structures.
*        Due to the fact that these structures are Low Level Driver related, they must stay in the
*        ADCDig_LLD_CfgEx.h file.
*/

[!NOCODE!][!//
/** 
* @brief          Lookup for MHT functionality presence.
*/
[!ENDNOCODE!][!//
[!VAR "MHT_FEATURE_FOUND" = "0"!][!//
[!VAR "NUM_MHT_GROUPS" = "0"!][!//
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*"!][!//
[!IF "AdcMultipleHardwareTriggerGroup = 'true'"!][!//
[!VAR "MHT_FEATURE_FOUND" = "1"!][!//
[!VAR "NUM_MHT_GROUPS" = "$NUM_MHT_GROUPS + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

[!IF "$MHT_FEATURE_FOUND = 1"!][!//
/**
* @brief          MHT functionality activated.
* @implements     DADC04022
*/
#define ADC_MULTIPLE_HARDWARE_TRIGGERS      (STD_ON)
[!ELSE!][!//
/**
* @brief          MHT functionality not activated.
*/
#define ADC_MULTIPLE_HARDWARE_TRIGGERS      (STD_OFF)
[!ENDIF!][!//

/** 
* @brief           Add/Remove One time setting of Conversion time regsisters from Init() function.
* @implements      DADC04023
*/
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_SET_ONCE_REGISTERS_SUPPORTED    [!IF "AdcGeneral/AdcSetOnceRegisters"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief           Adds/removes ((STD_ON)/(STD_OFF)) the services Adc_EnableHardwareTrigger() and Adc_DisableHardwareTrigger() from the code.
* @implements      DADC04024
*/
#define ADC_HW_TRIGGER_API                  [!IF "AdcGeneral/AdcHwTriggerApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief           Set mode api enabled/disabled ((STD_ON)/(STD_OFF)).
* @implements      DADC04025
*/
#define ADC_SET_MODE_API                    [!IF "NonAutosar/AdcSetModeApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief           Add/Remove non autosar dual clock mode for prescaler settings.
* @implements      DADC04050
*/
#define ADC_DUAL_CLOCK_MODE                 [!IF "NonAutosar/AdcEnableDualClockMode"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief           Enables or disables limit checking feature in the ADC driver.
* @implements      DADC04026
*/
#define ADC_ENABLE_LIMIT_CHECK              [!IF "AdcGeneral/AdcEnableLimitCheck"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief           Group notification mechanism is/isn't ((STD_ON)/(STD_OFF)) available at runtime.
* @implements      DADC04027
*/
#define ADC_GRP_NOTIF_CAPABILITY            [!IF "AdcGeneral/AdcGrpNotifCapability"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief  Enable/Disable the DMA to transfer all channels between the start channel and end channel
*         directly to the user configured buffer.
*/
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_DIRECT_DMA_RES_BUFFER_COPY        [!IF "AdcGeneral/ADCDirectDMAResultBufferCopy"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief           Type of prioritization mechanism ADC_PRIORITY_HW, ADC_PRIORITY_HW_SW and ADC_PRIORITY_NONE.
* @implements      DADC04028 
*/
#define ADC_PRIORITY_HW                     (0U)
#define ADC_PRIORITY_HW_SW                  (1U)
#define ADC_PRIORITY_NONE                   (2U)

/** 
* @brief           Priority implementation.
* @implements      DADC04029  
*/
#define ADC_PRIORITY_IMPLEMENTATION         ([!"AdcGeneral/AdcPriorityImplementation"!])

/** 
* @brief           Type of alignment mechanism ADC_ALIGN_RIGHT, ADC_ALIGN_LEFT.
* @implements      DADC04030
*/
#define ADC_ALIGN_RIGHT                     (0U)
#define ADC_ALIGN_LEFT                      (1U)

/** 
* @brief           Result Alignment.
* @implements      DADC04031 
*/
#define ADC_RESULT_ALIGNMENT                ([!"AdcGeneral/AdcResultAlignment"!])

/** 
* @brief           Adc transfer type.
* @implements      DADC04032
*/
#define ADC_DMA                             (0U)
#define ADC_INTERRUPT                       (1U)

/** 
* @brief         This is a timeout value which is used to wait till
*                  - the conversion is not aborted.
*                  - ADC hardware is not entered in power down state.
*                  - ADC hardware is not entered in idle state.
* @implements      DADC04033
*/
#define ADC_TIMEOUT_COUNTER                 ([!"num:inttohex(AdcGeneral/AdcTimeout,4)"!]U)

/**
 * @brief   Enable/Disable the DSDR (Mux delay) write into Adc_Init() and ADC_SetClockMode().
 *          It will be used as a compiler switch to remove code for DSDR update from
 *          Adc_Init and Adc_SetClockFrequency functions.
 */
#define ADC_MUX_DELAY_SUPPORT    [!IF "AdcGeneral/AdcMuxDelaySupport"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
 * @brief   Enable/Disable the DSDR (Mux delay) write into Adc_StartGroupConversion().
 *          It will be used as a compiler switch to remove code for DSDR update from
 *          Adc_StartGroupConversion function.
 */
[!IF "AdcGeneral/AdcMuxDelaySupport"!][!//
#define ADC_MUX_DELAY_SUPPORT_PER_GROUP   [!IF "AdcGeneral/AdcMuxDelaySupportPerGroup"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]
[!ELSE!][!//
#define ADC_MUX_DELAY_SUPPORT_PER_GROUP  (STD_OFF)
[!ENDIF!][!//


[!NOCODE!][!//
[!VAR "DMA_ENABLED"="0"!][!//
[!LOOP "AdcConfigSet/*"!][!//
[!IF "AdcGeneric/AdcTransferType = 'ADC_DMA'"!][!//
[!VAR "DMA_ENABLED"="1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//
[!IF "$DMA_ENABLED = 1"!][!//
/** 
* @brief           Active DMA.
* @implements      DADC04034.
*/
#define ADC_DMA_SUPPORTED
[!ENDIF!][!//

[!SELECT "as:modconf('Resource')[1]"!][!//
[!IF "(ResourceGeneral/ResourceSubderivative = 'mpc5602bxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5602bxlq_lqfp144') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5602cxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5603bxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5603bxlq_lqfp144') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5603cxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5604bxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5604bxlq_lqfp144') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5604bxmg_mapbga208') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5604cxll_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5602bxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5602cxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5603bxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5603cxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5604bxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'mpc5604cxlh_lqfp64') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560b40_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560b40_lqfp144') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560c40_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560b44_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560b44_lqfp144') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560c44_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560b50_lqfp100') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560b50_lqfp144') or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560b50_mapbga208')or [!//
      (ResourceGeneral/ResourceSubderivative = 'spc560c50_lqfp100')"!][!//
/** 
* @brief           Max number of hw units - is 1 on Bolero 512K.
* @implements      DADC04036.
*/
#define ADC_MAX_HW_UNITS (1U)

/** 
* @brief           Number of maximum channels of platform.
* @implements      DADC04037.
*/
#define ADC_MAXIMUM_HW_CHANNELS (64U)
[!ELSEIF "(ResourceGeneral/ResourceSubderivative = 'mpc5605bxll_lqfp100') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5605bxlq_lqfp144') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5605bxlu_lqfp176') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5606bxlq_lqfp144') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5606bkll_lqfp100') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5606bxlu_lqfp176') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5607bxlu_lqfp176') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5607bxmg_mapbga208') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560b54_lqfp100') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560b54_lqfp144') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560b54_lqfp176') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560b60_lqfp144') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560b60_lqfp176') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560b64_lqfp176') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560b64_mapbga208')"!][!//
/** 
* @brief           Max number of hw units - are 2 on Bolero 1.5M.
* @implements      DADC04036.
*/
#define ADC_MAX_HW_UNITS (2U)

/** 
* @brief           Number of maximum channels of platform.
*/
#define ADC_MAXIMUM_HW_CHANNELS (92U)

[!ELSEIF "(ResourceGeneral/ResourceSubderivative = 'mpc5601dxlh_lqfp64') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5601dxll_lqfp100') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5602dxlh_lqfp64') or [!//
          (ResourceGeneral/ResourceSubderivative = 'mpc5602dxll_lqfp100') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560d30xlh_lqfp64') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560d30xll_lqfp100') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560d40xlh_lqfp64') or [!//
          (ResourceGeneral/ResourceSubderivative = 'spc560d40xll_lqfp100')"!][!//
/**
 * @brief   Max number of hw units - is 1 on Bolero 256k.
 */
#define ADC_MAX_HW_UNITS (1U)
/**
 * @brief   Define the number of maximum channels of platform.
 */
#define ADC_MAXIMUM_HW_CHANNELS (61)
/**
 * @brief   Define the Soc Integrations features for Bolero 256k-128k.
 */
#define IPV_ADCDIG_31201_BOLERO256K

[!ENDIF!][!//
[!ENDSELECT!][!//

/** 
* @brief           Add/Remove non autosar Adc_EnableChannel() and Adc_DisableChannel() api.
* @implements      DADC06016
*/
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API      [!IF "NonAutosar/AdcEnableChDisableChApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief           Get injected conversion status api enabled/disabled (STD_ON/STD_OFF).
* @implements      DADC06017
*/
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_GET_INJECTED_CONVERSION_STATUS_API    [!IF "NonAutosar/AdcGetInjectedConvStatusApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief           Enable/Disable Errata Workaround for CTU interrupted Normal groups.
* @implements
*/
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_ENABLE_ERRATA_INTERRUPTED_NORMAL_GROUP      [!IF "NonAutosar/AdcErrataInterruptedNormalGroup"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief           Enable/Disable Errata Workaround for ABORTCHAIN before conversion start.
* @implements
*/
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_ENABLE_ERRATA_OPTIMIZED_SW_ABORT      [!IF "NonAutosar/AdcErrataOptimizedSwAbort"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief          Add/Remove One time setting of Presampling regsisters from Init() function.
* @implements     DADC04045
*/
#define ADC_SET_ADC_PRESAMPLE_ONCE          [!IF "AdcGeneral/AdcPreSamplingOnce"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief          Add/Remove One time setting of Conversion time regsisters from Init() function.
* @implements     DADC04046
*/
#define ADC_SET_ADC_CONV_TIME_ONCE          [!IF "AdcGeneral/AdcConvTimeOnce"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
 * @brief         Add/Remove One time setting of Watchdog Enable regsisters from Init() function.
 */
#define ADC_SET_ADC_WDG_ENABLE_ONCE         [!IF "AdcGeneral/AdcWdgThresholdOnce"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief   Switches the Production Error Detection and Notification OFF
* @implements
*/
[!NOCODE!]
[!VAR "AdcDemErrorEnable" = "'false'"!]
[!IF "NonAutosar/AdcDisableDemReportErrorStatus ='false'"!][!//
    [!IF "node:exists(AdcDemEventParameterRefs)"!]
        [!VAR "AdcDemErrorEnable" = "'true'"!]
    [!ENDIF!]
[!ENDIF!]
[!ENDNOCODE!]
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_DISABLE_DEM_REPORT_ERROR_STATUS   [!IF "$AdcDemErrorEnable"!](STD_ON)  /* Enable Production Error Detection */[!ELSE!](STD_OFF) /* Disable Production Error Detection */[!ENDIF!]

/**
 * @brief           Add/Remove non autosar Adc_ConfigureThreshold() api.
 * @implements
 */
[!VAR "WDG_FUNCTIONALITY_FOUND" = "0"!][!//
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcChannel/*/AdcThresholdControl"!][!//
[!IF "AdcEnableThresholds = 'true'"!][!//
[!VAR "WDG_FUNCTIONALITY_FOUND" = "1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

[!IF "$WDG_FUNCTIONALITY_FOUND = 1"!][!//
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_ENABLE_CONFIGURE_THRESHOLD_NONAUTO_API      [!IF "NonAutosar/AdcEnableThresholdConfiguration"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]
[!ELSE!][!//
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_ENABLE_CONFIGURE_THRESHOLD_NONAUTO_API      (STD_OFF)
[!ENDIF!][!//

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
#include "Dem.h"
#endif
#include "Adc_ADCDig_LLD_CfgEx.h"
/* @violates @ref Adc_Cfg_h_REF_2 Repeated include file. */
#include "Mcal.h"

[!NOCODE!][!//
[!INCLUDE "Adc_VersionCheck_Inc.m"!][!//
[!ENDNOCODE!][!//
[!NOCODE!][!//
[!INCLUDE "Adc_RegOperations.m"!][!//
[!ENDNOCODE!][!//

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Adc_Cfg.h
* @implements     DADC04038
*/
#define ADC_CFG_H_VENDOR_ID                       (43)
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_CFG_H_AR_RELEASE_MAJOR_VERSION        (4)
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_CFG_H_AR_RELEASE_MINOR_VERSION        (0)
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_CFG_H_AR_RELEASE_REVISION_VERSION     (3)
#define ADC_CFG_H_SW_MAJOR_VERSION                (1)
#define ADC_CFG_H_SW_MINOR_VERSION                (0)
#define ADC_CFG_H_SW_PATCH_VERSION                (1)


/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
  #if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
 /* Check if source file and Dem header file are of the same version */
 #if ((ADC_CFG_H_AR_RELEASE_MAJOR_VERSION != DEM_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_CFG_H_AR_RELEASE_MINOR_VERSION != DEM_AR_RELEASE_MINOR_VERSION))
 #error "AutoSar Version Numbers of Adc_Cfg.h and Dem.h are different"
    #endif
 #endif
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantPreCompile'"!][!//
/**
* @brief          Configuration Precompile variant.
* @details        Configuration Precompile variant.
* @implements     DADC04039
*/
#define ADC_PRECOMPILE_SUPPORT
[!ENDIF!][!//

/** 
* @brief          Development error detection enabled/disabled ((STD_ON)/(STD_OFF)).
* @implements     DADC04040
*/
#define ADC_DEV_ERROR_DETECT                [!IF "AdcGeneral/AdcDevErrorDetect"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief          Add/remove ((STD_ON)/(STD_OFF)) the service Adc_GetVersionInfo() from the code.
* @implements     DADC04041
*/
#define ADC_VERSION_INFO_API                [!IF "AdcGeneral/AdcVersionInfoApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief          Add/remove ((STD_ON)/(STD_OFF)) the service Adc_DeInit() from the code.
* @implements     DADC04042
*/
#define ADC_DEINIT_API                      [!IF "AdcGeneral/AdcDeInitApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief          Add/remove ((STD_ON)/(STD_OFF)) the services Adc_StartGroupConversion()and Adc_StopGroupConversion() from the code.
* @implements     DADC04043
*/
#define ADC_ENABLE_START_STOP_GROUP_API     [!IF "AdcGeneral/AdcEnableStartStopGroupApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief          Add/Remove the services Adc_ReadGroup() from the code.
* @implements     DADC04044
*/
#define ADC_READ_GROUP_API                  [!IF "AdcGeneral/AdcReadGroupApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief          This switch is used to enable the hardware trigger non autosar API.
* @implements     DADC04047 
*/
#define ADC_ENABLE_CTUTRIG_NONAUTO_API       [!IF "NonAutosar/AdcEnableCtuTrigNonAutosarApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** 
* @brief           This switch is used to enable the queue.
* @implements      DADC04048
*/
[!IF "AdcGeneral/AdcPriorityImplementation = 'ADC_PRIORITY_NONE'"!][!//
#define ADC_ENABLE_QUEUING                  [!IF "AdcGeneral/AdcEnableQueuing"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]
[!ELSE!][!//
#define ADC_ENABLE_QUEUING                  (STD_ON)
[!ENDIF!][!//

[!VAR "ADC_WITHOUTINTERRUPT_FOUND" = "0"!][!//
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*"!][!//
[!IF "AdcWithoutInterrupts = 'true'"!][!//
[!VAR "ADC_WITHOUTINTERRUPT_FOUND" = "1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
/** 
* @brief           This switch is used to enable the non autosar ADC performance optimization feature.
* @implements      DADC04049
*/
[!IF "$ADC_WITHOUTINTERRUPT_FOUND = 1"!][!//
#define ADC_BYPASS_CONSISTENCY_LOOP         [!IF "NonAutosar/AdcBypassConsistencyLoop"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]
[!ELSE!][!//
[!IF "NonAutosar/AdcBypassConsistencyLoop = 'true'"!][!//
[!ERROR!][!//
[!"' - AdcBypassConsistencyLoop parameter value can be true if at least one AdcWithoutInterrupts in a group is true.'"!][!//
[!ENDERROR!][!//
[!ELSE!][!//
#define ADC_BYPASS_CONSISTENCY_LOOP         (STD_OFF)
[!ENDIF!][!//
[!ENDIF!][!//

[!NOCODE!][!//
[!IF "(NonAutosar/AdcEnableChDisableChApi = 'true')"!][!//
[!VAR "AdcGroupCounter" = "0"!][!//
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*"!][!//
  [!IF "(AdcEnableChDisableChGroup = 'true')"!][!//
    [!VAR "AdcGroupCounter" = "$AdcGroupCounter + 1"!][!//
  [!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$AdcGroupCounter = 0"!][!//
[!VAR "AdcGroupCounter" = "1"!][!//
[!ENDIF!][!//
[!CODE!][!//
/** 
* @brief           Max number of groups supports the individual group channel enable or disable support.
* @implements      DADC06018
*/
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define  ADC_NO_OF_ENABLE_CH_DISABLE_CH_GROUPS    [!"num:i($AdcGroupCounter)"!]
[!ENDCODE!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//

[!NOCODE!][!//
/** 
* @brief           Lookup for WDG functionality activation.
* @implements      
*/
[!VAR "WDG_FUNCTIONALITY_FOUND" = "0"!][!//
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcChannel/*/AdcThresholdControl"!][!//
[!IF "AdcEnableThresholds = 'true'"!][!//
[!VAR "WDG_FUNCTIONALITY_FOUND" = "1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//
[!IF "$WDG_FUNCTIONALITY_FOUND = 1"!][!//
/** 
* @brief           WDG functionality activated.
* @implements      DADC04051 
*/
#define ADC_WDG_SUPPORTED
[!ENDIF!][!//

/** 
* @brief           Define the HW queue size depending on the MHT groups existence.
* @details         If there are MHT groups in the configuration the HW queue size will be the total number of MHT
*                  groups defined. If there are no MHT groups in the current configuration, then only one hardware
*                  group can be added to the HW queue, thus the queue size will be only 1.
* @implements      DADC04052
*/
[!IF "$MHT_FEATURE_FOUND = 1"!][!//
#define ADC_HW_QUEUE                        ([!"num:i($NUM_MHT_GROUPS)"!]U)
[!ELSE!][!//
#define ADC_HW_QUEUE                        (1U)
[!ENDIF!][!//

[!VAR "index" = "0"!][!//
[!VAR "maxVal" = "1"!][!//
[!VAR "tempVal" = "0"!][!//
[!LOOP "AdcConfigSet/*/AdcHwUnit/*"!][!//
[!VAR "tempVal" = "num:i(count(AdcChannel/*))"!][!//
[!IF "num:i($tempVal) > num:i($maxVal)"!][!VAR "maxVal" = "$tempVal"!][!ENDIF!][!//
[!ENDLOOP!][!//
/** 
* @brief           Maximum number of channels across all hardware units.
* @implements      DADC04053
*/
#define ADC_MAX_CHANNEL_PER_HW_UNIT         ([!"num:i($maxVal)"!])

/** 
* @brief           ADC Hardware units definitions.
* @implements      DADC04054
*/
#define ADC_UNIT_0                          (0)
/** 
* @brief           ADC Hardware units definitions.
* @implements      DADC04055
*/
#define ADC_UNIT_1                          (1)

/** 
* @brief           Symbolic names of ADC Hardware units.
* @implements      DADC04056
*/
[!LOOP "AdcConfigSet/*/AdcHwUnit/*"!][!//
#define  [!"name(.)"!]                      ([!"AdcHwUnitId"!])
[!ENDLOOP!][!//

/** 
* @brief           ADC Hardware unit macro for register access.
* @implements      DADC04057
* @note lint -save -e961
*
* @violates @ref Adc_Cfg_h_REF_1 Use of function like macro.
*/
#define ADC_HW_UNITS(unit)                  (Adc_Cfg_Ptr->Misc.ADC_HW_UNIT[(unit)])

/** 
* @brief           Enable/disable CTUv2 from the ADC code.
* @implements      DADC04058
*/
#define ADC_ENABLE_CTUV2                    (STD_OFF) /* CTUv2 en./dis. */
[!NOCODE!][!//
[!VAR "maxQueue" = "1"!][!//
[!VAR "maxGrp" = "1"!][!//
[!VAR "tempVal" = "0"!][!//
[!LOOP "AdcConfigSet/*"!][!//
 [!VAR "tempVal" = "num:i(AdcGeneric/AdcPriorityQueueMaxDepth)"!][!//
 [!IF "num:i($tempVal) > num:i($maxQueue)"!][!VAR "maxQueue" = "$tempVal"!][!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "tempVal" = "0"!][!//
[!VAR "maxGrp" = "num:i(count(AdcConfigSet/*[1]/AdcHwUnit/*/AdcGroup/*))"!]
[!LOOP "AdcConfigSet/*"!][!//
[!VAR "tempVal" = "num:i(count(AdcHwUnit/*/AdcGroup/*))"!]
 [!IF "num:i($tempVal) > num:i($maxGrp)"!][!VAR "maxGrp" = "$tempVal"!][!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "tempVal" = "0"!][!//
[!VAR "maxGrpPerHwUnit" = "0"!][!//
[!LOOP "AdcConfigSet/*"!][!//
 [!LOOP "AdcHwUnit/*"!][!//
 [!VAR "tempVal" = "num:i(count(AdcGroup/*))"!]
  [!IF "num:i($tempVal) > num:i($maxGrpPerHwUnit)"!][!VAR "maxGrpPerHwUnit" = "$tempVal"!][!ENDIF!][!//
 [!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//

[!NOCODE!][!//
[!VAR "inject" = "0"!][!//
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*"!][!//
[!IF "AdcGroupConversionType = 'ADC_CONV_TYPE_INJECTED'"!][!//
[!VAR "inject" = "1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//
/** 
* @brief           max queue depth configured across all configset.
* @implements      DADC04059
*/
#define ADC_QUEUE_MAX_DEPTH_MAX             ([!"num:i($maxQueue)"!]U + [!"num:i($inject)"!]U)

/** 
* @brief           max number of groups configured across all configset.
* @implements      DADC04061 
*/
#define ADC_MAX_GROUPS                      ([!"num:i($maxGrp)"!]U)

/**
 * @brief   Max number of groups configured per HW unit.
 */
#define ADC_MAX_GROUPS_PER_HW_UNIT          [!"num:i($maxGrpPerHwUnit)"!]U

/** 
* @brief           ADC Software injected configuration enabled or not.
* @implements      DADC04062 
*/
[!IF "($inject > 0)"!][!//
#define ADC_SW_INJ_CONFIGURED               (STD_ON)
[!ELSE!][!//
#define ADC_SW_INJ_CONFIGURED               (STD_OFF)
[!ENDIF!][!//

/** 
* @brief           AUTOSAR Symbolic names of channels on all HW units.
* @implements      DADC04063
*/
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcChannel/*"!][!//
#define [!"name(.)"!]                       ([!"AdcChannelId"!])
[!ENDLOOP!][!//

[!NOCODE!][!//
[!IF "NonAutosar/AdcEnableGroupDependentChannelNames = 'true'"!][!//
/* Loop on all Configuration Sets */
[!LOOP "AdcConfigSet/*"!][!//
    [!VAR "ConfigSetIndex" = "./@index"!][!//
    [!LOOP "./AdcHwUnit/*/AdcGroup/*"!][!//
        [!VAR "Groupname" = "name(.)"!][!//
        [!VAR "grp_ch_index" = "0"!][!//
        [!LOOP "AdcGroupDefinition/*"!][!//
            [!VAR "CurrAdcChannel" = "."!][!//
            [!VAR "CurrAdcChannel1" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel,'/'),'/'),'/'),'/'),'/')"!][!//
            [!VAR "Channelname" = "$CurrAdcChannel1"!][!//
            /* Loop on all other Configuration Sets */
            [!LOOP "../../../../../../../*[@index>$ConfigSetIndex]/AdcHwUnit/*/AdcGroup/*"!][!//
                [!IF "($Groupname = node:name(.))"!][!//
                    [!VAR "grp_ch_index_" = "0"!][!//
                    [!LOOP "AdcGroupDefinition/*"!][!//
                        [!VAR "CurrAdcChannel_" = "."!][!//
                        [!VAR "CurrAdcChannel1_" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel_,'/'),'/'),'/'),'/'),'/')"!][!//
                        [!IF "($Channelname = $CurrAdcChannel1_)"!][!//
                            [!IF "($grp_ch_index != $grp_ch_index_)"!][!//
                                /* Error!!!!!!!! */
                                [!ERROR!][!//
[!"$Groupname"!]_[!"$Channelname"!][!"' - Non AUTOSAR Symbolic name for channels can be repeated only if they have the same index in each of the config set.'"!][!//
                                [!ENDERROR!][!//
                            [!ENDIF!][!//
                        [!ELSE!][!//
                            [!VAR "grp_ch_index_" = "$grp_ch_index_ + 1"!][!//
                        [!ENDIF!][!//
                    [!ENDLOOP!][!//
                [!ENDIF!][!//
            [!ENDLOOP!][!//
            /* End Loop on all other Configuration Sets */
            [!VAR "grp_ch_index" = "$grp_ch_index + 1"!][!//
        [!ENDLOOP!][!//
    [!ENDLOOP!][!//
[!ENDLOOP!][!//
/* End Loop on all Configuration Sets */
[!ENDIF!][!//
[!ENDNOCODE!][!//

[!IF "NonAutosar/AdcEnableGroupDependentChannelNames = 'true'"!][!//
[!VAR "already_parsed_names"!][!ENDVAR!][!//
/** 
* @brief           Non autosar symbolic names of channels on all HW units.
* @implements      DADC04064
*/
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*"!][!//
[!VAR "Groupname" = "name(.)"!][!//
[!VAR "index" = "0"!][!//
[!LOOP "AdcGroupDefinition/*"!][!//
[!VAR "CurrAdcChannel" = "."!][!//
[!VAR "CurrAdcChannel1" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel,'/'),'/'),'/'),'/'),'/')"!][!//
[!LOOP "../../../../AdcChannel/*"!][!//
[!IF "@name = $CurrAdcChannel1"!][!//
[!IF "contains($already_parsed_names, concat($Groupname, '_', node:name(.), '|')) = false()"!][!//
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
/* @violates @ref Adc_Cfg_h_REF_5 Identifier clash */
#define [!"$Groupname"!]_[!"name(.)"!]      ([!"num:i($index)"!])
[!VAR "already_parsed_names"="concat($already_parsed_names, $Groupname, '_', node:name(.), '|')"!][!//
[!VAR "index" = "$index + 1"!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDIF!][!//

/** 
* @brief           Symbolic names of groups.
* @implements      DADC04065
*/
[!LOOP "AdcConfigSet/*/AdcHwUnit/*/AdcGroup/*"!][!//
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
/* @violates @ref Adc_Cfg_h_REF_5 Identifier clash */
#define AdcConf_AdcGroup_[!"name(.)"!]                       ([!"AdcGroupId"!])
[!ENDLOOP!][!//

/** 
* @brief           Number of channels in respective groups.
* @implements      DADC04066
*/
[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
[!LOOP "AdcHwUnit/*/AdcGroup/*"!][!//
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_CFGSET[!"num:i($CSET_NR)"!]_GROUP_[!"AdcGroupId"!]_CHANNELS      ([!"num:i(count(AdcGroupDefinition/*))"!])
[!ENDLOOP!][!//
[!ENDLOOP!][!//

[!IF "AdcGeneral/ADCDirectDMAResultBufferCopy"!][!//
/** 
* @brief           Number of groups definition channels.
* @implements
*/
[!LOOP "AdcConfigSet/*"!][!//
[!VAR "CSET_NR" = "@index+1"!][!//
[!LOOP "AdcHwUnit/*/AdcGroup/*"!][!//
[!NOCODE!][!//
[!VAR "AdcTemp_Ch" = "0"!][!//
[!VAR "AdcPrecise_Ch" = "0"!][!//
[!VAR "AdcExtd_Ch" = "0"!][!//
[!VAR "AdcExternal_Ch" = "0"!][!//
[!VAR "FirstDmaCh" = "0"!][!//
[!VAR "LastDmaCh" = "0"!][!//
[!VAR "PreFlag" = "0"!][!//
[!VAR "ExtdFlag" = "0"!][!//
[!VAR "ExtrFlag" = "0"!][!//

[!LOOP "AdcGroupDefinition/*"!][!//
    [!VAR "CurrAdcChannel" = "."!][!//
    [!VAR "CurrAdcChannel1" = "substring-after(substring-after(substring-after(substring-after(substring-after($CurrAdcChannel,'/'),'/'),'/'),'/'),'/')"!]
  [!LOOP "../../../../AdcChannel/*"!][!//
    [!IF "$CurrAdcChannel1 = @name"!][!//
      [!IF "contains(AdcHwChannel,'ANP_')"!][!//
        [!VAR "AdcTemp_Ch" = "substring-after(AdcHwChannel,'ANP_')"!][!//

        [!IF "$PreFlag = 0"!][!//
          [!VAR "FirstDmaCh" = "$AdcTemp_Ch"!][!//
          [!VAR "PreFlag" ="2"!][!//
          [!VAR "ExtdFlag" ="1"!][!//
          [!VAR "ExtrFlag" = "1"!][!//
        [!ENDIF!][!//

        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!VAR "AdcPrecise_Ch" = "bit:or($AdcPrecise_Ch,$AdcTemp_Ch)"!][!//

      [!ELSE!][!IF "contains(AdcHwChannel,'ANS_')"!][!//
        [!VAR "AdcTemp_Ch" = "substring-after(AdcHwChannel,'ANS_')"!][!//

        [!IF "$ExtdFlag = 0"!][!//
          [!VAR "FirstDmaCh" = "$AdcTemp_Ch + 32"!][!//
          [!VAR "PreFlag" ="1"!][!//
          [!VAR "ExtdFlag" ="2"!][!//
          [!VAR "ExtrFlag" = "1"!][!//
        [!ENDIF!][!//

        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!VAR "AdcExtd_Ch" = "bit:or($AdcExtd_Ch,$AdcTemp_Ch)"!][!//

      [!ELSE!][!IF "contains(AdcHwChannel,'ANX_')"!][!//
        [!VAR "AdcTemp_Ch" = "num:i(substring-after(AdcHwChannel,'CH_') - 64)"!]
        [!IF "$ExtrFlag = 0"!][!//
          [!VAR "FirstDmaCh" = "$AdcTemp_Ch + 64"!][!//
          [!VAR "PreFlag" ="1"!][!//
          [!VAR "ExtdFlag" ="1"!][!//
          [!VAR "ExtrFlag" = "2"!][!//
        [!ENDIF!][!//

        [!VAR "AdcTemp_Ch" = "bit:shl(1,$AdcTemp_Ch)"!][!//
        [!VAR "AdcExternal_Ch" = "bit:or($AdcExternal_Ch,$AdcTemp_Ch)"!][!//

      [!ENDIF!][!//
      [!ENDIF!][!//
      [!ENDIF!][!//

    [!ENDIF!][!//
  [!ENDLOOP!][!//
[!ENDLOOP!][!//

[!IF "$PreFlag = 2"!][!//
  [!VAR "Position" = "32768"!][!//Position =0x8000U(32768), 16 precision channel max
  [!FOR "Loop" = "0" TO "15"!][!//
    [!VAR "Value" = "bit:shr($Position,$Loop)"!][!//
    [!VAR "Ret_Value" = "bit:and($AdcPrecise_Ch,$Value)"!][!//
    [!IF "$Ret_Value>0"!][!VAR "LastDmaCh" = "15-$Loop"!][!BREAK!][!ENDIF!][!//
  [!ENDFOR!][!//
[!ELSE!][!IF "$ExtdFlag = 2"!][!//
  [!VAR "Position" = "134217728"!][!//Position =0x8000000U(134217728), 28 medium accuracy channel max.
  [!FOR "Loop" = "0" TO "27"!][!//
    [!VAR "Value" = "bit:shr($Position,$Loop)"!][!//
    [!VAR "Ret_Value" = "bit:and($AdcExtd_Ch,$Value)"!][!//
    [!IF "$Ret_Value>0"!][!VAR "LastDmaCh" = "59-$Loop"!][!BREAK!][!ENDIF!][!//
  [!ENDFOR!][!//
[!ELSE!][!IF "$ExtrFlag = 2"!][!//
  [!VAR "Position" = "2147483648"!][!//Position =0x80000000U(2147483648), 32 external channel max.
  [!FOR "Loop" = "0" TO "31"!][!//
    [!VAR "Value" = "bit:shr($Position,$Loop)"!][!//
    [!VAR "Ret_Value" = "bit:and($AdcExternal_Ch,$Value)"!][!//
    [!IF "$Ret_Value>0"!][!VAR "LastDmaCh" = "95-$Loop"!][!BREAK!][!ENDIF!][!//
  [!ENDFOR!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//

[!VAR "MaxGroupdefinition" = "$LastDmaCh - $FirstDmaCh + 1"!][!//
[!ENDNOCODE!][!//
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_CFGSET[!"num:i($CSET_NR)"!]_MAX_GROUP_[!"AdcGroupId"!]_DEFINITION      ([!"num:i($MaxGroupdefinition)"!])
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDIF!][!//

/** 
* @brief           Adc non autosar Enable/Disable invalid group index.
* @implements      DADC06019
*/
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX   ((Adc_GroupType)0xFF)
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          Structure for Configuration data.
* @details        Data structure containing the set of configuration parameters required 
*                 for initializing the ADC Driver and ADC HW Unit(s).
* @api
*
* @implements    DADC04067 
*/
typedef struct
{
  P2CONST(Adc_LLD_HWUnitConfiguration, ADC_VAR, ADC_APPL_CONST) ADC; /**< @brief Hw unit configurations */
  P2CONST(Adc_LLD_GroupConfiguration, ADC_VAR, ADC_APPL_CONST) Groups; /**< @brief Group configurations */
  P2P2CONST(Adc_LLD_ChannelConfiguration, ADC_VAR, ADC_APPL_CONST) Channels; /**< @brief Channel configurations */
  VAR(Adc_GroupType, ADC_VAR) GroupCount; /**< @brief Total number of groups */
  CONST(Adc_LLD_MultiConfig, ADC_CONST) Misc; /**< @brief Miscellaneous configuration parameters */
} Adc_ConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Adc_Cfg_h_REF_2 Repeated include file. */
#include "MemMap.h"

#ifdef ADC_PRECOMPILE_SUPPORT
/**
* @brief         Declaration Configuration sets.
* @implements    DADC04068 
*/
/* @violates @ref Adc_Cfg_h_REF_4 Scope of object */
extern CONST(Adc_ConfigType, ADC_APPL_CONST) Adc_ConfigPC;
#else
/**
* @brief         Declaration Configuration sets.
* @implements    DADC04069 
*/
[!LOOP "AdcConfigSet/*"!][!//
extern CONST(Adc_ConfigType, ADC_APPL_CONST) [!"node:name(.)"!];
[!ENDLOOP!][!//
#endif /* ADC_PRECOMPILE_SUPPORT */

#if (ADC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
/**
* @brief         Declaration of Dem events.
*/
extern CONST(Mcal_DemErrorType, ADC_CONST) Adc_E_TimeoutCfg;
#endif

/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Adc_Cfg_h_REF_2 Repeated include file. */
#include "MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_START_SEC_CODE
/* @violates @ref Adc_Cfg_h_REF_2 Repeated include file. */
#include "MemMap.h"

/* @violates @ref Adc_Cfg_h_REF_3 Identifier exceeds 31 characters */
#define ADC_STOP_SEC_CODE
/* @violates @ref Adc_Cfg_h_REF_2 Repeated include file. */
#include "MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_CFG_H */

/** @} */
