/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  Adc_Types.h
 *  Module:  	  Adc_Types
 *
 *  Description:  Header file for Adc Module's Types
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Omar Tolba
 *	Date:		  10/100/2022
 *********************************************************************************************************************/

#ifndef ADC_TYPES_H_
#define ADC_TYPES_H_

typedef enum
{
	CHANNEL0,
	CHANNEL1,
	CHANNEL2,
	CHANNEL3,
	CHANNEL4,
	CHANNEL5,
	CHANNEL6,
	CHANNEL7,
	CHANNEL8,
	CHANNEL9,
	TEMP_SENSOR_CHANNEL,
	VREF_CHANNEL,
}Adc_ChannelType;



typedef enum
{

}Adc_PrescaleType;

typedef enum
{

}Adc_SamplingTimeType;

typedef enum
{

}Adc_ResolutionType;

typedef enum
{
	ADC1_Unit = 0,
	ADC2_Unit = 1,
	ADC3_Unit = 2,
}Adc_UnitType;

typedef struct
{
	Adc_ChannelType channelType;
	Adc_PrescaleType prescaleType;
	Adc_SamplingTimeType samplingTimeType;
	Adc_ResolutionType resolutionType;
	Adc_UnitType UnitType;

}Adc_ConfigType;



#endif /* ADC_TYPES_H_ */
