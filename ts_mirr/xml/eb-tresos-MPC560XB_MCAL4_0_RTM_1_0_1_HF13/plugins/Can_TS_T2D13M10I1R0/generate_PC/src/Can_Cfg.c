/**
*   @file    Can_Cfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Can - module interface
*   @details Configuration Structures for PreCompile.
*
*   @addtogroup CAN_DRIVER
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : FLEXCAN
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
* @section Can_Cfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1,#include preceded by non preproc directives.
* This violation is not fixed since the inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section Can_Cfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h
* There are different kinds of execution code sections.
*
* @section Can_Cfg_c_REF_3
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely on the
* significance of more than 31 characters.
*
* @section Can_Cfg_c_REF_4
* Violates MISRA 2004 Required Rule 1.4, Identifier clash
* This violation is due to the requirement that request to have a file version check.
*
* @section Can_Cfg_c_REF_5
* Violates MISRA 2004 Required Rule 12.8, The right hand operand of a shift operator shall lie between zero
* and one less than the width in bits of the underlying type of the left hand operand.
*
* @section Can_Cfg_c_REF_6
* Violates MISRA 2004 Required Rule 10.5 , If the bitwise operators ~ and << are applied to an operand
* of underlying type unsigned char or unsigned shot, the result shall be immediately cast to the underlying type
* of the operand
* This violation is due to the operator << was used.
*
* @section Can_Cfg_c_REF_7
* Violates MISRA 2004 Required Rule 11.1, cast from unsigned long to pointer.
* This macro compute the address of any register by using the hardware ofsset of the controller. The address calculated as an unsigned int
* is passed to  a macro for initializing the pointer with that address. (ex: see REG_WRITE32 macro).
*
* @section Can_Cfg_c_REF_8
* Violates MISRA 2004 Advisory Rule 11.4, a cast should not be performed between a pointer to object
* type and a different pointer to object type.
*
* @section Can_Cfg_c_REF_9
* Violates MISRA 2004 Required Rule 16.9, a function identifier shall only be used with either a
* preceding &, or with a parenthesised parameter list, which may be empty.
*
* @section Can_Cfg_c_REF_10
* Violates MISRA 2004 Required Rule 8.10, external ... could be made static
* The respective code could not be made static because of layers architecture design of the driver.
*
* @section Can_Cfg_c_REF_11
* Violates MISRA 2004 Required Rule  8.8, declaring an external identifier in a header file, 
* that will be included in any file where the identifier is defined or used
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Can.h"
#include "Can_LLD.h"

/**
* @file           Can_Cfg.c
* @implements     DCAN02660
*/

[!NOCODE!]
/*
 Example 1 of valid configuration:
   Source Clock = 8MHz, Bit Rate = 1Mb/sec,
   CanControllerTimeQuanta  = 125ns
      -> Presclaer = 1, CanBit = 8Tq (these ale calculated in background)
   CanControllerPropSeg  = 3, CanControllerSeg1 = 0, CanControllerSeg2 = 1, CanControllerSyncJumpWidth = 0.

 Example 2 of valid configuration:
   Source Clock = 8MHz, Bit Rate = 125Kb/sec,
   CanControllerTimeQuanta  = 1000ns
      -> Presclaer = 8, CanBit = 8Tq (these ale calculated in background)
   CanControllerPropSeg  = 0, CanControllerSeg1 = 2, CanControllerSeg2 = 2, CanControllerSyncJumpWidth = 2.
*/
[!ENDNOCODE!]

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* @violates @ref Can_Cfg_c_REF_3 This is required as per autosar Requirement. */
#define CAN_AR_RELEASE_MAJOR_VERSION_PCCFG_C     4
/* @violates @ref Can_Cfg_c_REF_3 This is required as per autosar Requirement. */
#define CAN_AR_RELEASE_MINOR_VERSION_PCCFG_C     0
/* @violates @ref Can_Cfg_c_REF_4 Violates MISRA 2004 Required Rule 1.4,  Identifier clash */
/* @violates @ref Can_Cfg_c_REF_3 This is required as per autosar Requirement. */
#define CAN_AR_RELEASE_REVISION_VERSION_PCCFG_C  3
#define CAN_SW_MAJOR_VERSION_PCCFG_C             1
#define CAN_SW_MINOR_VERSION_PCCFG_C             0
#define CAN_SW_PATCH_VERSION_PCCFG_C             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and CAN header file are of the same Autosar version */
#if ((CAN_AR_RELEASE_MAJOR_VERSION_PCCFG_C != CAN_AR_RELEASE_MAJOR_VERSION) || \
     (CAN_AR_RELEASE_MINOR_VERSION_PCCFG_C != CAN_AR_RELEASE_MINOR_VERSION) || \
     (CAN_AR_RELEASE_REVISION_VERSION_PCCFG_C != CAN_AR_RELEASE_REVISION_VERSION))
  #error "AutoSar Version Numbers of Can_Cfg.c and Can.h are different"
#endif


/* Check if current file and CAN header file are of the same Software version */
#if ((CAN_SW_MAJOR_VERSION_PCCFG_C != CAN_SW_MAJOR_VERSION) || \
     (CAN_SW_MINOR_VERSION_PCCFG_C != CAN_SW_MINOR_VERSION) || \
     (CAN_SW_PATCH_VERSION_PCCFG_C != CAN_SW_PATCH_VERSION))
       #error "Software Version Numbers of Can_Cfg.c and Can.h are different"
#endif
/* @violates @ref Can_Cfg_c_REF_3 This is required as per autosar Requirement. */
#define CAN_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_Cfg_c_REF_2 Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h */
#include "MemMap.h"

/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
/**
* @brief    Prototype of User Notifications
*/
[!NOCODE!][!INCLUDE "Can_NotifyCheck_Src.m"!][!ENDNOCODE!]
[!NOCODE!][!INCLUDE "Can_SourceClock.m"!][!ENDNOCODE!]
[!NOCODE!][!CALL "CanRxFifoWarningNotification_PC"!][!ENDNOCODE!]
[!NOCODE!][!CALL "CanRxFifoOverflowNotification_PC"!][!ENDNOCODE!]
[!NOCODE!][!CALL "CanErrorControllerNotification_PC"!][!ENDNOCODE!]

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

[!NOCODE!] [!/* This section is for global variables, local to this file */!]
    [!VAR "CanCrystalFrequency" ="CanGeneral/CanCrystalFrequencyHz"!][!/* Frequency provided by user */!]
    [!VAR "Tsyncsegment"="1"!][!/* Sync_seg has 1 Tq length */!]
    [!/*
    Sync-seg = is the segment that is used to synchronise the nodes on the bus. A bit edge (if there is a data change) is expected during this segment.
    Prop-Seg = is a period of time that is used to compensate for physical delay times within the network.
    Phase-seg1 = is a buffer segment that may be lengthened during resynchronisation to compensate for oscillator drift and positive phase differences between the oscillators of the transmitting and receiving node(s).
    Phase-seg2 = is a buffer segment that may be shortened during resynchronisation (described below) to compensate for negative phase errors and oscillator drift.

    The Sample point is always at the end of Phase-seg1 and is the time at which the bus level is read and interpreted as the value of the current bit.
    Whether transmitting or receiving, all nodes on a single CAN bus must have the same nominal bit time. Bit time is programmable at each node on a CAN Bus and is a function
        of the period of the oscillator local to each node, the value that is user-programmed into a Baud Rate Prescaler (BRP) register in the controller at each node, and the programmed number of time quanta per bit.
    When any node receives a data frame or a remote frame, it is necessary for the receiver to synchronise with the transmitter.
        1. The first is hard synchronisation and occurs at Start-of-Frame (SOF).
        2. For subsequent bits in any received frame, if a bit edge does not occur in the Sync-seg segment of bit time, resynchronisation is automatically invoked and will shorten or lengthen the current bit time depending
            on where the edge occurs. The maximum amount by which the bit time is lengthened or shortened is determined by a user-programmable number of time quanta known as the Synchronisation Jump Width (SJW).
    */!]

[!ENDNOCODE!]

