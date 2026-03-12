[!CODE!][!//
/**
*   @file    Spi_Cfg.h
*   @version 1.0.1
*
*   @brief   AUTOSAR Spi - Spi configuration header file.
*   @details This file is the header containing all the necessary information for SPI
*            module configuration(s).
*   @addtogroup [SPI_MODULE]
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : DSPI
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

#ifndef SPI_CFG_H
#define SPI_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Spi_Cfg_h_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, #include statements in a file should only be preceded by
* other preprocessor directives or comments.
* AUTOSAR imposes the specification of the sections in which certain parts of the driver must be placed.
*
* @section Spi_Cfg_h_REF_2
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the contents
* of a header file being included twice.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions. The inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section Spi_Cfg_h_REF_3
* Violates MISRA 2004 Required Rule 5.1, This violation is not fixed since naming convention of
* Identifiers (internal and external) are followed as per Autosar standards, some times which may
* exceeds more than 31 characters.
*
* @section Spi_Cfg_h_REF_4
* Violates MISRA 2004 Required Rule 19.4, This violation cannot be fixed since function and variables
* cannot be declared and defined within braces.
* For example:
* #define var  (variable)
* int var;
* In the above scenario, the var is replaced with (variable) i.e. it will become int (variable); ->This
* is not the syntax for variable declaration.
*
* @section Spi_Cfg_h_REF_5
* Violates MISRA 2004 Required Rule 1.4,
* This violation is not fixed since naming convention of Identifiers are followed as per Autosar
* standards, some times which may exceeds more than 31 characters.
*
* @section Spi_Cfg_h_REF_6
* Violates MISRA 2004 Required Rule 20.2,
* This violation is not fixed since we have not used any Standard library macros.
*/
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/*
* @file           Spi_Cfg.h
*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Spi_Cfg.h
* @implements   DSPI02049
*/
#define SPI_MODULE_ID_CFG                       83
#define SPI_VENDOR_ID_CFG                       43
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_AR_RELEASE_MAJOR_VERSION_CFG        4
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_AR_RELEASE_MINOR_VERSION_CFG        0
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_AR_RELEASE_REVISION_VERSION_CFG     3
#define SPI_SW_MAJOR_VERSION_CFG                1
#define SPI_SW_MINOR_VERSION_CFG                0
#define SPI_SW_PATCH_VERSION_CFG                1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

[!NOCODE!][!//

[!VAR "OuterLoopCounter" = "0"!][!//
[!VAR "InnerLoopCounter" = "0"!][!//
[!LOOP "SpiDriver/*/SpiJob/*"!][!//
[!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
    [!VAR "InnerLoopCounter" = "0"!]
    [!VAR "Matchcounter" = "0"!]
    [!VAR "Name" = "node:name(.)"!]
    [!LOOP "../../../*/SpiJob/*"!]
    [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
      [!IF "($Name = node:name(.))"!]
          [!VAR "Matchcounter" = "$Matchcounter + 1"!]
       [!ENDIF!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!IF "$Matchcounter = 1"!]
    [!ELSE!][!//
        [!ERROR!]SpiJob Symbolic name "[!"@name"!]" for the two or more SpiJobs is repeated.[!ENDERROR!]
    [!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "OuterLoopCounter" = "0"!][!//
[!VAR "InnerLoopCounter" = "0"!][!//
[!LOOP "SpiDriver/*/SpiSequence/*"!][!//
[!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
    [!VAR "InnerLoopCounter" = "0"!]
    [!VAR "Matchcounter" = "0"!]
    [!VAR "Name" = "node:name(.)"!]
    [!LOOP "../../../*/SpiSequence/*"!]
    [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
      [!IF "($Name = node:name(.))"!]
          [!VAR "Matchcounter" = "$Matchcounter + 1"!]
       [!ENDIF!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!IF "$Matchcounter = 1"!]
    [!ELSE!][!//
        [!ERROR!]SpiSequences Symbolic name "[!"@name"!]" for the two or more SpiSequences is repeated.[!ENDERROR!]
    [!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "OuterLoopCounter" = "0"!][!//
[!VAR "InnerLoopCounter" = "0"!][!//
[!LOOP "SpiDriver/*/SpiExternalDevice/*"!][!//
[!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
    [!VAR "InnerLoopCounter" = "0"!]
    [!VAR "Matchcounter" = "0"!]
    [!VAR "Name" = "node:name(.)"!]
    [!LOOP "../../../*/SpiExternalDevice/*"!]
    [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
      [!IF "($Name = node:name(.))"!]
          [!VAR "Matchcounter" = "$Matchcounter + 1"!]
       [!ENDIF!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!IF "$Matchcounter = 1"!]
    [!ELSE!][!//
        [!ERROR!]SpiExternalDevice Symbolic name "[!"@name"!]" for the two or more SpiExternalDevices is repeated.[!ENDERROR!]
    [!ENDIF!][!//
[!ENDLOOP!][!//

[!IF "ecu:get('SpiDMAPresent') = 'TRUE'"!]
    [!LOOP "SpiGeneral/SpiPhyUnit/*"!][!//
        [!VAR "Unit_Name"="@name"!]
        [!IF "node:exists(SpiPhyUnitAsyncMethod) and (SpiPhyUnitAsyncMethod = 'DMA')"!]
            [!VAR "Spi_PhyTxDmaChannel1"="SpiPhyTxDmaChannel"!]
            [!VAR "Spi_PhyTxDmaChannel2"="SpiPhyTxDmaChannelAux"!]
            [!VAR "Spi_PhyRxDmaChannel"="SpiPhyRxDmaChannel"!]

            [!IF "($Spi_PhyTxDmaChannel1 = $Spi_PhyTxDmaChannel2)"!]
                [!ERROR!]
                        SpiPhyTxDmaChannel ([!"$Spi_PhyTxDmaChannel1"!]) and SpiPhyTxDmaChannelAux ([!"$Spi_PhyTxDmaChannel2"!]) values in [!"@name"!] are repeated. Please select different values for SpiPhyTxDmaChannel and SpiPhyTxDmaChannelAux.
                [!ENDERROR!]
            [!ENDIF!]
            [!IF "($Spi_PhyTxDmaChannel1 = $Spi_PhyRxDmaChannel)"!]
                [!ERROR!]
                        SpiPhyTxDmaChannel ([!"$Spi_PhyTxDmaChannel1"!]) and SpiPhyRxDmaChannel ([!"$Spi_PhyRxDmaChannel"!]) values in [!"@name"!] are repeated. Please select different values for SpiPhyTxDmaChannel and SpiPhyRxDmaChannel.
                [!ENDERROR!]
            [!ENDIF!]
            [!IF "($Spi_PhyTxDmaChannel2 = $Spi_PhyRxDmaChannel)"!]
                [!ERROR!]
                        SpiPhyTxDmaChannelAux ([!"$Spi_PhyTxDmaChannel2"!]) and SpiPhyRxDmaChannel ([!"$Spi_PhyRxDmaChannel"!]) values in [!"@name"!] are repeated. Please select different values for SpiPhyTxDmaChannelAux and SpiPhyRxDmaChannel.
                [!ENDERROR!]
            [!ENDIF!]

            [!LOOP "../../SpiPhyUnit/*"!]
                [!IF "(node:exists(SpiPhyUnitAsyncMethod) and (SpiPhyUnitAsyncMethod = 'DMA'))"!]
                    [!IF "($Spi_PhyTxDmaChannel1 = SpiPhyTxDmaChannelAux)"!]
                        [!ERROR!]
                            SpiPhyTxDmaChannel ([!"$Spi_PhyTxDmaChannel1"!]) in [!"$Unit_Name"!] container and SpiPhyTxDmaChannelAux ([!"SpiPhyTxDmaChannelAux"!]) in [!"@name"!] are repeated. Please select different values for SpiPhyTxDmaChannel and SpiPhyTxDmaChannelAux.
                        [!ENDERROR!]
                    [!ENDIF!]
                    [!IF "($Spi_PhyTxDmaChannel1 = SpiPhyRxDmaChannel)"!]
                        [!ERROR!]
                            SpiPhyTxDmaChannel ([!"$Spi_PhyTxDmaChannel1"!]) in [!"$Unit_Name"!] container and SpiPhyRxDmaChannel ([!"SpiPhyRxDmaChannel"!]) in [!"@name"!] are repeated. Please select different values for SpiPhyTxDmaChannel and SpiPhyRxDmaChannel.
                        [!ENDERROR!]
                    [!ENDIF!]
                    [!IF "($Spi_PhyTxDmaChannel2 = SpiPhyRxDmaChannel)"!]
                        [!ERROR!]
                            SpiPhyTxDmaChannelAux ([!"$Spi_PhyTxDmaChannel2"!]) in [!"$Unit_Name"!] container and SpiPhyRxDmaChannel ([!"SpiPhyRxDmaChannel"!]) in [!"@name"!] are repeated. Please select different values for SpiPhyTxDmaChannelAux and SpiPhyRxDmaChannel.
                        [!ENDERROR!]
                    [!ENDIF!]
                [!ENDIF!]
            [!ENDLOOP!][!//
        [!ENDIF!]
    [!ENDLOOP!][!//
[!ENDIF!][!//

[!ENDNOCODE!]

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

[!NOCODE!]
[!// Calculate the maximum number of elements (sequences, jobs, channels) in configuration.
[!VAR "SpiMaxSequencesCount" = "0"!][!//
[!VAR "SpiMaxJobsCount" = "0"!][!//
[!VAR "SpiMaxChannelsCount" = "0"!][!//
[!VAR "SpiMaxOneJobSequences" = "0"!][!//
[!VAR "SpiMaxOneJobSeqChannels" = "0"!][!//
[!LOOP "SpiDriver/*"!][!//
    [!VAR "TmpCounter" = "num:i(count(./SpiSequence/*))"!]
    [!IF "$SpiMaxSequencesCount < $TmpCounter"!]
        [!VAR "SpiMaxSequencesCount" = "$TmpCounter"!]
    [!ENDIF!]
    [!VAR "TmpCounter" = "num:i(count(SpiJob/*))"!]
    [!IF "$SpiMaxJobsCount < $TmpCounter"!]
        [!VAR "SpiMaxJobsCount" = "$TmpCounter"!]
    [!ENDIF!]
    [!VAR "TmpCounter" = "num:i(count(SpiChannel/*))"!]
    [!IF "$SpiMaxChannelsCount < $TmpCounter"!]
        [!VAR "SpiMaxChannelsCount" = "$TmpCounter"!]
    [!ENDIF!]
    [!VAR "TmpCounter" = "num:i(count(SpiSequence/*[count(SpiJobAssignment/*) = 1]))"!]
    [!IF "$SpiMaxOneJobSequences < $TmpCounter"!]
        [!VAR "SpiMaxOneJobSequences" = "$TmpCounter"!]
    [!ENDIF!]
    [!VAR "TmpCounter" = "num:i(count(node:refs(SpiSequence/*[count(SpiJobAssignment/*) = 1]/SpiJobAssignment/*)/SpiChannelList/*/SpiChannelAssignment))"!]
    [!IF "$SpiMaxOneJobSeqChannels < $TmpCounter"!]
        [!VAR "SpiMaxOneJobSeqChannels" = "$TmpCounter"!]
    [!ENDIF!]
[!ENDLOOP!][!//
[!ENDNOCODE!]

/**
* @brief Switches the Development Error functionality ON or OFF.
* @details Switches the Development Error Detection and Notification ON or OFF.
* @implements DSPI02020.
*/
#define SPI_DEV_ERROR_DETECT           ([!IF "SpiGeneral/SpiDevErrorDetect"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief Switches the Version Information API functionality ON or OFF.
* @details Switches the Spi_GetVersionInfo function ON or OFF.
* @implements DSPI02024.
*/
#define SPI_VERSION_INFO_API           ([!IF "SpiGeneral/SpiVersionInfoApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief Switches the Interruptible Sequences handling functionality ON or OFF.
* @details This parameter depends on SPI_LEVEL_DELIVERED value.
*        It is only used for SPI_LEVEL_DELIVERED configured to 1 or 2.
* @implements DSPI02022.
*/
#define SPI_INTERRUPTIBLE_SEQ_ALLOWED  ([!IF "SpiGeneral/SpiInterruptibleSeqAllowed"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief Switches the Spi_GetHWUnitStatus function ON or OFF.
* @details Switches the Spi_GetHWUnitStatus function ON or OFF.
* @implements DSPI02021
*/
#define SPI_HW_STATUS_API          ([!IF "SpiGeneral/SpiHwStatusApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief Switches the Spi_Cancel function ON or OFF.
* @details Switches the Spi_Cancel function ON or OFF. (see chapter 8.3.13)
* @implements DSPI02018
*/
#define SPI_CANCEL_API             ([!IF "SpiGeneral/SpiCancelApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/* Only Internal Buffers are allowed in Handler/Driver.*/
#define USAGE0                          0x00u

/* Only External Buffers are allowed in Handler/Driver.*/
#define USAGE1                          0x01u

/* Both Buffer types are allowd in Handler/Driver. */
#define USAGE2                          0x02u

/* Derive the CTAR used */
#define SPI_CTAR_USED                   ((uint32)[!"ecu:get('SpiCTARUsed')"!]u)

/**
* @brief Selects the SPI Handler/Driver Channel Buffers usage allowed and delivered.
* @details Selects the SPI Handler/Driver Channel Buffers usage allowed and delivered.
*        (see chapter 7.2.1)
* @implements DSPI02019
*/
#define SPI_CHANNEL_BUFFERS_ALLOWED    (USAGE[!"SpiGeneral/SpiChannelBuffersAllowed"!])

/* The LEVEL 0 Simple Synchronous SPI Handler/Driver functionalities are selected.*/
#define LEVEL0                          0x00u

/* The LEVEL 1 Basic Asynchronous SPI Handler/Driver functionalities are selected.*/
#define LEVEL1                          0x01u

/* The LEVEL 2 Enhanced SPI Handler/Driver functionalities are selected. */
#define LEVEL2                          0x02u

/**
* @brief Selects the SPI Handler/Driver level of scalable functionality.
* @details Selects the SPI Handler/Driver level of scalable functionality that
* is available and delivered. (see chapter 7.1)
* @implements DSPI02023.
*/
#define SPI_LEVEL_DELIVERED            (LEVEL[!"SpiGeneral/SpiLevelDelivered"!])

/**
* @brief Defines the maximum number of supported channels.
* @details Defines the maximum number of supported channels
*     for all the driver configurations.
* @implements DSPI02045.
*/
[!NOCODE!][!//
[!VAR "OuterLoopCounter" = "0"!][!//
[!VAR "InnerLoopCounter" = "0"!][!//
[!ENDNOCODE!][!//
[!LOOP "SpiDriver/*/SpiChannel/*"!][!//
[!NOCODE!][!//
[!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!][!//
    [!VAR "InnerLoopCounter" = "0"!][!//
    [!VAR "Matchcounter" = "0"!][!//
    [!VAR "TempChannel_FirstSpiChannelId" = "0"!][!//
    [!VAR "TempChannel_FirstSpiChannelType" = "SpiChannelType"!][!//
    [!VAR "TempChannel_FirstSpiDataWidth" = "SpiDataWidth"!][!//
    [!VAR "TempChannel_FirstSpiDefaultData" = "SpiDefaultData"!][!//
    [!VAR "TempChannel_FirstSpiEbMaxLength" = "SpiEbMaxLength"!][!//
    [!VAR "TempChannel_FirstSpiIbNBuffers" = "SpiChannelType"!][!//
    [!VAR "TempChannel_FirstSpiTransferStart" = "SpiTransferStart"!][!//
    [!VAR "Name" = "node:name(.)"!][!//
    [!LOOP "../../../*/SpiChannel/*"!][!//
    [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!][!//
    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!][!//
      [!IF "($Name = node:name(.))"!][!//
         [!VAR "Matchcounter" = "$Matchcounter + 1"!][!//
         [!IF "$Matchcounter = 1"!][!//
         [!VAR "TempChannel_FirstSpiChannelId" = "SpiChannelId"!][!//
         [!VAR "TempChannel_FirstSpiChannelType" = "SpiChannelType"!][!//
         [!VAR "TempChannel_FirstSpiDataWidth" = "SpiDataWidth"!][!//
         [!VAR "TempChannel_FirstSpiDefaultData" = "SpiDefaultData"!][!//
         [!VAR "TempChannel_FirstSpiEbMaxLength" = "SpiEbMaxLength"!][!//
         [!VAR "TempChannel_FirstSpiIbNBuffers" = "SpiIbNBuffers"!][!//
         [!VAR "TempChannel_FirstSpiTransferStart" = "SpiTransferStart"!][!//
         [!ENDIF!][!//
         [!IF "($Matchcounter > 1) and (SpiChannelType = 'IB')"!][!//
         [!IF "($TempChannel_FirstSpiChannelId != SpiChannelId) or ($TempChannel_FirstSpiChannelType != SpiChannelType) or
         ($TempChannel_FirstSpiDataWidth != SpiDataWidth) or ($TempChannel_FirstSpiDefaultData != SpiDefaultData) or
         ($TempChannel_FirstSpiIbNBuffers != SpiIbNBuffers) or($TempChannel_FirstSpiTransferStart != SpiTransferStart) "!][!//
         [!ERROR!]If the same symbolic channel name [!"node:name(.)"!] is used for more than one channel, all channel attributes shall be identical.[!ENDERROR!]
         [!ENDIF!][!//
         [!ENDIF!][!//
         [!IF "($Matchcounter > 1) and (SpiChannelType = 'EB')"!][!//
         [!IF "($TempChannel_FirstSpiChannelId != SpiChannelId) or ($TempChannel_FirstSpiChannelType != SpiChannelType) or
         ($TempChannel_FirstSpiDataWidth != SpiDataWidth) or ($TempChannel_FirstSpiDefaultData != SpiDefaultData) or
         ($TempChannel_FirstSpiEbMaxLength != SpiEbMaxLength) or ($TempChannel_FirstSpiTransferStart != SpiTransferStart) "!][!//
         [!ERROR!]If the same symbolic channel name [!"node:name(.)"!] is used for more than one channel, all channel attributes shall be identical.[!ENDERROR!]
         [!ENDIF!][!//
         [!ENDIF!][!//
      [!ENDIF!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
[!ENDNOCODE!][!//
[!IF "$Matchcounter = 1"!][!//
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SpiConf_SpiChannel_[!"name(.)"!]    ((Spi_ChannelType)[!"SpiChannelId"!])
[!ENDIF!][!//
[!ENDLOOP!][!//
#define SPI_MAX_CHANNEL  ((Spi_ChannelType)[!"num:i($SpiMaxChannelsCount)"!])

/**
* @brief Total number of Jobs configured.
* @details Defines the maximum number of supported jobs
*     for all the driver configurations.
* @implements DSPI02045
*/
[!LOOP "SpiDriver/*/SpiJob/*"!][!//
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SpiConf_SpiJob_[!"name(.)"!]   ((Spi_JobType)[!"SpiJobId"!])
[!ENDLOOP!][!//
#define SPI_MAX_JOB     ((Spi_JobType)[!"num:i($SpiMaxJobsCount)"!])

/**
* @brief Total number of Sequences configured.
* @details Defines the maximum number of supported sequences
*     for all the driver configurations.
* @implements DSPI02045.
*/
[!LOOP "SpiDriver/*/SpiSequence/*"!][!//
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SpiConf_SpiSequence_[!"name(.)"!]   ((Spi_SequenceType)[!"SpiSequenceId"!])
[!ENDLOOP!][!//
#define SPI_MAX_SEQUENCE  ((Spi_SequenceType)[!"num:i($SpiMaxSequencesCount)"!])

[!IF "node:exists(SpiGeneral/SpiOptimizeOneJobSequences)"!][!//
[!IF "SpiGeneral/SpiOptimizeOneJobSequences"!][!//
[!//
[!IF "node:exists(SpiGeneral/SpiOptimizedSeqNumber)"!][!//
/**
* @brief Define the size of sequence cached data buffer.
* @details Define the size of sequence cached data buffer for sequences having only one job.
* @implements DSPI02055.
*/
#define SPI_OPTIMIZED_SEQ_BUFFER_SIZE ((Spi_SequenceType)[!//
[!IF "SpiGeneral/SpiOptimizedSeqNumber > 0"!][!//
[!"SpiGeneral/SpiOptimizedSeqNumber"!][!//
[!ELSE!][!//
[!"num:i($SpiMaxOneJobSequences)"!][!//
[!ENDIF!][!//
)
[!ELSE!][!//
    [!ERROR!]Node '/SpiGeneral/SpiOptimizedSeqNumber' does not exists.[!ENDERROR!][!//
[!ENDIF!][!// "node:exists(SpiGeneral/SpiOptimizedSeqNumber)"
[!IF "node:exists(SpiGeneral/SpiOptimizedChannelsNumber)"!][!//
/**
* @brief Define the size of channel cached data buffer.
* @details Define the size of channel cached data buffer
*    for sequences having only one job.
* @implements DSPI02054.
*/
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_OPTIMIZED_CHANNEL_BUFFER_SIZE ((Spi_ChannelType)[!//
[!IF "SpiGeneral/SpiOptimizedChannelsNumber > 0"!][!//
[!"SpiGeneral/SpiOptimizedChannelsNumber"!][!//
[!ELSE!][!//
[!"num:i($SpiMaxOneJobSeqChannels)"!][!//
[!ENDIF!][!//
)
[!ELSE!][!//
    [!ERROR!]Node '/SpiGeneral/SpiOptimizedChannelsNumber' does not exists.[!ENDERROR!][!//
[!ENDIF!][!//
[!//
[!ENDIF!][!//
[!ENDIF!][!//

/**
* @brief Defines the peripherals used throughout the configuration(s).
* @details Defines the peripherals used throughout the configuration(s).
* @implements DSPI02056.
*/
[!LOOP "SpiGeneral/SpiPhyUnit/*"!][!//
#define CSIB[!"@index"!]  ((uint8)[!"@index"!]u)
[!ENDLOOP!][!//
#define SPI_MAX_HWUNIT   [!"num:i(count(SpiGeneral/SpiPhyUnit/*))"!]u

/**
* @brief Physical HWUnits definition - as from resource manager.
* @details Physical HWUnits definition - as from resource manager.
* @implements DSPI02080.
*/
[!VAR "DSPI_0_Counter" = "0"!][!//
[!VAR "DSPI_1_Counter" = "0"!][!//
[!VAR "DSPI_2_Counter" = "0"!][!//
[!VAR "DSPI_3_Counter" = "0"!][!//
[!VAR "DSPI_4_Counter" = "0"!][!//
[!VAR "DSPI_5_Counter" = "0"!][!//
[!VAR "DSPI_SLAVE_FLAG" = "0"!][!//SpiPhyUnitMapping
[!LOOP "SpiGeneral/SpiPhyUnit/*"!][!//
[!IF "SpiPhyUnitMapping = 'DSPI_0'"!][!//
[!VAR "DSPI_0_Counter" = "$DSPI_0_Counter + 1"!][!//
#define DSPI_0_HWUNIT   (CSIB[!"@index"!])
[!ENDIF!][!//
[!IF "SpiPhyUnitMapping = 'DSPI_1'"!][!//
[!VAR "DSPI_1_Counter" = "$DSPI_1_Counter + 1"!][!//
#define DSPI_1_HWUNIT   (CSIB[!"@index"!])
[!ENDIF!][!//
[!IF "SpiPhyUnitMapping = 'DSPI_2'"!][!//
[!VAR "DSPI_2_Counter" = "$DSPI_2_Counter + 1"!][!//
#define DSPI_2_HWUNIT   (CSIB[!"@index"!])
[!ENDIF!][!//
[!IF "SpiPhyUnitMapping = 'DSPI_3'"!][!//
[!VAR "DSPI_3_Counter" = "$DSPI_3_Counter + 1"!][!//
#define DSPI_3_HWUNIT   (CSIB[!"@index"!])
[!ENDIF!][!//
[!IF "SpiPhyUnitMapping = 'DSPI_4'"!][!//
[!VAR "DSPI_4_Counter" = "$DSPI_4_Counter + 1"!][!//
#define DSPI_4_HWUNIT   (CSIB[!"@index"!])
[!ENDIF!][!//
[!IF "SpiPhyUnitMapping = 'DSPI_5'"!][!//
[!VAR "DSPI_5_Counter" = "$DSPI_5_Counter + 1"!][!//
#define DSPI_5_HWUNIT   (CSIB[!"@index"!])
[!ENDIF!][!//
[!IF "SpiPhyUnitMode = 'SPI_SLAVE'"!][!//
[!VAR "DSPI_SLAVE_FLAG" = "1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

/**
* @brief Physical HWUnits enabled/disabled
* @details Physical HWUnits enabled/disabled
*/
#define DSPI_0_ENABLED  ([!IF "$DSPI_0_Counter = 1"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
#define DSPI_1_ENABLED  ([!IF "$DSPI_1_Counter = 1"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
#define DSPI_2_ENABLED  ([!IF "$DSPI_2_Counter = 1"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
#define DSPI_3_ENABLED  ([!IF "$DSPI_3_Counter = 1"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
#define DSPI_4_ENABLED  ([!IF "$DSPI_4_Counter = 1"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
#define DSPI_5_ENABLED  ([!IF "$DSPI_5_Counter = 1"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
#define SPI_SLAVE_SUPPORT  ([!IF "$DSPI_SLAVE_FLAG = 1"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

[!IF "$DSPI_0_Counter = 1"!][!//
#define DSPI_0_OFFSET  0u
[!ENDIF!][!//
[!IF "$DSPI_1_Counter = 1"!][!//
#define DSPI_1_OFFSET  1u
[!ENDIF!][!//
[!IF "$DSPI_2_Counter = 1"!][!//
#define DSPI_2_OFFSET  2u
[!ENDIF!][!//
[!IF "$DSPI_3_Counter = 1"!][!//
#define DSPI_3_OFFSET  3u
[!ENDIF!][!//
[!IF "$DSPI_4_Counter = 1"!][!//
#define DSPI_4_OFFSET  4u
[!ENDIF!][!//
[!IF "$DSPI_5_Counter = 1"!][!//
#define DSPI_5_OFFSET  5u
[!ENDIF!][!//

#define SPI_FIFO_SIZE   ((uint8)[!"ecu:get('SpiFifoSize')"!]u)

/**
* @brief Defines the external devices the driver will use.
* @details Reference to the external device used by this job.
* @implements DSPI02039.
*/
[!LOOP "SpiDriver/*/SpiExternalDevice/*"!][!//
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_6 This is not a standard library macro, 
*/
#define [!"name(.)"!]  ((Spi_ExternalDeviceType)[!"@index"!]u)
[!ENDLOOP!][!//

/**
* @brief   Switches the Production Error Detection and Notification OFF
*
* @implements     DSPI02626
* 
* @api
*/
[!NOCODE!]
[!VAR "SpiDemErrorEnable" = "'false'"!]
[!IF "SpiNonAUTOSAR/SpiDisableDemReportErrorStatus ='false'"!][!//
    [!VAR "nconf" = "count(SpiDriver/*)"!]
    [!VAR "iconf" = "0"!]
    [!FOR "iconf" = "1" TO "$nconf"!]
        [!IF "node:exists(SpiDriver/*[$iconf]/SpiDemEventParameterRefs)"!]
            [!VAR "SpiDemErrorEnable" = "'true'"!]
        [!ENDIF!]
    [!ENDFOR!]
[!ENDIF!]
[!ENDNOCODE!]
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
#define SPI_DISABLE_DEM_REPORT_ERROR_STATUS   ([!IF "$SpiDemErrorEnable"!]STD_ON  /* Enable Production Error Detection */[!ELSE!]STD_OFF /* Disable Production Error Detection */[!ENDIF!])

/*==================================================================================================
 *                                     DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Define values for Autosar configuration variants.
* @details Define values for Autosar configuration variants.
*/
#define SPI_VARIANT_PRECOMPILE  (0)
#define SPI_VARIANT_POSTBUILD   (1)
#define SPI_VARIANT_LINKTIME    (2)

[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantPreCompile'"!][!//
/**
* @brief Defines the use of Pre-Compile(PC) support
* @details VARIANT-PRE-COMPILE: Only parameters with "Pre-compile time" configu-ration are allowed
*        in this variant.
* @implements DSPI02623.
*/
#define SPI_CONFIG_VARIANT      (SPI_VARIANT_PRECOMPILE)
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/* @violates @ref Spi_Cfg_h_REF_4 C macros shall only expand to a braced initialiser, a constant, a parenthesised expression */
#define SPI_CFG_EXTERN_DECLARATIONS  \
extern CONST(Spi_ConfigType, SPI_CONST) SpiDriverConfig_PC;
/* @violates @ref Spi_Cfg_h_REF_4 C macros shall only expand to a braced initialiser, a constant, a parenthesised expression */
#define [!"node:name(SpiDriver/*[1])"!] SpiDriverConfig_PC
[!ENDIF!][!//
[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantPostBuild'"!]
/**
* @brief Defines the use of Post-Build(PB) support.
* @details VARIANT-POST-BUILD: Parameters with "Pre-compile time",
*        "Link time" and "Post-build time" are allowed in this variant.
* @implements DSPI02622.
*/
#define SPI_CONFIG_VARIANT      (SPI_VARIANT_POSTBUILD)
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/* @violates @ref Spi_Cfg_h_REF_4 C macros shall only expand to a braced initialiser, a constant, a parenthesised expression */
#define SPI_CFG_EXTERN_DECLARATIONS \[!NOCODE!]
[!VAR "var_count1"="num:i(count(SpiDriver/*))"!][!VAR "w"="0"!]
[!LOOP "SpiDriver/*"!][!VAR "w"="$w + 1"!][!//
[!CODE!]
extern CONST(Spi_ConfigType, SPI_CONST) [!"@name"!];[!IF "$w < $var_count1"!] \[!ENDIF!][!ENDCODE!]
[!ENDLOOP!][!//
[!ENDNOCODE!][!//
[!ENDIF!]
[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantLinkTime'"!][!//
/**
* @brief Defines the use of Link-Time(L) support.
* @details VARIANT-LINK-TIME: Only parameters with "Pre-compile time"
*        and "Link time" are allowed in this variant.
* @implements DSPI02621.
*/
/* Link Time Support. */
#define SPI_CONFIG_VARIANT      (SPI_VARIANT_LINKTIME)
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/* @violates @ref Spi_Cfg_h_REF_4 C macros shall only expand to a braced initialiser, a constant, a parenthesised expression */
#define SPI_CFG_EXTERN_DECLARATIONS  \
extern CONST(Spi_ConfigType, SPI_CONST) SpiDriverConfig_LT;
/* @violates @ref Spi_Cfg_h_REF_4 C macros shall only expand to a braced initialiser, a constant, a parenthesised expression */
#define [!"node:name(SpiDriver/*[1])"!] SpiDriverConfig_LT
[!ENDIF!][!//

/**
* @brief Defines if transfers are made using DMA or FIFO.
* @details Defines if transfers are made using DMA or FIFO.
* @implements DSPI02052.
*/
[!IF "ecu:get('SpiDMAPresent') = 'TRUE' and node:exists(SpiGeneral/SpiGlobalDmaEnable) and SpiGeneral/SpiGlobalDmaEnable = 'true'"!][!//
#define SPI_DMA_USED    (STD_ON)
[!ELSE!][!//
#define SPI_DMA_USED    (STD_OFF)
[!ENDIF!][!//

/**
* @brief Defines if Spi driver optimization for sequences having only one job is activated or not.
* @details Defines if Spi driver optimization for sequences having only one job is activated or not.
*        If activated, additional RAM memory is required for internal data caching.
* @implements DSPI02053.
*/
[!IF "node:exists(SpiGeneral/SpiOptimizeOneJobSequences)"!][!//
#define SPI_OPTIMIZE_ONE_JOB_SEQUENCES ([!IF "SpiGeneral/SpiOptimizeOneJobSequences"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
[!ELSE!][!//
#define SPI_OPTIMIZE_ONE_JOB_SEQUENCES (STD_OFF)
[!ENDIF!][!//

/**
* @brief Number of CPU clock cycles consumed by Spi_SyncTransmit() during the wait on TX/RX transmission.
* @details This value is set to the minimum measure retrieved for GHS, DIAB and CW compilers,
*       with all optimizations activated.
*/
#define SPI_WAIT_LOOP_TICKS       23u

/**
* @brief Defines the "Number of Loops" timeout.
* @details Defines the "Number of Loops" timeout used by Spi_SyncTransmit
*        function during the wait on TX/RX transmission.
*/
[!NOCODE!][!//
    [!SELECT "node:ref(SpiGeneral/SpiClockRef)"!]
    [!VAR "CoreFrequency" = "McuClockReferencePointFrequency"!]
    [!ENDSELECT!]

[!ENDNOCODE!][!//
#define SPI_TIMEOUT_COUNTER       ((uint32)(([!"num:i(SpiGeneral/SpiSyncTransmitTimeout * $CoreFrequency div 1000000)"!]u) / SPI_WAIT_LOOP_TICKS))

/**
* @brief Allow simultaneous calls to Spi_SyncTransmit() for different threads.
* @details Two concurrent calls to Spi_SyncTransmit() will be allowed only if the related sequences
*       do not share HW units.
* @implements DSPI02065.
*/
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
#define SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT             ([!IF "SpiGeneral/SpiSupportConcurrentSyncTransmit"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/*==================================================================================================
 *                                           Non AUTOSAR DEFINES
==================================================================================================*/

/**
* @brief If enabled, the asyncronous operation mode (POLLING or INTERRUPT)
* @details If enabled, the asyncronous operation mode (POLLING or INTERRUPT) can
*       be defined independently for each HWUnit using Spi_SetHWUnitAsyncMode().
* @implements DSPI02064.
*/
[!IF "(SpiGeneral/SpiLevelDelivered = 2) and node:exists(SpiNonAUTOSAR/SpiEnableHWUnitAsyncMode)"!][!//
#define SPI_HWUNIT_ASYNC_MODE ([!IF "SpiNonAUTOSAR/SpiEnableHWUnitAsyncMode"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
[!ELSE!][!//
#define SPI_HWUNIT_ASYNC_MODE (STD_OFF)
[!ENDIF!][!//

/**
* @brief If enabled, allows dual MCU clock configuration settings.
* @details If enabled, allows dual MCU clock configuration settings.
* @implements DSPI02063.
*/
[!IF " node:exists(SpiNonAUTOSAR/SpiEnableDualClockMode) and (node:value(SpiNonAUTOSAR/SpiEnableDualClockMode) = 'true')"!][!//
#define SPI_DUAL_CLOCK_MODE (STD_ON)
[!ELSE!][!//
#define SPI_DUAL_CLOCK_MODE (STD_OFF)
[!ENDIF!][!//

/**
* @brief   Specifies if TSB implementation is supported
*/
[!IF "ecu:has('SpiTSBSupport') and (ecu:get('SpiTSBSupport') = 'TRUE')"!][!//
#define TSB_MODE_SUPPORTED
[!ELSE!][!//
[!ENDIF!][!//

/**
* @brief   Specifies if TSB feature/mode is available
*/
[!IF "node:exists(SpiNonAUTOSAR/SpiTSBModeSupport) and (node:value(SpiNonAUTOSAR/SpiTSBModeSupport) = 'true')"!][!//
#define SPI_TSB_MODE  (STD_ON)
[!ELSE!][!//
#define SPI_TSB_MODE (STD_OFF)
[!ENDIF!][!//

[!IF "node:exists(SpiNonAUTOSAR/SpiTSBModeSupport) and (node:value(SpiNonAUTOSAR/SpiTSBModeSupport) = 'true')"!][!//
[!LOOP "SpiDriver/*"!][!//
[!VAR "TSBJobCount"="0"!][!//
[!LOOP "SpiJob/*"!][!//
[!IF "node:exists(TSBModeEnable) and TSBModeEnable = 'true'"!][!//
   [!VAR "TSBJobCount" = "$TSBJobCount +1"!] [!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
#define SPI_MAX_TSBJOBS ((Spi_JobType)([!"num:i($TSBJobCount)"!]))
[!ENDIF!][!//

/**
* @brief If enabled, allows to configure more than 256 sequences, jobs and channels.
*/
[!IF " node:exists(SpiNonAUTOSAR/SpiAllowBigSizeCollections) and (node:value(SpiNonAUTOSAR/SpiAllowBigSizeCollections) = 'true')"!][!//
#define SPI_ALLOW_BIGSIZE_COLLECTIONS (STD_ON)
[!ELSE!][!//
#define SPI_ALLOW_BIGSIZE_COLLECTIONS (STD_OFF)
[!ENDIF!][!//

/**
* @brief If enabled, SpiDataType is declared as uint8 instead of uint16.
*/
#define SPI_DATA_WIDTH_8  0u
#define SPI_DATA_WIDTH_16 1u
[!IF " node:exists(SpiNonAUTOSAR/SpiForceDataType) and (node:value(SpiNonAUTOSAR/SpiForceDataType) = 'true')"!][!//
#define SPI_FORCE_DATA_TYPE (STD_ON)
[!ELSE!][!//
#define SPI_FORCE_DATA_TYPE (STD_OFF)
[!ENDIF!][!//


/*==================================================================================================
*                                            ENUMS
==================================================================================================*/


/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_h_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_h_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

 /*
* @violates @ref Spi_Cfg_h_REF_3 This is required as per autosar Requirement, 
*/
/*
* @violates @ref Spi_Cfg_h_REF_5 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_h_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_h_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /*SPI_CFG_H*/

/** @} */
[!ENDCODE!][!//
