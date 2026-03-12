[!IF "not(var:defined('PORT_RESOURCE_M'))"!]
[!VAR "PORT_RESOURCE_M"="'true'"!]
[!VAR "PinMap"!]
eMIOS_A0_PORT0;1:[!//
CLKOUT_PORT0;2:[!//
WKUP19_PORT0;5:[!//
eMIOS_A1_PORT1;1:[!//
WKUP2_PORT1;5:[!//
eMIOS_A2_PORT2;1:[!//
WKUP3_PORT2;5:[!//
eMIOS_A3_PORT3;1:[!//
EIRQ0_PORT3;8:[!//
eMIOS_A4_PORT4;1:[!//
WKUP9_PORT4;5:[!//
eMIOS_A5_PORT5;1:[!//
eMIOS_A6_PORT6;1:[!//
EIRQ1_PORT6;8:[!//
eMIOS_A7_PORT7;1:[!//
LIN3_TXD_PORT7;2:[!//
EIRQ2_PORT7;8:[!//
eMIOS_A8_PORT8;1:[!//
LIN3_RXD_PORT8;5:[!//
EIRQ3_PORT8;8:[!//
eMIOS_A9_PORT9;1:[!//
eMIOS_A10_PORT10;1:[!//
I2C0_SDA_PORT10;2:[!//
eMIOS_A11_PORT11;1:[!//
I2C0_SCL_PORT11;2:[!//
SPI0_SIN_PORT12;5:[!//
SPI0_SOUT_PORT13;1:[!//
SPI0_SCK_PORT14;1:[!//
SPI0_CS0_PORT14;2:[!//
EIRQ4_PORT14;8:[!//
SPI0_CS0_PORT15;1:[!//
SPI0_SCK_PORT15;2:[!//
WKUP10_PORT15;5:[!//
CAN0_TX_PORT16;1:[!//
CAN0_RX_PORT17;5:[!//
WKUP4_PORT17;5:[!//
LIN0_TXD_PORT18;1:[!//
I2C0_SDA_PORT18;2:[!//
I2C0_SCL_PORT19;2:[!//
LIN0_RXD_PORT19;5:[!//
WKUP11_PORT19;5:[!//
ADCx_ANP0_PORT20;4:[!//
ADCx_ANP1_PORT21;4:[!//
ADCx_ANP2_PORT22;4:[!//
ADCx_ANP3_PORT23;4:[!//
ADC0_ANS0_PORT24;4:[!//
OSC32K_XTAL_PORT24;6:[!//
ADC0_ANS1_PORT25;4:[!//
OSC32K_EXTAL_PORT25;6:[!//
ADC0_ANS2_PORT26;4:[!//
WKUP8_PORT26;5:[!//
eMIOS_A3_PORT27;1:[!//
SPI0_CS0_PORT27;3:[!//
ADC0_ANS3_PORT27;4:[!//
eMIOS_A4_PORT28;1:[!//
SPI0_CS1_PORT28;3:[!//
ADC0_ANX0_PORT28;4:[!//
eMIOS_A5_PORT29;1:[!//
SPI0_CS2_PORT29;3:[!//
ADC0_ANX1_PORT29;4:[!//
eMIOS_A6_PORT30;1:[!//
SPI0_CS3_PORT30;3:[!//
ADC0_ANX2_PORT30;4:[!//
eMIOS_A7_PORT31;1:[!//
SPI0_CS4_PORT31;3:[!//
ADC0_ANX3_PORT31;4:[!//
JTAG_TDI_PORT32;2:[!//
JTAG_TDO_PORT33;2:[!//
SPI1_SCK_PORT34;1:[!//
CAN4_TX_PORT34;2:[!//
EIRQ5_PORT34;8:[!//
SPI1_CS0_PORT35;1:[!//
ADC0_MA0_PORT35;2:[!//
CAN1_RX_PORT35;5:[!//
CAN4_RX_PORT35;7:[!//
EIRQ6_PORT35;8:[!//
SPI1_SIN_PORT36;5:[!//
CAN3_RX_PORT36;7:[!//
SPI1_SOUT_PORT37;1:[!//
CAN3_TX_PORT37;2:[!//
EIRQ7_PORT37;8:[!//
LIN1_TXD_PORT38;1:[!//
LIN1_RXD_PORT39;5:[!//
WKUP12_PORT39;5:[!//
LIN2_TXD_PORT40;1:[!//
LIN2_RXD_PORT41;5:[!//
WKUP13_PORT41;5:[!//
CAN1_TX_PORT42;1:[!//
CAN4_TX_PORT42;2:[!//
ADC0_MA1_PORT42;3:[!//
CAN1_RX_PORT43;5:[!//
CAN4_RX_PORT43;7:[!//
WKUP5_PORT43;5:[!//
eMIOS_A12_PORT44;1:[!//
SPI2_SIN_PORT44;5:[!//
eMIOS_A13_PORT45;1:[!//
SPI2_SOUT_PORT45;2:[!//
eMIOS_A14_PORT46;1:[!//
SPI2_SCK_PORT46;2:[!//
EIRQ8_PORT46;8:[!//
eMIOS_A15_PORT47;1:[!//
SPI2_CS0_PORT47;2:[!//
ADCx_ANP4_PORT48;4:[!//
ADCx_ANP5_PORT49;4:[!//
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
SPI1_CS0_PORT61;1:[!//
eMIOS_A25_PORT61;2:[!//
ADC0_ANS5_PORT61;4:[!//
SPI1_CS1_PORT62;1:[!//
eMIOS_A26_PORT62;2:[!//
ADC0_ANS6_PORT62;4:[!//
SPI1_CS2_PORT63;1:[!//
eMIOS_A27_PORT63;2:[!//
ADC0_ANS7_PORT63;4:[!//
eMIOS_A16_PORT64;1:[!//
CAN5_RX_PORT64;5:[!//
WKUP6_PORT64;5:[!//
eMIOS_A17_PORT65;1:[!//
CAN5_TX_PORT65;2:[!//
eMIOS_A18_PORT66;1:[!//
SPI1_SIN_PORT66;5:[!//
eMIOS_A19_PORT67;1:[!//
SPI1_SOUT_PORT67;2:[!//
eMIOS_A20_PORT68;1:[!//
SPI1_SCK_PORT68;2:[!//
EIRQ9_PORT68;8:[!//
eMIOS_A21_PORT69;1:[!//
SPI1_CS0_PORT69;2:[!//
ADC0_MA2_PORT69;3:[!//
eMIOS_A22_PORT70;1:[!//
SPI0_CS3_PORT70;2:[!//
ADC0_MA1_PORT70;3:[!//
eMIOS_A23_PORT71;1:[!//
SPI0_CS2_PORT71;2:[!//
ADC0_MA0_PORT71;3:[!//
CAN2_TX_PORT72;1:[!//
eMIOS_A22_PORT72;2:[!//
CAN3_TX_PORT72;3:[!//
eMIOS_A23_PORT73;2:[!//
CAN2_RX_PORT73;5:[!//
CAN3_RX_PORT73;7:[!//
WKUP7_PORT73;5:[!//
LIN3_TXD_PORT74;1:[!//
SPI1_CS3_PORT74;2:[!//
EIRQ10_PORT74;8:[!//
SPI1_CS4_PORT75;2:[!//
LIN3_RXD_PORT75;5:[!//
WKUP14_PORT75;5:[!//
eMIOS_B19_PORT76;2:[!//
SPI2_SIN_PORT76;5:[!//
EIRQ11_PORT76;8:[!//
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
ADC0_ANS14_PORT86;4:[!//
ADC0_ANS15_PORT87;4:[!//
CAN3_TX_PORT88;1:[!//
SPI0_CS4_PORT88;2:[!//
CAN2_TX_PORT88;3:[!//
SPI0_CS5_PORT89;2:[!//
CAN2_RX_PORT89;5:[!//
CAN3_RX_PORT89;7:[!//
WKUP15_PORT91;5:[!//
eMIOS_B25_PORT92;1:[!//
eMIOS_B26_PORT93;1:[!//
WKUP16_PORT93;5:[!//
CAN4_TX_PORT94;1:[!//
eMIOS_B27_PORT94;2:[!//
CAN1_TX_PORT94;3:[!//
CAN1_RX_PORT95;5:[!//
CAN4_RX_PORT95;7:[!//
EIRQ13_PORT95;8:[!//
CAN5_TX_PORT96;1:[!//
eMIOS_B23_PORT96;2:[!//
eMIOS_B24_PORT97;2:[!//
CAN5_RX_PORT97;5:[!//
EIRQ14_PORT97;8:[!//
eMIOS_B11_PORT98;1:[!//
eMIOS_B12_PORT99;1:[!//
WKUP17_PORT99;5:[!//
eMIOS_B13_PORT100;1:[!//
eMIOS_B14_PORT101;1:[!//
eMIOS_B15_PORT102;1:[!//
eMIOS_B16_PORT103;1:[!//
eMIOS_B17_PORT104;1:[!//
SPI2_CS0_PORT104;3:[!//
EIRQ15_PORT104;8:[!//
eMIOS_B18_PORT105;1:[!//
SPI2_SCK_PORT105;3:[!//
eMIOS_A24_PORT106;1:[!//
eMIOS_A25_PORT107;1:[!//
eMIOS_A26_PORT108;1:[!//
eMIOS_A27_PORT109;1:[!//
eMIOS_B0_PORT110;1:[!//
eMIOS_B1_PORT111;1:[!//
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
eMIOS_A4_PORT4;0:[!//
eMIOS_A5_PORT5;0:[!//
eMIOS_A3_PORT27;65536:[!//
eMIOS_A4_PORT28;256:[!//
eMIOS_A5_PORT29;1:[!//
SPI2_CS0_PORT47;0:[!//
SPI2_CS0_PORT79;16777216:[!//
SPI2_CS0_PORT82;33554432:[!//
[!ENDVAR!]

[!VAR "PSMI4"!]
eMIOS_A6_PORT6;0:[!//
eMIOS_A7_PORT7;0:[!//
eMIOS_A10_PORT10;0:[!//
eMIOS_A11_PORT11;0:[!//
eMIOS_A6_PORT30;16777216:[!//
eMIOS_A7_PORT31;65536:[!//
eMIOS_A10_PORT80;256:[!//
eMIOS_A11_PORT81;1:[!//
[!ENDVAR!]

[!VAR "PSMI5"!]
eMIOS_A12_PORT44;0:[!//
eMIOS_A13_PORT45;0:[!//
eMIOS_A14_PORT46;0:[!//
eMIOS_A22_PORT70;0:[!//
eMIOS_A22_PORT72;1:[!//
eMIOS_A12_PORT82;16777216:[!//
eMIOS_A13_PORT83;65536:[!//
eMIOS_A14_PORT84;256:[!//
eMIOS_A22_PORT85;2:[!//
[!ENDVAR!]

[!VAR "PSMI6"!]
eMIOS_A24_PORT60;0:[!//
eMIOS_A25_PORT61;0:[!//
eMIOS_A26_PORT62;0:[!//
eMIOS_A23_PORT71;0:[!//
eMIOS_A23_PORT73;16777216:[!//
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
eMIOS_A0_PORT0;0:[!//
[!ENDVAR!]

[!VAR "PSMI9"!]
eMIOS_A1_PORT1;0:[!//
[!ENDVAR!]

[!VAR "PSMI10"!]
eMIOS_B1_PORT111;0:[!//
[!ENDVAR!]

[!VAR "PSMI11"!]
eMIOS_B2_PORT112;0:[!//
eMIOS_B3_PORT113;0:[!//
eMIOS_B4_PORT114;0:[!//
[!ENDVAR!]

[!VAR "PSMI12"!]
eMIOS_B25_PORT92;0:[!//
eMIOS_B17_PORT104;0:[!//
eMIOS_B18_PORT105;0:[!//
eMIOS_B5_PORT115;0:[!//
[!ENDVAR!]

[!VAR "PSMI13"!]
eMIOS_B26_PORT93;0:[!//
eMIOS_B27_PORT94;0:[!//
[!ENDVAR!]

[!VAR "PSMI14"!]
LIN2_RXD_PORT41;0:[!//
[!ENDVAR!]


[!VAR "CHECK_256"!]
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 }
[!ENDVAR!]




[!VAR "CHECK_512"!]
{ (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0x07FF },
{ (uint16)0xEFFF, (uint16)0xF805, (uint16)0xF56C, (uint16)0xF000, (uint16)0xE5FF, (uint16)0x717F, (uint16)0xFFFD, (uint16)0x01FF },
{ (uint16)0xCC81, (uint16)0x000C, (uint16)0xE42F, (uint16)0xF000, (uint16)0xFFFA, (uint16)0x433F, (uint16)0x0003, (uint16)0x078E },
{ (uint16)0x0000, (uint16)0xF800, (uint16)0x0400, (uint16)0x0000, (uint16)0x01E0, (uint16)0x4100, (uint16)0x0300, (uint16)0x01C0 },
{ (uint16)0x0000, (uint16)0xFFF0, (uint16)0x0000, (uint16)0xFFFF, (uint16)0x0000, (uint16)0x00FF, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x9117, (uint16)0x040A, (uint16)0x1A98, (uint16)0x0000, (uint16)0x1A05, (uint16)0xAA00, (uint16)0x000A, (uint16)0x0001 },
{ (uint16)0x0000, (uint16)0x0300, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0818, (uint16)0x0000, (uint16)0x0200, (uint16)0x8200, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x41C8, (uint16)0x0000, (uint16)0x402C, (uint16)0x0000, (uint16)0x5410, (uint16)0x8000, (uint16)0x0102, (uint16)0x0000 }
[!ENDVAR!]




[!VAR "CHECK_1M5"!]
{ (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0xFFFF, (uint16)0x07FF, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0xEFFF, (uint16)0xF805, (uint16)0xF56C, (uint16)0xF000, (uint16)0xE5FF, (uint16)0x717F, (uint16)0xFFFD, (uint16)0x01FF, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0xCC81, (uint16)0x000C, (uint16)0xE42F, (uint16)0xF000, (uint16)0xFFFA, (uint16)0x433F, (uint16)0x0003, (uint16)0x078E, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0xF800, (uint16)0x0400, (uint16)0x0000, (uint16)0x01E0, (uint16)0x4100, (uint16)0x0300, (uint16)0x01C0, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0xFFF0, (uint16)0x0000, (uint16)0xFFFF, (uint16)0x0000, (uint16)0x00FF, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x9117, (uint16)0x040A, (uint16)0x1A98, (uint16)0x0000, (uint16)0x1A05, (uint16)0xAA00, (uint16)0x000A, (uint16)0x0001, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0300, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x0000, (uint16)0x0000, (uint16)0x0818, (uint16)0x0000, (uint16)0x0200, (uint16)0x8200, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 },
{ (uint16)0x41C8, (uint16)0x0000, (uint16)0x402C, (uint16)0x0000, (uint16)0x5410, (uint16)0x8000, (uint16)0x0102, (uint16)0x0000, (uint16)0x0000, (uint16)0x0000 }
[!ENDVAR!]




[!VAR "ALTERNATE_PSMI_256"!]
{ {(uint8)  38,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  39,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  0}, {(uint8)  30,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  0}, {(uint8)  29,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   5,(uint8)  0}, {(uint8)   6,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   6,(uint8)  1}, {(uint8)   5,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  30,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  29,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  0}, {(uint8)   2,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  1}, {(uint8)   2,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  51,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  52,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  53,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  2}, {(uint8)   3,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  49,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  50,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  10,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  26,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  27,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  28,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)  38,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  39,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  0}, {(uint8)  30,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  0}, {(uint8)  29,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   5,(uint8)  0}, {(uint8)   6,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   6,(uint8)  1}, {(uint8)   5,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  30,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  29,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  0}, {(uint8)   2,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  1}, {(uint8)   2,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  51,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  52,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  53,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  2}, {(uint8)   3,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  49,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  50,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  10,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  26,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  27,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  28,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)  38,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  39,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  13,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  14,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  15,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  16,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  17,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  18,(uint8)  0}, {(uint8)  30,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  19,(uint8)  0}, {(uint8)  29,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   5,(uint8)  0}, {(uint8)   6,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)   6,(uint8)  1}, {(uint8)   5,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  30,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  29,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   8,(uint8)  0}, {(uint8)   2,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  58,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  31,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   1,(uint8)  1}, {(uint8)   2,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  51,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  52,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)  53,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   0,(uint8)  2}, {(uint8)   3,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)   4,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  49,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  50,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)  10,(uint8)  2}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  25,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  26,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  27,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  28,(uint8)  1}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)  44,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
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
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0} },
{ {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}, {(uint8)0xFF,(uint8)  0}}
[!ENDVAR!]


[!VAR "PinMapAbstractedMode"!]

[!ENDVAR!]
[!ENDIF!][!//avoid multiple inclusion