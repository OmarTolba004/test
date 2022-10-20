/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  Adc_Regs.h
 *  Module:  	  Adc_Regs
 *
 *  Description:  Header file for Adc Module's Registers
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Omar Tolba
 *	Date:		  10/100/2022
 *********************************************************************************************************************/

#ifndef ADC_REGS_H_
#define ADC_REGS_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include"Std_types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define ADC1 	((volatile ADC *) 0x40012400)
#define ADC2 	((volatile ADC *) 0x40012800)
#define ADC3 	((volatile ADC *) 0x40013C00)


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* structure and union data types for ADC_SR */
typedef struct
{
	uint32 AWD   : 1;
	uint32 EOC   : 1;
	uint32 JEOC  : 1;
	uint32 JSTRT : 1;
	uint32 STRT  : 1;
	uint32  	 : 0;
}ADC_SR_BF;

typedef union
{
	uint32 REG;
	ADC_SR_BF BF;
}ADC_SR_Type;

/* structure and union data types for ADC_CR1 */
typedef struct
{
	uint32 AWDCH : 4;
	uint32 EOCIE : 1;
	uint32 AWDIE : 1;
	uint32 JEOCIE : 1;
	uint32 SCAN : 1;
	uint32 AWDSGL : 1;
	uint32 JAUTO : 1;
	uint32 DISCEN : 1;
	uint32 JDISCEN : 1;
	uint32 DISCNUM : 3;
	uint32 DUALMOD : 4;
	uint32 RESERVED_00 : 2;
	uint32 JAWDEN :1;
	uint32 AWDEN : 1;
	uint32 		 : 0;
}ADC_CR1_BF;

typedef union
{
	uint32 REG;
	ADC_CR1_BF BF;
}ADC_CR1_Type;

/* structure and union data types for ADC_CR2 */
typedef struct
{
	uint32 ADON : 1;
	uint32 CONT : 1;
	uint32 CAL : 1;
	uint32 RSTCAL : 1;
	uint32 RESERVED_00 : 4;
	uint32 DMA : 1;
	uint32 RESERVED_01 : 2;
	uint32 ALIGN : 1;
	uint32 JEXTSEL : 3;
	uint32 JEXTTRIG : 1;
	uint32 RESERVED_02 : 1;
	uint32 EXTSEL : 3;
	uint32 EXTTRIG : 1;
	uint32 JSWSTART : 1;
	uint32 SWSTART : 1;
	uint32 TSVREFE : 1;
	uint32 		   : 0;
}ADC_CR2_BF;

typedef union
{
	uint32 REG;
	ADC_CR2_BF BF;
}ADC_CR2_Type;

/* structure and union data types for ADC_SMPR1 */
typedef struct
{
	uint32 SMP10 : 3;
	uint32 SMP11 : 3;
	uint32 SMP12 : 3;
	uint32 SMP13 : 3;
	uint32 SMP14 : 3;
	uint32 SMP15 : 3;
	uint32 SMP16 : 3;
	uint32 SMP17 : 3;
	uint32 		 : 0;
}ADC_SMPR1_BF;

typedef union
{
	uint32 REG;
	ADC_SMPR1_BF BF;
}ADC_SMPR1_Type;

/* structure and union data types for ADC_SMPR2 */
typedef struct
{
	uint32 SMP0 : 3;
	uint32 SMP1 : 3;
	uint32 SMP2 : 3;
	uint32 SMP3 : 3;
	uint32 SMP4 : 3;
	uint32 SMP5 : 3;
	uint32 SMP6 : 3;
	uint32 SMP7 : 3;
	uint32 SMP8 : 3;
	uint32 SMP9 : 3;
	uint32 		: 0;
}ADC_SMPR2_BF;

typedef union
{
	uint32 REG;
	ADC_SMPR2_BF BF;
}ADC_SMPR2_Type;

/* structure and union data types for ADC_JOFR1 */
typedef struct
{
	uint32 JOFFSET1 : 12;
	uint32 		    : 0;

}ADC_JOFR1_BF;

typedef union
{
	uint32 REG;
	ADC_JOFR1_BF BF;
}ADC_JOFR1_Type;

/* structure and union data types for ADC_JOFR2 */
typedef struct
{
	uint32 JOFFSET2 : 12;
	uint32 		    : 0;
}ADC_JOFR2_BF;

typedef union
{
	uint32 REG;
	ADC_JOFR2_BF BF;
}ADC_JOFR2_Type;

/* structure and union data types for ADC_JOFR3 */
typedef struct
{
	uint32 JOFFSET3 : 12;
	uint32 		    : 0;
}ADC_JOFR3_BF;

typedef union
{
	uint32 REG;
	ADC_JOFR3_BF BF;
}ADC_JOFR3_Type;

/* structure and union data types for ADC_JOFR4 */
typedef struct
{
	uint32 JOFFSET4 : 12;
	uint32 		    : 0;
}ADC_JOFR4_BF;

