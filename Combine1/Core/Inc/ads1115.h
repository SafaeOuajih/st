/*
 * ads1115.h
 *
 *  Created on: May 9, 2021
 *      Author: safae
 */

#ifndef INC_ADS1115_H_
#define INC_ADS1115_H_
#include "stm32f7xx_hal.h"
#include "stm32f7xx_nucleo_144.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include "inttypes.h"

#define ADS1115_ADDRESS 0x48

unsigned char ADSwrite[6];
int16_t reading;
float voltage[4];
//const float voltageConv = 6.114 / 32768.0;

int ADS1115_Config(uint16_t *data);
int ADS1115_I2CWrite( uint16_t writeAddress, uint16_t data);
int ADS1115_I2CRead(uint8_t slave_address, uint16_t start_address,uint16_t numb_words, uint16_t *data) ;
void ADS1115_I2CAddress(uint8_t old_adress,uint8_t new_address);


#endif /* INC_ADS1115_H_ */
