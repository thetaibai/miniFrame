/*!
 **********************************************************
 *@file Task.c
 *@brief all Task in this file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.7.17
 *
 *
 **********************************************************
 **/

#include "Task.h"
#include "Wdg.h"


void OS_1ms(void);
void OS_2ms(void);
void OS_4ms1(void);
void OS_8ms3(void);
void OS_8ms7(void);

const struct TaskTableT TaskTable[TaskIdNumber] =
{
	{TaskId_1ms,    1u,       0u,   OS_1ms},
	{TaskId_2ms, 	2u, 	  0u, 	OS_2ms},
	{TaskId_4ms1, 	4u, 	  1u, 	OS_4ms1},
	{TaskId_8ms3, 	8u, 	  3u, 	OS_8ms3},
	{TaskId_8ms7, 	8u, 	  7u, 	OS_8ms7}
};

/*!
 **********************************************************
 *@brief Loop in 1ms
 *
 *The function will be call 1ms loop .
 *
 **********************************************************
 **/
void OS_1ms(void)
{

}

/*!
 **********************************************************
 *@brief Loop in 2ms
 *
 *The function will be call 2ms loop .
 *
 **********************************************************
 **/
void OS_2ms(void)
{

}

/*!
 **********************************************************
 *@brief Loop in 4ms
 *
 *The function will be call 4ms loop .
 *
 **********************************************************
 **/
void OS_4ms1(void)
{

}

/*!
 **********************************************************
 *@brief Loop in 8ms
 *
 *The function will be call 8ms loop .
 *
 **********************************************************
 **/
void OS_8ms3(void)
{

}

/*!
 **********************************************************
 *@brief Loop in 8ms
 *
 *The function will be call 8ms loop .
 *
 **********************************************************
 **/
void OS_8ms7(void)
{
	Wdg_Task();
}

/*!
 **********************************************************
 *@brief Loop in idle
 *
 *The function will be call when idle .
 *
 **********************************************************
 **/
void OS_Idle(void)
{

}
