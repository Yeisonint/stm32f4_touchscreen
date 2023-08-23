/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Button_Pin GPIO_PIN_0
#define Button_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_1
#define LED_GPIO_Port GPIOA
#define TFT_D_C_Pin GPIO_PIN_5
#define TFT_D_C_GPIO_Port GPIOC
#define TFT_BLK_Pin GPIO_PIN_1
#define TFT_BLK_GPIO_Port GPIOB
#define TFT_CS_Pin GPIO_PIN_12
#define TFT_CS_GPIO_Port GPIOB
#define TFT_SCL_CLK_Pin GPIO_PIN_13
#define TFT_SCL_CLK_GPIO_Port GPIOB
#define TFT_SDO_MISO_Pin GPIO_PIN_14
#define TFT_SDO_MISO_GPIO_Port GPIOB
#define TFT_SDI_MOSI_Pin GPIO_PIN_15
#define TFT_SDI_MOSI_GPIO_Port GPIOB
#define SD_DAT0_Pin GPIO_PIN_8
#define SD_DAT0_GPIO_Port GPIOC
#define SD_DAT1_Pin GPIO_PIN_9
#define SD_DAT1_GPIO_Port GPIOC
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define FM_CS_Pin GPIO_PIN_15
#define FM_CS_GPIO_Port GPIOA
#define SD_DAT2_Pin GPIO_PIN_10
#define SD_DAT2_GPIO_Port GPIOC
#define SD_CD_DAT3_Pin GPIO_PIN_11
#define SD_CD_DAT3_GPIO_Port GPIOC
#define SD_CLK_Pin GPIO_PIN_12
#define SD_CLK_GPIO_Port GPIOC
#define SD_CMD_Pin GPIO_PIN_2
#define SD_CMD_GPIO_Port GPIOD
#define FM_CLK_Pin GPIO_PIN_3
#define FM_CLK_GPIO_Port GPIOB
#define FM_DO_Pin GPIO_PIN_4
#define FM_DO_GPIO_Port GPIOB
#define FM_DI_Pin GPIO_PIN_5
#define FM_DI_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
