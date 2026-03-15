#include "Rte_SWC_HwInput.h"

void ReadHwInput_func(void)
{
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

	// 실제 보드와 연결 후 수정
	brakeSwRaw = FALSE;
	accelSwRaw = FALSE;
	socSw1Raw = FALSE;
	socSw2Raw = FALSE;
	vehicleSpeedAdc = 0U;
	readStatus = TRUE;

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
