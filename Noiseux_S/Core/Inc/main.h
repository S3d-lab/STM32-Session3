/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define LED_BP_Pin GPIO_PIN_13
#define LED_BP_GPIO_Port GPIOC
#define P1_0_Pin GPIO_PIN_1
#define P1_0_GPIO_Port GPIOA
#define P1_1_Pin GPIO_PIN_2
#define P1_1_GPIO_Port GPIOA
#define P1_2_Pin GPIO_PIN_3
#define P1_2_GPIO_Port GPIOA
#define P1_3_Pin GPIO_PIN_4
#define P1_3_GPIO_Port GPIOA
#define P1_4_Pin GPIO_PIN_5
#define P1_4_GPIO_Port GPIOA
#define P1_5_Pin GPIO_PIN_6
#define P1_5_GPIO_Port GPIOA
#define P1_6_Pin GPIO_PIN_7
#define P1_6_GPIO_Port GPIOA
#define P2_0_Pin GPIO_PIN_0
#define P2_0_GPIO_Port GPIOB
#define P2_6_Pin GPIO_PIN_1
#define P2_6_GPIO_Port GPIOB
#define screen_r_w_Pin GPIO_PIN_10
#define screen_r_w_GPIO_Port GPIOB
#define screen_en_Pin GPIO_PIN_11
#define screen_en_GPIO_Port GPIOB
#define screen_d4_Pin GPIO_PIN_12
#define screen_d4_GPIO_Port GPIOB
#define screen_d5_Pin GPIO_PIN_13
#define screen_d5_GPIO_Port GPIOB
#define screen_d6_Pin GPIO_PIN_14
#define screen_d6_GPIO_Port GPIOB
#define screen_d7_Pin GPIO_PIN_15
#define screen_d7_GPIO_Port GPIOB
#define P1_7_Pin GPIO_PIN_8
#define P1_7_GPIO_Port GPIOA
#define P2_3_Pin GPIO_PIN_3
#define P2_3_GPIO_Port GPIOB
#define P2_1_Pin GPIO_PIN_4
#define P2_1_GPIO_Port GPIOB
#define P2_2_Pin GPIO_PIN_5
#define P2_2_GPIO_Port GPIOB
#define P2_5_Pin GPIO_PIN_6
#define P2_5_GPIO_Port GPIOB
#define P2_4_Pin GPIO_PIN_7
#define P2_4_GPIO_Port GPIOB
#define P2_7_Pin GPIO_PIN_8
#define P2_7_GPIO_Port GPIOB
#define screen_rs_Pin GPIO_PIN_9
#define screen_rs_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