[!NOCODE!]
[!VAR "CanDemErrorEnable" = "'false'"!]
[!IF "NonAutosar/CanDisableDemReportErrorStatus ='false'"!][!//
    [!VAR "nconf" = "count(CanConfigSet/*)"!]
    [!VAR "iconf" = "0"!]
    [!FOR "iconf" = "1" TO "$nconf"!]
        [!IF "node:exists(CanConfigSet/*[$iconf]/CanDemEventParameterRefs)"!]
            [!VAR "CanDemErrorEnable" = "'true'"!]
        [!ENDIF!]
    [!ENDFOR!]
[!ENDIF!]
[!ENDNOCODE!][!//

[!NOCODE!]
    [!VAR "TableIdCount" = "0"!]
    [!LOOP "CanConfigSet/*[1]/CanController/*"!]
        [!IF "CanControllerRxFifoEnable = 'true'"!]
            [!VAR "TableIdCount" = "$TableIdCount+8"!]
        [!ENDIF!]
    [!ENDLOOP!]
    [!IF "$TableIdCount != 0"!]
[!CODE!]

#if (CAN_RXFIFO_ENABLE == STD_ON)
/**
* @brief          Can_RxFiFoTableIdConfigType
* @details        Identifier FormatA:
*               - StandardID: bits [29:19]
*               - ExtendedID: bits [29:1]
*               Identifier FormatB:
*               - StandardID: bits [29:19] & [13:3]
*               - ExtendedID: bits [29:16] & [13:0] (only 14 MSB)
*               Identifier FormatC:
*               - StandardID: bits [31::24] & [23:16] & [15:8] & [7:0] (only 8 MSB)
*               - ExtendedID: bits [31::24] & [23:16] & [15:8] & [7:0] (only 8 MSB)
*
* @implements     DCAN02642
*/
/* @violates @ref Can_Cfg_c_REF_10 Violates MISRA 2004 Required Rule 8.10, external ... could be made static */
CONST(Can_RxFiFoTableIdConfigType, CAN_CONST) RxFifoTableID_PCConfig[CAN_MAXTABLEID_0] =
    {[!ENDCODE!]
    [!VAR "TableIdCountLocal" = "0"!]
    [!LOOP "CanConfigSet/*[1]/CanController/*"!]
        [!VAR "ControllerCanHwChannel" = "CanHwChannel"!]
        [!IF "CanControllerRxFifoEnable = 'true'"!]
            [!VAR "tableidvalue" = "0"!]
            [!VAR "NoofTable" = "0"!]
            [!LOOP "CanRxFifo/CanRxFifoTable/*"!]
            [!VAR "NoofTable" = "$NoofTable+1"!]
                [!VAR "TableIdCountLocal" = "$TableIdCountLocal+1"!]
                [!IF "../../CanControllerIDAcceptanceMode = 'D'"!]
                    [!VAR "tableidvalue" = "0"!]
                [!ELSE!]
                    [!VAR "tableidvalue" = "num:i(CanIDValue0)"!]
                [!ENDIF!]
                [!VAR "tablefiltermaskvalue" = "num:i(CanMBFilterMaskValue)"!]

                [!IF "../../CanControllerIDAcceptanceMode = 'C'"!]
                    [!VAR "tableidvalue0" = "bit:shl($tableidvalue,24)"!]
                    [!VAR "tableidvalue1" = "bit:shl(num:i(CanIDValue1),16)"!]
                    [!VAR "tableidvalue2" = "bit:shl(num:i(CanIDValue2),8)"!]
                    [!VAR "tableidvalue3" = "bit:shl(num:i(CanIDValue3),0)"!]
                    [!VAR "tableidvalue" = "bit:or($tableidvalue0,$tableidvalue1)"!]
                    [!VAR "tableidvalue" = "bit:or($tableidvalue,$tableidvalue2)"!]
                    [!VAR "tableidvalue" = "bit:or($tableidvalue,$tableidvalue3)"!]
                [!ELSEIF "CanTableIDType = 'Standard'"!]
                    [!IF "../../CanControllerIDAcceptanceMode = 'A'"!]
                        [!VAR "tableidvalue" = "bit:shl($tableidvalue,19)"!]
                        [!VAR "tablefiltermaskvalue" = "bit:shl($tablefiltermaskvalue,19)"!]
                        [!VAR "tablefiltermaskvalue" = "bit:or($tablefiltermaskvalue,num:hextoint('0xc0000000'))"!]
                    [!ENDIF!]
                    [!IF "../../CanControllerIDAcceptanceMode = 'B'"!]
                        [!VAR "tableidvalue0" = "bit:shl($tableidvalue,19)"!]
                        [!VAR "tableidvalue1" = "bit:shl(num:i(CanIDValue1),3)"!]
                        [!VAR "tableidvalue" = "bit:or($tableidvalue0,$tableidvalue1)"!]
                        [!VAR "tablefiltermaskvalue0" = "bit:and($tablefiltermaskvalue,num:hextoint('0x3ff800'))"!]
                        [!VAR "tablefiltermaskvalue1" = "bit:and($tablefiltermaskvalue,num:hextoint('0x7ff'))"!]
                        [!VAR "tablefiltermaskvalue0" = "bit:shl($tablefiltermaskvalue0,8)"!]
                        [!VAR "tablefiltermaskvalue1" = "bit:shl($tablefiltermaskvalue1,3)"!]
                        [!VAR "tablefiltermaskvalue" = "bit:or($tablefiltermaskvalue0,$tablefiltermaskvalue1)"!]
                        [!VAR "tablefiltermaskvalue" = "bit:or($tablefiltermaskvalue,num:hextoint('0xc000c000'))"!]
                    [!ENDIF!]
                [!ELSE!]
                    [!IF "../../CanControllerIDAcceptanceMode = 'A'"!]
                        [!VAR "tableidvalue" = "bit:shl($tableidvalue,1)"!]
                        [!VAR "tableidvalue" = "bit:bitset($tableidvalue,30)"!]
                        [!VAR "tablefiltermaskvalue" = "bit:shl($tablefiltermaskvalue,1)"!]
                        [!VAR "tablefiltermaskvalue" = "bit:or($tablefiltermaskvalue,num:hextoint('0xc0000000'))"!]
                    [!ENDIF!]
                    [!IF "../../CanControllerIDAcceptanceMode = 'B'"!]
                        [!VAR "tableidvalue0" = "bit:shl($tableidvalue,16)"!]
                        [!VAR "tableidvalue" = "bit:or($tableidvalue0,num:i(CanIDValue1))"!]
                        [!VAR "tableidvalue" = "bit:bitset($tableidvalue,30)"!]
                        [!VAR "tableidvalue" = "bit:bitset($tableidvalue,14)"!]
                        [!VAR "tablefiltermaskvalue0" = "bit:and($tablefiltermaskvalue,num:hextoint('0xfffc000'))"!]
                        [!VAR "tablefiltermaskvalue1" = "bit:and($tablefiltermaskvalue,num:hextoint('0x3fff'))"!]
                        [!VAR "tablefiltermaskvalue0" = "bit:shl($tablefiltermaskvalue0,2)"!]
                        [!VAR "tablefiltermaskvalue" = "bit:or($tablefiltermaskvalue0,$tablefiltermaskvalue1)"!]
                        [!VAR "tablefiltermaskvalue" = "bit:or($tablefiltermaskvalue,num:hextoint('0xc000c000'))"!]
                    [!ENDIF!]
                [!ENDIF!]
        [!CODE!]
        {
            /* [!"@name"!] of [!IF "../../CanControllerIDAcceptanceMode != 'C'"!]type [!"(CanTableIDType)"!] and[!ENDIF!] format[!"../../CanControllerIDAcceptanceMode"!] for [!"$ControllerCanHwChannel"!] */
            (uint32)[!"num:inttohex($tableidvalue,8)"!]U,
            /* Filter Mask (correspond to RXIMR register) */
            (uint32)[!"num:inttohex($tablefiltermaskvalue,8)"!]U
        }[!IF "$TableIdCount != $TableIdCountLocal"!],[!ENDIF!][!ENDCODE!]
            [!ENDLOOP!]
        [!IF "$NoofTable < 8"!]
         [!ERROR!] RXFifo elements in table are less than 8 in [!"node:name(.)"!] ControllerCanHwChannel[!"$ControllerCanHwChannel"!]    [!ENDERROR!]
        [!ENDIF!]
        [!ENDIF!]
    [!ENDLOOP!]
[!CODE!]};
#endif /* (CAN_RXFIFO_ENABLE == STD_ON) */ [!ENDCODE!]
    [!ENDIF!]
    [!ENDNOCODE!]


/*==================================================================================================*/
/**
* @brief          Filter Masks
* @details        Filter Masks
*
* @implements     DCAN02643
*/
/* @violates @ref Can_Cfg_c_REF_10 Violates MISRA 2004 Required Rule 8.10, external ... could be made static */
CONST(Can_IdType, CAN_CONST) Can_FilterMasks_PC[CAN_MAXFILTERCOUNT_0] =
    {   [!VAR "filtermaskcount" = "0"!][!NOCODE!][!VAR "MASK_COUNT"="num:i(count(CanConfigSet/*[1]/CanController/*/CanFilterMask/*))"!][!VAR "END_COMMA"="0"!][!ENDNOCODE!][!LOOP "CanConfigSet/*[1]/CanController/*"!][!LOOP "CanFilterMask/*"!][!VAR "END_COMMA"="$END_COMMA + 1"!]
        /* FilterMasks_PC[[!"num:i($filtermaskcount)"!]], "[!"@name"!]" */
        (Can_IdType)[!"num:inttohex(CanFilterMaskValue)"!]U[!NOCODE!][!IF "$END_COMMA < $MASK_COUNT"!][!CODE!],[!ENDCODE!][!ELSE!][!ENDIF!][!ENDNOCODE!][!VAR "filtermaskcount" = "$filtermaskcount + 1"!][!ENDLOOP!][!ENDLOOP!]
    };


/*==================================================================================================*/
/**
* @brief          Information about message buffers
* @details        (CAN100)Several TX hardware objects with unique HTHs may be configured. The CanIf module provides the HTH as parameter of the TX request. See Figure 7-2 for a possible configuration.
*
* @implements     DCAN02657
*/
/* @violates @ref Can_Cfg_c_REF_10 Violates MISRA 2004 Required Rule 8.10, external ... could be made static */
CONST(Can_MBConfigObjectType, CAN_CONST) MessageBufferConfigs_PC[CAN_MAXMBCOUNT_0] =
    {
        [!VAR "CanControllerIdValue"="0"!][!VAR "ObjectID"="0"!][!VAR "END_COMMA"="0"!][!VAR "MASK_COUNT"="num:i(count(CanConfigSet/*[1]/CanHardwareObject/*))"!][!LOOP "node:order(CanConfigSet/*[1]/CanHardwareObject/*,'node:value(CanObjectId)')"!][!VAR "END_COMMA"="$END_COMMA + 1"!]
        [!NOCODE!]
        /*
        When Backwards Compatibility Configuration (BCC) feature of CAN controller is used in the configuration, below should be the
        configuration of CanHardwareObject.

        CanFilterMask configuration in CanController container:
        ========================================================
        CanFilterMask_0
        CanFilterMask_1
        CanFilterMask_3

        CanHardwareObject_0 to CanHardwareObject_13 and CanHardwareObject_16 to CanHardwareObject_32/CanHardwareObject_63:
        ==================================================================================================================
        CanFilterMask_0 should be selected in CanFilterMaskRef

        CanHardwareObject_14 :
        ======================
        CanFilterMask_1 should be selected in CanFilterMaskRef

        CanHardwareObject_15 :
        ======================
        CanFilterMask_2 should be selected in CanFilterMaskRef
        */
        [!VAR "BccSupportStatus"="0"!]
        [!VAR "CanObjectName"="node:name(.)"!]
        [!SELECT "node:ref(CanControllerRef)"!]
            [!IF "CanBccSupport = 'true'"!]
                [!VAR "BccSupportStatus"="1"!]
            [!ENDIF!]
        [!ENDSELECT!]
         [!IF "CanObjectType = 'RECEIVE' and CanHandleType = 'BASIC'"!]         
        [!IF "contains(node:path(node:ref(CanControllerRef)),node:path(../../CanController))"!]
        [!ELSE!]
            [!ERROR!]
                Please select CanControllerRef from the "[!"substring-after(node:path(../../CanController),'ELEMENTS/')"!]" container which "[!"node:name(.)"!]" belongs to.
            [!ENDERROR!]
        [!ENDIF!]
        [!IF "contains(node:path(node:ref(CanFilterMaskRef)),node:path(node:ref(CanControllerRef)))"!]
        [!ELSE!]
            [!ERROR!]
            Please select below FilterMaskReference from the "[!"substring-after(node:path(node:ref(CanControllerRef)),'ELEMENTS/')"!]" to which "[!"node:name(.)"!]" belongs to.
            [!SELECT "node:ref(CanControllerRef)"!]
                [!LOOP "CanFilterMask/*"!]
                    [!"node:name(.)"!]
                [!ENDLOOP!]
            [!ENDSELECT!]
            [!ENDERROR!]
        [!ENDIF!]
        [!ENDIF!]
        [!IF "$BccSupportStatus = 1"!]
            [!SELECT "node:ref(CanControllerRef)"!]
            [!LOOP "CanFilterMask/*"!]
                [!IF "node:pos(.) = 0"!]
                    [!VAR "FirstFilterMask"="node:name(.)"!]
                [!ELSEIF "node:pos(.) = 1"!]
                    [!VAR "SecondFilterMask"="node:name(.)"!]
                [!ELSEIF "node:pos(.) = 2"!]
                    [!VAR "ThirdFilterMask"="node:name(.)"!]
                [!ENDIF!]
            [!ENDLOOP!]
            [!ENDSELECT!]

            [!IF "CanObjectType = 'RECEIVE' and CanHandleType = 'BASIC'"!]
            [!SELECT "node:ref(CanFilterMaskRef)"!]
                [!VAR "FilterMaskIndex"="@index"!]
            [!ENDSELECT!]
            [!IF "((num:i($ObjectID) < 14) or (num:i($ObjectID) > 15)) and ($FilterMaskIndex > 0)"!]
                [!ERROR!]
                [!SELECT "node:ref(CanFilterMaskRef)"!] Wrong FilterMask "[!"node:name(.)"!]" is selected for "[!"$CanObjectName"!]".
                    Select "[!"$FirstFilterMask"!]" for MB0-MB13 and MB16-MB31(Corresponds to RxGlobalMask).
                [!ENDSELECT!]
                [!ENDERROR!]
            [!ELSEIF "(num:i($ObjectID) = 14) and ($FilterMaskIndex != 1)"!]
                [!ERROR!]
                [!SELECT "node:ref(CanFilterMaskRef)"!] Wrong FilterMask "[!"node:name(.)"!]" is selected for "[!"$CanObjectName"!]".
                    Select "[!"$SecondFilterMask"!]" for MB14 (Corresponds to Rx14Mask).
                [!ENDSELECT!]
                [!ENDERROR!]
            [!ELSEIF "(num:i($ObjectID) = 15) and ($FilterMaskIndex != 2)"!]
                [!ERROR!]
                [!SELECT "node:ref(CanFilterMaskRef)"!] Wrong FilterMask "[!"node:name(.)"!]" is selected for "[!"$CanObjectName"!]".
                    Select "[!"$ThirdFilterMask"!]" for MB15 (Corresponds to Rx15Mask).
                [!ENDSELECT!]
                [!ENDERROR!]
            [!ENDIF!]
            [!ENDIF!]
            [!SELECT "node:ref(CanControllerRef)"!]
            [!IF "CanControllerId = num:i($CanControllerIdValue)"!]
                [!VAR "ObjectID"="$ObjectID + 1"!]
            [!ELSE!]
                [!VAR "ObjectID"="0"!]
                [!VAR "CanControllerIdValue"="$CanControllerIdValue + 1"!]
            [!ENDIF!]
            [!ENDSELECT!]
        [!ENDIF!]
        [!ENDNOCODE!]
        /* [!"@name"!] Message Buffer of Can Controller ID = [!SELECT "node:ref(CanControllerRef)"!][!"num:i(CanControllerId)"!]U[!ENDSELECT!] */
        {
            /* IdMaskIndex */
            [!NOCODE!]
            [!IF "CanObjectType = 'RECEIVE'"!]
                [!IF "CanHandleType = 'BASIC'"!]
                    [!VAR "filtermaskref" = "node:path(node:ref(CanFilterMaskRef))"!]
                    [!VAR "filtermaskcount" = "0"!]
                    [!LOOP "../../CanController/*"!]
                        [!LOOP "CanFilterMask/*"!]
                            [!IF "$filtermaskref = node:path(.)"!]
                                [!CODE!](Can_HwHandleType)[!"num:i($filtermaskcount)"!]U,[!ENDCODE!][!BREAK!]
                            [!ENDIF!]
                            [!VAR "filtermaskcount" = "$filtermaskcount + 1"!]
                        [!ENDLOOP!]
                    [!ENDLOOP!]
                [!ELSE!][!CODE!](Can_HwHandleType)CAN_MAXMASKCOUNT,[!ENDCODE!]
                [!ENDIF!]                  
            [!ELSE!][!CODE!](Can_HwHandleType)0U,[!ENDCODE!]
            [!ENDIF!][!ENDNOCODE!]
            /* ControllerId  - based on the order from CanController list */
            [!SELECT "node:ref(CanControllerRef)"!](uint8)[!"num:i(CanControllerId)"!]U,[!ENDSELECT!]
            /* ID type: EXTENDED, STANDARD, MIXED */
            (CanIdType)CAN_[!"CanIdType"!],
            /* Receive/Transmit MB configuration */
            (Can_ObjType)CAN_[!"CanObjectType"!],
            /* MessageId */
            (Can_IdType)[!"num:inttohex(CanIdValue)"!]U,
            /* Local priority bits used for arbitration */
            (uint8)[!"num:inttohex(CanMBPrio)"!]U,
            /* Hardware Object ID */
            (Can_HwHandleType)[!"num:inttohex(CanObjectId)"!]U,
            /* Read/Write period reference used when polling mode is selected for the controller */
            [!IF "node:refexists(CanMainFunctionRWPeriodRef)"!][!SELECT "node:ref(CanMainFunctionRWPeriodRef)"!][!CODE!](uint8)[!"@index"!]U/* HOH reference is from [!"node:name(.)"!] */[!ENDCODE!][!ENDSELECT!][!ELSE!][!CODE!](uint8)0U /* HOH configured for interrupt mode, reference not used */[!ENDCODE!][!ENDIF!]
        }[!NOCODE!][!IF "$END_COMMA < $MASK_COUNT"!][!CODE!],[!ENDCODE!][!ELSE!][!ENDIF!][!ENDNOCODE!]
        [!ENDLOOP!]
    };


/*==================================================================================================*/
/**
* @brief          Configuration of FlexCan controller
* @details        Configuration of FlexCan controller
*
* @implements     DCAN02644
*/
[!VAR "LoopVar"="0"!][!//
[!LOOP "CanConfigSet/*[1]"!][!//
[!LOOP "CanController/*"!][!//
[!NOCODE!][!VAR "MASK_COUNT2"="num:i(count(CanControllerBaudrateConfig/*))"!][!VAR "END_COMMA2"="0"!][!ENDNOCODE!]
/* @violates @ref Can_Cfg_c_REF_10 Violates MISRA 2004 Required Rule 8.10, external ... could be made static */
CONST(Can_ControllerBaudrateConfigType, CAN_CONST) ControllerBaudrateConfigs_PC_[!"CanControllerId"!][CAN_CFGSET0_MAX_BAUDRATE_FC_[!"substring-after(CanHwChannel,'FlexCAN_')"!]_[!"@index"!]] = {
    [!LOOP "CanControllerBaudrateConfig/*"!][!VAR "END_COMMA2"="$END_COMMA2 + 1"!][!//
[!NOCODE!]
        [!/*
        Sync-seg = is the segment that is used to synchronise the nodes on the bus. A bit edge (if there is a data change) is expected during this segment.
        Prop-Seg = is a period of time that is used to compensate for physical delay times within the network.
        Phase-seg1 = is a buffer segment that may be lengthened during resynchronisation to compensate for oscillator drift and positive phase differences between the oscillators of the transmitting and receiving node(s).
        Phase-seg2 = is a buffer segment that may be shortened during resynchronisation (described below) to compensate for negative phase errors and oscillator drift.

        The Sample point is always at the end of Phase-seg1 and is the time at which the bus level is read and interpreted as the value of the current bit.
        Whether transmitting or receiving, all nodes on a single CAN bus must have the same nominal bit time. Bit time is programmable at each node on a CAN Bus and is a function
            of the period of the oscillator local to each node, the value that is user-programmed into a Baud Rate Prescaler (BRP) register in the controller at each node, and the programmed number of time quanta per bit.

        When any node receives a data frame or a remote frame, it is necessary for the receiver to synchronise with the transmitter.
            1. The first is hard synchronisation and occurs at Start-of-Frame (SOF).
            2. For subsequent bits in any received frame, if a bit edge does not occur in the Sync-seg segment of bit time, resynchronisation is automatically invoked and will shorten or lengthen the current bit time depending
                on where the edge occurs. The maximum amount by which the bit time is lengthened or shortened is determined by a user-programmable number of time quanta known as the Synchronisation Jump Width (SJW).
        */!]
    [!/* Make the selection of source clock: from MCU or from CAN bus. */!]
    [!IF "../../CanClockFromBus"!][!/* Select the source for Can module from MCU module */!]
        [!VAR "CANClockFrequencyFromMcu" = "0"!]
        [!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]
            [!VAR "CANClockFrequencyFromMcu_Alternate" = "0"!]
        [!ENDIF!][!ENDIF!]
        [!NOCODE!][!CALL "CanClockFrequency_M"!][!ENDNOCODE!]
        [!VAR "CANClockFrequency" = "$CANClockFrequencyFromMcu"!][!/* Get the clock from MCU */!]
        [!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]
            [!VAR "CANClockFrequency_Alternate" = "$CANClockFrequencyFromMcu_Alternate"!][!/* Get the clock from MCU */!]
        [!ENDIF!][!ENDIF!]
    [!ELSE!][!/* Select the source for Can module from external OSC */!]
        [!VAR "CANClockFrequency" = "$CanCrystalFrequency"!][!/* Get the value from extern OSC without Mcu connection */!]
    [!ENDIF!]

    [!/* Calculate the prescaler */!]
    [!VAR "Prescaler" = "num:i(CanControllerPrescaller)"!][!/* Calculate Prescaler value. */!]
    [!VAR "CanControllerTimeQuanta" = "$Prescaler div ($CANClockFrequency)"!]
    [!IF "../../CanClockFromBus"!][!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]
        [!VAR "Prescaler_Alternate" = "num:i(CanControllerPrescaller_Alt)"!][!/* Calculate Prescaler value. */!]
        [!VAR "CanControllerTimeQuanta_Alternate" = "$Prescaler_Alternate div ($CANClockFrequency_Alternate)"!]
    [!ENDIF!][!ENDIF!][!ENDIF!]

    [!/* Calculate the Number of Tq/Can bit for the current baud rate and clock selection. */!]
    [!VAR "CANTimeQuanta" = "num:i(round((1 div (num:i(CanControllerBaudRate) * 1000)) div $CanControllerTimeQuanta))"!]
    [!IF "($CANTimeQuanta < 8) or ($CANTimeQuanta > 25)"!]
        [!ERROR!]
            For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!], the desired CAN bus Nominal Bit Time (NBT) should be an integer number of Time Quanta (CAN system clock periods) from 8 to 25.
            Current No of CanTimeQuantas = [!"num:i($CANTimeQuanta)"!] --->>> OUT of RANGE [8-25]
            No of CanTimeQuantas = (1 / CanControllerBaudRate) / CanControllerTimeQuanta; where CanControllerTimeQuanta = (Prescaler / CANClockFrequency).
        [!ENDERROR!]
    [!ENDIF!]
    [!IF "../../CanClockFromBus"!][!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]
        [!VAR "CANTimeQuanta_Alternate" = "num:i(round((1 div (num:i(CanControllerBaudRate) * 1000)) div $CanControllerTimeQuanta_Alternate))"!]
        [!IF "($CANTimeQuanta_Alternate < 8) or ($CANTimeQuanta_Alternate > 25)"!]
            [!ERROR!]
                For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!], the desired CAN bus Nominal Bit Time (NBT) should be an integer number of Time Quanta (CAN system clock periods) from 8 to 25.
                Current No of CanTimeQuantas = [!"num:i($CANTimeQuanta_Alternate)"!] --->>> OUT of RANGE [8-25]
                No of CanTimeQuantas = (1 / CanControllerBaudRate) / CanControllerTimeQuanta_Alternate; where CanControllerTimeQuanta_Alternate = (Prescaler_Alternate / CANClockFrequency_Alternate).
            [!ENDERROR!]
        [!ENDIF!]
    [!ENDIF!][!ENDIF!][!ENDIF!]

    [!IF "CanAdvancedSetting = 'false'"!]
        [!IF "CanControllerCheckCanStandard"!]
            [!/* Check the CAN bit time compliance - get the values from Tresos interface and check. */!]
            [!VAR "NoTimeQuantas"= "num:i($Tsyncsegment + num:i(CanControllerPropSeg) + 1 + num:i(CanControllerSeg1) + 1 + num:i(CanControllerSeg2) + 1)"!]
            [!VAR "TimeSegment1" = "num:i(num:i(CanControllerPropSeg) + num:i(CanControllerSeg1) + 2)"!]
            [!VAR "TimeSegment2" = "num:i(num:i(CanControllerSeg2) + 1)"!]
            [!VAR "C" = "num:i(CanControllerSeg2)"!]
            [!VAR "C2" = "num:i(num:i(CanControllerSeg1) + 2)"!]
            [!/* Check whether CanControllerSeg2 is greater than (CanControllerSeg1+2). It should always be leass than or equal to (CanControllerSeg1+2).*/!]
            [!IF " $C > $C2 "!]
                [!ERROR!]
                For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!], CanPhaseSegment2 should be less than or equal to (CanPhaseSegment1+2)[!ENDERROR!]
            [!ENDIF!]
            [!/* Check whether NoTimeQuantas is less than 8 and greater than 25. It should always be in the range [8..25] */!]
            [!IF "($NoTimeQuantas < 8) or ($NoTimeQuantas > 25)"!]
                [!ERROR!]
                    For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!],
                    No of CanTimeQuantas should be between [8 .. 25], current value is [!"num:i($NoTimeQuantas)"!].
                    BitTimeQuanta = SyncSeg + PropSeg + PSEG1 + 2 + PSEG2 + 1.
                    SyncSeg = 1. PropSeg = [!"num:i(CanControllerPropSeg)"!]. PSEG1 = [!"num:i(CanControllerSeg1)"!]. PSEG2 = [!"num:i(CanControllerSeg2)"!].[!ENDERROR!]
             [!ENDIF!]
             [!/* ResynchronizationJumpWidth should always less that or equal to TimeSegment2 and it should with in range [1...3] */!]
             [!IF "num:i($TimeSegment2) < 5"!]
                 [!IF "((CanControllerSyncJumpWidth+1) < 1) or ((CanControllerSyncJumpWidth+1) > (num:i($TimeSegment2)))"!]
                     [!ERROR!]For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!], If TimeSegment2 [=CanControllerSeg2+1] is [!"num:i(num:i(CanControllerSeg2)+1)"!], (CanControllerSyncJumpWidth+1) should be less than ["(num:i($TimeSegment2))"] instead of [!"CanControllerSyncJumpWidth"!]+1.[!ENDERROR!]
                 [!ENDIF!]
             [!ELSEIF "((CanControllerSyncJumpWidth+1) < 1) or ((CanControllerSyncJumpWidth+1) > 4) "!]
                 [!ERROR!]For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!], If TimeSegment2 [=CanControllerSeg2+1] is [!"num:i(num:i(CanControllerSeg2)+1)"!], (CanControllerSyncJumpWidth+1) should be between [1 .. 4] instead of [!"CanControllerSyncJumpWidth"!]+1.[!ENDERROR!]
             [!ENDIF!]
        [!ENDIF!]
    [!ELSE!]
    [!/* Initiates the derivation of the CAN bit timing values from the CanControllerBaudRate parameter. */!]
        [!VAR "BusPropogationDelay" ="5 div 1000000000"!][!/* Hard coded to 5ns/m. */!]
        [!VAR "PhysicalDelayOfBus"="CanBusLength * $BusPropogationDelay"!]
        [!/* Tprop_seg=TpropAB + TpropBA = 2 * (Tbus + Trx + Ttx). Ussually Trx=Ttx. */!]
        [!VAR "Tpropogationsegment"="2*($PhysicalDelayOfBus + 2 * (CanPropDelayTranceiver div 1000000000))"!]
        [!VAR "PropogationSegment"="round($Tpropogationsegment div $CanControllerTimeQuanta )"!]

        [!IF "($PropogationSegment >= 0) and ($PropogationSegment <= 7)"!]
            [!VAR "PhaseSegments" = "($CANTimeQuanta - $PropogationSegment - $Tsyncsegment - 3)"!]
            [!IF "$PhaseSegments >= 3"!]
                [!VAR "Modulo" = "$PhaseSegments mod 2"!]
                [!IF "$Modulo = 0"!]
                    [!VAR "PhaseSegment1" = "num:i($PhaseSegments div 2)"!]
                    [!VAR "PhaseSegment2" = "num:i($PhaseSegment1)"!]
                [!ELSE!]
                    [!VAR "PhaseSegment1" = "num:i(($PhaseSegments - 1) div 2)"!]
                    [!VAR "PhaseSegment2" = "num:i($PhaseSegment1 + 1)"!]
                [!ENDIF!]
                [!IF "($PhaseSegment1 > 7)"!]
                    [!ERROR!]
                    For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!],
                    PropSegment1 is out of range [0:7]. Current value is [!"num:i($PhaseSegment1)"!].
                    The bit length has [!"num:i($CANTimeQuanta)"!] Time Quantas.
                    Propagation Segment based bus length and tranceiver delay has [!"num:i($PropogationSegment)"!] Time Quantas.
                    [!ENDERROR!]
                [!ENDIF!]
                [!IF "($PhaseSegment2 < 1) or ($PhaseSegment2 > 7)"!]
                    [!ERROR!]
                    For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!],
                    PropSegment2 is out of range [1:7]. Current value is [!"num:i($PhaseSegment2)"!]
                    The bit length has [!"num:i($CANTimeQuanta)"!] Time Quantas.
                    Propagation Segment based bus length and tranceiver delay has [!"num:i($PropogationSegment)"!] Time Quantas.
                    [!ENDERROR!]
                [!ENDIF!]
                [!IF "$PhaseSegment1 < 4"!]
                    [!VAR "RJW" = "num:i($PhaseSegment1)"!]
                [!ELSE!]
                    [!VAR "RJW" = "3"!]
                [!ENDIF!]
            [!ELSE!]
                [!ERROR!] For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!], (Phase Segment1+Phase Segment2) must be >= 3. Increase no of CANTimeQuanta ([!"num:i($CANTimeQuanta)"!]) per bit or decrease PropSegment ([!"num:i($PropogationSegment)"!])(based CanBusLength and CanPropDelayTranceiver).[!ENDERROR!]
            [!ENDIF!]
        [!ELSE!]
            [!ERROR!]
            For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!],
            Propagation Segment is out of range [0:7].
            Delay A_to_B >= node output delay(A) + bus line delay(A+B) + node input delay(B)
            Prop_Seg >= Delay A_to_B + Delay B_to_A
            Prop_Seg >= 2 * [max(node output delay+ bus line delay + node input delay)]

            The formulas used:
            BusPropogationDelay =5 div 1000000000 /* Hard coded to 5ns/m. */
            PhysicalDelayOfBus = CanBusLength * BusPropogationDelay
            Tpropogationsegment = 2*(PhysicalDelayOfBus + 2 * (CanPropDelayTranceiver div 1000000000))
            PropogationSegment = round(Tpropogationsegment div CanControllerTimeQuanta )
            [!ENDERROR!]
        [!ENDIF!]

        [!VAR "NoTimeQuantas"= "num:i($Tsyncsegment + $PropogationSegment + 1 + $PhaseSegment1 + 1 + $PhaseSegment2 + 1)"!]
    [!ENDIF!]

    [!IF "CanControllerCheckCanStandard"!]
        [!/* Minimum ratio between the peripheral clock frequency and Can Bit rate Check */!]
        [!VAR "maxmb" = "0"!]
        [!LOOP "../../CanHardwareObject/*"!]
            [!SELECT "node:ref(CanControllerRef)"!]
                [!IF "num:i(CanControllerId) = num:i($x)"!]
                    [!VAR "maxmb" = "$maxmb+1"!]
                [!ENDIF!]
            [!ENDSELECT!]
        [!ENDLOOP!]

        [!IF "num:i($maxmb) <= 16"!]
            [!IF "($NoTimeQuantas * $Prescaler < 8)"!]
                [!ERROR!]
                For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!],
                When CanMessageBufferCount is <=16, Prescaler is [!"num:i($Prescaler)"!], No of CanTimeQuantas is [!"num:i($NoTimeQuantas)"!],
                Minimum Ratio should be 8, current value is [!"num:i($NoTimeQuantas * $Prescaler)"!].
                Increase Prescaler or NoTimeQuantas values.[!ENDERROR!]
            [!ENDIF!]
        [!ENDIF!]

        [!IF "(num:i($maxmb) > 16) and (num:i($maxmb) <= 32)"!]
            [!IF "($NoTimeQuantas * $Prescaler < 8)"!]
                [!ERROR!]
                For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!],
                When CanMessageBufferCount is >16 and <=32, Prescaler is [!"num:i($Prescaler)"!], No of CanTimeQuantas is [!"num:i($NoTimeQuantas)"!],
                Minimum Ratio should be 8, current value is [!"num:i($NoTimeQuantas * $Prescaler)"!].
                Increase Prescaler or NoTimeQuantas values.[!ENDERROR!]
            [!ENDIF!]
        [!ENDIF!]

        [!IF "(num:i($maxmb) > 32) and (num:i($maxmb) <= 64)"!]
            [!IF "($NoTimeQuantas * $Prescaler < 16)"!]
                [!ERROR!]
                    For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!],
                    When CanMessageBufferCount is >32 and <=64, Prescaler is [!"num:i($Prescaler)"!], No of CanTimeQuantas is [!"num:i($NoTimeQuantas)"!],
                    Minimum Ratio should be 16, current value is [!"num:i($NoTimeQuantas * $Prescaler)"!].
                    Increase Prescaler or NoTimeQuantas values.[!ENDERROR!]
            [!ENDIF!]
        [!ENDIF!]
        [!IF "num:i($CANTimeQuanta) != num:i($NoTimeQuantas)"!]
            [!WARNING!]
                    For [!"node:name(.)"!] of CanController [!"../../CanHwChannel"!],
                    The No of CanTimeQuantas set by you ([!"$NoTimeQuantas"!]) is different by No of CanTimeQuantas calculated from clock settings ([!"num:i($CANTimeQuanta)"!]).
                    NoTimeQuantas = SyncSeg + PropSeg + PSEG1 + 2 + PSEG2 + 1 (from user settings).
                    NoCANTimeQuantas = (1 / CanControllerBaudRate) / CanControllerTimeQuanta;
                    Increase the Prescaller or the time segments.
            [!ENDWARNING!]
        [!ENDIF!]
    [!ENDIF!]
