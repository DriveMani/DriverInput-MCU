[!CODE!][!//
/**
*     @file    Icu_PBCfg.c
*     @version 1.0.1
*
*     @brief   AUTOSAR Icu - contains the data exported by the Icu module
*     @details Contains the information that will be exported by the module, as requested by Autosar.
*
*
*     Project AUTOSAR 4.0 MCAL
*     Platform PA
*     Peripheral eMIOS
*     Dependencies none
*
*     ARVersion 4.0.3
*     ARRevision ASR_REL_4_0_REV_0003
*     ARConfVariant
*     SWVersion 1.0.1
*     BuildVersion MPC560xB_MCAL_1_0_1_RTM_ASR_REL_4_0_REV_0003_20140606
*
*     (c) Copyright 2006-2014 Freescale Semiconductor Inc. & STMicroelectronics
*     All Rights Reserved.
*/
/*==================================================================================================
* ==================================================================================================*/
/*
 * @file    Icu_PBcfg.c
 * @remarks Implements DICU02701
*/

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Icu_PBcfg_c_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
* before "#include". This violation  is not  fixed since  the inclusion  of MemMap.h
* is as  per Autosar  requirement MEMMAP003.
*
* @section Icu_PBcfg_c_2
* Violates MISRA 2004 Required Rule 8.10, external ... could be made static
* The respective code could not be made static because of layers architecture design of the driver.
*
* @section Icu_PBcfg_c_3
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the
* contents of a header file being included twice
* This is not a violation since all header files are protected against multiple inclusions
*
* @section Icu_PBcfg_c_4
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure 31 character
* significance and case sensitivity are supported for external identifiers.
* This is not a violation since all the compilers used interpret the identifiers correctly.
*
* @section Icu_PBcfg_c_5
* Violates MISRA 2004 Required Rule 8.8, Function is declared previously
*   This is not a violation since the funciton is declared earlier during Precompile.
*
* @section Icu_PBcfg_c_6
* Violates MISRA 2004 Required Rule 13.7, Boolean operations whose results are invariant shall not be
* permitted.
*
*
*@section Icu_PBcfg_c_7
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely on the
* significance of more than 31 characters.
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/
/*   @implements    DICU02701 */
#include "Icu.h"
#include "Icu_LLD.h"

#ifndef ICU_PRECOMPILE_SUPPORT

/*==================================================================================================
*                                         LOCAL MACROS
==================================================================================================*/

/**
* @{
* @brief   Configuration source file version information
* @implements DICU02301, DICU02302, DICU02303, DICU02304, DICU02305, DICU02306, DICU02307
*/
#define ICU_VENDOR_ID_PBCFG_C                        43

/*
* @violates @ref Icu_PBcfg_c_7 This is required as per autosar Requirement, 
*/
#define ICU_AR_RELEASE_MAJOR_VERSION_PBCFG_C         4
/*
* @violates @ref Icu_PBcfg_c_7 This is required as per autosar Requirement, 
*/
#define ICU_AR_RELEASE_MINOR_VERSION_PBCFG_C         0
/*
* @violates @ref Icu_PBcfg_c_4 external ... could be made static
*/
/*
* @violates @ref Icu_PBcfg_c_7 This is required as per autosar Requirement, 
*/
#define ICU_AR_RELEASE_REVISION_VERSION_PBCFG_C      3

#define ICU_SW_MAJOR_VERSION_PBCFG_C                 1
#define ICU_SW_MINOR_VERSION_PBCFG_C                 0
#define ICU_SW_PATCH_VERSION_PBCFG_C                 1
/**@}*/
/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/* Check Icu_PBCfg.c against Icu.h file versions */
#if (ICU_VENDOR_ID_PBCFG_C != ICU_VENDOR_ID)
    #error "Icu_PBcfg.c and Icu.h have different vendor IDs"
#endif

    #if ((ICU_AR_RELEASE_MAJOR_VERSION_PBCFG_C != ICU_AR_RELEASE_MAJOR_VERSION) || \
         (ICU_AR_RELEASE_MINOR_VERSION_PBCFG_C != ICU_AR_RELEASE_MINOR_VERSION) || \
         (ICU_AR_RELEASE_REVISION_VERSION_PBCFG_C != ICU_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_PBcfg.c and Icu.h are different"
    #endif

#if ((ICU_SW_MAJOR_VERSION_PBCFG_C != ICU_SW_MAJOR_VERSION) || \
     (ICU_SW_MINOR_VERSION_PBCFG_C != ICU_SW_MINOR_VERSION) || \
     (ICU_SW_PATCH_VERSION_PBCFG_C != ICU_SW_PATCH_VERSION))
#error "Software Version Numbers of Icu_PBcfg.c and Icu.h are different"
#endif

/* Check Icu_Cfg.c against Icu_LLD.h file versions */
#if (ICU_VENDOR_ID_PBCFG_C != ICU_LLD_VENDOR_ID)
#error "Icu_PBcfg.c and Icu_LLD.h have different vendor IDs"
#endif

    #if ((ICU_AR_RELEASE_MAJOR_VERSION_PBCFG_C != ICU_LLD_AR_RELEASE_MAJOR_VERSION) || \
         (ICU_AR_RELEASE_MINOR_VERSION_PBCFG_C != ICU_LLD_AR_RELEASE_MINOR_VERSION) || \
         (ICU_AR_RELEASE_REVISION_VERSION_PBCFG_C != ICU_LLD_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_PBCfg.c and Icu_LLD.h are different"
    #endif

#if ((ICU_SW_MAJOR_VERSION_PBCFG_C != ICU_LLD_SW_MAJOR_VERSION) || \
     (ICU_SW_MINOR_VERSION_PBCFG_C != ICU_LLD_SW_MINOR_VERSION) || \
     (ICU_SW_PATCH_VERSION_PBCFG_C != ICU_LLD_SW_PATCH_VERSION))
#error "Software Version Numbers of Icu_PBCfg.c and Icu_LLD.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                        LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                        LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/
#define ICU_START_SEC_CODE

/*
* @violates @ref Icu_PBcfg_c_3 precautions to prevent the contents
*        of a header file being included twice
*/
/*
*   @violates @ref Icu_PBcfg_c_1 only preprocessor statements and comments before
*        "#include".
*/    
#include "MemMap.h"

[!NOCODE!]
[!VAR "EMIOS_CHANNELS" = "num:i(32)"!]
[!VAR "IRQ_CHANNELS"   = "num:i(64)"!]
[!VAR "WKUP_CHANNELS"  = "num:i(88)"!]
[!VAR "ICU_CHANNELS"   = "num:i(117)"!]
[!VAR "NoDmaChannel" = "num:i(32)"!]
[!VAR "STRLENGTH"   = "num:i(($ICU_CHANNELS - 1)*4 - 1)"!]
[!ENDNOCODE!]

[!NOCODE!][!//
[!VAR "GlobalDmaPresent" = "0"!][!//
[!LOOP "IcuConfigSet/*/IcuChannel/*"!][!//
[!IF "node:exists(IcuDMAEnable)"!]
[!IF "IcuDMAEnable"!]
[!VAR "GlobalDmaPresent" = "1"!]
[!BREAK!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//
/*
*   @brief External Notifications, for EdgeDetection and Timestamp mode channels 
*   @implements    DICU02317 
*/
[!NOCODE!][!//
[!VAR "OuterLoopCounter" = "0"!][!//
[!VAR "InnerLoopCounter" = "0"!][!//
[!LOOP "IcuConfigSet/*/IcuChannel/*"!][!//
[!VAR "a" = "IcuMeasurementMode"!]
[!IF "(contains($a,'ICU_MODE_TIMESTAMP') and (IcuTimestampMeasurement/IcuTimestampNotification != 'NULL_PTR') and (IcuTimestampMeasurement/IcuTimestampNotification != 'NULL'))"!]
[!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
[!VAR "InnerLoopCounter" = "0"!]
[!VAR "Matchcounter" = "0"!]
[!VAR "Notification" = "IcuTimestampMeasurement/IcuTimestampNotification"!]
[!LOOP "../../../*/IcuChannel/*"!][!//
[!VAR "a" = "IcuMeasurementMode"!]
[!IF "(contains($a,'ICU_MODE_TIMESTAMP') and (IcuTimestampMeasurement/IcuTimestampNotification != 'NULL_PTR')and (IcuTimestampMeasurement/IcuTimestampNotification != 'NULL'))"!][!//
[!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
[!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
[!IF "($Notification = IcuTimestampMeasurement/IcuTimestampNotification)"!]
[!VAR "Matchcounter" = "$Matchcounter + 1"!]
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$Matchcounter = 1"!][!//
/**
* @brief External Notifications for Timestamp
* @implements DICU02317
*/
[!CODE!]
/*
* @violates @ref Icu_PBcfg_c_7 This is required as per autosar Requirement, 
*/
[!ENDCODE!]
[!CODE!]extern FUNC (void, ICU_CODE) [!"IcuTimestampMeasurement/IcuTimestampNotification"!](void);
[!ENDCODE!]
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "OuterLoopCounter" = "0"!]
[!VAR "InnerLoopCounter" = "0"!]
[!LOOP "IcuConfigSet/*/IcuChannel/*"!][!//
[!VAR "a" = "IcuMeasurementMode"!]
[!IF "(contains($a,'ICU_MODE_SIGNAL_EDGE_DETECT') and (IcuSignalEdgeDetection/IcuSignalNotification != 'NULL_PTR'))"!]
[!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
[!VAR "InnerLoopCounter" = "0"!]
[!VAR "Matchcounter" = "0"!]
[!VAR "Notification" = "IcuSignalEdgeDetection/IcuSignalNotification"!]
[!LOOP "../../../*/IcuChannel/*"!][!//
[!VAR "a" = "IcuMeasurementMode"!]
[!IF "(contains($a,'ICU_MODE_SIGNAL_EDGE_DETECT') and (IcuSignalEdgeDetection/IcuSignalNotification != 'NULL_PTR'))"!][!//
[!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
[!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
[!IF "($Notification = IcuSignalEdgeDetection/IcuSignalNotification)"!]
[!VAR "Matchcounter" = "$Matchcounter + 1"!]
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$Matchcounter = 1"!][!//
/**
* @brief External Notifications for Signal edge detection
* @implements DICU02317
*/
[!CODE!]
/*
* @violates @ref Icu_PBcfg_c_7 This is required as per autosar Requirement, 
*/
[!ENDCODE!][!//
[!CODE!]extern FUNC (void, ICU_CODE) [!"IcuSignalEdgeDetection/IcuSignalNotification"!](void);
[!ENDCODE!]
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//
[!LOOP "IcuConfigSet/*"!][!//
[!VAR "count" = "count(IcuChannel/*)"!][!//
[!VAR "str" = "''"!][!//
[!FOR "idx" = "0" TO "$ICU_CHANNELS"!][!//
[!IF "$idx!=$ICU_CHANNELS"!][!VAR "str" = "concat($str,'0xFF,')"!][!ELSE!][!VAR "str" = "concat($str,'0xFF')"!][!ENDIF!][!//
[!ENDFOR!][!//
[!VAR "wkstr" = "''"!][!//
[!FOR "idx" = "0" TO "$ICU_CHANNELS"!][!//
[!IF "$idx!=$ICU_CHANNELS"!][!VAR "wkstr" = "concat($wkstr,'0xFF,')"!][!ELSE!][!VAR "wkstr" = "concat($wkstr,'0xFF')"!][!ENDIF!][!//
[!ENDFOR!][!//
[!VAR "dmastr" = "''"!][!//
[!VAR "dmaidxstr" = "''"!][!//
[!FOR "idx" = "0" TO "$NoDmaChannel"!][!//
[!IF "$idx < $NoDmaChannel"!][!//
[!VAR "dmastr" = "concat($dmastr,'0xFF,')"!][!//
[!VAR "dmaidxstr" = "concat($dmaidxstr,'0xFF,')"!][!//
[!ELSE!][!//
[!VAR "dmastr" = "concat($dmastr,'0xFF')"!][!//
[!VAR "dmaidxstr" = "concat($dmaidxstr,'0xFF')"!][!//
[!ENDIF!][!//
[!ENDFOR!][!//
[!VAR "count" = "count(IcuChannel/*)"!][!//
[!VAR "time" = "0"!][!//
[!VAR "meas" = "0"!][!//
[!VAR "edge" = "0"!][!//
[!VAR "idx" = "0"!][!//


[!NOCODE!][!//
[!VAR "OuterLoopCounter" = "0"!][!//
[!LOOP "//IcuConfigSet/*/IcuChannel/*/IcuOverflowNotification"!][!//
    [!VAR "InnerLoopCounter" = "0"!][!//
    [!IF "(. != 'NULL_PTR') and (. != '')"!][!//
        [!VAR "NotificationHandler" = "."!][!//
        [!VAR "skipThis" = "0"!][!//
        [!LOOP "//IcuConfigSet/*/IcuChannel/*/IcuOverflowNotification"!][!//
            [!IF "(. != 'NULL_PTR') and (. != '')"!][!//
                [!VAR "a" = "."!][!//
                [!IF "$OuterLoopCounter > $InnerLoopCounter"!][!//
                    [!IF "contains($a, $NotificationHandler)"!][!//
                        [!VAR "skipThis" = "1"!][!//
                    [!ENDIF!][!//
                [!ENDIF!][!//
                [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
        [!IF "$skipThis!=1"!][!//
           /**
             @brief Overflow notification handlers
             * @implements DICU02316
            */
            [!CODE!]extern FUNC (void, ICU_CODE) [!"$NotificationHandler"!](void);
[!ENDCODE!]
        [!ENDIF!][!//
        [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!][!//
    [!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!]

#define ICU_STOP_SEC_CODE
/*
* @violates @ref Icu_PBcfg_c_3 precautions to prevent the contents
*        of a header file being included twice
*/
/*
* @violates @ref Icu_PBcfg_c_1 ,  only preprocessor statements and
* comments before "#include"
*/
#include "MemMap.h"
/*
* @violates @ref Icu_PBcfg_c_7 This is required as per autosar Requirement, 
*/
#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Icu_PBcfg_c_3 precautions to prevent the contents
*        of a header file being included twice
*/
/*
* @violates @ref Icu_PBcfg_c_1 ,  only preprocessor statements and
* comments before "#include"
*/
#include "MemMap.h"

/**
* @brief  This index relates the Icu Channel number with the respective global variable, depending on the measurement mode
* Each kind of measurement mode has an array(s) in the ICU driver, this index points to the corresponding variable within the ICU channel
 */
/*
* @violates @ref Icu_PBcfg_c_2 MISRA 2004 Advisory Rule 10.1, The value of an expression of integer type shall not be implicitly
*       converted to a different underlying type
* @implements DICU02312
*/

/**
* @brief  This index relates the Hardware channels with the respective ICU channel.
* When an normal interrupt is asserted this index is used to locate the corresponding ICU channel
 */
/*
* @violates @ref Icu_PBcfg_c_2  MISRA 2004 Advisory Rule 10.1, The value of an expression of integer type shall not be implicitly
*         converted to a different underlying type
* @implements DICU02313
*/
[!VAR "LoopVar1"="0"!][!//
CONST(Icu_ChannelType,ICU_CONST) Icu_InitPBChannelIndex_[!"@index"!][[!"num:i($count)"!]] = {
[!FOR "x" = "0" TO "num:i(count(IcuChannel/*))"!][!//
[!LOOP "IcuChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar1)"!][!//
[!IF "IcuChannelId = $Loop"!][!//
[!IF "IcuMeasurementMode='ICU_MODE_TIMESTAMP'"!][!//
(Icu_ChannelType)[!"num:inttohex($time,2)"!][!//
[!VAR "time" = "$time + 1"!][!//
[!VAR "idx" = "$idx + 1"!][!//
[!IF "$idx!=$count"!],[!ENDIF!]
[!ELSE!][!//
[!IF "IcuMeasurementMode='ICU_MODE_SIGNAL_MEASUREMENT'"!][!//
(Icu_ChannelType)[!"num:inttohex($meas,2)"!][!//
[!VAR "meas" = "$meas + 1"!][!//
[!VAR "idx" = "$idx + 1"!][!//
[!IF "$idx!=$count"!],[!ENDIF!]
[!ELSE!][!//
[!IF "IcuMeasurementMode='ICU_MODE_EDGE_COUNTER'"!][!//
(Icu_ChannelType)[!"num:inttohex($edge,2)"!][!//
[!VAR "edge" = "$edge + 1"!][!//
[!VAR "idx" = "$idx + 1"!][!//
[!IF "$idx!=$count"!],[!ENDIF!]
[!ELSE!][!//
(Icu_ChannelType)0x00[!//
[!VAR "idx" = "$idx + 1"!][!//
[!IF "$idx!=$count"!],[!ENDIF!]
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar1"="$LoopVar1 + 1"!][!//
[!ENDFOR!]
};[!//
[!//


[!NOCODE!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "idx" = "0"!][!//
[!FOR "x" = "0" TO "num:i(count(IcuChannel/*))"!][!//
[!LOOP "IcuChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "IcuChannelId = $Loop"!][!//
    [!IF "contains(IcuHwChannel,'EMIOS_0_CH_')"!]
    [!VAR "tempSTR" = "substring-after(IcuHwChannel,'EMIOS_0_CH_')"!]
    [!ELSE!]
    [!IF "contains(IcuHwChannel,'EMIOS_1_CH_')"!]
    [!VAR "tempSTR" = "substring-after(IcuHwChannel,'EMIOS_1_CH_')+$EMIOS_CHANNELS"!]
    [!ELSE!][!IF "contains(IcuHwChannel,'IRQ_')"!]
    [!VAR "tempSTR" = "substring-after(IcuHwChannel,'IRQ_')+$IRQ_CHANNELS"!]
    [!ELSE!]
    [!IF "contains(IcuHwChannel,'WKUP_')"!]
    [!VAR "tempSTR" = "substring-after(IcuHwChannel,'WKUP_')+$WKUP_CHANNELS"!]
    [!ENDIF!]
    [!ENDIF!]
    [!ENDIF!]
    [!ENDIF!][!//
    [!VAR "hwch" = "$tempSTR"!][!//
    [!IF "$hwch<=$ICU_CHANNELS"!][!//
    [!IF "$hwch=0"!][!VAR "str" = "concat(num:inttohex($idx,2),',',substring($str,6))"!][!ELSE!][!IF "$hwch=$ICU_CHANNELS"!][!VAR "str" = "concat(substring($str,0,$STRLENGTH),',',num:inttohex($idx,2))"!][!ELSE!][!//
    [!VAR "str" = "concat(substring($str,1,$hwch*5),num:inttohex($idx,2),',',substring($str,1+(($hwch+1)*5)))"!][!ENDIF!][!ENDIF!][!ENDIF!][!//
    [!VAR "idx" = "$idx + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//
[!VAR "strcast" = "''"!][!//
[!FOR "idx" = "0" TO "$ICU_CHANNELS"!][!//
[!VAR "strcast" = "concat($strcast,'(Icu_ChannelType)',substring($str,$idx*5+1,5))"!]
[!ENDFOR!][!//
[!ENDNOCODE!]
/**
* @brief  This index relates the Hardware channels with the respective ICU channel.
* When an normal interrupt is asserted this index is used to locate the corresponding ICU channel
 */
/*
* @violates @ref Icu_PBcfg_c_2  MISRA 2004 Advisory Rule 10.1, The value of an expression of integer type shall not be implicitly
*         converted to a different underlying type
* @implements DICU02313
*/
/*
*  @violates @ref Icu_PBcfg_c_3 external ... could be made static
*/    
CONST(Icu_ChannelType,ICU_CONST) Icu_InitPBHWMap_[!"@index"!][ICU_MAX_HW_CHANNELS + 1U] = {
[!FOR "idx" = "0" TO "$ICU_CHANNELS"!][!//
(Icu_ChannelType)[!"substring($str,$idx*5+1,5)"!]
[!ENDFOR!][!//
};


[!NOCODE!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "idx" = "0"!][!//
[!FOR "x" = "0" TO "num:i(count(IcuChannel/*))"!][!//
[!LOOP "IcuChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "IcuChannelId = $Loop"!][!//
    [!IF "contains(IcuHwChannel,'EMIOS_0_CH_')"!][!VAR "tempSTR" = "substring-after(IcuHwChannel,'EMIOS_0_CH_')"!]
    [!ELSE!][!IF "contains(IcuHwChannel,'EMIOS_1_CH_')"!][!VAR "tempSTR" = "substring-after(IcuHwChannel,'EMIOS_1_CH_')+$EMIOS_CHANNELS"!]
    [!ELSE!][!IF "contains(IcuHwChannel,'IRQ_')"!][!VAR "tempSTR" = "substring-after(IcuHwChannel,'IRQ_')+$IRQ_CHANNELS"!]
    [!ELSE!][!IF "contains(IcuHwChannel,'WKUP_')"!][!VAR "tempSTR" = "substring-after(IcuHwChannel,'WKUP_')+$WKUP_CHANNELS"!]
    [!ENDIF!]
    [!ENDIF!]
    [!ENDIF!]
    [!ENDIF!][!//
    [!VAR "hwch" = "$tempSTR"!][!//
    [!IF "IcuWakeupCapability"!][!//

    [!IF "$hwch<=$ICU_CHANNELS"!][!//
        [!IF "$hwch=0"!]
            [!VAR "wkstr" = "concat(num:inttohex($idx,2),',',substring($wkstr,6))"!]
        [!ELSE!]
            [!IF "$hwch=$ICU_CHANNELS"!]
                [!VAR "wkstr" = "concat(substring($wkstr,0,$STRLENGTH),',',num:inttohex($idx,2))"!]
            [!ELSE!][!//
                [!VAR "wkstr" = "concat(substring($wkstr,1,$hwch*5),num:inttohex($idx,2),',',substring($wkstr,1+(($hwch+1)*5)))"!]
            [!ENDIF!]
        [!ENDIF!]
    [!ENDIF!][!//
    [!ENDIF!][!//
    [!VAR "idx" = "$idx + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//
[!VAR "strcast" = "''"!][!//
[!FOR "idx" = "0" TO "$ICU_CHANNELS"!][!//
[!VAR "strcast" = "concat($strcast,'(Icu_ChannelType)',substring($wkstr,$idx*5+1,5))"!]
[!ENDFOR!][!//
[!ENDNOCODE!]
/**
* @brief  This index relates the Wakeup pins with the respective ICU channel
* When an wake up interrupt is asserted this index is used to locate the corresponding ICU channel
 */
/*
* @violates @ref Icu_PBcfg_c_2 MISRA 2004 Advisory Rule 10.1, The value of an expression of integer type shall not be implicitly
*         converted to a different underlying type
* @implements DICU02314
*/
/*
*  @violates @ref Icu_PBcfg_c_3 external ... could be made static
*/
CONST(Icu_ChannelType,ICU_CONST) Icu_InitPBHWWKMap_[!"@index"!][ICU_MAX_HW_CHANNELS + 1U] = {
[!FOR "idx" = "0" TO "$ICU_CHANNELS"!][!//
(Icu_ChannelType)[!"substring($wkstr,$idx*5+1,5)"!]
[!ENDFOR!][!//
};

[!NOCODE!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "Dmaidx"="0"!][!//
[!VAR "idx" = "0"!][!//
[!VAR "DmaPresent" = "0"!][!//
[!FOR "x" = "0" TO "num:i(count(IcuChannel/*))"!][!//
[!LOOP "IcuChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "IcuChannelId = $Loop"!][!//
    [!IF "contains(IcuHwChannel,'EMIOS_0_CH_')"!][!VAR "tempSTR" = "substring-after(IcuHwChannel,'EMIOS_0_CH_')"!]
[!ELSE!][!IF "contains(IcuHwChannel,'EMIOS_1_CH_')"!][!VAR "tempSTR" = "substring-after(IcuHwChannel,'EMIOS_1_CH_')+ $EMIOS_CHANNELS"!]
    [!ENDIF!]
    [!ENDIF!][!//
    [!VAR "hwch" = "$tempSTR"!][!//
[!IF "node:exists(IcuDMAEnable)"!]
    [!IF "IcuDMAEnable"!][!//
[!VAR "temp_name"="string(./IcuHwChannel)"!][!//     
[!IF "$temp_name = 'EMIOS_0_CH_0'"!][!//
[!VAR "temp_name_MCU"="string('EMIOS0_CH0')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_1'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH1')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_9'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH9')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_18'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH18')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_25'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH25')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_26'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH26')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_0'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH0')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_9'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH9')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_17'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH17')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_18'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH18')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_25'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH25')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_26'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH26')"!][!//
[!ELSE!][!//
[!ERROR "There is no DMA for this channel, please update again"!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
    [!IF "node:exists(node:refs('ASPathDataOfSchema:/AUTOSAR/Mcu')/McuModuleConfiguration/*/McuDMA/*/DMAChannelEnable[.='true']/../McuDMASource[.=$temp_name_MCU])"!][!//
        [!VAR "temp_ICU_DMA"="node:refs('ASPathDataOfSchema:/AUTOSAR/Mcu')/McuModuleConfiguration/*/McuDMA/*/DMAChannelEnable[.='true']/../McuDMASource[.=$temp_name_MCU]/../DMAChannelId"!][!//
    [!ELSE!][!//
        [!ERROR "There is no DMA for this channel, please update again"!][!//
[!ENDIF!][!//
    [!VAR "dmahwch" = "$temp_ICU_DMA"!][!//
    [!VAR "DmaPresent" = "1"!][!//
        [!IF "$dmahwch<=$NoDmaChannel"!][!//
            [!IF "$dmahwch=0"!]
                [!VAR "dmastr" = "concat(num:inttohex($hwch,2),',',substring($dmastr,6))"!]
                [!VAR "dmaidxstr" = "concat(num:inttohex($Dmaidx,2),',',substring($dmaidxstr,6))"!]
            [!ELSE!]
                [!IF "$dmahwch=$NoDmaChannel"!]
                        [!VAR "dmastr" = "concat(substring($dmastr,1,$dmahwch*5),num:inttohex($hwch,2))"!]
                        [!VAR "dmaidxstr" = "concat(substring($dmaidxstr,1,$dmahwch*5),num:inttohex($Dmaidx,2))"!]
                [!ELSE!][!//
                    [!VAR "dmastr" = "concat(substring($dmastr,1,$dmahwch*5),num:inttohex($hwch,2),',',substring($dmastr,1+(($dmahwch+1)*5)))"!]
                    [!VAR "dmaidxstr" = "concat(substring($dmaidxstr,1,$dmahwch*5),num:inttohex($Dmaidx,2),',',substring($dmaidxstr,1+(($dmahwch+1)*5)))"!]
                [!ENDIF!]
            [!ENDIF!]
        [!ENDIF!][!//
    [!VAR "Dmaidx"="$Dmaidx + 1"!][!//
    [!ENDIF!][!//
    [!ENDIF!][!//
    [!VAR "idx" = "$idx + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//
[!ENDNOCODE!]

[!IF "$DmaPresent = 1"!][!//
/* This index relates the Dma channels with the respective Hardware channel. */
/* When an normal interrupt is asserted this index is used to locate the corresponding ICU channel*/
/* @implements DICU02222
* @violates @ref Icu_PBcfg_c_3 precautions to prevent the contents
*        of a header file being included twice
* @violates @ref Icu_PBcfg_c_2 external ... could be made static
*/
CONST(Icu_ChannelType,ICU_CONST) Icu_DMA_InitHWMap_[!"@index"!][ICU_DMA_MAX_HW_CHANNELS + 1U] = {
[!FOR "idx" = "0" TO "$NoDmaChannel"!][!//
(Icu_ChannelType)[!"substring($dmastr,$idx*5+1,5)"!]
[!ENDFOR!][!//
};
/* This index relates the Dma Channel number with the respective global variable, depending on the measurement mode */
/* @implements DICU02223
* @violates @ref Icu_PBcfg_c_3 precautions to prevent the contents
*        of a header file being included twice
* @violates @ref Icu_PBcfg_c_2 external ... could be made static
*/
CONST(Icu_ChannelType,ICU_CONST) Icu_InitDMAChannelIndex_[!"@index"!][ICU_DMA_MAX_HW_CHANNELS + 1U] = {
[!FOR "idx" = "0" TO "$NoDmaChannel"!][!//
(Icu_ChannelType)[!"substring($dmaidxstr,$idx*5+1,5)"!]
[!ENDFOR!][!//
};
[!ENDIF!][!//

[!VAR "idx" = "1"!][!//
/**@brief PostBuild Configuration */
[!VAR "LoopVar"="0"!][!//
/*
* @violates @ref Icu_PBcfg_c_2  MISRA 2004 Advisory Rule 10.1, The value of an expression of integer type shall not be implicitly
*         converted to a different underlying type
* @implements DICU02311
*/
/*
*  @violates @ref Icu_PBcfg_c_3 external ... could be made static
*/    
CONST(Icu_ChannelConfigType, ICU_CONST) Icu_InitPBChannel_[!"@index"!][[!"num:i($count)"!]] =
{
[!FOR "x" = "0" TO "num:i(count(IcuChannel/*))"!][!//
[!LOOP "IcuChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "IcuChannelId = $Loop"!][!//
    /* [!"node:name(.)"!] - [!"IcuHwChannel"!] */
    {
    ([!IF "IcuWakeupCapability"!][!/*
      */!]((Icu_ParamType)ICU_WAKEUP_CAPABLE << ICU_WAKEUP_SHIFT) | [!/*
 */!][!ENDIF!][!/*
 */!]((Icu_ParamType)[!"IcuDefaultStartEdge"!] << ICU_EDGE_PARAM_SHIFT)[!/*
 */!]
[!IF "IcuMeasurementMode='ICU_MODE_SIGNAL_MEASUREMENT'"!][!//
[!IF "IcuSignalMeasurement/IcuSignalMeasurementProperty='ICU_HIGH_TIME' or IcuSignalMeasurement/IcuSignalMeasurementProperty='ICU_LOW_TIME'"!][!//
[!IF "contains(ecu:list(concat('Icu.ChannelType.', IcuHwChannel)), 'IPWM')"!][!//
 | ((Icu_ParamType)EMIOS_UC_IPWM_MODE << ICU_EMIOS_UC_MODE_PARAM_SHIFT)[!//
[!ELSE!][!//
 | ((Icu_ParamType)EMIOS_UC_SAIC_MODE << ICU_EMIOS_UC_MODE_PARAM_SHIFT)[!//
[!ENDIF!][!//
[!ELSEIF "(IcuSignalMeasurement/IcuSignalMeasurementProperty ='ICU_DUTY_CYCLE') and (IcuUserModeForDutycycle = 'IPWM')"!][!//
 | ((Icu_ParamType)EMIOS_UC_IPWM_MODE << ICU_EMIOS_UC_MODE_PARAM_SHIFT)[!//
[!ELSEIF "(IcuSignalMeasurement/IcuSignalMeasurementProperty ='ICU_DUTY_CYCLE') and (IcuUserModeForDutycycle = 'SAIC')"!][!//
 |((Icu_ParamType)EMIOS_UC_SAIC_MODE << ICU_EMIOS_UC_MODE_PARAM_SHIFT)[!//
[!ELSE!][!//
[!IF "contains(ecu:list(concat('Icu.ChannelType.', IcuHwChannel)), 'IPM')"!][!//
 | ((Icu_ParamType)EMIOS_UC_IPM_MODE << ICU_EMIOS_UC_MODE_PARAM_SHIFT)[!//
[!ELSE!][!//
 | ((Icu_ParamType)EMIOS_UC_SAIC_MODE << ICU_EMIOS_UC_MODE_PARAM_SHIFT)[!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
 /*@violates @ref Icu_PBcfg_c_6 MISRA 2004 Required Rule,Invariant results for Boolean
    *  Ops */
[!IF "contains(IcuHwChannel,'EMIOS')"!][!IF "IcuEmiosFreeze"!] | (EMIOS_FREEZE_ENABLE << ICU_EMIOS_FREEZE_PARAM_SHIFT)[!ENDIF!] | ([!"IcuEmiosPrescaler"!] << ICU_EMIOS_PRESCALER_PARAM_SHIFT) | [!/*
    */!] [!IF "../../../../IcuNonAUTOSAR/IcuEnableDualClockMode"!][!/*
        */!](Icu_ParamType)([!"IcuEmiosPrescaler_Alternate"!] << ICU_EMIOS_PRESC_ALT_PARAM_SHIFT) | [!/*
    */!][!ENDIF!] [!/*
    */!] ([!"IcuEmiosDigitalFilter"!] << ICU_EMIOS_DIG_FILTER_PARAM_SHIFT) | ([!"IcuEmiosBusSelect"!] << ICU_EMIOS_BUS_SELECT_PARAM_SHIFT)[!ENDIF!][!//
[!//
[!IF "node:exists(Icu_EXT_ISR_IFERDigitalFilter)"!][!IF "Icu_EXT_ISR_IFERDigitalFilter"!][!//
[!IF "contains(IcuHwChannel,'IRQ_')"!] | ((Icu_ParamType)SIUL_INT_FILTER_ENABLE << ICU_SIUL_INT_FILTER_ENABLE_PARAM_SHIFT)[!ENDIF!][!//
[!IF "contains(IcuHwChannel,'WKUP_')"!] | ((Icu_ParamType)WKPU_INT_FILTER_ENABLE << ICU_WKPU_INT_FILTER_ENABLE_PARAM_SHIFT)[!ENDIF!][!//
[!ENDIF!][!ENDIF!][!//
[!IF "node:exists(Icu_EXT_ISR_IFMCDigitalFilter)"!] | ((Icu_ParamType)[!"Icu_EXT_ISR_IFMCDigitalFilter"!]U << ICU_SIUL_INT_FILTER_COUNTER_PARAM_SHIFT)[!ELSE!]|((Icu_ParamType)0U << ICU_SIUL_INT_FILTER_COUNTER_PARAM_SHIFT)[!ENDIF!][!//
[!IF "node:exists(IcuWKPU_ISR_WIPUER)"!][!IF "IcuWKPU_ISR_WIPUER"!] | ((Icu_ParamType)WKPU_PULLUP_ENABLE << ICU_WKPU_PULLUP_ENABLE_PARAM_SHIFT)[!ENDIF!][!ENDIF!][!//
),
    (Icu_MeasurementModeType)[!"IcuMeasurementMode"!],
    (Icu_MeasurementSubModeType)[!/*
    */!][!IF "IcuMeasurementMode='ICU_MODE_SIGNAL_EDGE_DETECT'"!]0U[!ENDIF!][!/*
    */!][!IF "IcuMeasurementMode='ICU_MODE_TIMESTAMP'"!][!"IcuTimestampMeasurement/IcuTimestampMeasurementProperty"!][!ENDIF!][!/*
    */!][!IF "IcuMeasurementMode='ICU_MODE_SIGNAL_MEASUREMENT'"!][!"IcuSignalMeasurement/IcuSignalMeasurementProperty"!][!ENDIF!][!/*
    */!][!IF "IcuMeasurementMode='ICU_MODE_EDGE_COUNTER'"!][!"IcuDefaultStartEdge"!][!ENDIF!],
        [!IF "IcuMeasurementMode='ICU_MODE_SIGNAL_MEASUREMENT'"!]NULL_PTR[!ENDIF!][!/*
    */!][!IF "IcuMeasurementMode='ICU_MODE_EDGE_COUNTER'"!]NULL_PTR[!ENDIF!][!/*
    */!][!IF "IcuMeasurementMode='ICU_MODE_TIMESTAMP'"!][!/*
        */!][!IF "IcuTimestampMeasurement/IcuTimestampNotification!='NULL_PTR'"!][!/*
            */!]&[!"IcuTimestampMeasurement/IcuTimestampNotification"!][!/*
        */!][!ELSE!][!/*
            */!]NULL_PTR[!/*
        */!][!ENDIF!][!/*
    */!][!ENDIF!][!/*
    */!][!IF "IcuMeasurementMode='ICU_MODE_SIGNAL_EDGE_DETECT'"!][!/*
        */!][!IF "IcuSignalEdgeDetection/IcuSignalNotification!='NULL_PTR'"!][!/*
            */!]&[!"IcuSignalEdgeDetection/IcuSignalNotification"!][!/*
        */!][!ELSE!][!/*
            */!]NULL_PTR[!/*
        */!][!ENDIF!][!/*
    */!][!ENDIF!],
#if defined(ICU_OVERFLOW_NOTIFICATION_API) && (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
    [!IF "node:exists(IcuOverflowNotification) and (IcuOverflowNotification!='NULL_PTR')"!][!/*
        */!]&[!"IcuOverflowNotification"!][!/*
    */!][!ELSE!][!/*
        */!]NULL_PTR[!/*
    */!][!ENDIF!],
#endif  /* ICU_OVERFLOW_NOTIFICATION_API */
        [!IF "IcuSignalMeasureWithoutInterrupt = 'true'"!](boolean)TRUE[!ELSE!](boolean)FALSE[!ENDIF!],
(Icu_WakeupValue)[!IF "(IcuWakeupCapability='true') and (IcuDisableEcumWakeupSourceNotification ='false') and (../../../../IcuGeneral/IcuReportWakeupSource='true')"!][!/*
                     */!]EcuMConf_EcuMWakeupSource_[!"as:ref(IcuWakeup/IcuChannelWakeupInfo)/@name"!][!/* 
    */!][!ELSE!][!/*
        */!]0U[!/*
    */!][!ENDIF!],
        [!IF "IcuDisableEcumWakeupSourceNotification = 'true'"!](boolean)TRUE[!ELSE!](boolean)FALSE[!ENDIF!],
        [!IF "$DmaPresent = 1"!]
#if (ICU_DMA_SUPPORTED == STD_ON)
 [!IF "node:exists(IcuDMAEnable)"!][!//
[!IF "IcuDMAEnable"!][!//
    (boolean)TRUE, /*Icu with DMA is enabled */
[!NOCODE!][!//
[!VAR "temp_name"="string(./IcuHwChannel)"!][!//        
[!IF "$temp_name = 'EMIOS_0_CH_0'"!][!//
[!VAR "temp_name_MCU"="string('EMIOS0_CH0')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_1'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH1')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_9'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH9')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_18'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH18')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_25'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH25')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_0_CH_26'"!]
[!VAR "temp_name_MCU"="string('EMIOS0_CH26')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_0'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH0')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_9'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH9')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_17'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH17')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_18'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH18')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_25'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH25')"!][!//
[!ELSE!][!IF "$temp_name = 'EMIOS_1_CH_26'"!]
[!VAR "temp_name_MCU"="string('EMIOS1_CH26')"!][!//
[!ELSE!][!//
[!ERROR "There is no DMA for this channel, please update again"!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
    [!IF "node:exists(node:refs('ASPathDataOfSchema:/AUTOSAR/Mcu')/McuModuleConfiguration/*/McuDMA/*/DMAChannelEnable[.='true']/../McuDMASource[.=$temp_name_MCU])"!][!//
        [!VAR "temp_ICU_DMA"="node:refs('ASPathDataOfSchema:/AUTOSAR/Mcu')/McuModuleConfiguration/*/McuDMA/*/DMAChannelEnable[.='true']/../McuDMASource[.=$temp_name_MCU]/../DMAChannelId"!][!//
    [!ELSE!][!//
        [!ERROR "There is no DMA for this channel, please update again"!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//
    [!"$temp_ICU_DMA"!]U, /*ICU DMA channel*/
[!ELSE!][!//
    (boolean)FALSE, /*Icu with DMA is disabled */
    0U, /*ICU DMA channel*/
[!ENDIF!][!//
[!ENDIF!][!//
#endif
    [!ENDIF!][!/*
    */!]}[!IF "$idx!=$count"!],
         [!ENDIF!]
[!VAR "idx" = "$idx + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//
};



/**@brief PostBuild Configuration */
/*
*   @brief Configured Hardware channels
*   @implements    DICU02310
*
*/
[!VAR "LoopVar1"="0"!][!//
[!VAR "NoOfChannels" = "num:i(IcuMaxChannel - 1)"!][!//
/*
* @violates @ref Icu_PBcfg_c_2 external ... could be made static
*/
CONST(Icu_ChannelType,ICU_VAR) Icu_ChannelId_[!"@index"!][[!"IcuMaxChannel"!]]=

{
    [!FOR "x" = "0" TO "num:i(count(IcuChannel/*))"!][!/*
  */!][!LOOP "IcuChannel/*"!][!/*
  */!][!VAR "Loop"="num:i($LoopVar1)"!][!/*
  */!][!IF "IcuChannelId = $Loop"!][!/*
  */!]  ICU_[!"IcuHwChannel"!] [!/*
         */!][!IF "$x < $NoOfChannels"!],[!ENDIF!]
       [!ENDIF!][!/*
    */!][!ENDLOOP!][!/*

    */!][!VAR "LoopVar1"="$LoopVar1 + 1"!][!/*
    */!][!ENDFOR!]
 };


/**
* @brief PostBuild Configuration
* @implements    DICU02315
*/

/*
* @violates @ref Icu_PBcfg_c_2 external ... could be made static
* @violates @ref Icu_PBcfg_c_3 precautions to prevent the contents
*        of a header file being included twice
*/
CONST(Icu_ConfigType, ICU_CONST) [!"@name"!] =
{
    (Icu_ChannelType)[!"num:i(IcuMaxChannel)"!], /* The number of channels configured*/
    Icu_InitPBChannel_[!"@index"!],
    Icu_InitPBChannelIndex_[!"@index"!],
    Icu_ChannelId_[!"@index"!],
    Icu_InitPBHWMap_[!"@index"!],
    Icu_InitPBHWWKMap_[!"@index"!],
#ifdef ICU_DMA_SUPPORTED   
    [!IF "$DmaPresent = 1"!]Icu_DMA_InitHWMap_[!"@index"!],[!ELSE!]NULL_PTR,[!ENDIF!]
    [!IF "$DmaPresent = 1"!]Icu_InitDMAChannelIndex_[!"@index"!],[!ELSE!]NULL_PTR,[!ENDIF!]
#endif    
    (Icu_ClockPrescalerType)[!"IcuEXT_ISR_IFCPRDigitalFilter"!]U,
    #if (ICU_DUAL_CLOCK_MODE == STD_ON)
    (Icu_ClockPrescalerType)[!"IcuEXT_ISRaltIFCPRDigitalFilter"!]U,
#endif  
};

[!ENDLOOP!]
/*
* @violates @ref Icu_PBcfg_c_7 This is required as per autosar Requirement, 
*/
#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
*  @file  Icu_PBcfg.c
* @violates @ref Icu_PBcfg_c_1 MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before "#include"
*/

/*
* @violates @ref Icu_PBcfg_c_3 precautions to prevent the contents
*        of a header file being included twice
*/
#include "MemMap.h"

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

#endif /* ICU_PRECOMPILE_SUPPORT */

#ifdef __cplusplus
}
#endif

[!ENDCODE!]
