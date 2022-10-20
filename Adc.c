/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  Adc.c
 *  Module:  	  Adc
 *
 *  Description:  Source file for Adc Module
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Omar Tolba
 *	Date:		  13109/2022
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Adc_Regs.h"
#include "Adc_Types.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS DEFINITION
 *********************************************************************************************************************/

void Adc_Init( const Adc_ConfigType* ConfigPtr)
{
	/*[TODO]
	 * Calibration
	 * Calibration is started by setting the CAL bit in the ADC_CR2 register. Once calibration is
		over, the CAL bit is reset by hardware and normal conversion can be performed. It is
		recommended to calibrate the ADC once at power-on. The calibration codes are stored in
		the ADC_DR as soon as the calibration phase ends
		It is recommended to perform a calibration after each power-up.
		Before starting a calibration, the ADC must have been in power-on state (ADON bit = ‘1’) for
		at least two ADC clock cycles.
	 *
	 *
	 * The ADC can be powered-on by setting the ADON bit in the ADC_CR2 register.
	 * The ADCCLK clock provided by the Clock Controller is synchronous with the PCLK2 (APB2 clock)
	 * The RCC controller has a dedicated programmable prescaler for the ADC clock,
	 * Single conversion mode :-
	 * In Single conversion mode the ADC does one conversion. This mode is started either by
		setting the ADON bit in the ADC_CR2 register (for a regular channel only) or by external
		trigger (for a regular or injected channel), while the CONT bit is 0
	 * SWSTART and jSWSTART need to be configured to start conversion
	 *
	 *  we will work with single channel single conversion mode and single channel continuous conversion mode
	 *	 single channel single conversion :
	 *	 cont bit = 0
	 *	 sacn is = 0 --> scan used for multi channel mode
	 *	 software start or external trigger start
	 *
	 *	single channel continuous conversion mode:
	 *	cont bit = 1
	 *	sacn is = 0 --> scan used for multi channel mode
	 *	software start or external trigger start -> injected channel depends on the external trigger
	 */

	/*
	 * note from the reference manual :Before starting a calibration, the ADC must have been in power-on state (ADON bit = ‘1’) for
	 *	at least two ADC clock cycles.
	 */

	/* make sure that ADC is not enabled before calibration */
	ADC1->CR2.BF.ADON = 0 ;
	/* start calibration */
	ADC1->CR2.BF.CAL = 1 ;
	/* wait until calibration is completed*/
	while(ADC1->CR2.BF.CAL==1);


	switch(ConfigPtr->UnitType)
	{
	/*[TODO]
	 * We need to enable the APB2 for the selected ADC unit
	 */
	case ADC1_Unit:
		break;
	case ADC2_Unit:
		break;
	case ADC3_Unit:
		break;
	}



}