[!ENDNOCODE!]
    /*
        =================================================

        Clock Size = [!"$CANClockFrequency"!] Hz [!IF "../../CanClockFromBus"!] - Clock from MCU. [!ELSE!] - Clock from external OSC.[!ENDIF!]
        [!IF "../../CanClockFromBus"!][!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]Clock Size Alternate = [!"$CANClockFrequency_Alternate"!] Hz [!IF "../../CanClockFromBus"!] - Clock from MCU. [!ELSE!] - Clock from external OSC.[!ENDIF!] [!ENDIF!][!ENDIF!][!ENDIF!]
        Clock Prescaler = [!"$Prescaler"!] (1..256)
        [!IF "../../CanClockFromBus"!][!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]Clock Prescaler_Alternate = [!"$Prescaler_Alternate"!] (1..256)[!ENDIF!][!ENDIF!][!ENDIF!]
        CanBitRate = [!"CanControllerBaudRate"!] Kbps (1bps..1Mbps)
        Number CANTimeQuantas per bit = [!"$CANTimeQuanta"!] (8..25)
        [!IF "../../CanClockFromBus"!][!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]Number CANTimeQuantas_Alternate per bit = [!"$CANTimeQuanta_Alternate"!] (8..25)[!ENDIF!][!ENDIF!][!ENDIF!]
        CTRL Register Fields:
            PSEG1 = [!IF "CanAdvancedSetting"!][!"$PhaseSegment1"!][!ELSE!][!"CanControllerSeg1"!][!ENDIF!] (0..7)
            PSEG2 = [!IF "CanAdvancedSetting"!][!"$PhaseSegment2"!][!ELSE!][!"CanControllerSeg2"!][!ENDIF!] (1..7)
            PROPSEG = [!IF "CanAdvancedSetting"!][!"num:i($PropogationSegment)"!][!ELSE!][!"num:i(CanControllerPropSeg)"!][!ENDIF!] (0..7)
            RJW = [!IF "CanAdvancedSetting"!][!"$RJW"!][!ELSE!][!"CanControllerSyncJumpWidth"!][!ENDIF!] (0..3)
        =================================================
    */
    [!IF "../../CanControllerActivation = 'true'"!]
    /* Configuration for CanController ID[!"../../CanControllerId"!] == [!"../../CanHwChannel"!] */
    {
      /* ===== Control Register - CTRL ===== */
        /* CTRL[PRESDIV] - Clock Prescaler */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        (uint32)(([!"num:i(num:i($Prescaler) - 1)"!]U << FLEXCAN_CTRL_PRESDIV_SHIFT) |
        /* CTRL[RJW] - Resynchronization Jump Width */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "CanAdvancedSetting = 'false'"!][!"num:i(CanControllerSyncJumpWidth)"!][!ELSE!][!"num:i($RJW)"!][!ENDIF!]U << FLEXCAN_CTRL_RJW_SHIFT) |
        /* CTRL[PSEG1] - Segment 1 */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "CanAdvancedSetting = 'false'"!][!"num:i(CanControllerSeg1)"!][!ELSE!][!"num:i($PhaseSegment1)"!][!ENDIF!]U << FLEXCAN_CTRL_PSEG1_SHIFT) |
        /* CTRL[PSEG2] - Segment 2 */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "CanAdvancedSetting = 'false'"!][!"num:i(CanControllerSeg2)"!][!ELSE!][!"num:i($PhaseSegment2)"!][!ENDIF!]U << FLEXCAN_CTRL_PSEG2_SHIFT) |
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanClockFromBus = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_CLKSRC_SHIFT) |
        /* CTRL[LPB] - Loop-back mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanLoopBackMode = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_LPB_SHIFT) |
        /* CTRL[SMP] - Sampling mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanTrippleSamplingEnable = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_SMP_SHIFT) |
        /* CTRL[BOFF_REC] - Bus off recovery */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanAutoBusOffRecovery = 'true'"!]0U[!ELSE!]1U[!ENDIF!] << FLEXCAN_CTRL_BOFFREC_SHIFT) |
        /* CTRL[LBUF] - Lowest Buffer Transmitted First */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanLowestBuffTransmitFirst = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_LBUF_SHIFT) |
        /* CTRL[LOM] - Listen only mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanListenOnlyMode = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_LOM_SHIFT) |
        /* CTRL[PROPSEG] - Propagation segment */
        [!IF "CanAdvancedSetting = 'false'"!][!"num:i(CanControllerPropSeg)"!][!ELSE!][!"num:i($PropogationSegment)"!][!ENDIF!]U) ,

