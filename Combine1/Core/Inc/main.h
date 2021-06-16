/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stm32f7xx_nucleo_144.h"
#include "DDS.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include "inttypes.h"
#include "ads1115.h"
#include "ads1256.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
//char buf[400];
static int LCD_courbe ;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

#define USER_Btn_Pin GPIO_PIN_13
#define USER_Btn_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define RMII_MDC_Pin GPIO_PIN_1
#define RMII_MDC_GPIO_Port GPIOC
#define RMII_REF_CLK_Pin GPIO_PIN_1
#define RMII_REF_CLK_GPIO_Port GPIOA
#define RMII_MDIO_Pin GPIO_PIN_2
#define RMII_MDIO_GPIO_Port GPIOA
#define RMII_CRS_DV_Pin GPIO_PIN_7
#define RMII_CRS_DV_GPIO_Port GPIOA
#define RMII_RXD0_Pin GPIO_PIN_4
#define RMII_RXD0_GPIO_Port GPIOC
#define RMII_RXD1_Pin GPIO_PIN_5
#define RMII_RXD1_GPIO_Port GPIOC
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define RMII_TXD1_Pin GPIO_PIN_13
#define RMII_TXD1_GPIO_Port GPIOB
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define STLK_RX_Pin GPIO_PIN_8
#define STLK_RX_GPIO_Port GPIOD
#define STLK_TX_Pin GPIO_PIN_9
#define STLK_TX_GPIO_Port GPIOD
#define USB_PowerSwitchOn_Pin GPIO_PIN_6
#define USB_PowerSwitchOn_GPIO_Port GPIOG
#define USB_OverCurrent_Pin GPIO_PIN_7
#define USB_OverCurrent_GPIO_Port GPIOG
#define USB_SOF_Pin GPIO_PIN_8
#define USB_SOF_GPIO_Port GPIOA
#define USB_VBUS_Pin GPIO_PIN_9
#define USB_VBUS_GPIO_Port GPIOA
#define USB_ID_Pin GPIO_PIN_10
#define USB_ID_GPIO_Port GPIOA
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define RMII_TX_EN_Pin GPIO_PIN_11
#define RMII_TX_EN_GPIO_Port GPIOG
#define RMII_TXD0_Pin GPIO_PIN_13
#define RMII_TXD0_GPIO_Port GPIOG
#define SW0_Pin GPIO_PIN_3
#define SW0_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_7
#define LD2_GPIO_Port GPIOB
#define RST_Pin GPIO_PIN_1
#define RST_GPIO_Port GPIOE
void delay_us (uint16_t us);
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define cs_sd_Pin GPIO_PIN_3
#define cs_sd_GPIO_Port GPIOE
#define rst_ad7606_Pin GPIO_PIN_12
#define rst_ad7606_GPIO_Port GPIOD
#define rd_cs_ad7606_Pin GPIO_PIN_8
#define rd_cs_ad7606_GPIO_Port GPIOA
#define osc1_ad7606_Pin GPIO_PIN_9
#define osc1_ad7606_GPIO_Port GPIOA
#define cvab_ad7606_Pin GPIO_PIN_10
#define cvab_ad7606_GPIO_Port GPIOA
#define osc3_ad7606_Pin GPIO_PIN_11
#define osc3_ad7606_GPIO_Port GPIOA
#define osc2_ad7606_Pin GPIO_PIN_12
#define osc2_ad7606_GPIO_Port GPIOA
#define d15_Pin GPIO_PIN_15
#define d15_GPIO_Port GPIOA
#define d14_Pin GPIO_PIN_3
#define d14_GPIO_Port GPIOD
#define d13_Pin GPIO_PIN_6
#define d13_GPIO_Port GPIOD
#define d12_Pin GPIO_PIN_7
#define d12_GPIO_Port GPIOD
#define d11_Pin GPIO_PIN_9
#define d11_GPIO_Port GPIOG
#define d10_Pin GPIO_PIN_10
#define d10_GPIO_Port GPIOG
#define d9_Pin GPIO_PIN_12
#define d9_GPIO_Port GPIOG
#define d8_Pin GPIO_PIN_13
#define d8_GPIO_Port GPIOG
#define d7_Pin GPIO_PIN_14
#define d7_GPIO_Port GPIOG
#define d6_Pin GPIO_PIN_15
#define d6_GPIO_Port GPIOG
#define d5_Pin GPIO_PIN_3
#define d5_GPIO_Port GPIOB
#define d4_Pin GPIO_PIN_4
#define d4_GPIO_Port GPIOB
#define d3_Pin GPIO_PIN_5
#define d3_GPIO_Port GPIOB
#define d2_Pin GPIO_PIN_6
#define d2_GPIO_Port GPIOB
#define d1_Pin GPIO_PIN_7
#define d1_GPIO_Port GPIOB
#define d0_Pin GPIO_PIN_9
#define d0_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define SD_SPI_HANDLE hspi4 // FOR SDCARD SPI

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
