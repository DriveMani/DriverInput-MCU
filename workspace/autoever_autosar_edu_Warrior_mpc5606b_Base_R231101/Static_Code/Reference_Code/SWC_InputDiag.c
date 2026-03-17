#include "Rte_SWC_InputDiag.h"

#define FAULT_NONE 0U
#define FAULT_PEDAL_CONFLICT 1U
#define FAULT_INPUT_READ_FAIL 2U


void CheckInputFault_func(void) {

	boolean brakeSw = FALSE;
	boolean accelSw = FALSE;
	uint8 socLevel = 0U;
	uint8 vehicleSpeed = 0U;
	boolean readStatus = FALSE;

	uint8 faultResult = FAULT_NONE;


	(void)Rte_Read_R_DriverInput_BrakeSw(&brakeSw);
	(void)Rte_Read_R_DriverInput_AccelSw(&accelSw);
	(void)Rte_Read_R_DriverInput_SocLevel(&socLevel);
	(void)Rte_Read_R_DriverInput_VehicleSpeed(&vehicleSpeed);
	(void)Rte_Read_R_DriverInput_ReadStatus(&readStatus);


	/* 1순위: 읽기 실패 여부 확인 */
	    if (readStatus == FALSE)
	    {
	        faultResult = FAULT_INPUT_READ_FAIL;
	    }
	    /* 2순위: 페달 모순 검사 */
	    else if ((brakeSw == TRUE) && (accelSw == TRUE))
	    {
	        faultResult = FAULT_PEDAL_CONFLICT;
	    }
	    /* 그 외 정상 */
	    else
	    {
	        faultResult = FAULT_NONE;
	    }

	    (void)Rte_Write_P_DriverDiag_DriverInputFault(faultResult);

}
