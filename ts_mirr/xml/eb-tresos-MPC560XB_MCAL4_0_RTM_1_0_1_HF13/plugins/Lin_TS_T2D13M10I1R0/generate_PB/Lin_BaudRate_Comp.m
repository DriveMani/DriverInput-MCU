[!/*
    @file    Lin_BaudRate_com.m_Inc.m
    @version 1.0.1

    @brief   AUTOSAR Lin - Baud rate computation for Lin_Cfg.c, Lin_PBcfg.c.
    @details Baud rate computation for Lin_Cfg.c, Lin_PBcfg.c
    
    Project AUTOSAR 4.0 MCAL
    Patform PA
    Peripheral LINFlex
    Dependencies 
    
    ARVersion 4.0.3
    ARRevision ASR_REL_4_0_REV_0003
    ARConfVariant
    SWVersion 1.0.1
    BuildVersion MPC560xB_MCAL_1_0_1_RTM_HF5_ASR_REL_4_0_REV_0003_20140822

    (c) Copyright 2006-2014 Freescale Semiconductor Inc and STMicroelectronics
    All Rights Reserved.
*/!]
[!/*==================================================================================================
==================================================================================================
*/!]
[!VAR "ClockFrequencyFromMcu" = "McuClockReferencePointFrequency"!]
    [!VAR "LFDIV" = "($ClockFrequencyFromMcu div ($linBaudrate * 16))"!][//
    [!VAR "temp1" = "num:i($LFDIV)"!][!//
    [!VAR "temp2" = "$LFDIV - $temp1"!][!//
    [!VAR "LINFBRR" = "round($temp2 * 16)"!][!//
    [!VAR "LINFBRR" = "num:inttohex($LINFBRR,8)"!][!//
    [!VAR "LINIBRR" = "num:inttohex($temp1,8)"!][!//
    [!VAR "LINIBRR" = "num:hextoint($LINIBRR)"!][!//
    [!VAR "LINFBRR" = "num:hextoint($LINFBRR)"!][!//
    [!VAR "LINIBRR" = "bit:shl($LINIBRR,16)"!][!//
    [!VAR "LINIBRR_LINFBRR" = "bit:or($LINIBRR,$LINFBRR)"!][!//
    [!VAR "LINIBRR_LINFBRR" = "num:inttohex($LINIBRR_LINFBRR,8)"!][!//