/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  Adc.h
 *  Module:  	 Adc
 *
 *  Description:  Header file for Adc Module
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Omar Tolba
 *	Date:		  10/100/2022
 *********************************************************************************************************************/

#ifndef ADC_H_
#define ADC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/*******************************************************************************
 * Service Name: Adc_Init
 * Service ID[hex]: 0x00
 * Sync/Async: Synchronous
 * Reentrancy: Non Reentrant
 * Parameters (in): ConfigPtr - Pointer to configuration set in
 * Parameters (inout): None
 * Parameters (out): None
 * Return value: Dio_LevelType
 * Description: Initializes the ADC hardware units and driver.
 *******************************************************************************/
void Adc_Init( const Adc_ConfigType ConfigPtr);

/*******************************************************************************
 * Service Name: Adc_Init
 * Service ID[hex]: 0x01
 * Sync/Async: Synchronous
 * Reentrancy: Non Reentrant
 * Parameters (in): None
 * Parameters (inout): None
 * Parameters (out): None
 * Return value: Dio_LevelType
 * Description: Returns all ADC HW Units to a state comparable to their power on reset state.
 *******************************************************************************/
void Adc_DeInit(void);



#endif /* ADC_H_ */
