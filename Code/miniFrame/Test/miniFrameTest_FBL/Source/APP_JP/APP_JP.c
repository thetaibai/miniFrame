/*!
 **********************************************************
 *@file APP_JP.c
 *@brief APP_JP mode'source file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2024.4.11
 *
 *
 **********************************************************
 **/
#include "APP_JP.h"

typedef void (*p_APP)(void);

void GotoAPP(void)
{
	p_APP application;
	uint32_t jump_address;

	if (((*(__IO uint32_t*)APP_ADDRESS) & 0x2FFE0000 ) == 0x20000000)
	{
		jump_address = *(__IO uint32_t*) (APP_ADDRESS + 4);
		application = (p_APP) jump_address;

	  __set_MSP(*(__IO uint32_t*) APP_ADDRESS);

	  application();
	}
}
