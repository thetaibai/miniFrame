/*!
 **********************************************************
 *@file Wdg.h
 *@brief Wdg mode' head file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2024.4.7
 *
 *
 **********************************************************
 **/

#ifndef WDG_CFGIF_H
#define WDG_CFGIF_H
#include "stm32f1xx_hal.h"
#include "iwdg.h"

#define Wdg_Reset_F_Hal()                    HAL_NVIC_SystemReset()
#define Wdg_IWDG_Refresh_F_Hal()             HAL_IWDG_Refresh(&hiwdg)

#endif
