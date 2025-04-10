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

#ifndef LEDDRIVER_H
#define LEDDRIVER_H
/* User include */
#include "LedDriver_Cfg.h"
#include "matrix.h"

void LedDriver_Task(void);
void LedDriver_SetMatrix(const unsigned char Addr[]);
#endif