#if (CAN_DUAL_CLOCK_MODE == STD_ON)
    [!IF "../../CanClockFromBus"!][!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]
      /* ===== Control Register Alternate - CTRL ===== */
        /* CTRL[PRESDIV] - Clock Prescaler */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        (uint32)(([!"num:i(num:i($Prescaler_Alternate) - 1)"!]U << FLEXCAN_CTRL_PRESDIV_SHIFT) |
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "CanAdvancedSetting = 'false'"!][!"num:i(CanControllerSyncJumpWidth)"!][!ELSE!][!"num:i($RJW)"!][!ENDIF!]U << FLEXCAN_CTRL_RJW_SHIFT) |
        /* CTRL[PSEG1] - Segment 1 */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "CanAdvancedSetting = 'false'"!][!"num:i(CanControllerSeg1)"!][!ELSE!][!"num:i($PhaseSegment1)"!][!ENDIF!]U << FLEXCAN_CTRL_PSEG1_SHIFT) |
        /* CTRL[PSEG2] - Segment 2 */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "CanAdvancedSetting = 'false'"!][!"num:i(CanControllerSeg2)"!][!ELSE!][!"num:i($PhaseSegment2)"!][!ENDIF!]U << FLEXCAN_CTRL_PSEG2_SHIFT) |
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanClockFromBus = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_CLKSRC_SHIFT) |
        /* CTRL[LPB] - Loop-back mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanLoopBackMode = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_LPB_SHIFT) |
        /* CTRL[SMP] - Sampling mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanTrippleSamplingEnable = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_SMP_SHIFT) |
        /* CTRL[BOFF_REC] - Bus off recovery */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanAutoBusOffRecovery = 'true'"!]0U[!ELSE!]1U[!ENDIF!] << FLEXCAN_CTRL_BOFFREC_SHIFT) |
        /* CTRL[LBUF] - Lowest Buffer Transmitted First */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanLowestBuffTransmitFirst = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_LBUF_SHIFT) |
        /* CTRL[LOM] - Listen only mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        ([!IF "../../CanListenOnlyMode = 'true'"!]1U[!ELSE!]0U[!ENDIF!] << FLEXCAN_CTRL_LOM_SHIFT) |
        /* CTRL[PROPSEG] - Propagation segment */
        [!IF "CanAdvancedSetting = 'false'"!][!"num:i(CanControllerPropSeg)"!][!ELSE!][!"num:i($PropogationSegment)"!][!ENDIF!]U) ,
    [!ELSE!]    0U,[!ENDIF!][!ELSE!]    0U,[!ENDIF!]
    [!ELSE!]    0U,[!ENDIF!]
    [!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode) and (./../../../../../../CanGeneral/CanEnableDualClockMode = 'true') and (../../CanClockFromBus = 'false')"!]
    [!WARNING!]When dual clock feature is enabled (CanEnableDualClockMode), the clock from MCU should be selected (CanClockFromBus).[!ENDWARNING!][!ENDIF!]
