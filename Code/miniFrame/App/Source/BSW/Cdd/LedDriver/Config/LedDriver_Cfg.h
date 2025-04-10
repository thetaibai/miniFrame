/*!
 **********************************************************
 *@file LedDriver_Cfg.h
 *@brief LedDrive mode configuration file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2025.4.7
 *
 *
 **********************************************************
 **/

#ifndef LEDDRIVER_CFG_H
#define LEDDRIVER_CFG_H
/* User include */
#include "main.h"

/* 788bs IO map */
#define Led_H1_Pin_788BS       Led_H1_Pin
#define Led_H1_GPIO_Port_788BS Led_H1_GPIO_Port
#define Led_H2_Pin_788BS       Led_H2_Pin
#define Led_H2_GPIO_Port_788BS Led_H2_GPIO_Port
#define Led_H3_Pin_788BS       Led_H3_Pin
#define Led_H3_GPIO_Port_788BS Led_H3_GPIO_Port
#define Led_H4_Pin_788BS       Led_H4_Pin
#define Led_H4_GPIO_Port_788BS Led_H4_GPIO_Port
#define Led_H5_Pin_788BS       Led_H5_Pin
#define Led_H5_GPIO_Port_788BS Led_H5_GPIO_Port
#define Led_H6_Pin_788BS       Led_H6_Pin
#define Led_H6_GPIO_Port_788BS Led_H6_GPIO_Port
#define Led_H7_Pin_788BS       Led_H7_Pin
#define Led_H7_GPIO_Port_788BS Led_H7_GPIO_Port
#define Led_H8_Pin_788BS       Led_H8_Pin
#define Led_H8_GPIO_Port_788BS Led_H8_GPIO_Port

#define Led_L1_Pin_788BS       Led_L1_Pin
#define Led_L1_GPIO_Port_788BS Led_L1_GPIO_Port
#define Led_L2_Pin_788BS       Led_L2_Pin
#define Led_L2_GPIO_Port_788BS Led_L2_GPIO_Port
#define Led_L3_Pin_788BS       Led_L3_Pin
#define Led_L3_GPIO_Port_788BS Led_L3_GPIO_Port
#define Led_L4_Pin_788BS       Led_L4_Pin
#define Led_L4_GPIO_Port_788BS Led_L4_GPIO_Port
#define Led_L5_Pin_788BS       Led_L5_Pin
#define Led_L5_GPIO_Port_788BS Led_L5_GPIO_Port
#define Led_L6_Pin_788BS       Led_L6_Pin
#define Led_L6_GPIO_Port_788BS Led_L6_GPIO_Port
#define Led_L7_Pin_788BS       Led_L7_Pin
#define Led_L7_GPIO_Port_788BS Led_L7_GPIO_Port
#define Led_L8_Pin_788BS       Led_L8_Pin
#define Led_L8_GPIO_Port_788BS Led_L8_GPIO_Port

enum LED_788BS_L {
	LED_788BS_L1 = 0,
	LED_788BS_L2,
	LED_788BS_L3,
	LED_788BS_L4,
	LED_788BS_L5,
	LED_788BS_L6,
	LED_788BS_L7,
	LED_788BS_L8,

	LED_788BS_L_Num,
};

enum LED_788BS_H {
	LED_788BS_H1 = 0,
	LED_788BS_H2,
	LED_788BS_H3,
	LED_788BS_H4,
	LED_788BS_H5,
	LED_788BS_H6,
	LED_788BS_H7,
	LED_788BS_H8,

	LED_788BS_H_Num,
};

typedef struct
{
   GPIO_TypeDef * GPIOx;
   uint16_t GPIO_Pin;

} LedGPIO_Cfg;

/* interface */
#define LedDriver_GPIO_Out(GPIOx, GPIO_Pin, PinState) HAL_GPIO_WritePin(GPIOx, GPIO_Pin, PinState)

#endif
