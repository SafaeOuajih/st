/*
 * DDS.h
 *
 *  Created on: May 6, 2021
 *      Author: safae
 */
#include "stm32f7xx_hal.h"
#include "stm32f7xx_nucleo_144.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include "inttypes.h"

/*******************************************************************/

#ifndef INC_DDS_H_
#define INC_DDS_H_

#define AD_F_MCLK 		25000000
#define AD_2POW28		268435456

#define AD_B28     		13
#define AD_HLB     		12
#define AD_FSELECT 		11
#define AD_PSELECT 		10
#define AD_RESET   		8
#define AD_SLEEP1 		7
#define AD_SLEEP12 		6
#define AD_OPBITEN 		5
#define AD_DIV2    		3
#define AD_MODE    		1

#define AD_OFF      	0
#define AD_TRIANGLE 	1
#define AD_SQUARE   	2
#define AD_SINE     	3
//char buf[3];

/*******************************************************************/


void writeToAD9833(uint16_t data);
void AD9833reset(void);
void AD9833setFreq(double freq);
void AD9833mode(uint8_t mode);


#endif /* INC_DDS_H_ */
