/*
 * DDS.c
 *
 *  Created on: May 6, 2021
 *      Author: safae
 */
#include "DDS.h"
#define cs_type GPIOB
#define cs GPIO_PIN_8

extern SPI_HandleTypeDef hspi1;

void writeToAD9833(uint16_t data)
{
	uint8_t t;

	HAL_GPIO_WritePin(cs_type, cs, GPIO_PIN_RESET); // cs =0	t=(uint8_t)(data >> 8); // high byte
	t=(uint8_t)(data >> 8); // high byte
	HAL_SPI_Transmit(&hspi1,&t,1,2);

	t=(uint8_t)data; //low byte
	HAL_SPI_Transmit(&hspi1,&t,1,2);

	HAL_GPIO_WritePin(cs_type, cs, GPIO_PIN_SET); // cs =1
}

void AD9833reset(void)
{
	writeToAD9833(0x0100);
}

void AD9833setFreq(double freq)
{
	uint32_t freq_reg = (uint32_t) ( (freq * (double)AD_2POW28) / (double)AD_F_MCLK );
	writeToAD9833(0x2000);
	writeToAD9833(0x4000 | (0x3FFF & (uint16_t) (freq_reg)));
	writeToAD9833(0x4000 | (0x3FFF & (uint16_t) (freq_reg>>14)));
}

//Choix de mode di signal en sortie de l'AD9833

void AD9833mode(uint8_t mode)
{
	uint16_t stats=0;
	switch(mode)
	{
	case AD_OFF:
		stats |= (1<<AD_SLEEP12) | (1<<AD_SLEEP1);
		break;
	case AD_TRIANGLE:
		stats &= ~((1<<AD_OPBITEN) | (1<<AD_SLEEP12) | (1<<AD_SLEEP1));
		stats |=  (1<<AD_MODE);
		break;
	case AD_SQUARE:
		stats |=  (1<<AD_OPBITEN) | (1<<AD_DIV2);
		stats &= ~((1<<AD_MODE) | (1<<AD_SLEEP12) | (1<<AD_SLEEP1));
		break;
	case AD_SINE:
		stats &= ~((1<<AD_OPBITEN) | (1<<AD_MODE) | (1<<AD_SLEEP12) | (1<<AD_SLEEP12));
		break;
	}

	writeToAD9833(stats); // Send selected mode to AD9833
}