#endif /* CAN_DUAL_CLOCK_MODE == STD_ON */

        (uint16)[!"CanControllerBaudRate"!]   /* [!"CanControllerBaudRate"!]kbps baud rate */
    }[!NOCODE!][!IF "$END_COMMA2 < $MASK_COUNT2"!][!CODE!],[!ENDCODE!][!ELSE!][!ENDIF!][!ENDNOCODE!]
    [!ELSE!]{
        /* [!"../../CanHwChannel"!] ControlRegister Default Configuration: 125 Kbps BaudRate with Oscillator clock 8MHz as Clock source and TimeQuantum of 1000ns. */
      /* ===== Control Register - CTRL ===== */
        /* CTRL[PRESDIV] - Clock Prescaler */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        (uint32)((7U << FLEXCAN_CTRL_PRESDIV_SHIFT) |
        /* CTRL[RJW] - Resynchronization Jump Width */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (2U << FLEXCAN_CTRL_RJW_SHIFT ) |
        /* CTRL[PSEG1] - Segment 1 */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (2U << FLEXCAN_CTRL_PSEG1_SHIFT) |
        /* CTRL[PSEG2] - Segment 2 */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (2U << FLEXCAN_CTRL_PSEG2_SHIFT) |
        /* CTRL[CLK_SRC] - Clock source */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_CLKSRC_SHIFT) |
        /* CTRL[LPB] - Loop-back mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_LPB_SHIFT) |
        /* CTRL[SMP] - Sampling mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_SMP_SHIFT) |
        /* CTRL[BOFF_REC] - Bus off recovery */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (1U << FLEXCAN_CTRL_BOFFREC_SHIFT) |
        /* CTRL[LBUF]  - Lowest Buffer Transmitted First */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_LBUF_SHIFT) |
        /* CTRL[LOM] - Listen only mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_LOM_SHIFT) |
        /* CTRL[PROPSEG] - Propagation segment */
        0U) ,