typedef union
{
	uint32 REG;
	ADC_JOFR4_BF BF;
}ADC_JOFR4_Type;

/* structure and union data types for ADC_HTR */

typedef struct
{
	uint32 HT : 12;
	uint32 	  : 0;
}ADC_HTR_BF;

typedef union
{
	uint32 REG;
	ADC_HTR_BF BF;
}ADC_HTR_Type;

/* structure and union data types for ADC_LTR */
typedef struct
{
	uint32 LT : 12;
	uint32 	  : 0;
}ADC_LTR_BF;

typedef union
{
	uint32 REG;
	ADC_LTR_BF BF;
}ADC_LTR_Type;

/* structure and union data types for ADC_SQR1 */
typedef struct
{
	uint32 SQ13 : 5;
	uint32 SQ14 : 5;
	uint32 SQ15 : 5;
	uint32 SQ16 : 5;
	uint32 L	: 4;
	uint32 	 	: 0;

}ADC_SQR1_BF;

typedef union
{
	uint32 REG;
	ADC_SQR1_BF BF;
}ADC_SQR1_Type;

/* structure and union data types for ADC_SQR2 */
typedef struct
{
	uint32 SQ7  : 5;
	uint32 SQ8  : 5;
	uint32 SQ9  : 5;
	uint32 SQ10 : 5;
	uint32 SQ11 : 5;
	uint32 SQ12 : 5;
	uint32  	: 0;
}ADC_SQR2_BF;

typedef union
{
	uint32 REG;
	ADC_SQR2_BF BF;
}ADC_SQR2_Type;

/* structure and union data types for ADC_SQR3 */
typedef struct
{
	uint32 SQ1  : 5;
	uint32 SQ2  : 5;
	uint32 SQ3  : 5;
	uint32 SQ4  : 5;
	uint32 SQ5  : 5;
	uint32 SQ6  : 5;
	uint32  	: 0;
}ADC_SQR3_BF;

typedef union
{
	uint32 REG;
	ADC_SQR3_BF BF;
}ADC_SQR3_Type;

/* structure and union data types for ADC_JSQR */
typedef struct
{
	uint32 JSQ1  : 5;
	uint32 JSQ2  : 5;
	uint32 JSQ3  : 5;
	uint32 JSQ4  : 5;
	uint32 JL    : 2;
	uint32  	 : 0;
}ADC_JSQR_BF;

typedef union
{
	uint32 REG;
	ADC_JSQR_BF BF;
}ADC_JSQR_Type;

/* structure and union data types for ADC_JDR1 */
typedef struct
{
	uint32 JDATA : 16;
	uint32 		 : 0;
}ADC_JDR1_BF;

typedef union
{
	uint32 REG;
	ADC_JDR1_BF BF;
}ADC_JDR1_Type;

/* structure and union data types for ADC_JDR2 */
typedef struct
{
	uint32 JDATA : 16;
	uint32 		 : 0;
}ADC_JDR2_BF;

typedef union
{
	uint32 REG;
	ADC_JDR2_BF BF;
}ADC_JDR2_Type;

/* structure and union data types for ADC_JDR3 */
typedef struct
{
	uint32 JDATA : 16;
	uint32 		 : 0;
}ADC_JDR3_BF;

typedef union
{
	uint32 REG;
	ADC_JDR3_BF BF;
}ADC_JDR3_Type;

/* structure and union data types for ADC_JDR4 */
typedef struct
{
	uint32 JDATA : 16;
	uint32 		 : 0;
}ADC_JDR4_BF;

typedef union
{
	uint32 REG;
	ADC_JDR4_BF BF;
}ADC_JDR4_Type;

/* structure and union data types for ADC_DR */
typedef struct
{
	uint32 DATA 	: 16;
	uint32 ADC2DATA	: 0;
}ADC_DR_BF;
typedef union
{
	uint32 REG;
	ADC_DR_BF BF;
}ADC_DR_Type;

typedef struct
{
	ADC_SR_Type SR;
	ADC_CR1_Type CR1;
	ADC_CR2_Type CR2;
	ADC_SMPR1_Type SMPR1;
	ADC_SMPR2_Type SMPR2;
	ADC_JOFR1_Type JOFR1;
	ADC_JOFR2_Type JOFR2;
	ADC_JOFR3_Type JOFR3;
	ADC_JOFR4_Type JOFR4;
	ADC_HTR_Type HTR;
	ADC_LTR_Type LTR;
	ADC_SQR1_Type SQR1;
	ADC_SQR2_Type SQR2;
	ADC_SQR3_Type SQR3;
	ADC_JSQR_Type JSQR;
	ADC_JDR1_Type JDR1;
	ADC_JDR2_Type JDR2;
	ADC_JDR3_Type JDR3;
	ADC_JDR4_Type JDR4;
	ADC_DR_Type DR;

}ADC;

#endif /* ADC_REGS_H_ */
