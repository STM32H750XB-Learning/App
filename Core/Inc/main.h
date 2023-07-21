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
#include "stm32h7xx_hal.h"

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

/* USER CODE BEGIN Private defines */
#define LED_R_PORT    	GPIOC
#define LED_R_PIN      	GPIO_PIN_15
#define LED_R_ON()     	HAL_GPIO_WritePin(LED_R_PORT, LED_R_PIN, GPIO_PIN_RESET)
#define LED_R_OFF()    	HAL_GPIO_WritePin(LED_R_PORT, LED_R_PIN, GPIO_PIN_SET)
#define LED_R_TOGGLE()	HAL_GPIO_TogglePin(LED_R_PORT, LED_R_PIN)

#define LED_B_PORT     	GPIOI
#define LED_B_PIN      	GPIO_PIN_8
#define LED_B_ON()     	HAL_GPIO_WritePin(LED_B_PORT, LED_B_PIN, GPIO_PIN_RESET)
#define LED_B_OFF()    	HAL_GPIO_WritePin(LED_B_PORT, LED_B_PIN, GPIO_PIN_SET)
#define LED_B_TOGGLE()	HAL_GPIO_TogglePin(LED_B_PORT, LED_B_PIN)
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