#if (CAN_DUAL_CLOCK_MODE == STD_ON)
      /* ===== Control Register Alternate - CTRL ===== */
        /* CTRL[PRESDIV] - Clock Prescaler */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        (uint32)((7U << FLEXCAN_CTRL_PRESDIV_SHIFT) |
        /* CTRL[RJW] - Resynchronization Jump Width */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (2U << FLEXCAN_CTRL_RJW_SHIFT ) |
        /* CTRL[PSEG1] - Segment 1 */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (2U << FLEXCAN_CTRL_PSEG1_SHIFT) |
        /* CTRL[PSEG2] - Segment 2 */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (2U << FLEXCAN_CTRL_PSEG2_SHIFT) |
        /* CTRL[CLK_SRC] - Clock source */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_CLKSRC_SHIFT) |
        /* CTRL[LPB] - Loop-back mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_LPB_SHIFT) |
        /* CTRL[SMP] - Sampling mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_SMP_SHIFT) |
        /* CTRL[BOFF_REC] - Bus off recovery */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (1U << FLEXCAN_CTRL_BOFFREC_SHIFT) |
        /* CTRL[LBUF]  - Lowest Buffer Transmitted First */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_LBUF_SHIFT) |
        /* CTRL[LOM] - Listen only mode */
        /*@violates @ref Can_Cfg_c_REF_5 The right hand operand of a shift operator shall lie between zero
              and one less than the width in bits of the underlying type of the left hand operand.*/
        /* @violates @ref Can_Cfg_c_REF_6 Violates MISRA 2004 Required Rule 10.5, the operator << was used. */
        (0U << FLEXCAN_CTRL_LOM_SHIFT) |
        /* CTRL[PROPSEG] - Propagation segment */
        0U) ,
#endif /* CAN_DUAL_CLOCK_MODE == STD_ON */

        (uint16)125U /* 125kbps baud rate */

    }[!NOCODE!][!IF "$END_COMMA2 < $MASK_COUNT2"!][!CODE!],[!ENDCODE!][!ELSE!][!ENDIF!][!ENDNOCODE!]
    [!ENDIF!][!ENDLOOP!]
  };
