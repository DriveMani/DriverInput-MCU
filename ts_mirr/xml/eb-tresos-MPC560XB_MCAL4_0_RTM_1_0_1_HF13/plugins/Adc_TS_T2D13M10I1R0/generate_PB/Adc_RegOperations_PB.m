[!NOCODE!][!//

/*!
    @file Adc_RegOperations_PB.m
    @version 1.0.0.0

    \brief AUTOSAR Adc module implementation
    \project
    \author

    \platform PA
    \peripheral ADCDIG
    \dependencies none
    \arversion 4.0.3
    \arrevision ASR_REL_4_0_REV_0003
    \arconfvariant
    \swversion 1.0.1
    \buildversion MPC560xB_MCAL_1_0_1_RTM_ASR_REL_4_0_REV_0003_20140606
    @lastmodusr
    @lastmoddate

    Freescale Semiconductor Inc. & STMicroelectronics
    (c) Copyright 2006-2014 Freescale Semiconductor Inc. & STMicroelectronics
    ALL RIGHTS RESERVED.
*/

[!ENDNOCODE!][!//

[!MACRO "HWRESOURCE" , "SOURCE"!]
    [!NOCODE!]
        [!IF "contains($SOURCE,'eMIOS_A_Ch')"!]
            [!CODE!][!"num:i(text:replace($SOURCE,'eMIOS_A_Ch',''))"!][!ENDCODE!]
        [!ELSEIF "contains($SOURCE,'eMIOS_B_Ch')"!]
            [!CODE!][!"32 + num:i(text:replace($SOURCE,'eMIOS_B_Ch',''))"!][!ENDCODE!]
        [!ELSEIF "contains($SOURCE,'PIT3')"!]
            [!CODE!][!"23"!][!ENDCODE!]
        [!ELSEIF "contains($SOURCE,'PIT7')"!]
            [!CODE!][!"55"!][!ENDCODE!]
        [!ELSEIF "contains($SOURCE,'PIT2')"!]
            [!CODE!][!"64"!][!ENDCODE!]
        [!ELSEIF "contains($SOURCE,'PIT6')"!]
            [!CODE!][!"65"!][!ENDCODE!]
        [!ENDIF!]
    [!ENDNOCODE!]
[!ENDMACRO!]
