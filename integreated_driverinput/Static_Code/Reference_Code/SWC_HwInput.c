#include "Rte_SWC_HwInput.h"

void ReadHwInput_func(void)
{
	Std_ReturnType ret1, ret2, ret3, ret4, ret5;

	boolean brakeSwRaw;
	boolean accelSwRaw;
	boolean socSw1Raw;
	boolean socSw2Raw;
	uint16 vehicleSpeedAdc;

	boolean brakeSw;
	boolean accelSw;
	uint8 socLevel;
	uint8 vehicleSpeed;
	boolean readStatus;

	brakeSwRaw = FALSE;
	accelSwRaw = FALSE;
	socSw1Raw = FALSE;
	socSw2Raw = FALSE;
	vehicleSpeedAdc = 0U;
	readStatus = TRUE;

	ret1 = Rte_Call_R_SW01_ReadDirect(&brakeSwRaw);
	ret2 = Rte_Call_R_SW02_ReadDirect(&accelSwRaw);
	ret3 = Rte_Call_R_SW03_ReadDirect(&socSw1Raw);
	ret4 = Rte_Call_R_SW04_ReadDirect(&socSw2Raw);
	ret5 = Rte_Call_R_POT_ReadDirect(&vehicleSpeedAdc, 1U);

	if (ret1!=E_OK || ret2!=E_OK || ret3!=E_OK || ret4!=E_OK || ret5!=E_OK) {
		readStatus = FALSE;
	}

	brakeSw = brakeSwRaw;
	accelSw = accelSwRaw;
	socLevel = ((uint8)socSw1Raw << 1U) | (uint8)socSw2Raw;
	vehicleSpeed = (uint8)((vehicleSpeedAdc * 120U) / 4095U);

	(void)Rte_Write_SWC_HwInput_P_DriverInputData_BrakeSw(brakeSw);
	(void)Rte_Write_SWC_HwInput_P_DriverInputData_AccelSw(accelSw);
	(void)Rte_Write_SWC_HwInput_P_DriverInputData_SocLevel(socLevel);
	(void)Rte_Write_SWC_HwInput_P_DriverInputData_VehicleSpeed(vehicleSpeed);
	(void)Rte_Write_SWC_HwInput_P_DriverInputData_ReadStatus(readStatus);
}