[!ENDLOOP!][!ENDLOOP!][!//

/*==================================================================================================*/
/**
* @brief          Description of individual FlexCan controllers on chip
* @details        Description of individual FlexCan controllers on chip
*
* @implements     DCAN02645
*/
[!SELECT "CanConfigSet/*[1]"!][!//
/* @violates @ref Can_Cfg_c_REF_10 Violates MISRA 2004 Required Rule 8.10, external ... could be made static */
CONST(Can_ControlerDescriptorType, CAN_CONST) ControlerDescriptors_PC[CAN_MAXCONTROLLERCOUNT_0] =
    {[!NOCODE!][!VAR "MASK_COUNT4"="num:i(count(CanController/*))"!][!VAR "END_COMMA4"="0"!][!ENDNOCODE!][!VAR "tableidcount" = "0"!]
        [!FOR "controllerid" = "0" TO "num:i(count(CanController/*) - 1)"!][!VAR "controllercount" = "0"!][!LOOP "CanController/*"!][!IF "CanControllerActivation = 'true' and CanControllerId = $controllerid"!][!VAR "END_COMMA4"="$END_COMMA4 + 1"!]
        /* ControlerDescriptor of [!"@name"!] */
        {
            /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. */
            [!IF "CanControllerActivation = 'true'"!](uint8)FLEXCAN_[!"substring-after(CanHwChannel,'FlexCAN_')"!]_OFFSET,[!ELSE!](uint8)FLEXCAN_NULL_OFFSET,[!ENDIF!]

            /* No. of Message Buffers for current controller. If RxFifo enabled will contains also the space of 8 MBs reserved for this. */
            [!NOCODE!][!VAR "maxmbcount" = "0"!][!LOOP "../../CanHardwareObject/*"!][!SELECT "node:ref(CanControllerRef)"!][!IF "num:i(CanControllerId) = num:i($controllerid)"!][!VAR "maxmbcount" = "$maxmbcount+1"!][!ENDIF!][!ENDSELECT!][!ENDLOOP!][!ENDNOCODE!]
            [!IF "CanControllerRxFifoEnable = 'true'"!][!VAR "maxmbcount" = "$maxmbcount+7"!][!ENDIF!](uint8)[!"num:i($maxmbcount)"!]U,
            [!IF "$maxmbcount>ecu:get('Can.CanConfigSet.CanMB')"!][!ERROR!]Maximum MBs exceed + RxFifo (if enabled) exceed [!"ecu:get('Can.CanConfigSet.CanMB')"!] space.[!ENDERROR!][!ENDIF!]
            /* No. of BaudRate configured for current controller */
            [!NOCODE!][!VAR "maxbrcount" = "num:i(count(CanControllerBaudrateConfig/*))"!][!ENDNOCODE!](uint8)[!"num:i($maxbrcount)"!]U,
            [!NOCODE!]
            [!IF "contains(node:path(node:ref(CanControllerDefaultBaudrate)),node:path(CanControllerBaudrateConfig))"!]
            [!ELSE!]
                [!ERROR!]
                    Please select CanControllerDefaultBaudrate from the "[!"substring-after(node:path(CanControllerBaudrateConfig),'ELEMENTS/')"!]" container.
                [!ENDERROR!]
            [!ENDIF!]
            [!ENDNOCODE!]
            /* Default BaudRate configured for current controller */
            [!VAR "defaultbaudrateref" = "node:path(node:ref(CanControllerDefaultBaudrate))"!][!VAR "defaultbaudrateindex" = "0"!][!LOOP "CanControllerBaudrateConfig/*"!][!IF "$defaultbaudrateref = node:path(.)"!](uint8)[!"num:i($defaultbaudrateindex)"!]U,[!BREAK!][!ENDIF!][!VAR "defaultbaudrateindex" = "$defaultbaudrateindex + 1"!][!ENDLOOP!]

            /* ControllerBaudrateConfigsPtr */
            ControllerBaudrateConfigs_PC_[!"CanControllerId"!],

#if (CAN_WAKEUP_SUPPORT == STD_ON)
            /* WakeUp source ID (ECU State Manager) */
            [!IF "node:refexists(CanWakeupSourceRef)"!][!SELECT "node:ref(CanWakeupSourceRef)"!][!CODE!](uint32)[!"num:i(EcuMWakeupSourceId)"!]U,[!ENDCODE!][!ENDSELECT!][!ELSE!][!CODE!](uint32)0U, /* EcuM source not used */[!ENDCODE!][!ENDIF!]
#endif /* (CAN_WAKEUP_SUPPORT == STD_ON) */

#if (CAN_RXFIFO_ENABLE == STD_ON)
            /* TableID Controller index */
            [!NOCODE!][!IF "CanControllerRxFifoEnable = 'true'"!][!VAR "tableidcontrollerindex" = "$tableidcount"!][!VAR "tableidcount" = "$tableidcount+8"!][!ELSE!][!VAR "tableidcontrollerindex" = "0"!][!ENDIF!][!ENDNOCODE!]
            (uint8)[!"num:i($tableidcontrollerindex)"!]U,

            /* Pointer to RxFifo Overflow notification function. */
            /* @violates @ref Can_Cfg_c_REF_7 cast from unsigned long to pointer. */
            /* @violates @ref Can_Cfg_c_REF_8 a cast should not be performed between a pointer to object */
            /* @violates @ref Can_Cfg_c_REF_9 a function identifier shall only be used with a &, or with a parenthesised parameter list*/
            [!IF "CanControllerRxFifoEnable = 'true'"!](Can_PCallBackType)[!"normalize-space(CanRxFifoOverflowNotification)"!],[!ELSE!](Can_PCallBackType)NULL_PTR,[!ENDIF!]

            /* Pointer to RxFifo Warning notification function. */
            /* @violates @ref Can_Cfg_c_REF_7 cast from unsigned long to pointer. */
            /* @violates @ref Can_Cfg_c_REF_8 a cast should not be performed between a pointer to object */
            /* @violates @ref Can_Cfg_c_REF_9 a function identifier shall only be used with a &, or with a parenthesised parameter list*/
            [!IF "CanControllerRxFifoEnable = 'true'"!](Can_PCallBackType)[!"normalize-space(CanRxFifoWarningNotification)"!],[!ELSE!](Can_PCallBackType)NULL_PTR,[!ENDIF!]
#endif /* (CAN_RXFIFO_ENABLE == STD_ON) */

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
            /* Pointer to Error interrupt notification function (ESR[ERR_INT]). */
#if (CAN_API_ERROR_STATUS == STD_ON)
            /* @violates @ref Can_Cfg_c_REF_7 cast from unsigned long to pointer. */
            /* @violates @ref Can_Cfg_c_REF_8 a cast should not be performed between a pointer to object */
            /* @violates @ref Can_Cfg_c_REF_9 a function identifier shall only be used with a &, or with a parenthesised parameter list*/
            [!IF "CanErrorControllerNotifEn = 'true'"!](Can_PCallBackType_ret)[!"normalize-space(CanErrorControllerNotification)"!],[!ELSE!](Can_PCallBackType_ret)NULL_PTR,[!ENDIF!]
#else
            /* @violates @ref Can_Cfg_c_REF_7 cast from unsigned long to pointer. */
            /* @violates @ref Can_Cfg_c_REF_8 a cast should not be performed between a pointer to object */
            /* @violates @ref Can_Cfg_c_REF_9 a function identifier shall only be used with a &, or with a parenthesised parameter list*/
            [!IF "CanErrorControllerNotifEn = 'true'"!](Can_PCallBackType)[!"normalize-space(CanErrorControllerNotification)"!],[!ELSE!](Can_PCallBackType)NULL_PTR,[!ENDIF!]
#endif /* (CAN_API_ERROR_STATUS == STD_ON) */
#endif /* (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */
      /* ===== Controller Options ===== */
        (uint32)([!IF "CanWakeUpSourceFilter = 'true'"!]/* This setting defines whether the integrated low-pass filter is applied to protect the Rx CAN input from spurious wake up. */
        CAN_CONTROLLERCONFIG_WAKEUP_SRC | [!ENDIF!]
        [!IF "CanSoftwareBusOffRecovery = 'true' "!]/* Software BusOff Recovery */
        CAN_CONTROLLERCONFIG_BUSOFFSWREC | [!ENDIF!]
        [!IF "CanControllerRxFifoEnable = 'true' "!]/* RX Fifo Enabled */
        CAN_CONTROLLERCONFIG_RXFIFO | [!ELSE!] /* RX Fifo Disabled */ [!ENDIF!]
        [!IF "CanLocalPriorityEn = 'true' "!]/* Local Priority Feature */
        CAN_CONTROLLERCONFIG_LPRIO_EN | [!ENDIF!]
        [!IF "CanWarningEnable = 'true' "!]/* Warning Interrupt Enable Feature */
        CAN_CONTROLLERCONFIG_WRNINT_EN | [!ENDIF!]
        [!IF "(CanErrorControllerNotifEn = 'true') and (normalize-space(CanErrorControllerNotification) != 'NULL_PTR') and (normalize-space(CanErrorControllerNotification) != '"NULL"') and (normalize-space(CanErrorControllerNotification) != 'NULL')"!]/* Error Notification enabled */
        CAN_CONTROLLERCONFIG_ERR_EN | [!ELSE!] /* Error interrupt */ [!ENDIF!]
[!IF "CanControllerRxFifoEnable = 'true'"!]#if (CAN_RXFIFO_ENABLE == STD_ON)
        [!IF "(normalize-space(CanRxFifoOverflowNotification) != 'NULL_PTR') and (normalize-space(CanRxFifoOverflowNotification) != '"NULL"') and (normalize-space(CanRxFifoOverflowNotification) != 'NULL')"!]/* Rx Fifo Overflow handling enabled */
        CAN_CONTROLLERCONFIG_OVER_EN | [!ELSE!] /* Rx Fifo Overflow handling disabled */ [!ENDIF!]
        [!IF "(normalize-space(CanRxFifoWarningNotification) != 'NULL_PTR') and (normalize-space(CanRxFifoWarningNotification) != '"NULL"') and (normalize-space(CanRxFifoWarningNotification) != 'NULL')"!]/* Rx Fifo Warning handling enabled */
        CAN_CONTROLLERCONFIG_WARN_EN | [!ELSE!] /* Rx Fifo Warning handling disabled */ [!ENDIF!]
        [!IF "CanRxFifo/CanControllerIDAcceptanceMode = 'A'"!]/* ID Acceptance Mode A */
        CAN_CONTROLLERCONFIG_IDAM_A |
        [!ELSEIF "CanRxFifo/CanControllerIDAcceptanceMode = 'B'"!]/* ID Acceptance Mode B */
        CAN_CONTROLLERCONFIG_IDAM_B |
        [!ELSEIF "CanRxFifo/CanControllerIDAcceptanceMode = 'C'"!]/* ID Acceptance Mode C */
        CAN_CONTROLLERCONFIG_IDAM_C |
        [!ELSEIF "CanRxFifo/CanControllerIDAcceptanceMode = 'D'"!]/* ID Acceptance Mode D: All frames rejected */
        CAN_CONTROLLERCONFIG_IDAM_D | [!ENDIF!]
#endif[!ENDIF!]
        [!IF "CanRxProcessing = 'Polling'"!]/* RxPoll Enabled */
        CAN_CONTROLLERCONFIG_RXPOL_EN | [!ELSE!]/* Rx select by interrupt */[!ENDIF!]
        [!IF "CanTxProcessing = 'Polling'"!]/* TxPoll Enabled */
        CAN_CONTROLLERCONFIG_TXPOL_EN | [!ELSE!]/* Tx select by interrupt */[!ENDIF!]
        [!IF "CanBusoffProcessing = 'Polling'"!]/* BusOffPoll Enabled */
        CAN_CONTROLLERCONFIG_BOPOL_EN | [!ELSE!]/* BusOff select by interrupt */[!ENDIF!]
        [!IF "CanWakeupSupport = 'true'"!]/* Wakeup Support Enabled */
        CAN_CONTROLLERCONFIG_WAKSUP_EN |
        [!IF "CanWakeupProcessing = 'Polling'"!]/* WakeupPoll Enabled */
        CAN_CONTROLLERCONFIG_WKPOL_EN | [!ELSE!] /* Wakeup select by interrupt */[!ENDIF!]
        [!ELSE!]CAN_CONTROLLERCONFIG_WKPOL_EN |/* Wakeup Support Disabled */[!ENDIF!]
        [!IF "CanBccSupport = 'true'"!]#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
        CAN_CONTROLLERCONFIG_BCC_EN |
#endif /* (CAN_BCC_SUPPORT_ENABLE == STD_ON) */[!ELSE!][!ENDIF!]
        0U),
#if (CAN_MIX_MB_SUPPORT == STD_ON)
        /* Maximum MBs supported for this controller. */
        [!IF "ecu:get('Can.CanConfig.MixMB')='STD_ON'"!]
            [!IF "CanHwChannel = 'FlexCAN_A'"!](uint8)[!"text:split(ecu:get('Can.CanConfigSet.CanController.NoMB'), ',')[position()-1 = 0]"!]U,
            [!ELSEIF "CanHwChannel = 'FlexCAN_B'"!](uint8)[!"text:split(ecu:get('Can.CanConfigSet.CanController.NoMB'), ',')[position()-1 = 1]"!]U,
            [!ELSEIF "CanHwChannel = 'FlexCAN_C'"!](uint8)[!"text:split(ecu:get('Can.CanConfigSet.CanController.NoMB'), ',')[position()-1 = 2]"!]U,
            [!ELSEIF "CanHwChannel = 'FlexCAN_D'"!](uint8)[!"text:split(ecu:get('Can.CanConfigSet.CanController.NoMB'), ',')[position()-1 = 3]"!]U,
            [!ELSEIF "CanHwChannel = 'FlexCAN_E'"!](uint8)[!"text:split(ecu:get('Can.CanConfigSet.CanController.NoMB'), ',')[position()-1 = 4]"!]U,
            [!ELSEIF "CanHwChannel = 'FlexCAN_F'"!](uint8)[!"text:split(ecu:get('Can.CanConfigSet.CanController.NoMB'), ',')[position()-1 = 5]"!]U,
            [!ELSEIF "CanHwChannel = 'FlexCAN_G'"!](uint8)[!"text:split(ecu:get('Can.CanConfigSet.CanController.NoMB'), ',')[position()-1 = 6]"!]U,
            [!ELSEIF "CanHwChannel = 'FlexCAN_H'"!](uint8)[!"text:split(ecu:get('Can.CanConfigSet.CanController.NoMB'), ',')[position()-1 = 7]"!]U,
            [!ENDIF!]
        [!ELSE!]
           (uint8)32U,
        [!ENDIF!]
#endif /* (CAN_MIX_MB_SUPPORT == STD_ON) */
            [!NOCODE!]
            [!VAR "firsthrh" = "num:i(num:i(count(../../CanHardwareObject/*))+1)"!]
            [!VAR "firsthth" = "num:i(num:i(count(../../CanHardwareObject/*))+1)"!]
            [!VAR "hrhcount" = "0"!]
            [!FOR "canhwobjectid" = "0" TO "num:i(count(../../CanHardwareObject/*))-1"!]
                [!LOOP "../../CanHardwareObject/*"!]
                    [!IF "CanObjectId = $canhwobjectid"!]
                        [!IF "CanObjectType = 'RECEIVE'"!]
                            [!SELECT "node:ref(CanControllerRef)"!]
                                [!IF "num:i(CanControllerId) = $controllerid"!]
                                    [!IF "$firsthrh > $canhwobjectid"!]
                                        [!VAR "firsthrh" = "$canhwobjectid"!]
                                    [!ENDIF!]
                                    [!VAR "hrhcount" = "$hrhcount + 1"!]
                                [!ENDIF!]
                            [!ENDSELECT!]
                        [!ELSE!]
                            [!SELECT "node:ref(CanControllerRef)"!]
                                [!IF "num:i(CanControllerId) = $controllerid and $firsthth > $canhwobjectid"!]
                                    [!VAR "firsthth" = "$canhwobjectid"!]
                                [!ENDIF!]
                            [!ENDSELECT!]
                        [!ENDIF!]
                        [!BREAK!]
                    [!ENDIF!]
                [!ENDLOOP!]
            [!ENDFOR!]
            [!ENDNOCODE!]
#if (CAN_RXFIFO_ENABLE == STD_ON)
            /*  First HRH of specified controller */
            (Can_HwHandleType)[!"num:i($firsthrh)"!]U
#endif
        }[!NOCODE!][!IF "$END_COMMA4 < $MASK_COUNT4"!][!CODE!],[!ENDCODE!][!ELSE!][!ENDIF!][!ENDNOCODE!][!BREAK!][!ENDIF!][!VAR "controllercount" = "$controllercount + 1"!][!ENDLOOP!]
        [!IF "$controllercount = num:i(count(CanController/*))"!]/* ControlerDescriptor of [!"@name"!] */
        {
            /* Can Controller Offset */
            (uint8)FLEXCAN_NULL_OFFSET,

            /* Max Message Buffer number */
            (uint8)0U,

            /* No. of BaudRate configured for current controller */
            (uint8)0U,

            /* Default BaudRate configured for current controller */
            (uint8)0U,

            /* ControllerBaudrateConfigsPtr */
            ControllerBaudrateConfigs_PC_0,

#if (CAN_WAKEUP_SUPPORT == STD_ON)
            /* WakeUp source ID as defined in the ECU State Manager */
            (uint8)0U,
#endif /* (CAN_WAKEUP_SUPPORT == STD_ON) */

#if (CAN_RXFIFO_ENABLE == STD_ON)
            /* TableID Controller index */
            (uint8)0U,

            /* Pointer to RxFifo Overflow notification function. */
            /* @violates @ref Can_Cfg_c_REF_7 cast from unsigned long to pointer. */
            (Can_PCallBackType)NULL_PTR,

            /* Pointer to RxFifo Warning notification function. */
            /* @violates @ref Can_Cfg_c_REF_7 cast from unsigned long to pointer. */
            (Can_PCallBackType)NULL_PTR,
#endif /* (CAN_RXFIFO_ENABLE == STD_ON) */

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
            /* Pointer to Error interrupt notification function (ESR[ERR_INT]). */
#if (CAN_API_ERROR_STATUS == STD_ON)
            (Can_PCallBackType_ret) NULL_PTR,
#else
            /* @violates @ref Can_Cfg_c_REF_7 cast from unsigned long to pointer. */
            (Can_PCallBackType)NULL_PTR,
#endif   /* (CAN_API_ERROR_STATUS == STD_ON) */

#endif /* (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */
      /* ===== Controller Options ===== */
        (uint32)0U,

#if (CAN_MIX_MB_SUPPORT == STD_ON)
        /* Maximum MBs supported for this controller. */
        (uint16)32U,
#endif /* (CAN_MIX_MB_SUPPORT == STD_ON) */
        }[!NOCODE!][!IF "$END_COMMA4 < $MASK_COUNT4"!][!CODE!],[!ENDCODE!][!ELSE!][!ENDIF!][!ENDNOCODE!][!ENDIF!][!ENDFOR!]

    };
[!ENDSELECT!]


/*==================================================================================================*/
/**
* @brief          Top level structure containing all Can driver configurations
* @details        Top level structure containing all Can driver configurations
*
* @implements     DCAN02646
*/
/* @violates @ref Can_Cfg_c_REF_10 Violates MISRA 2004 Required Rule 8.10, external ... could be made static */
CONST(Can_ConfigType, CAN_CONST) Can_ConfigSet_PC =
    {
        /* Number of CAN controllers configured */
        (uint8)[!"num:i(count(CanConfigSet/*[1]/CanController/*))"!]U,

        /* FilterMasksPtr */
        /* @violates @ref Can_Cfg_c_REF_8 a cast should not be performed between a pointer to object */
        (Can_IdPtrType)Can_FilterMasks_PC,

        /* MessageBufferConfigContainer */
        {
            /* MessageBufferConfigsPtr */
            MessageBufferConfigs_PC,

            /* MessageBufferConfigCount */
            (Can_HwHandleType)[!"num:i(count(CanConfigSet/*[1]/CanHardwareObject/*))"!]U,
        },

        /* FlexCAN controller description */
        ControlerDescriptors_PC,

#if (CAN_RXFIFO_ENABLE == STD_ON)
        /* Can_RxFiFoTableIdConfigType */
        [!NOCODE!]
        [!VAR "rxfifoenable" = "0"!]
        [!LOOP "CanConfigSet/*[1]/CanController/*"!][!/* If at least one controller has RxFifo enabled, rxfifoenable var is set. */!]
            [!IF "CanControllerRxFifoEnable = 'true'"!][!VAR "rxfifoenable" = "1"!][!ENDIF!]
        [!ENDLOOP!]
            [!IF "$rxfifoenable = 1"!][!CODE!]RxFifoTableID_PCConfig,[!ENDCODE!][!ELSE!][!CODE!]NULL_PTR, /* Rx fifo disabled */[!ENDCODE!][!ENDIF!]
        [!ENDNOCODE!]
#endif  /* (CAN_RXFIFO_ENABLE == STD_ON) */

[!NOCODE!]
        [!VAR "Can_hardware_ob_id" = "0"!]
        [!LOOP "CanConfigSet/*[1]/CanHardwareObject/*"!]
        [!IF "$Can_hardware_ob_id < CanObjectId"!]
        [!VAR "Can_hardware_ob_id" = "CanObjectId"!]
        [!ENDIF!]
        [!ENDLOOP!][!ENDNOCODE!]

        /*Maximum Object IDs configured */
        (uint32)[!"num:i($Can_hardware_ob_id + 1)"!]U,

        /*Controller ID mapping*/
        {[!NOCODE!]
                [!VAR "Can_hardware_ob_id" = "0"!][!VAR "END_COMMA"="0"!]
                [!VAR "MASK_COUNT"="num:i(count(CanConfigSet/*[1]/CanHardwareObject/*))"!]
                [!FOR "objectid" = "0" TO "num:i(count(CanConfigSet/*[1]/CanHardwareObject/*) - 1)"!]
                [!LOOP "CanConfigSet/*[1]/CanHardwareObject/*"!]
                [!IF "CanObjectId = $objectid"!]
                [!VAR "END_COMMA"="$END_COMMA + 1"!]
                [!IF "$Can_hardware_ob_id != CanObjectId"!]
                [!VAR "Can_hardware_ob_id" = "CanObjectId"!]
                [!SELECT "node:ref(CanControllerRef)"!]
                [!CODE!][!"num:i(CanControllerId)"!]U[!ENDCODE!][!ENDSELECT!]
                [!NOCODE!][!IF "$END_COMMA < $MASK_COUNT"!][!CODE!],[!ENDCODE!][!ELSE!][!ENDIF!][!ENDNOCODE!][!ELSE!][!VAR "END_COMMA"="$END_COMMA + 1"!][!ENDIF!]
                [!BREAK!][!ENDIF!][!ENDLOOP!][!ENDFOR!][!ENDNOCODE!]},

        /*Object Type mapping*/
        {[!NOCODE!]
                [!VAR "Can_hardware_ob_id" = "0"!][!VAR "END_COMMA"="0"!]
                [!VAR "MASK_COUNT"="num:i(count(CanConfigSet/*[1]/CanHardwareObject/*))"!]
                [!FOR "objectid" = "0" TO "num:i(count(CanConfigSet/*[1]/CanHardwareObject/*) - 1)"!]
                [!LOOP "CanConfigSet/*[1]/CanHardwareObject/*"!]
                [!IF "CanObjectId = $objectid"!]
                [!VAR "END_COMMA"="$END_COMMA + 1"!]
                [!IF "$Can_hardware_ob_id != CanObjectId"!]
                [!VAR "Can_hardware_ob_id" = "CanObjectId"!]
                [!CODE!](Can_ObjType)CAN_[!"CanObjectType"!][!ENDCODE!]
                [!NOCODE!][!IF "$END_COMMA < $MASK_COUNT"!][!CODE!],[!CR!][!ENDCODE!][!ELSE!][!ENDIF!][!ENDNOCODE!][!ELSE!][!VAR "END_COMMA"="$END_COMMA + 1"!][!ENDIF!]
                [!BREAK!][!ENDIF!][!ENDLOOP!][!ENDFOR!][!ENDNOCODE!]},
#if (CAN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
         [!IF "$CanDemErrorEnable"!][!//
         [!IF "node:exists(./CanDemEventParameterRefs/CAN_E_TIMEOUT)"!][!//
         [!IF "node:exists(node:ref(./CanDemEventParameterRefs/CAN_E_TIMEOUT))"!][!//
         { (uint32)STD_ON, [!"node:value(node:ref(./CanDemEventParameterRefs/CAN_E_TIMEOUT)/DemEventId)"!]U} /* CAN_E_TIMEOUT parameters*/ [!//
         [!ELSE!][!//
            [!ERROR "Invalid reference for CAN_E_TIMEOUT"!][!//
         [!ENDIF!][!//
         [!ELSE!][!//
            {(uint32)STD_OFF, 0U} /* CAN_E_TIMEOUT parameters*/[!//
         [!ENDIF!][!//
         [!ELSE!][!//
            {(uint32)STD_OFF, 0U}/* CAN_E_TIMEOUT parameters*/
         [!ENDIF!]
#endif /* CAN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON */
    };

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


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

/*
@file Can_Cfg.c
@note Violates MISRA 2004 Advisory Rule 19.1, #include preceded by non preproc directives. - See @ref Can_Cfg_c_REF_1
@note Violates MISRA 2004 Advisory Rule 19.15, Repeated include file MemMap.h - See @ref Can_Cfg_c_REF_2
*/
/* @violates @ref Can_Cfg_c_REF_3 This is required as per autosar Requirement. */
#define CAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_Cfg_c_REF_1 #include preceded by non preproc directives */
/* @violates @ref Can_Cfg_c_REF_2 Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h */
#include "MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
