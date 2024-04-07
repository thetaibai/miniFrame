/*!
 **********************************************************
 *@file Wdg.c
 *@brief Wdg mode' source file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2024.4.7
 *
 *
 **********************************************************
 **/

#include "Wdg.h"
#include "Wdg_Cfg.h"

#define __no_init __attribute__((section(".noinit_ram")))
__no_init uint8_t SelfCheckValue[8];

static void Wdg_FeedDog_Task(void);
static void Wdg_Os_Check_Task(void);

/*!
 **********************************************************
 *@brief Wdg Task for feed dog
 *
 *The function can feed dog and check Os Task.
 *
 **********************************************************
 **/
void Wdg_Task(void)
{
	Wdg_FeedDog_Task();
	Wdg_Os_Check_Task();

}

static void Wdg_FeedDog_Task(void)
{
	static uint8_t Wdg_Fdog_Cnt = 0;

	if(Wdg_FeedDogIndex == Wdg_Fdog_Cnt)
	{
		Wdg_IWDG_Refresh_F_Hal();
		Wdg_Fdog_Cnt = 0;
	}
	else
	{
		Wdg_Fdog_Cnt++;
	}
}

static void Wdg_Os_Check_Task(void)
{
	static uint8_t Wdg_OsCheck_Cnt = 0;

	if(Wdg_Os_Check_Cycle == Wdg_OsCheck_Cnt)
	{
		if((Wdg_OsCheck_Cnt <= Wdg_Os_Run_Limitmax)
			&& (Wdg_OsCheck_Cnt >= Wdg_Os_Run_Limitmin))
		{
			Wdg_OsCheck_Cnt = 0;
			/* Os is good, do nothing */
		}
		else
		{
			Wdg_Reset();
			/* Os is failed, Reset */
		}
	}
	else
	{
		Wdg_OsCheck_Cnt++;
	}
}
/*!
 **********************************************************
 *@brief Soft Reset If
 *
 *The function can Rest soft.
 *
 **********************************************************
 **/
void Wdg_Reset(void)
{
	Wdg_Reset_F_Hal();
}



/*!
 **********************************************************
 *@brief Power up Reset again
 *
 *The function will Check SelfCheckValue.
 *
 **********************************************************
 **/
void Wdg_SelfCheck(void)
{
	uint8_t CheckFlag = 0;

	/* Check Value */
	for(int i = 0; i < 8; i++)
	{
		if(SelfCheckValueCheck[i] == SelfCheckValue[i])
		{
			CheckFlag = 1;
		}
		else
		{
			CheckFlag = 0;
			break;
		}
	}

	/* Check Result */
	if(1 == CheckFlag)
	{
		/* Check passed, Do nothing */
	}
	else
	{
		/* Check failed, Get right Value */
		for(int i = 0; i < 8; i++)
		{
			SelfCheckValue[i] = SelfCheckValueCheck[i];
		}

		/* Reset Software */
		Wdg_Reset();
	}


}
