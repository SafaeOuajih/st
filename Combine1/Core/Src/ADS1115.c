/*
 * ADS1115.c
 *
 *  Created on: May 31, 2021
 *      Author: safae
 */

#include "ADS1115.h"

int ADS1115_Config(uint16_t *data){

	int ack;
	char config[4] = {0};
	//config[0]= 0x90;
	config[0] = 0x01;
	config[1] = 0x84;
	config[2] = 0x83;
	uint8_t sa =( 0x90) ;//<< 1); // << 1);
	ack=HAL_I2C_Master_Transmit(&hi2c2,sa,config,3,100);

	if (ack != 0x00)
	       {
	           return -1;
	           print("\n\r it is not working 1");
	       }
	else
	    	return 1;


	//int ADS1115_I2CRead(uint8_t slave_address, uint16_t start_address, uint16_t numb_words, uint16_t *data) {
		uint8_t * data1 ;

	int i=0;
	int numb_words = 1;

	/*
	if (HAL_I2C_Mem_Read(&hi2c1, sa, 0x00, I2C_MEMADD_SIZE_16BIT, (uint8_t *) data1, 2*numb_words, 500) == HAL_OK) {
		for(int cnt=0; cnt < numb_words; cnt++)
		{
			i = cnt << 1;
			*data++ = (uint16_t)data1[i]*256 + (uint16_t)data1[i+1];
			print("\n\r done");
		}
		return 0;
	}
	else {
		return -1;
		 print("\n\r it is not working 2");
	}
   */


}




/*
int ADS1115_I2CWrite( uint16_t writeAddress, uint16_t data)
{
    uint8_t sa;
    int ack;
    char cmd[4] = {0,0,0,0};
    static uint16_t dataCheck;

    sa = (slaveAddr << 1);
    cmd[0] = writeAddress >> 8;
    cmd[1] = writeAddress & 0x00FF;
    cmd[2] = data >> 8;
    cmd[3] = data & 0x00FF;

    ack=HAL_I2C_Master_Transmit(&hi2c1,sa,cmd,4,100);

    if (ack != 0x00)
       {
           return -1;
       }
    ADS1115_I2CRead(slaveAddr,writeAddress,1,&dataCheck);

    if ( dataCheck != data)
    {
        return -2;
    }

    return 0;
}



int ADS1115_I2CRead(uint8_t slave_address, uint16_t start_address,
		uint16_t numb_words, uint16_t *data) {
	uint8_t * data1=data ;
	int i=0;
	if (HAL_I2C_Mem_Read(&hi2c1, slave_address<<1, start_address,
			I2C_MEMADD_SIZE_16BIT, (uint8_t *) data1, 2*numb_words, 500) == HAL_OK) {
	    for(int cnt=0; cnt < numb_words; cnt++)
	    {
	        i = cnt << 1;
	        *data++ = (uint16_t)data1[i]*256 + (uint16_t)data1[i+1];
	    }
		return 0;
	}


	else {
		return -1;
	}

}

void ADS1115_I2CAddress(uint8_t old_adress,uint8_t new_address){

	//Erase Old Value
	ADS1115_I2CWrite(old_adress,0x240F,0x0000);
	 HAL_Delay(10);

	 //Write New Value
	 ADS1115_I2CWrite(old_adress,0x240F,(0xBE00)|(new_address));
	 HAL_Delay(10);

}*/


