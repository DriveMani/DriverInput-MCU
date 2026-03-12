[!IF "not(var:defined('PORT_RESOURCE_M'))"!]
[!VAR "PORT_RESOURCE_M"="'true'"!]
[!VAR "PinMap"!]
eMIOS_A0_PORT0;1:[!//
CLKOUT_PORT0;2:[!//
WKUP19_PORT0;5:[!//
eMIOS_A13_PORT0;3:[!//
eMIOS_E0UC13_PORT0;3:[!//
eMIOS_E0UC0_PORT0;1:[!//
eMIOS_A1_PORT1;1:[!//
WKUP2_PORT1;5:[!//
NMI_A1_PORT1;2:[!//
eMIOS_E0UC1_PORT1;1:[!//
eMIOS_A2_PORT2;1:[!//
WKUP3_PORT2;5:[!//
ADC0_MA2_PORT2;3:[!//
eMIOS_E0UC2_PORT2;1:[!//
eMIOS_A3_PORT3;1:[!//
EIRQ0_PORT3;8:[!//
LIN5_TXD_PORT3;2:[!//
SPIx_CS4_PORT3;3:[!//
ADC1_ANS0_PORT3;4:[!//
eMIOS_E0UC3_PORT3;1:[!//
eMIOS_A4_PORT4;1:[!//
WKUP9_PORT4;5:[!//
SPI1_CS0_PORT4;3:[!//
LIN5_RXD_PORT4;5:[!//
eMIOS_E0UC4_PORT4;1:[!//
eMIOS_A5_PORT5;1:[!//
LIN4_TXD_PORT5;2:[!//
eMIOS_E0UC5_PORT5;1:[!//
eMIOS_A6_PORT6;1:[!//
EIRQ1_PORT6;8:[!//
SPI1_CS1_PORT6;3:[!//
LIN4_RXD_PORT6;5:[!//
eMIOS_E0UC6_PORT6;1:[!//
eMIOS_A7_PORT7;1:[!//
LIN3_TXD_PORT7;2:[!//
EIRQ2_PORT7;8:[!//
ADC1_ANS1_PORT7;4:[!//
eMIOS_E0UC7_PORT7;1:[!//
eMIOS_A8_PORT8;1:[!//
EIRQ3_PORT8;8:[!//
eMIOS_A14_PORT8;2:[!//
LIN3_RXD_PORT8;5:[!//
eMIOS_E0UC8_PORT8;1:[!//
eMIOS_E0UC14_PORT8;2:[!//
eMIOS_A9_PORT9;1:[!//
SPI1_CS2_PORT9;3:[!//
eMIOS_E0UC9_PORT9;1:[!//
eMIOS_A10_PORT10;1:[!//
I2C0_SDA_PORT10;2:[!//
LIN2_TXD_PORT10;3:[!//
ADC1_ANS2_PORT10;4:[!//
eMIOS_E0UC10_PORT10;1:[!//
LINFlex_2_TX_PORT10;3:[!//
eMIOS_A11_PORT11;1:[!//
I2C0_SCL_PORT11;2:[!//
ADC1_ANS3_PORT11;4:[!//
LIN2_RXD_PORT11;5:[!//
EIRQ16_PORT11;8:[!//
eMIOS_E0UC11_PORT11;1:[!//
eMIOS_A28_PORT12;2:[!//
SPI1_CS3_PORT12;3:[!//
EIRQ17_PORT12;8:[!//
SPI0_SIN_PORT12;5:[!//
SPI0_SOUT_PORT13;1:[!//
eMIOS_A29_PORT13;2:[!//
SPI1_CS3_PORT13;3:[!//
SPI0_SCK_PORT14;1:[!//
SPI0_CS0_PORT14;2:[!//
EIRQ4_PORT14;8:[!//
eMIOS_A0_PORT14;3:[!//
eMIOS_E0UC0_PORT14;3:[!//
SPI0_CS0_PORT15;1:[!//
SPI0_SCK_PORT15;2:[!//
WKUP10_PORT15;5:[!//
eMIOS_A1_PORT15;3:[!//
eMIOS_E0UC1_PORT15;3:[!//
CAN0_TX_PORT16;1:[!//
eMIOS_A30_PORT16;2:[!//
LIN0_TXD_PORT16;3:[!//
LINFlex_2_TX_PORT16;3:[!//
WKUP4_PORT17;5:[!//
eMIOS_A31_PORT17;2:[!//
LIN0_RXD_PORT17;7:[!//
CAN0_RX_PORT17;5:[!//
LIN0_RXD_PORT17;3:[!//
FlexCAN_0_RX_PORT17;7:[!//
LIN0_TXD_PORT18;1:[!//
I2C0_SDA_PORT18;2:[!//
eMIOS_A30_PORT18;3:[!//
WKUP11_PORT19;5:[!//
eMIOS_A31_PORT19;1:[!//
I2C0_SCL_PORT19;2:[!//
LIN0_RXD_PORT19;5:[!//
LIN0_RXD_PORT19;7:[!//
ADCx_ANP0_PORT20;4:[!//
ADCx_ANP1_PORT21;4:[!//
ADCx_ANP2_PORT22;4:[!//
ADCx_ANP3_PORT23;4:[!//
ADC0_ANS0_PORT24;4:[!//
ADC1_ANS4_PORT24;4:[!//
WKUP25_PORT24;5:[!//
OSC32K_XTAL_PORT24;6:[!//
ADC0_ANS1_PORT25;4:[!//
ADC1_ANS5_PORT25;4:[!//
WKUP26_PORT25;5:[!//
OSC32K_EXTAL_PORT25;6:[!//
ADC0_ANS2_PORT26;4:[!//
WKUP8_PORT26;5:[!//
ADC1_ANS6_PORT26;4:[!//
eMIOS_A3_PORT27;1:[!//
SPI0_CS0_PORT27;3:[!//
ADC0_ANS3_PORT27;4:[!//
eMIOS_E0UC3_PORT27;1:[!//
ADC1_S12_PORT27;4:[!//
eMIOS_A4_PORT28;1:[!//
SPI0_CS1_PORT28;3:[!//
ADC0_ANX0_PORT28;4:[!//
eMIOS_E0UC4_PORT28;1:[!//
ADC1_X0_PORT28;4:[!//
eMIOS_A5_PORT29;1:[!//
SPI0_CS2_PORT29;3:[!//
ADC0_ANX1_PORT29;4:[!//
eMIOS_E0UC5_PORT29;1:[!//
ADC1_X1_PORT29;4:[!//
eMIOS_A6_PORT30;1:[!//
SPI0_CS3_PORT30;3:[!//
ADC0_ANX2_PORT30;4:[!//
eMIOS_E0UC6_PORT30;1:[!//
ADC1_X2_PORT30;4:[!//
eMIOS_A7_PORT31;1:[!//
SPI0_CS4_PORT31;3:[!//
ADC0_ANX3_PORT31;4:[!//
eMIOS_E0UC7_PORT31;1:[!//
ADC1_X3_PORT31;4:[!//
JTAG_TDI_PORT32;2:[!//
JTAG_TDO_PORT33;2:[!//
SPI1_SCK_PORT34;1:[!//
CAN4_TX_PORT34;2:[!//
EIRQ5_PORT34;8:[!//
DEBUG0_PORT34;3:[!//
SPI1_CS0_PORT35;1:[!//
ADC0_MA0_PORT35;2:[!//
EIRQ6_PORT35;8:[!//
DEBUG1_PORT35;3:[!//
CAN1_RX_PORT35;5:[!//
CAN4_RX_PORT35;7:[!//
ADC_MA0_PORT35;2:[!//
eMIOS_B31_PORT36;1:[!//
DEBUG2_PORT36;3:[!//
EIRQ18_PORT36;8:[!//
SPI1_SIN_PORT36;5:[!//
CAN3_RX_PORT36;7:[!//
SPI1_SOUT_PORT37;1:[!//
CAN3_TX_PORT37;2:[!//
EIRQ7_PORT37;8:[!//
DEBUG3_PORT37;3:[!//
LIN1_TXD_PORT38;1:[!//
eMIOS_B28_PORT38;2:[!//
DEBUG4_PORT38;3:[!//
WKUP12_PORT39;5:[!//
eMIOS_B29_PORT39;2:[!//
DEBUG5_PORT39;3:[!//
LIN1_RXD_PORT39;5:[!//
LIN2_TXD_PORT40;1:[!//
eMIOS_A3_PORT40;2:[!//
DEBUG6_PORT40;3:[!//
eMIOS_E0UC3_PORT40;2:[!//
WKUP13_PORT41;5:[!//
eMIOS_A7_PORT41;2:[!//
DEBUG7_PORT41;3:[!//
LIN2_RXD_PORT41;5:[!//
eMIOS_E0UC7_PORT41;2:[!//
CAN1_TX_PORT42;1:[!//
CAN4_TX_PORT42;2:[!//
ADC0_MA1_PORT42;3:[!//
ADC0_MA2_PORT43;3:[!//
CAN1_RX_PORT43;5:[!//
CAN4_RX_PORT43;7:[!//
WKUP5_PORT43;5:[!//
eMIOS_A12_PORT44;1:[!//
SPI2_SIN_PORT44;5:[!//
eMIOS_E0UC12_PORT44;1:[!//
EIRQ19_PORT44;8:[!//
eMIOS_A13_PORT45;1:[!//
SPI2_SOUT_PORT45;2:[!//
eMIOS_E0UC13_PORT45;1:[!//
eMIOS_A14_PORT46;1:[!//
SPI2_SCK_PORT46;2:[!//
EIRQ8_PORT46;8:[!//
eMIOS_E0UC14_PORT46;1:[!//
eMIOS_A15_PORT47;1:[!//
SPI2_CS0_PORT47;2:[!//
eMIOS_E0UC15_PORT47;1:[!//
EIRQ20_PORT47;8:[!//
ADCx_ANP4_PORT48;4:[!//
WKUP27_PORT48;5:[!//
ADCx_ANP5_PORT49;4:[!//
WKUP28_PORT49;5:[!//
ADCx_ANP6_PORT50;4:[!//
ADCx_ANP7_PORT51;4:[!//
ADCx_ANP8_PORT52;4:[!//
ADCx_ANP9_PORT53;4:[!//
ADCx_ANP10_PORT54;4:[!//
ADCx_ANP11_PORT55;4:[!//
ADCx_ANP12_PORT56;4:[!//
ADCx_ANP13_PORT57;4:[!//
ADCx_ANP14_PORT58;4:[!//
ADCx_ANP15_PORT59;4:[!//
SPI0_CS5_PORT60;1:[!//
eMIOS_A24_PORT60;2:[!//
ADC0_ANS4_PORT60;4:[!//
eMIOS_E0UC24_PORT60;2:[!//
ADC1_S8_PORT60;4:[!//
SPI1_CS0_PORT61;1:[!//
eMIOS_A25_PORT61;2:[!//
ADC0_ANS5_PORT61;4:[!//
eMIOS_E0UC25_PORT61;2:[!//
ADC1_S9_PORT61;4:[!//
SPI1_CS1_PORT62;1:[!//
eMIOS_A26_PORT62;2:[!//
ADC0_ANS6_PORT62;4:[!//
eMIOS_E0UC26_PORT62;2:[!//
ADC1_S10_PORT62;4:[!//
SPI1_CS2_PORT63;1:[!//
eMIOS_A27_PORT63;2:[!//
ADC0_ANS7_PORT63;4:[!//
eMIOS_E0UC27_PORT63;2:[!//
ADC1_S11_PORT63;4:[!//
eMIOS_A16_PORT64;1:[!//
CAN5_RX_PORT64;5:[!//
WKUP6_PORT64;5:[!//
eMIOS_E0UC16_PORT64;1:[!//
eMIOS_A17_PORT65;1:[!//
CAN5_TX_PORT65;2:[!//
eMIOS_E0UC17_PORT65;1:[!//
eMIOS_A18_PORT66;1:[!//
SPI1_SIN_PORT66;5:[!//
EIRQ21_PORT66;8:[!//
eMIOS_E0UC18_PORT66;1:[!//
eMIOS_A19_PORT67;1:[!//
SPI1_SOUT_PORT67;2:[!//
eMIOS_E0UC19_PORT67;1:[!//
eMIOS_A20_PORT68;1:[!//
SPI1_SCK_PORT68;2:[!//
EIRQ9_PORT68;8:[!//
eMIOS_E0UC20_PORT68;1:[!//
eMIOS_A21_PORT69;1:[!//
SPI1_CS0_PORT69;2:[!//
ADC0_MA2_PORT69;3:[!//
eMIOS_E0UC21_PORT69;1:[!//
eMIOS_A22_PORT70;1:[!//
SPI0_CS3_PORT70;2:[!//
ADC0_MA1_PORT70;3:[!//
EIRQ22_PORT70;8:[!//
eMIOS_E0UC22_PORT70;1:[!//
eMIOS_A23_PORT71;1:[!//
SPI0_CS2_PORT71;2:[!//
ADC0_MA0_PORT71;3:[!//
EIRQ23_PORT71;8:[!//
eMIOS_E0UC23_PORT71;1:[!//
CAN2_TX_PORT72;1:[!//
eMIOS_A22_PORT72;2:[!//
CAN3_TX_PORT72;3:[!//
eMIOS_E0UC22_PORT72;2:[!//
eMIOS_A23_PORT73;2:[!//
CAN2_RX_PORT73;5:[!//
CAN3_RX_PORT73;7:[!//
WKUP7_PORT73;5:[!//
eMIOS_E0UC23_PORT73;2:[!//
LIN3_TXD_PORT74;1:[!//
SPI1_CS3_PORT74;2:[!//
EIRQ10_PORT74;8:[!//
eMIOS_B30_PORT74;3:[!//
eMIOS_A24_PORT75;1:[!//
SPI1_CS4_PORT75;2:[!//
LIN3_RXD_PORT75;5:[!//
WKUP14_PORT75;5:[!//
eMIOS_E0UC24_PORT75;1:[!//
eMIOS_B19_PORT76;2:[!//
EIRQ11_PORT76;8:[!//
ADC1_ANS7_PORT76;4:[!//
SPI2_SIN_PORT76;5:[!//
SPI2_SOUT_PORT77;1:[!//
eMIOS_B20_PORT77;2:[!//
SPI2_SCK_PORT78;1:[!//
eMIOS_B21_PORT78;2:[!//
EIRQ12_PORT78;8:[!//
SPI2_CS0_PORT79;1:[!//
eMIOS_B22_PORT79;2:[!//
eMIOS_A10_PORT80;1:[!//
SPI1_CS3_PORT80;2:[!//
ADC0_ANS8_PORT80;4:[!//
eMIOS_A11_PORT81;1:[!//
SPI1_CS4_PORT81;2:[!//
ADC0_ANS9_PORT81;4:[!//
eMIOS_A12_PORT82;1:[!//
SPI2_CS0_PORT82;2:[!//
ADC0_ANS10_PORT82;4:[!//
eMIOS_A13_PORT83;1:[!//
SPI2_CS1_PORT83;2:[!//
ADC0_ANS11_PORT83;4:[!//
eMIOS_A14_PORT84;1:[!//
SPI2_CS2_PORT84;2:[!//
ADC0_ANS12_PORT84;4:[!//
eMIOS_A22_PORT85;1:[!//
SPI2_CS3_PORT85;2:[!//
ADC0_ANS13_PORT85;4:[!//
eMIOS_A23_PORT86;1:[!//
SPI1_CS1_PORT86;2:[!//
ADC0_ANS14_PORT86;4:[!//
SPI1_CS2_PORT87;2:[!//
ADC0_ANS15_PORT87;4:[!//
CAN3_TX_PORT88;1:[!//
SPI0_CS4_PORT88;2:[!//
CAN2_TX_PORT88;3:[!//
eMIOS_B1_PORT89;1:[!//
SPI0_CS5_PORT89;2:[!//
CAN2_RX_PORT89;5:[!//
CAN3_RX_PORT89;7:[!//
SPI0_CS1_PORT90;1:[!//
LIN4_TXD_PORT90;2:[!//
eMIOS_B2_PORT90;3:[!//
WKUP15_PORT91;5:[!//
SPI0_CS2_PORT91;1:[!//
eMIOS_B3_PORT91;2:[!//
LIN4_RXD_PORT91;5:[!//
eMIOS_B25_PORT92;1:[!//
LIN5_TXD_PORT92;2:[!//
eMIOS_B26_PORT93;1:[!//
WKUP16_PORT93;5:[!//
LIN5_RXD_PORT93;5:[!//
CAN4_TX_PORT94;1:[!//
eMIOS_B27_PORT94;2:[!//
CAN1_TX_PORT94;3:[!//
eMIOS_B4_PORT95;1:[!//
CAN1_RX_PORT95;5:[!//
CAN4_RX_PORT95;7:[!//
EIRQ13_PORT95;8:[!//
CAN5_TX_PORT96;1:[!//
eMIOS_B23_PORT96;2:[!//
eMIOS_B24_PORT97;2:[!//
CAN5_RX_PORT97;5:[!//
EIRQ14_PORT97;8:[!//
eMIOS_B11_PORT98;1:[!//
SPI3_SOUT_PORT98;2:[!//
eMIOS_B12_PORT99;1:[!//
WKUP17_PORT99;5:[!//
SPI3_CS0_PORT99;2:[!//
eMIOS_B13_PORT100;1:[!//
SPI3_SCK_PORT100;2:[!//
eMIOS_B14_PORT101;1:[!//
SPI3_SIN_PORT101;5:[!//
WKUP18_PORT101;5:[!//
eMIOS_B15_PORT102;1:[!//
LIN6_TXD_PORT102;2:[!//
eMIOS_B16_PORT103;1:[!//
eMIOS_B30_PORT103;2:[!//
LIN6_RXD_PORT103;5:[!//
WKUP20_PORT103;5:[!//
EIRQ15_PORT104;8:[!//
eMIOS_B17_PORT104;1:[!//
LIN7_TXD_PORT104;2:[!//
SPI2_CS0_PORT104;3:[!//
eMIOS_B18_PORT105;1:[!//
SPI2_SCK_PORT105;3:[!//
LIN7_RXD_PORT105;5:[!//
WKUP21_PORT105;5:[!//
eMIOS_A24_PORT106;1:[!//
eMIOS_B31_PORT106;2:[!//
SPI4_SIN_PORT106;5:[!//
eMIOS_A25_PORT107;1:[!//
SPI4_CS0_PORT107;2:[!//
eMIOS_A26_PORT108;1:[!//
SPI4_SOUT_PORT108;2:[!//
eMIOS_A27_PORT109;1:[!//
SPI4_SCK_PORT109;2:[!//
eMIOS_B0_PORT110;1:[!//
LIN8_TXD_PORT110;2:[!//
eMIOS_B1_PORT111;1:[!//
LIN8_RXD_PORT111;5:[!//
eMIOS_B2_PORT112;1:[!//
SPI1_SIN_PORT112;5:[!//
eMIOS_B3_PORT113;1:[!//
SPI1_SOUT_PORT113;2:[!//
eMIOS_B4_PORT114;1:[!//
SPI1_SCK_PORT114;2:[!//
eMIOS_B5_PORT115;1:[!//
SPI1_CS0_PORT115;2:[!//
eMIOS_B6_PORT116;1:[!//
eMIOS_B7_PORT117;1:[!//
eMIOS_B8_PORT118;1:[!//
ADC0_MA2_PORT118;3:[!//
eMIOS_B9_PORT119;1:[!//
SPI2_CS3_PORT119;2:[!//
ADC0_MA1_PORT119;3:[!//
eMIOS_B10_PORT120;1:[!//
SPI2_CS2_PORT120;2:[!//
ADC0_MA0_PORT120;3:[!//
JTAG_TCK_PORT121;2:[!//
JTAG_TMS_PORT122;2:[!//
SPI3_SOUT_PORT123;1:[!//
SPI4_CS0_PORT123;2:[!//
eMIOS_B5_PORT123;3:[!//
SPI3_SCK_PORT124;1:[!//
SPI4_CS1_PORT124;2:[!//
eMIOS_B25_PORT124;3:[!//
SPI4_SOUT_PORT125;1:[!//
SPI3_CS0_PORT125;2:[!//
eMIOS_B26_PORT125;3:[!//
SPI4_SCK_PORT126;1:[!//
SPI3_CS1_PORT126;2:[!//
eMIOS_B27_PORT126;3:[!//
SPI5_SOUT_PORT127;1:[!//
eMIOS_B17_PORT127;3:[!//
eMIOS_A28_PORT128;1:[!//
LIN8_TXD_PORT128;2:[!//
eMIOS_A29_PORT129;1:[!//
LIN8_RXD_PORT129;5:[!//
WKUP24_PORT129;5:[!//
eMIOS_A30_PORT130;1:[!//
LIN9_TXD_PORT130;2:[!//
eMIOS_A31_PORT131;1:[!//
LIN9_RXD_PORT131;5:[!//
WKUP23_PORT131;5:[!//
eMIOS_B28_PORT132;1:[!//
SPI4_SOUT_PORT132;2:[!//
eMIOS_B29_PORT133;1:[!//
SPI4_SCK_PORT133;2:[!//
eMIOS_B30_PORT134;1:[!//
SPI4_CS0_PORT134;2:[!//
eMIOS_B31_PORT135;1:[!//
SPI4_CS1_PORT135;2:[!//
ADC0_ANS16_PORT136;4:[!//
ADC0_ANS17_PORT137;4:[!//
ADC0_ANS18_PORT138;4:[!//
ADC0_ANS19_PORT139;4:[!//
SPI3_SIN_PORT139;5:[!//
SPI3_CS0_PORT140;1:[!//
ADC0_ANS20_PORT140;4:[!//
SPI3_CS1_PORT141;1:[!//
ADC0_ANS21_PORT141;4:[!//
ADC0_ANS22_PORT142;4:[!//
SPI4_SIN_PORT142;5:[!//
SPI4_CS0_PORT143;1:[!//
ADC0_ANS23_PORT143;4:[!//
SPI4_CS1_PORT144;1:[!//
ADC0_ANS24_PORT144;4:[!//
ADC0_ANS25_PORT145;4:[!//
SPI5_SIN_PORT145;5:[!//
SPI5_CS0_PORT146;1:[!//
ADC0_ANS26_PORT146;4:[!//
SPI5_CS1_PORT147;1:[!//
ADC0_ANS27_PORT147;4:[!//
SPI5_SCK_PORT148;1:[!//
eMIOS_B18_PORT148;2:[!//
[!ENDVAR!]

[!VAR "PSMI0"!]
CAN1_RX_PORT35;0:[!//
CAN4_RX_PORT35;0:[!//
CAN3_RX_PORT36;0:[!//
CAN1_RX_PORT43;16777216:[!//
CAN4_RX_PORT43;1:[!//
CAN2_RX_PORT73;0:[!//
CAN3_RX_PORT73;256:[!//
CAN2_RX_PORT89;65536:[!//
CAN3_RX_PORT89;512:[!//
CAN1_RX_PORT95;33554432:[!//
CAN4_RX_PORT95;2:[!//
[!ENDVAR!]

[!VAR "PSMI1"!]
SPI0_SCK_PORT14;0:[!//
SPI0_CS0_PORT14;0:[!//
SPI0_CS0_PORT15;256:[!//
SPI0_SCK_PORT15;65536:[!//
SPI0_CS0_PORT27;512:[!//
SPI1_SCK_PORT34;0:[!//
CAN5_RX_PORT64;0:[!//
SPI1_SCK_PORT68;1:[!//
CAN5_RX_PORT97;16777216:[!//
SPI1_SCK_PORT114;2:[!//
[!ENDVAR!]

[!VAR "PSMI2"!]
SPI1_CS0_PORT35;0:[!//
SPI1_SIN_PORT36;0:[!//
SPI2_SIN_PORT44;0:[!//
SPI2_SCK_PORT46;0:[!//
SPI1_CS0_PORT61;65536:[!//
SPI1_SIN_PORT66;16777216:[!//
SPI1_CS0_PORT69;131072:[!//
SPI2_SIN_PORT76;1:[!//
SPI2_SCK_PORT78;256:[!//
SPI2_SCK_PORT105;512:[!//
SPI1_SIN_PORT112;33554432:[!//
SPI1_CS0_PORT115;196608:[!//
[!ENDVAR!]

[!VAR "PSMI3"!]
eMIOS_A3_PORT3;0:[!//
eMIOS_E0UC3_PORT3;0:[!//
eMIOS_A4_PORT4;0:[!//
eMIOS_E0UC4_PORT4;0:[!//
eMIOS_A5_PORT5;0:[!//
eMIOS_E0UC5_PORT5;0:[!//
eMIOS_A3_PORT27;65536:[!//
eMIOS_E0UC3_PORT27;65536:[!//
eMIOS_A4_PORT28;256:[!//
eMIOS_E0UC4_PORT28;256:[!//
eMIOS_A5_PORT29;1:[!//
eMIOS_E0UC5_PORT29;1:[!//
eMIOS_E0UC3_PORT40;131072:[!//
SPI2_CS0_PORT47;0:[!//
SPI2_CS0_PORT79;16777216:[!//
SPI2_CS0_PORT82;33554432:[!//
[!ENDVAR!]

[!VAR "PSMI4"!]
eMIOS_A6_PORT6;0:[!//
eMIOS_E0UC6_PORT6;0:[!//
eMIOS_A7_PORT7;0:[!//
eMIOS_E0UC7_PORT7;0:[!//
eMIOS_A10_PORT10;0:[!//
eMIOS_A11_PORT11;0:[!//
eMIOS_A6_PORT30;16777216:[!//
eMIOS_E0UC6_PORT30;16777216:[!//
eMIOS_A7_PORT31;65536:[!//
eMIOS_E0UC7_PORT31;65536:[!//
eMIOS_E0UC7_PORT41;131072:[!//
eMIOS_A10_PORT80;256:[!//
eMIOS_A11_PORT81;1:[!//
[!ENDVAR!]

[!VAR "PSMI5"!]
eMIOS_E0UC13_PORT0;131072:[!//
eMIOS_E0UC14_PORT8;512:[!//
eMIOS_A12_PORT44;0:[!//
eMIOS_A13_PORT45;0:[!//
eMIOS_E0UC13_PORT45;0:[!//
eMIOS_A14_PORT46;0:[!//
eMIOS_E0UC14_PORT46;0:[!//
eMIOS_A22_PORT70;0:[!//
eMIOS_E0UC22_PORT70;0:[!//
eMIOS_A22_PORT72;1:[!//
eMIOS_E0UC22_PORT72;1:[!//
eMIOS_A12_PORT82;16777216:[!//
eMIOS_A13_PORT83;65536:[!//
eMIOS_A14_PORT84;256:[!//
eMIOS_A22_PORT85;2:[!//
[!ENDVAR!]

[!VAR "PSMI6"!]
eMIOS_A24_PORT60;0:[!//
eMIOS_E0UC24_PORT60;0:[!//
eMIOS_A25_PORT61;0:[!//
eMIOS_A26_PORT62;0:[!//
eMIOS_A23_PORT71;0:[!//
eMIOS_E0UC23_PORT71;0:[!//
eMIOS_A23_PORT73;16777216:[!//
eMIOS_E0UC23_PORT73;16777216:[!//
eMIOS_A24_PORT75;131072:[!//
eMIOS_E0UC24_PORT75;131072:[!//
eMIOS_A23_PORT86;33554432:[!//
eMIOS_A24_PORT106;65536:[!//
eMIOS_A25_PORT107;256:[!//
eMIOS_A26_PORT108;1:[!//
[!ENDVAR!]

[!VAR "PSMI7"!]
LIN3_RXD_PORT8;0:[!//
I2C0_SDA_PORT10;0:[!//
I2C0_SCL_PORT11;0:[!//
I2C0_SDA_PORT18;256:[!//
I2C0_SCL_PORT19;65536:[!//
eMIOS_A27_PORT63;0:[!//
LIN3_RXD_PORT75;1:[!//
eMIOS_A27_PORT109;16777216:[!//
[!ENDVAR!]

[!VAR "PSMI8"!]
SPI3_CS0_PORT99;0:[!//
SPI3_SCK_PORT100;0:[!//
SPI3_SIN_PORT101;0:[!//
SPI4_SCK_PORT109;0:[!//
SPI3_SCK_PORT124;16777216:[!//
SPI3_CS0_PORT125;256:[!//
SPI4_SCK_PORT126;1:[!//
SPI4_SCK_PORT133;2:[!//
SPI3_SIN_PORT139;65536:[!//
SPI3_CS0_PORT140;512:[!//
[!ENDVAR!]

[!VAR "PSMI9"!]
eMIOS_A0_PORT0;0:[!//
eMIOS_E0UC0_PORT0;0:[!//
eMIOS_A1_PORT1;0:[!//
eMIOS_E0UC1_PORT1;0:[!//
eMIOS_A0_PORT14;256:[!//
eMIOS_E0UC0_PORT14;256:[!//
eMIOS_A1_PORT15;1:[!//
eMIOS_E0UC1_PORT15;1:[!//
SPI4_SIN_PORT106;0:[!//
SPI4_CS0_PORT107;0:[!//
SPI4_CS0_PORT123;65536:[!//
SPI4_CS0_PORT134;131072:[!//
SPI4_SIN_PORT142;16777216:[!//
SPI4_CS0_PORT143;196608:[!//
[!ENDVAR!]

[!VAR "PSMI10"!]
eMIOS_A28_PORT12;0:[!//
eMIOS_A29_PORT13;0:[!//
eMIOS_A30_PORT16;0:[!//
eMIOS_A31_PORT17;0:[!//
eMIOS_A30_PORT18;256:[!//
eMIOS_A31_PORT19;1:[!//
eMIOS_A28_PORT128;16777216:[!//
eMIOS_A29_PORT129;65536:[!//
eMIOS_A30_PORT130;512:[!//
eMIOS_A31_PORT131;2:[!//
[!ENDVAR!]

[!VAR "PSMI11"!]
eMIOS_B1_PORT89;16777216:[!//
eMIOS_B2_PORT90;65536:[!//
eMIOS_B3_PORT91;256:[!//
eMIOS_B4_PORT95;1:[!//
eMIOS_B1_PORT111;0:[!//
eMIOS_B2_PORT112;0:[!//
eMIOS_B3_PORT113;0:[!//
eMIOS_B4_PORT114;0:[!//
[!ENDVAR!]

[!VAR "PSMI12"!]
eMIOS_B25_PORT92;0:[!//
eMIOS_B17_PORT104;0:[!//
eMIOS_B18_PORT105;0:[!//
eMIOS_B5_PORT115;0:[!//
eMIOS_B5_PORT123;16777216:[!//
eMIOS_B25_PORT124;1:[!//
eMIOS_B17_PORT127;65536:[!//
eMIOS_B18_PORT148;256:[!//
[!ENDVAR!]

[!VAR "PSMI13"!]
eMIOS_B28_PORT38;0:[!//
eMIOS_B29_PORT39;0:[!//
eMIOS_B26_PORT93;0:[!//
eMIOS_B27_PORT94;0:[!//
eMIOS_B26_PORT125;16777216:[!//
eMIOS_B27_PORT126;65536:[!//
eMIOS_B28_PORT132;256:[!//
eMIOS_B29_PORT133;1:[!//
[!ENDVAR!]

[!VAR "PSMI14"!]
LIN4_RXD_PORT6;0:[!//
LIN2_RXD_PORT11;256:[!//
eMIOS_B31_PORT36;0:[!//
LIN2_RXD_PORT41;0:[!//
eMIOS_B30_PORT74;0:[!//
LIN4_RXD_PORT91;1:[!//
eMIOS_B30_PORT103;16777216:[!//
eMIOS_B31_PORT106;65536:[!//
eMIOS_B30_PORT134;33554432:[!//
eMIOS_B31_PORT135;131072:[!//
[!ENDVAR!]

[!VAR "PSMI15"!]
LIN5_RXD_PORT4;0:[!//
LIN0_RXD_PORT17;256:[!//
LIN0_RXD_PORT19;0:[!//
LIN5_RXD_PORT93;16777216:[!//
LIN8_RXD_PORT111;0:[!//
LIN8_RXD_PORT129;65536:[!//
[!ENDVAR!]


[!VAR "CHECK_256"!]
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0FFF, (uint16)0xF800, (uint16)0xF000, (uint16)0x0000, (uint16)0x08FF, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0100, (uint16)0x0000, (uint16)0x0308, (uint16)0xF000, (uint16)0x0300, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0xE401, (uint16)0x0003, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0xF800, (uint16)0x0000, (uint16)0xF000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x000A, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 }
[!ENDVAR!]




[!VAR "CHECK_512"!]
{ (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0x07FF },
{ (uint16)0xEFFF, (uint16)0xF805, (uint16)0xF56C, (uint16)0xF000, (uint16)0xEDFF, (uint16)0x717F, (uint16)0xFFFD, (uint16)0x01FF },
{ (uint16)0xCD81, (uint16)0x000C, (uint16)0xE72F, (uint16)0xF000, (uint16)0xFFFA, (uint16)0x433F, (uint16)0x0003, (uint16)0x078E },
{ (uint16)0xE401, (uint16)0xF803, (uint16)0x0400, (uint16)0x0000, (uint16)0x01E0, (uint16)0x4100, (uint16)0x0300, (uint16)0x01C0 },
{ (uint16)0x0000, (uint16)0xFFF0, (uint16)0x0000, (uint16)0xFFFF, (uint16)0x0000, (uint16)0x00FF, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x9117, (uint16)0x040A, (uint16)0x1A98, (uint16)0x0000, (uint16)0x1A05, (uint16)0xAA00, (uint16)0x000A, (uint16)0x0001 },
{ (uint16)0x0000, (uint16)0x0300, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x000A, (uint16)0x0818, (uint16)0x0000, (uint16)0x0200, (uint16)0x8200, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x41C8, (uint16)0x0000, (uint16)0x402C, (uint16)0x0000, (uint16)0x5410, (uint16)0x8000, (uint16)0x0102, (uint16)0x0000 }
[!ENDVAR!]




[!VAR "CHECK_1M5"!]
{ (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0x001F },
{ (uint16)0xEFFF, (uint16)0xF80D, (uint16)0xF57C, (uint16)0xF000, (uint16)0xEDFF, (uint16)0xFF7F, (uint16)0xFFFD, (uint16)0xF9FF, (uint16)0xB0FF, (uint16)0x001D },
{ (uint16)0xFDAB, (uint16)0x000F, (uint16)0xE7EF, (uint16)0xF000, (uint16)0xFFFA, (uint16)0x5FFF, (uint16)0x7DDF, (uint16)0x7F8E, (uint16)0x00F5, (uint16)0x0010 },
{ (uint16)0xF65D, (uint16)0xF807, (uint16)0x0FFC, (uint16)0x0000, (uint16)0x05E0, (uint16)0x4500, (uint16)0x0300, (uint16)0xF9C0, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0C88, (uint16)0xFFF0, (uint16)0x0000, (uint16)0xFFFF, (uint16)0x1000, (uint16)0x00FF, (uint16)0x0000, (uint16)0x0000, (uint16)0xFF00, (uint16)0x000F },
{ (uint16)0x9957, (uint16)0x070A, (uint16)0x1A98, (uint16)0x0003, (uint16)0x1A05, (uint16)0xAA00, (uint16)0x86AA, (uint16)0x0001, (uint16)0x480A, (uint16)0x0002 },
{ (uint16)0x0000, (uint16)0x0300, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x000A, (uint16)0x0818, (uint16)0x0000, (uint16)0x0200, (uint16)0x8200, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x59C8, (uint16)0x0000, (uint16)0xD03C, (uint16)0x0000, (uint16)0x54D4, (uint16)0x8000, (uint16)0x0102, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 }
[!ENDVAR!]




[!VAR "ALTERNATE_PSMI_256"!]
{ {(uint8)  38,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  21,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  39,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  60,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  59,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  22,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  0}, {(uint8)  30,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  0}, {(uint8)  29,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  40,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  41,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   5,(uint8)  0}, {(uint8)   6,(uint8)  0}, {(uint8)  38,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   6,(uint8)  1}, {(uint8)   5,(uint8)  1}, {(uint8)  39,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  42,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  43,(uint8)  0}, {(uint8)  62,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  30,(uint8)  1}, {(uint8)  42,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  43,(uint8)  1}, {(uint8)  29,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  62,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)   6,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   7,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   9,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  0}, {(uint8)   3,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  57,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  0}, {(uint8)   2,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  54,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  55,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  13,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  17,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  1}, {(uint8)   3,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  20,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  11,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  21,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  22,(uint8)  0}, {(uint8)  10,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  12,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  25,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   9,(uint8)  1}, {(uint8)  26,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  27,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  28,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)   7,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)   9,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  23,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  24,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  23,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  24,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  0}, {(uint8)   2,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  56,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  11,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  10,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  12,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  20,(uint8)  1}, {(uint8)  12,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  21,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  22,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  23,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  24,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  1}, {(uint8)   2,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  45,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  46,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)  59,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  51,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  52,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  60,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  53,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  47,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  2}, {(uint8)   3,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  34,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  32,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  33,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  56,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  49,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  50,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  10,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  1}, {(uint8)  57,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)  36,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  26,(uint8)  1}, {(uint8)  37,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  27,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  28,(uint8)  1}, {(uint8)  35,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  61,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  45,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  46,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  47,(uint8)  0}, {(uint8)   7,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  48,(uint8)  0}, {(uint8)   9,(uint8)  3}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}}
[!ENDVAR!]


[!VAR "ALTERNATE_PSMI_512"!]
{ {(uint8)  38,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  21,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  39,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  60,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  59,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  22,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  0}, {(uint8)  30,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  0}, {(uint8)  29,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  40,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  41,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   5,(uint8)  0}, {(uint8)   6,(uint8)  0}, {(uint8)  38,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   6,(uint8)  1}, {(uint8)   5,(uint8)  1}, {(uint8)  39,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  42,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  43,(uint8)  0}, {(uint8)  62,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  30,(uint8)  1}, {(uint8)  42,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  43,(uint8)  1}, {(uint8)  29,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  62,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)   6,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   7,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   9,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  0}, {(uint8)   3,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  57,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  0}, {(uint8)   2,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  54,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  55,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  13,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  17,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  1}, {(uint8)   3,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  20,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  11,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  21,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  22,(uint8)  0}, {(uint8)  10,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  12,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  25,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   9,(uint8)  1}, {(uint8)  26,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  27,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  28,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)   7,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)   9,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  23,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  24,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  23,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  24,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  0}, {(uint8)   2,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  56,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  11,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  10,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  12,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  20,(uint8)  1}, {(uint8)  12,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  21,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  22,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  23,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  24,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  1}, {(uint8)   2,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  45,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  46,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)  59,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  51,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  52,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  60,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  53,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  47,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  2}, {(uint8)   3,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  34,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  32,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  33,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  56,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  49,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  50,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  10,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  1}, {(uint8)  57,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)  36,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  26,(uint8)  1}, {(uint8)  37,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  27,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  28,(uint8)  1}, {(uint8)  35,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  61,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  45,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  46,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  47,(uint8)  0}, {(uint8)   7,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  48,(uint8)  0}, {(uint8)   9,(uint8)  3}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}}
[!ENDVAR!]


[!VAR "ALTERNATE_PSMI_1M5"!]
{ {(uint8)  38,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  21,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  39,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  60,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  59,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  22,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  0}, {(uint8)  30,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  0}, {(uint8)  29,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  40,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  41,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   5,(uint8)  0}, {(uint8)   6,(uint8)  0}, {(uint8)  38,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   6,(uint8)  1}, {(uint8)   5,(uint8)  1}, {(uint8)  39,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  42,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  43,(uint8)  0}, {(uint8)  62,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  30,(uint8)  1}, {(uint8)  42,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  43,(uint8)  1}, {(uint8)  29,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  62,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)   6,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   7,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   9,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  0}, {(uint8)   3,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  57,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  0}, {(uint8)   2,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  54,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  55,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  13,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  17,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  1}, {(uint8)   3,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  20,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  11,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  21,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  22,(uint8)  0}, {(uint8)  10,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  12,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  25,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   9,(uint8)  1}, {(uint8)  26,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  27,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  28,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)   7,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)   9,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  23,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  24,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  23,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  24,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  0}, {(uint8)   2,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  56,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  11,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  10,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  12,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  20,(uint8)  1}, {(uint8)  12,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  21,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  22,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  23,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  24,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  1}, {(uint8)   2,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  45,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  46,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)  59,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  51,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  52,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  60,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  53,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  47,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  2}, {(uint8)   3,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  34,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  32,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  33,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  56,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  49,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  50,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  10,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  1}, {(uint8)  57,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)  36,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  26,(uint8)  1}, {(uint8)  37,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  27,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  28,(uint8)  1}, {(uint8)  35,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  61,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  45,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  46,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  47,(uint8)  0}, {(uint8)   7,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  48,(uint8)  0}, {(uint8)   9,(uint8)  3}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  37,(uint8)  1}, {(uint8)  48,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  32,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)  51,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  34,(uint8)  1}, {(uint8)  52,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  35,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)  53,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  49,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  40,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  41,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  61,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  42,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  43,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  54,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  55,(uint8)  1}, {(uint8)  35,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  56,(uint8)  2}, {(uint8)  37,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  57,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  33,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  34,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  36,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  37,(uint8)  3}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  50,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}}
[!ENDVAR!]


[!VAR "PinMapAbstractedMode"!]

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN0_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN0_MODE_EMIOS_A0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN0_MODE_CLKOUT       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN0_MODE_WKUP19       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN0_MODE_EMIOS_A13       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN0_MODE_EMIOS_E0UC13       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN0_MODE_EMIOS_E0UC0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN1_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN1_MODE_EMIOS_A1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN1_MODE_WKUP2       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN1_MODE_NMI_A1       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN1_MODE_EMIOS_E0UC1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN2_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN2_MODE_EMIOS_A2       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN2_MODE_WKUP3       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN2_MODE_ADC0_MA2       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN2_MODE_EMIOS_E0UC2       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN3_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN3_MODE_EMIOS_A3       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN3_MODE_EIRQ0       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN3_MODE_LIN5_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN3_MODE_SPIX_CS4       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN3_MODE_ADC1_ANS0       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN3_MODE_EMIOS_E0UC3       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN4_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN4_MODE_EMIOS_A4       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN4_MODE_WKUP9       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN4_MODE_SPI1_CS0       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN4_MODE_LIN5_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN4_MODE_EMIOS_E0UC4       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN5_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN5_MODE_EMIOS_A5       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN5_MODE_LIN4_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN5_MODE_EMIOS_E0UC5       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN6_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN6_MODE_EMIOS_A6       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN6_MODE_EIRQ1       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN6_MODE_SPI1_CS1       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN6_MODE_LIN4_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN6_MODE_EMIOS_E0UC6       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN7_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN7_MODE_EMIOS_A7       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN7_MODE_LIN3_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN7_MODE_EIRQ2       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN7_MODE_ADC1_ANS1       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN7_MODE_EMIOS_E0UC7       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN8_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN8_MODE_EMIOS_A8       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN8_MODE_EIRQ3       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN8_MODE_EMIOS_A14       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN8_MODE_LIN3_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN8_MODE_EMIOS_E0UC8       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN8_MODE_EMIOS_E0UC14       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN9_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN9_MODE_EMIOS_A9       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN9_MODE_SPI1_CS2       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN9_MODE_EMIOS_E0UC9       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN10_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN10_MODE_EMIOS_A10       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN10_MODE_I2C0_SDA       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN10_MODE_LIN2_TXD       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN10_MODE_ADC1_ANS2       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN10_MODE_EMIOS_E0UC10       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN10_MODE_LINFlEX_2_TX       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN11_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN11_MODE_EMIOS_A11       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN11_MODE_I2C0_SCL       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN11_MODE_ADC1_ANS3       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN11_MODE_LIN2_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN11_MODE_EIRQ16       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN11_MODE_EMIOS_E0UC11       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN12_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN12_MODE_EMIOS_A28       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN12_MODE_SPI1_CS3       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN12_MODE_EIRQ17       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN12_MODE_SPI0_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN13_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN13_MODE_SPI0_SOUT       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN13_MODE_EMIOS_A29       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN13_MODE_SPI1_CS3       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN14_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN14_MODE_SPI0_SCK       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN14_MODE_SPI0_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN14_MODE_EIRQ4       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN14_MODE_EMIOS_A0       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN14_MODE_EMIOS_E0UC0       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN15_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN15_MODE_SPI0_CS0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN15_MODE_SPI0_SCK       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN15_MODE_WKUP10       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN15_MODE_EMIOS_A1       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN15_MODE_EMIOS_E0UC1       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN16_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN16_MODE_CAN0_TX       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN16_MODE_EMIOS_A30       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN16_MODE_LIN0_TXD       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN16_MODE_LINFlEX_2_TX       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN17_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN17_MODE_WKUP4       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN17_MODE_EMIOS_A31       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN17_MODE_LIN0_RXD       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN17_MODE_CAN0_RX       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN17_MODE_LIN0_RXD       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN17_MODE_FlEXCAN_0_RX       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN18_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN18_MODE_LIN0_TXD       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN18_MODE_I2C0_SDA       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN18_MODE_EMIOS_A30       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN19_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN19_MODE_WKUP11       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN19_MODE_EMIOS_A31       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN19_MODE_I2C0_SCL       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN19_MODE_LIN0_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN19_MODE_LIN0_RXD       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN20_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN20_MODE_ADCX_ANP0       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN21_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN21_MODE_ADCX_ANP1       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN22_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN22_MODE_ADCX_ANP2       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN23_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN23_MODE_ADCX_ANP3       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN24_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN24_MODE_ADC0_ANS0       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN24_MODE_ADC1_ANS4       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN24_MODE_WKUP25       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN24_MODE_OSC32K_XTAL       (Port_PinModeType)6

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN25_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN25_MODE_ADC0_ANS1       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN25_MODE_ADC1_ANS5       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN25_MODE_WKUP26       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN25_MODE_OSC32K_EXTAL       (Port_PinModeType)6

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN26_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN26_MODE_ADC0_ANS2       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN26_MODE_WKUP8       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN26_MODE_ADC1_ANS6       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN27_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN27_MODE_EMIOS_A3       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN27_MODE_SPI0_CS0       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN27_MODE_ADC0_ANS3       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN27_MODE_EMIOS_E0UC3       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN27_MODE_ADC1_S12       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN28_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN28_MODE_EMIOS_A4       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN28_MODE_SPI0_CS1       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN28_MODE_ADC0_ANX0       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN28_MODE_EMIOS_E0UC4       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN28_MODE_ADC1_X0       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN29_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN29_MODE_EMIOS_A5       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN29_MODE_SPI0_CS2       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN29_MODE_ADC0_ANX1       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN29_MODE_EMIOS_E0UC5       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN29_MODE_ADC1_X1       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN30_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN30_MODE_EMIOS_A6       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN30_MODE_SPI0_CS3       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN30_MODE_ADC0_ANX2       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN30_MODE_EMIOS_E0UC6       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN30_MODE_ADC1_X2       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN31_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN31_MODE_EMIOS_A7       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN31_MODE_SPI0_CS4       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN31_MODE_ADC0_ANX3       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN31_MODE_EMIOS_E0UC7       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN31_MODE_ADC1_X3       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN32_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN32_MODE_JTAG_TDI       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN33_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN33_MODE_JTAG_TDO       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN34_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN34_MODE_SPI1_SCK       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN34_MODE_CAN4_TX       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN34_MODE_EIRQ5       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN34_MODE_DEBUG0       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN35_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN35_MODE_SPI1_CS0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN35_MODE_ADC0_MA0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN35_MODE_EIRQ6       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN35_MODE_DEBUG1       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN35_MODE_CAN1_RX       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN35_MODE_CAN4_RX       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN35_MODE_ADC_MA0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN36_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN36_MODE_EMIOS_B31       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN36_MODE_DEBUG2       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN36_MODE_EIRQ18       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN36_MODE_SPI1_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN36_MODE_CAN3_RX       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN37_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN37_MODE_SPI1_SOUT       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN37_MODE_CAN3_TX       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN37_MODE_EIRQ7       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN37_MODE_DEBUG3       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN38_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN38_MODE_LIN1_TXD       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN38_MODE_EMIOS_B28       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN38_MODE_DEBUG4       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN39_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN39_MODE_WKUP12       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN39_MODE_EMIOS_B29       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN39_MODE_DEBUG5       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN39_MODE_LIN1_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN40_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN40_MODE_LIN2_TXD       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN40_MODE_EMIOS_A3       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN40_MODE_DEBUG6       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN40_MODE_EMIOS_E0UC3       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN41_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN41_MODE_WKUP13       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN41_MODE_EMIOS_A7       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN41_MODE_DEBUG7       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN41_MODE_LIN2_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN41_MODE_EMIOS_E0UC7       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN42_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN42_MODE_CAN1_TX       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN42_MODE_CAN4_TX       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN42_MODE_ADC0_MA1       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN43_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN43_MODE_ADC0_MA2       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN43_MODE_CAN1_RX       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN43_MODE_CAN4_RX       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN43_MODE_WKUP5       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN44_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN44_MODE_EMIOS_A12       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN44_MODE_SPI2_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN44_MODE_EMIOS_E0UC12       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN44_MODE_EIRQ19       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN45_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN45_MODE_EMIOS_A13       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN45_MODE_SPI2_SOUT       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN45_MODE_EMIOS_E0UC13       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN46_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN46_MODE_EMIOS_A14       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN46_MODE_SPI2_SCK       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN46_MODE_EIRQ8       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN46_MODE_EMIOS_E0UC14       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN47_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN47_MODE_EMIOS_A15       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN47_MODE_SPI2_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN47_MODE_EMIOS_E0UC15       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN47_MODE_EIRQ20       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN48_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN48_MODE_ADCX_ANP4       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN48_MODE_WKUP27       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN49_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN49_MODE_ADCX_ANP5       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN49_MODE_WKUP28       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN50_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN50_MODE_ADCX_ANP6       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN51_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN51_MODE_ADCX_ANP7       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN52_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN52_MODE_ADCX_ANP8       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN53_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN53_MODE_ADCX_ANP9       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN54_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN54_MODE_ADCX_ANP10       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN55_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN55_MODE_ADCX_ANP11       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN56_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN56_MODE_ADCX_ANP12       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN57_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN57_MODE_ADCX_ANP13       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN58_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN58_MODE_ADCX_ANP14       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN59_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN59_MODE_ADCX_ANP15       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN60_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN60_MODE_SPI0_CS5       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN60_MODE_EMIOS_A24       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN60_MODE_ADC0_ANS4       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN60_MODE_EMIOS_E0UC24       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN60_MODE_ADC1_S8       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN61_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN61_MODE_SPI1_CS0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN61_MODE_EMIOS_A25       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN61_MODE_ADC0_ANS5       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN61_MODE_EMIOS_E0UC25       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN61_MODE_ADC1_S9       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN62_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN62_MODE_SPI1_CS1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN62_MODE_EMIOS_A26       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN62_MODE_ADC0_ANS6       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN62_MODE_EMIOS_E0UC26       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN62_MODE_ADC1_S10       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN63_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN63_MODE_SPI1_CS2       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN63_MODE_EMIOS_A27       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN63_MODE_ADC0_ANS7       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN63_MODE_EMIOS_E0UC27       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN63_MODE_ADC1_S11       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN64_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN64_MODE_EMIOS_A16       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN64_MODE_CAN5_RX       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN64_MODE_WKUP6       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN64_MODE_EMIOS_E0UC16       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN65_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN65_MODE_EMIOS_A17       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN65_MODE_CAN5_TX       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN65_MODE_EMIOS_E0UC17       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN66_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN66_MODE_EMIOS_A18       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN66_MODE_SPI1_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN66_MODE_EIRQ21       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN66_MODE_EMIOS_E0UC18       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN67_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN67_MODE_EMIOS_A19       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN67_MODE_SPI1_SOUT       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN67_MODE_EMIOS_E0UC19       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN68_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN68_MODE_EMIOS_A20       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN68_MODE_SPI1_SCK       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN68_MODE_EIRQ9       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN68_MODE_EMIOS_E0UC20       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN69_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN69_MODE_EMIOS_A21       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN69_MODE_SPI1_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN69_MODE_ADC0_MA2       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN69_MODE_EMIOS_E0UC21       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN70_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN70_MODE_EMIOS_A22       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN70_MODE_SPI0_CS3       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN70_MODE_ADC0_MA1       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN70_MODE_EIRQ22       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN70_MODE_EMIOS_E0UC22       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN71_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN71_MODE_EMIOS_A23       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN71_MODE_SPI0_CS2       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN71_MODE_ADC0_MA0       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN71_MODE_EIRQ23       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN71_MODE_EMIOS_E0UC23       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN72_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN72_MODE_CAN2_TX       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN72_MODE_EMIOS_A22       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN72_MODE_CAN3_TX       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN72_MODE_EMIOS_E0UC22       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN73_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN73_MODE_EMIOS_A23       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN73_MODE_CAN2_RX       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN73_MODE_CAN3_RX       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN73_MODE_WKUP7       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN73_MODE_EMIOS_E0UC23       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN74_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN74_MODE_LIN3_TXD       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN74_MODE_SPI1_CS3       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN74_MODE_EIRQ10       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN74_MODE_EMIOS_B30       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN75_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN75_MODE_EMIOS_A24       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN75_MODE_SPI1_CS4       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN75_MODE_LIN3_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN75_MODE_WKUP14       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN75_MODE_EMIOS_E0UC24       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN76_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN76_MODE_EMIOS_B19       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN76_MODE_EIRQ11       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN76_MODE_ADC1_ANS7       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN76_MODE_SPI2_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN77_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN77_MODE_SPI2_SOUT       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN77_MODE_EMIOS_B20       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN78_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN78_MODE_SPI2_SCK       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN78_MODE_EMIOS_B21       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN78_MODE_EIRQ12       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN79_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN79_MODE_SPI2_CS0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN79_MODE_EMIOS_B22       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN80_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN80_MODE_EMIOS_A10       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN80_MODE_SPI1_CS3       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN80_MODE_ADC0_ANS8       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN81_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN81_MODE_EMIOS_A11       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN81_MODE_SPI1_CS4       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN81_MODE_ADC0_ANS9       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN82_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN82_MODE_EMIOS_A12       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN82_MODE_SPI2_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN82_MODE_ADC0_ANS10       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN83_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN83_MODE_EMIOS_A13       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN83_MODE_SPI2_CS1       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN83_MODE_ADC0_ANS11       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN84_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN84_MODE_EMIOS_A14       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN84_MODE_SPI2_CS2       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN84_MODE_ADC0_ANS12       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN85_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN85_MODE_EMIOS_A22       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN85_MODE_SPI2_CS3       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN85_MODE_ADC0_ANS13       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN86_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN86_MODE_EMIOS_A23       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN86_MODE_SPI1_CS1       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN86_MODE_ADC0_ANS14       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN87_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN87_MODE_SPI1_CS2       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN87_MODE_ADC0_ANS15       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN88_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN88_MODE_CAN3_TX       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN88_MODE_SPI0_CS4       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN88_MODE_CAN2_TX       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN89_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN89_MODE_EMIOS_B1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN89_MODE_SPI0_CS5       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN89_MODE_CAN2_RX       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN89_MODE_CAN3_RX       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN90_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN90_MODE_SPI0_CS1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN90_MODE_LIN4_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN90_MODE_EMIOS_B2       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN91_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN91_MODE_WKUP15       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN91_MODE_SPI0_CS2       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN91_MODE_EMIOS_B3       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN91_MODE_LIN4_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN92_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN92_MODE_EMIOS_B25       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN92_MODE_LIN5_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN93_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN93_MODE_EMIOS_B26       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN93_MODE_WKUP16       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN93_MODE_LIN5_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN94_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN94_MODE_CAN4_TX       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN94_MODE_EMIOS_B27       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN94_MODE_CAN1_TX       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN95_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN95_MODE_EMIOS_B4       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN95_MODE_CAN1_RX       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN95_MODE_CAN4_RX       (Port_PinModeType)7

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN95_MODE_EIRQ13       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN96_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN96_MODE_CAN5_TX       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN96_MODE_EMIOS_B23       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN97_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN97_MODE_EMIOS_B24       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN97_MODE_CAN5_RX       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN97_MODE_EIRQ14       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN98_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN98_MODE_EMIOS_B11       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN98_MODE_SPI3_SOUT       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN99_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN99_MODE_EMIOS_B12       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN99_MODE_WKUP17       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN99_MODE_SPI3_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN100_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN100_MODE_EMIOS_B13       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN100_MODE_SPI3_SCK       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN101_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN101_MODE_EMIOS_B14       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN101_MODE_SPI3_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN101_MODE_WKUP18       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN102_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN102_MODE_EMIOS_B15       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN102_MODE_LIN6_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN103_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN103_MODE_EMIOS_B16       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN103_MODE_EMIOS_B30       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN103_MODE_LIN6_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN103_MODE_WKUP20       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN104_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN104_MODE_EIRQ15       (Port_PinModeType)8

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN104_MODE_EMIOS_B17       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN104_MODE_LIN7_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN104_MODE_SPI2_CS0       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN105_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN105_MODE_EMIOS_B18       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN105_MODE_SPI2_SCK       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN105_MODE_LIN7_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN105_MODE_WKUP21       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN106_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN106_MODE_EMIOS_A24       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN106_MODE_EMIOS_B31       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN106_MODE_SPI4_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN107_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN107_MODE_EMIOS_A25       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN107_MODE_SPI4_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN108_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN108_MODE_EMIOS_A26       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN108_MODE_SPI4_SOUT       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN109_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN109_MODE_EMIOS_A27       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN109_MODE_SPI4_SCK       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN110_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN110_MODE_EMIOS_B0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN110_MODE_LIN8_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN111_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN111_MODE_EMIOS_B1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN111_MODE_LIN8_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN112_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN112_MODE_EMIOS_B2       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN112_MODE_SPI1_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN113_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN113_MODE_EMIOS_B3       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN113_MODE_SPI1_SOUT       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN114_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN114_MODE_EMIOS_B4       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN114_MODE_SPI1_SCK       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN115_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN115_MODE_EMIOS_B5       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN115_MODE_SPI1_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN116_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN116_MODE_EMIOS_B6       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN117_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN117_MODE_EMIOS_B7       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN118_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN118_MODE_EMIOS_B8       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN118_MODE_ADC0_MA2       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN119_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN119_MODE_EMIOS_B9       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN119_MODE_SPI2_CS3       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN119_MODE_ADC0_MA1       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN120_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN120_MODE_EMIOS_B10       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN120_MODE_SPI2_CS2       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN120_MODE_ADC0_MA0       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN121_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN121_MODE_JTAG_TCK       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN122_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN122_MODE_JTAG_TMS       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN123_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN123_MODE_SPI3_SOUT       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN123_MODE_SPI4_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN123_MODE_EMIOS_B5       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN124_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN124_MODE_SPI3_SCK       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN124_MODE_SPI4_CS1       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN124_MODE_EMIOS_B25       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN125_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN125_MODE_SPI4_SOUT       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN125_MODE_SPI3_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN125_MODE_EMIOS_B26       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN126_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN126_MODE_SPI4_SCK       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN126_MODE_SPI3_CS1       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN126_MODE_EMIOS_B27       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN127_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN127_MODE_SPI5_SOUT       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN127_MODE_EMIOS_B17       (Port_PinModeType)3

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN128_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN128_MODE_EMIOS_A28       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN128_MODE_LIN8_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN129_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN129_MODE_EMIOS_A29       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN129_MODE_LIN8_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN129_MODE_WKUP24       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN130_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN130_MODE_EMIOS_A30       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN130_MODE_LIN9_TXD       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN131_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN131_MODE_EMIOS_A31       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN131_MODE_LIN9_RXD       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN131_MODE_WKUP23       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN132_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN132_MODE_EMIOS_B28       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN132_MODE_SPI4_SOUT       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN133_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN133_MODE_EMIOS_B29       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN133_MODE_SPI4_SCK       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN134_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN134_MODE_EMIOS_B30       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN134_MODE_SPI4_CS0       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN135_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN135_MODE_EMIOS_B31       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN135_MODE_SPI4_CS1       (Port_PinModeType)2

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN136_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN136_MODE_ADC0_ANS16       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN137_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN137_MODE_ADC0_ANS17       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN138_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN138_MODE_ADC0_ANS18       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN139_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN139_MODE_ADC0_ANS19       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN139_MODE_SPI3_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN140_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN140_MODE_SPI3_CS0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN140_MODE_ADC0_ANS20       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN141_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN141_MODE_SPI3_CS1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN141_MODE_ADC0_ANS21       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN142_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN142_MODE_ADC0_ANS22       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN142_MODE_SPI4_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN143_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN143_MODE_SPI4_CS0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN143_MODE_ADC0_ANS23       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN144_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN144_MODE_SPI4_CS1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN144_MODE_ADC0_ANS24       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN145_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN145_MODE_ADC0_ANS25       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN145_MODE_SPI5_SIN       (Port_PinModeType)5

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN146_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN146_MODE_SPI5_CS0       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN146_MODE_ADC0_ANS26       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN147_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN147_MODE_SPI5_CS1       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN147_MODE_ADC0_ANS27       (Port_PinModeType)4

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN148_MODE_GPIO       (Port_PinModeType)0

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN148_MODE_SPI5_SCK       (Port_PinModeType)1

/*
* @violates @ref PORT_CFG_REF_4 C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct.
*/
#define PORT_PIN148_MODE_EMIOS_B18       (Port_PinModeType)2

[!ENDVAR!]
[!ENDIF!][!//avoid multiple inclusion