[!CODE!][!//
/**
*   @file    Fls_Cfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
*   @details Definitions of all Pre-compile configuration structures.
*
*   @addtogroup FLS
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : Flash_Memory
*   Dependencies         : 
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
* @section fls_cfg_c_REF_1
* Violates MISRA 2004 Required Rule 19.15, Repeated include files, Precautions shall be taken in
* order to prevent the contents of a header file being included twice.
* Because of Autosar requirement MEMMAP003 of memory mapping
*
* @section fls_cfg_c_REF_2
* Violates MISRA 2004 Advisory Rule 11.4,  A cast should not be performed between a pointer
* to object type and a different pointer to object type
* Due to casting between a pointer and unsigned long
*
* @section fls_cfg_c_REF_4
* Violates MISRA 2004 Required Rule 1.2, No reliance shall be placed on undefined or unspecified behaviour
* This violation is because of complex statement
*
* @section fls_cfg_c_REF_8
* Violates MISRA 2004 Required Rule 11.1, Conversions shall not be performed between a pointer
* to a function and any type other than an integral type contents in that address.
* This violation is due to casting unsigned long to pointer and access these addresses for updating
* contents in that address.
*
* @section fls_cfg_c_REF_9
* Violates MISRA 2004 Advisory Rule 19.1, Only preprocessor statements and comments before '#include'
* Because of Autosar requirement MEMMAP003 of memory mapping
*
* @section fls_cfg_c_REF_12
* Violates MISRA 2004 Required Rule 11.5, A cast shall not be performed that removes any const and
* volatile qualification from the type address by a pointer
* Because of removing the const qualification from the type address by a pointer
*
* @section fls_cfg_c_REF_13
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that
* 31 character significance and case sensitivity are supported for external identifiers
* This violation is due to the requirement that requests to have a file version check.
*
* @section fls_cfg_c_REF_15
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31
* characters. These Mcro  names are decided as per AUTOSAR guideline.
*
* @section fls_cfg_c_REF_19
* Violates MISRA 2004 Required Rule 8.12,
* When an array is declared with external linkage, its size shall be stated explicitly or defined
* implicitly by initialization.
* The size of the required array eliment is fixed for one compiler. But across compilers this size
* will vary. So in this array definition specific size is not mentioned.
*
* @section fls_cfg_c_REF_20
* Violates MISRA 2004 Required Rule 10.1,
* The value of an expression of integer type shall not be implicitly converted to a different underlying type if:
* a. it is not a conversion to a wider integer type of the same signedness, or
* b. the expression is complex, or
* c. the expression is not constant and is a function argument, or
* d. the expression is not constant and is a return expression.
* The expression is constant so as per above part (c) this expression is required
*
* @section fls_cfg_c_REF_21
* Violates MISRA 2004 Required Rule 20.2,
* The name of standard library macros, objects and functions shall not be reused.
* This violation is because of library macros, objects and functions are reused
*
* @section fls_cfg_c_REF_29
* Violates MISRA 2004 Required Rule 16.9, A function identifier shall only be used with either a
* preceding &, or with a parenthesised parameter list, which may be empty.
* This function identifier is used as function pointer.
*
* @section fls_cfg_c_REF_30
* Violates MISRA 2004 Advisory Rule 6.3, Typedefs that indicate size and signedness should be used in place of the basic types
*
* @section fls_cfg_c_REF_31
* Violates MISRA 2004 Required Rule 8.8, An external object or function shall be declared in one and only one file
*
*/

/* @implements     DFLS02072 */

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fls.h"
[!IF "NonAutosar/FlsDisableDemReportErrorStatus ='false'"!][!//
#include "Dem.h"
[!ENDIF!][!//
#ifdef FLS_PRECOMPILE_SUPPORT

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* @implements     DFLS02068 */
#define FLS_VENDOR_ID_PCFG_C                      43
/*
* @violates @ref fls_cfg_c_REF_13 The compiler/linker shall be checked
* to ensure that 31 character significance and case sensitivity are supported for external identifiers
*/
/*
* @violates @ref fls_cfg_c_REF_15 Identifiers more than 31 characters.
*/
#define FLS_AR_RELEASE_MAJOR_VERSION_PCFG_C       4
/*
* @violates @ref fls_cfg_c_REF_13 The compiler/linker shall be checked
* to ensure that 31 character significance and case sensitivity are supported for external identifiers
*/
/*
* @violates @ref fls_cfg_c_REF_15 Identifiers more than 31 characters.
*/
#define FLS_AR_RELEASE_MINOR_VERSION_PCFG_C       0
/*
* @violates @ref fls_cfg_c_REF_13 The compiler/linker shall be checked
* to ensure that 31 character significance and case sensitivity are supported for external identifiers
*/
/*
* @violates @ref fls_cfg_c_REF_15 Identifiers more than 31 characters.
*/
#define FLS_AR_RELEASE_REVISION_VERSION_PCFG_C    3
#define FLS_SW_MAJOR_VERSION_PCFG_C               1
#define FLS_SW_MINOR_VERSION_PCFG_C               0
#define FLS_SW_PATCH_VERSION_PCFG_C               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Fls header file are of the same vendor */
/* @violates @ref fls_cfg_c_REF_20 Implicitly converted to a different underlying type */
#if (FLS_VENDOR_ID_PCFG_C != FLS_VENDOR_ID)
    #error "Fls_Cfg.c and Fls.h have different vendor ids"
#endif
/* Check if current file and Fls header file are of the same Autosar version */
#if ((FLS_AR_RELEASE_MAJOR_VERSION_PCFG_C    != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (FLS_AR_RELEASE_MINOR_VERSION_PCFG_C    != FLS_AR_RELEASE_MINOR_VERSION) || \
     (FLS_AR_RELEASE_REVISION_VERSION_PCFG_C != FLS_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Fls_Cfg.c and Fls.h are different"
#endif
/* Check if current file and Fls header file are of the same Software version */
#if ((FLS_SW_MAJOR_VERSION_PCFG_C != FLS_SW_MAJOR_VERSION) || \
     (FLS_SW_MINOR_VERSION_PCFG_C != FLS_SW_MINOR_VERSION) || \
     (FLS_SW_PATCH_VERSION_PCFG_C != FLS_SW_PATCH_VERSION))
    #error "Software Version Numbers of Fls_Cfg.c and Fls.h are different"
#endif

[!IF "NonAutosar/FlsDisableDemReportErrorStatus ='false'"!][!//
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
 /* Check if source file and Dem header file are of the same version */
 #if ((FLS_AR_RELEASE_MAJOR_VERSION_CFG != DEM_AR_RELEASE_MAJOR_VERSION) || \
     (FLS_AR_RELEASE_MINOR_VERSION_CFG != DEM_AR_RELEASE_MINOR_VERSION))
 #error "AutoSar Version Numbers of Fls_Cfg.h and Dem.h are different"
 #endif
#endif
[!ENDIF!][!//

[!VAR "INDEX0" = "0"!][!//
[!VAR "INDEX1" = "0"!][!//
[!VAR "INDEX2" = "0"!][!//
[!LOOP "FlsConfigSet/*"!][!//
    [!IF "node:exists(FlsJobEndNotification)"!][!//
    [!VAR "INDEX0" = "1"!][!//
    [!ENDIF!][!//
    [!IF "node:exists(FlsJobErrorNotification)"!][!//
    [!VAR "INDEX1" = "1"!][!//
    [!ENDIF!][!//
    [!IF "node:exists(FlsACCallback)"!][!//
    [!VAR "INDEX2" = "1"!][!//
    [!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$INDEX0 = '1.0' or $INDEX1 = '1.0' or $INDEX2 = '1.0'"!][!//

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#define FLS_START_SEC_CODE
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"
[!LOOP "text:order(text:split(normalize-space(text:join(FlsConfigSet/*[1]/FlsJobEndNotification | FlsConfigSet/*[1]/FlsJobErrorNotification | FlsConfigSet/*[1]/FlsACCallback))))"!][!//

/* Declaration of Fls notification function ([!"."!]())*/
/* @violates @ref fls_cfg_c_REF_21 The name of standard library macros, objects and functions shall not be reused */
extern FUNC( void, FLS_CODE ) [!"."!]( void );

[!ENDLOOP!][!//
#define FLS_STOP_SEC_CODE
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"

[!ENDIF!][!//

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

[!IF "FlsGeneral/FlsAcLoadOnJobStart != 'true'"!][!//
#define FLS_START_SEC_CONST_UNSPECIFIED
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"
/* Position independent erase/write access code in ROM */
/*
* @violates @ref fls_cfg_c_REF_31  An external object or function shall be declared in one and only one file
*/
extern FUNC(void, FLS_CODE) Fls_LLD_AccessCode(P2VAR(volatile uint32, AUTOMATIC, FLS_CODE) regBasePtr,\
                                        P2FUNC(void, FLS_CODE, CallBack)(),\
                                        P2VAR(volatile uint32, AUTOMATIC, FLS_CODE) timerCounterAC);
 
#define FLS_STOP_SEC_CONST_UNSPECIFIED
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"

[!ELSE!][!//

[!IF "count(text:grep(FlsConfigSet/*[1]/FlsAcErasePointer | FlsConfigSet/*[1]/FlsAcWritePointer, '^(\s*NULL_PTR\s*)|(\s*NULL\s*)$')) != count(FlsConfigSet/*[1]) * 2"!][!//

#define FLS_START_SEC_CODE
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"
[!LOOP "text:order(text:split(normalize-space(text:join(FlsConfigSet/*[1]/FlsAcErasePointer | FlsConfigSet/*[1]/FlsAcWritePointer))))"!][!//
[!IF ". != 'NULL_PTR' and . != 'NULL'"!][!//
/* Declaration of Fls Access Code Pointer ([!"."!])*/
/*
* @violates @ref fls_cfg_c_REF_21 The name of standard library macros, objects and functions shall not be reused
* @violates @ref fls_cfg_c_REF_30 Typedefs that indicate size and signedness 
* should be used in place of the basic types
*/
extern char [!"."!];

[!ENDIF!][!//
[!ENDLOOP!][!//
#define FLS_STOP_SEC_CODE
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"

[!ENDIF!][!//

[!ENDIF!][!//
/*
* @violates @ref fls_cfg_c_REF_15 Identifiers more than 31 characters.
*/
#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"
/**
* @brief         Values for production code Event Ids.
* @details       FLS production code Event Ids.
*
*/
[!VAR "FlsDemErrorEnable" = "'false'"!][!//
[!IF "NonAutosar/FlsDisableDemReportErrorStatus ='false'"!][!//
[!VAR "FlsDemErrorEnable" = "'true'"!][!//
[!LOOP "FlsConfigSet/*[1]/FlsDemEventParameterRefs/*"!][!//
[!VAR "CurrentDemSet"="@name"!][!//
[!IF "not(node:empty(./FlsDemEventParameterRefs/FLS_E_COMPARE_FAILED))"!][!//
CONST(Dem_EventIdType, FLS_CONST)  Fls_E_CompareFailed = (Dem_EventIdType)[!"node:ref(node:current())/@name"!];
[!ELSEIF "not(node:empty(./FlsDemEventParameterRefs/FLS_E_ERASE_FAILED))"!][!//
CONST(Dem_EventIdType, FLS_CONST)  Fls_E_EraseFailed = (Dem_EventIdType)[!"node:ref(node:current())/@name"!];
[!ELSEIF "not(node:empty(./FlsDemEventParameterRefs/FLS_E_READ_FAILED))"!][!//
CONST(Dem_EventIdType, FLS_CONST)  Fls_E_ReadFailed = (Dem_EventIdType)[!"node:ref(node:current())/@name"!];
[!ELSEIF "not(node:empty(./FlsDemEventParameterRefs/FLS_E_UNEXPECTED_FLASH_ID))"!][!//
CONST(Dem_EventIdType, FLS_CONST)  Fls_E_UnexpectedFlashId = (Dem_EventIdType)[!"node:ref(node:current())/@name"!];
[!ELSEIF "not(node:empty(./FlsDemEventParameterRefs/FLS_E_WRITE_FAILED))"!][!//
CONST(Dem_EventIdType, FLS_CONST)  Fls_E_WriteFailed = (Dem_EventIdType)[!"node:ref(node:current())/@name"!];
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDIF!][!//
/*
* @violates @ref fls_cfg_c_REF_15 Identifiers more than 31 characters.
*/
#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"

[!LOOP "FlsConfigSet/*[1]"!][!//
#define FLS_START_SEC_CONFIG_DATA_8
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"
/* FlsSectorFlags[] ([!"node:name(.)"!]) */
STATIC CONST(uint8, FLS_CONST) [!"node:name(.)"!]_FlsSectorFlags[[!"num:i(count(FlsSectorList/FlsSector/*))"!]] =
{
[!LOOP "FlsSectorList/FlsSector/*"!][!//
[!VAR "FLS_FLAG" = "0"!][!//
    [!IF "./FlsSectorEraseAsynch"!]FLS_SECTOR_ERASE_ASYNCH[!VAR "FLS_FLAG" = "1"!][!ENDIF!][!//
[!IF "./FlsPageWriteAsynch"!][!IF "$FLS_FLAG = 1"!] | [!ELSE!][!VAR "FLS_FLAG" = "1"!][!ENDIF!]FLS_PAGE_WRITE_ASYNCH[!ENDIF!][!//
[!IF "$FLS_FLAG = 0"!]0U[!ENDIF!][!IF "not(node:islast())"!],[!ENDIF!] /* ([!"node:name(.)"!]) */
[!ENDLOOP!][!//
};
/* FlsSectorUnlock[] ([!"node:name(.)"!]) */
STATIC CONST(uint8, FLS_CONST) [!"node:name(.)"!]_FlsSectorUnlock[[!"num:i(count(FlsSectorList/FlsSector/*))"!]] =
{
[!LOOP "FlsSectorList/FlsSector/*"!][!//
    [!IF "./FlsPhysicalSectorUnlock"!]1U[!ELSE!]0U[!ENDIF!][!IF "not(node:islast())"!],[!ENDIF!] /* ([!"node:name(.)"!]) */
[!ENDLOOP!][!//
};
#define FLS_STOP_SEC_CONFIG_DATA_8
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"

/*
* @violates @ref fls_cfg_c_REF_15 Identifiers more than 31 characters.
*/
#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"
/* FlsSectorEndAddr[] ([!"node:name(.)"!]) */
STATIC CONST(Fls_AddressType, FLS_CONST) [!"node:name(.)"!]_FlsSectorEndAddr[[!"num:i(count(FlsSectorList/FlsSector/*))"!]] =
{
[!LOOP "FlsSectorList/FlsSector/*"!][!//
    [!"num:i(./FlsSectorSize + ./FlsSectorStartaddress - 1)"!]U[!IF "not(node:islast())"!],[!ENDIF!] /* FlsSectorEndAddr ([!"node:name(.)"!])*/
[!ENDLOOP!][!//
};
/* FlsPageSize[] ([!"node:name(.)"!]) */
STATIC CONST(Fls_LengthType, FLS_CONST) [!"node:name(.)"!]_FlsPageSize[[!"num:i(count(FlsSectorList/FlsSector/*))"!]] =
{
[!LOOP "FlsSectorList/FlsSector/*"!][!//
    [!"./FlsPageSize"!]U[!IF "not(node:islast())"!],[!ENDIF!] /* FlsPageSize ([!"node:name(.)"!]) */
[!ENDLOOP!][!//
};
/* FlsProgrammingSize[] ([!"node:name(.)"!]) */
STATIC CONST(Fls_LengthType, FLS_CONST) [!"node:name(.)"!]_FlsProgSize[[!"num:i(count(FlsSectorList/FlsSector/*))"!]] =
{
[!LOOP "FlsSectorList/FlsSector/*"!][!//
/* @violates @ref fls_cfg_c_REF_20 Implicitly converted to a different underlying type */
    [!"./FlsProgrammingSize"!][!IF "not(node:islast())"!],[!ENDIF!] /* FlsProgrammingSize ([!"node:name(.)"!]) */
[!ENDLOOP!][!//
/* @violates @ref fls_cfg_c_REF_20 Implicitly converted to a different underlying type */
};
/* FlsPhysicalSector[] ([!"node:name(.)"!]) */
/*
* @violates @ref fls_cfg_c_REF_15 Identifiers more than 31 characters.
*/
STATIC CONST(Fls_LLD_PhysicalSectorType, FLS_CONST) [!"node:name(.)"!]_FlsPhysicalSector[[!"num:i(count(FlsSectorList/FlsSector/*))"!]] =
{
[!LOOP "FlsSectorList/FlsSector/*"!][!//
    [!"./FlsPhysicalSector"!][!IF "not(node:islast())"!],[!ENDIF!] /* FlsPhysicalSector ([!"node:name(.)"!]) */
[!ENDLOOP!][!//
};
[!MACRO "DEM_EVENT_CFG","DEM_EVENT_NAME","DELIMITER"!][!//
    [!NOCODE!][!//
        [!VAR "NodeFound" = "'false'"!][!//
        [!LOOP "./FlsDemEventParameterRefs/*"!][!//      
            [!IF "node:name(.)=$DEM_EVENT_NAME"!][!//
                [!VAR "NodeFound" = "'true'"!][!//
                [!IF "not(node:empty(.))"!][!// node is empty when it does not exist or its value is empty
                    [!IF "node:exists(node:ref(.))"!][!//
                        [!CODE!]{STD_ON, [!"node:value(node:ref(.)/DemEventId)"!]U}[!"$DELIMITER"!]    /* [!"node:name(.)"!] parameters */[!CR!][!ENDCODE!] 
                    [!ELSE!][!//
                        [!ERROR "Invalid reference for $DEM_EVENT_NAME"!]
                    [!ENDIF!][!//
                [!ELSE!][!//
                    [!CODE!]{STD_OFF, 0U}[!"$DELIMITER"!]   /* [!"$DEM_EVENT_NAME"!] parameters */[!CR!][!ENDCODE!]
                [!ENDIF!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
        [!IF "$NodeFound='false'"!]
            [!CODE!]{STD_OFF, 0U}[!"$DELIMITER"!]   /* [!"$DEM_EVENT_NAME"!] parameters */[!CR!][!ENDCODE!]
        [!ENDIF!]
    [!ENDNOCODE!][!//
[!ENDMACRO!][!//
/**
* @brief        Structure used to set function pointers notification, working mode
* @implements   DFLS02073, DFLS02074, DFLS02075, DFLS02076, DFLS02077, DFLS02078, DFLS02079, DFLS02080, DFLS02081, DFLS02082, DFLS02083, DFLS02084, DFLS02085
*/
/* Fls module initialization data */ 
CONST(Fls_ConfigType, FLS_CONST) Fls_ConfigSetPC =
{
    /*
    * @violates @ref fls_cfg_c_REF_12 A cast shall not be performed that removes any const and
    * volatile qualification from the type address by a pointer
    * @violates @ref fls_cfg_c_REF_2 A cast should not be performed
    * between a pointer to object type and a different pointer to object type
    * @violates @ref fls_cfg_c_REF_8 Conversions shall not be performed between 
    * a pointer to a function and any type other than an integral type
    * @violates @ref fls_cfg_c_REF_4 No reliance shall be placed on
    * undefined or unspecified behaviour
    */    
    (Fls_LLD_AcErasePtrType)[!IF "../../FlsGeneral/FlsAcLoadOnJobStart"!][!IF "normalize-space(./FlsAcErasePointer) = 'NULL_PTR' or normalize-space(./FlsAcErasePointer) = 'NULL'"!][!"normalize-space(./FlsAcErase)"!][!ELSE!]&[!"./FlsAcErasePointer"!][!ENDIF!][!ELSE!]&Fls_LLD_AccessCode[!ENDIF!], /* FlsAcErase */
    /*
    * @violates @ref fls_cfg_c_REF_12 A cast shall not be performed that removes any const and
    * volatile qualification from the type address by a pointer
    * @violates @ref fls_cfg_c_REF_2 A cast should not be performed
    * between a pointer to object type and a different pointer to object type
    * @violates @ref fls_cfg_c_REF_8 Conversions shall not be performed between 
    * a pointer to a function and any type other than an integral type
    * @violates @ref fls_cfg_c_REF_4 No reliance shall be placed on
    * undefined or unspecified behaviour
    */      
    (Fls_LLD_AcWritePtrType)[!IF "../../FlsGeneral/FlsAcLoadOnJobStart"!][!IF "normalize-space(./FlsAcWritePointer) = 'NULL_PTR' or normalize-space(./FlsAcWritePointer) = 'NULL'"!][!"normalize-space(./FlsAcWrite)"!][!ELSE!]&[!"./FlsAcWritePointer"!][!ENDIF!][!ELSE!]&Fls_LLD_AccessCode[!ENDIF!], /* FlsAcWrite */
    /*
    * @violates @ref fls_cfg_c_REF_29 A function identifier shall only be used with either a
    * preceding &, or with a parenthesised parameter list, which may be empty.
    */
    [!IF "node:exists(FlsACCallback)"!][!"./FlsACCallback"!][!ELSE!]NULL_PTR[!ENDIF!], /* FlsACCallback */
    /*
    * @violates @ref fls_cfg_c_REF_29 A function identifier shall only be used with either a
    * preceding &, or with a parenthesised parameter list, which may be empty.
    */    
    [!IF "node:exists(FlsJobEndNotification)"!][!"./FlsJobEndNotification"!][!ELSE!]NULL_PTR[!ENDIF!], /* FlsJobEndNotification */
    /*
    * @violates @ref fls_cfg_c_REF_29 A function identifier shall only be used with either a
    * preceding &, or with a parenthesised parameter list, which may be empty.
    */    
    [!IF "node:exists(FlsJobErrorNotification)"!][!"./FlsJobErrorNotification"!][!ELSE!]NULL_PTR[!ENDIF!], /* FlsJobErrorNotification */
    [!"./FlsDefaultMode"!], /* FlsDefaultMode */
    [!"./FlsMaxReadFastMode"!]U, /* FlsMaxReadFastMode */
    [!"./FlsMaxReadNormalMode"!]U, /* FlsMaxReadNormalMode */
    [!"./FlsMaxWriteFastMode"!]U, /* FlsMaxWriteFastMode */
    [!"./FlsMaxWriteNormalMode"!]U, /* FlsMaxWriteNormalMode */
    [!"num:i(count(FlsSectorList/FlsSector/*))"!]U, /* FlsSectorCount */
    [!"node:name(.)"!]_FlsSectorEndAddr, /* FlsSectorEndAddr[]  */
    [!"node:name(.)"!]_FlsPhysicalSector, /* FlsPhysicalSector[] */
    [!"node:name(.)"!]_FlsSectorFlags, /* FlsSectorFlags[] */
    [!"node:name(.)"!]_FlsPageSize, /* FlsPageSize[] */
    [!"node:name(.)"!]_FlsProgSize, /* FlsProgSize[] */
    [!"node:name(.)"!]_FlsSectorUnlock[!IF "$FlsDemErrorEnable"!],[!ENDIF!] /* FlsSectorUnlock[] */
[!IF "$FlsDemErrorEnable"!][!//  
    /**
     * @brief   DEM error parameters
     */
/* @violates @ref fls_cfg_c_REF_20 Implicitly converted to a different underlying type */
[!CALL "DEM_EVENT_CFG","DEM_EVENT_NAME"="'FLS_E_COMPARE_FAILED'","DELIMITER"="','"!][!//
/* @violates @ref fls_cfg_c_REF_20 Implicitly converted to a different underlying type */
[!CALL "DEM_EVENT_CFG","DEM_EVENT_NAME"="'FLS_E_ERASE_FAILED'","DELIMITER"="','"!][!//
/* @violates @ref fls_cfg_c_REF_20 Implicitly converted to a different underlying type */
[!CALL "DEM_EVENT_CFG","DEM_EVENT_NAME"="'FLS_E_READ_FAILED'","DELIMITER"="','"!][!//
/* @violates @ref fls_cfg_c_REF_20 Implicitly converted to a different underlying type */
[!CALL "DEM_EVENT_CFG","DEM_EVENT_NAME"="'FLS_E_UNEXPECTED_FLASH_ID'","DELIMITER"="','"!][!//
/* @violates @ref fls_cfg_c_REF_20 Implicitly converted to a different underlying type */
[!CALL "DEM_EVENT_CFG","DEM_EVENT_NAME"="'FLS_E_WRITE_FAILED'","DELIMITER"="' '"!][!//
[!ENDIF!][!//
};
/*
* @violates @ref fls_cfg_c_REF_15 Identifiers more than 31 characters.
*/
#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref fls_cfg_c_REF_1 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
* @violates @ref fls_cfg_c_REF_9 Only preprocessor statements
* and comments before '#include'
*/
#include "MemMap.h"

[!ENDLOOP!][!//
[!ENDCODE!][!//

#endif /* FLS_PRECOMPILE_SUPPORT */
#ifdef __cplusplus
}
#endif

/** @}*/
