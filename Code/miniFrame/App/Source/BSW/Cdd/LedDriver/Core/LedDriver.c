/*!
 **********************************************************
 *@file LedDriver.h
 *@brief LedDrive mode head file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2025.4.7
 *
 *
 **********************************************************
 **/

/* User include */
#include "LedDriver.h"


const unsigned char *GetAddr;

LedGPIO_Cfg LedGPIO_788bs_L[LED_788BS_L_Num] =
{
	{Led_L1_GPIO_Port_788BS,	Led_L1_Pin_788BS},
	{Led_L2_GPIO_Port_788BS,	Led_L2_Pin_788BS},
	{Led_L3_GPIO_Port_788BS,	Led_L3_Pin_788BS},
	{Led_L4_GPIO_Port_788BS,	Led_L4_Pin_788BS},
	{Led_L5_GPIO_Port_788BS,	Led_L5_Pin_788BS},
	{Led_L6_GPIO_Port_788BS,	Led_L6_Pin_788BS},
	{Led_L7_GPIO_Port_788BS,	Led_L7_Pin_788BS},
	{Led_L8_GPIO_Port_788BS,	Led_L8_Pin_788BS},
};

LedGPIO_Cfg LedGPIO_788bs_H[LED_788BS_H_Num] =
{
	{Led_H1_GPIO_Port_788BS,	Led_H1_Pin_788BS},
	{Led_H2_GPIO_Port_788BS,	Led_H2_Pin_788BS},
	{Led_H3_GPIO_Port_788BS,	Led_H3_Pin_788BS},
	{Led_H4_GPIO_Port_788BS,	Led_H4_Pin_788BS},
	{Led_H5_GPIO_Port_788BS,	Led_H5_Pin_788BS},
	{Led_H6_GPIO_Port_788BS,	Led_H6_Pin_788BS},
	{Led_H7_GPIO_Port_788BS,	Led_H7_Pin_788BS},
	{Led_H8_GPIO_Port_788BS,	Led_H8_Pin_788BS},
};

void LedDriver_Init(void)
{
	LedDriver_GPIO_Out(Led_H1_GPIO_Port_788BS, Led_H1_Pin_788BS, GPIO_PIN_RESET);
	LedDriver_GPIO_Out(Led_H2_GPIO_Port_788BS, Led_H2_Pin_788BS, GPIO_PIN_RESET);
	LedDriver_GPIO_Out(Led_H3_GPIO_Port_788BS, Led_H3_Pin_788BS, GPIO_PIN_RESET);
	LedDriver_GPIO_Out(Led_H4_GPIO_Port_788BS, Led_H4_Pin_788BS, GPIO_PIN_RESET);
	LedDriver_GPIO_Out(Led_H5_GPIO_Port_788BS, Led_H5_Pin_788BS, GPIO_PIN_RESET);
	LedDriver_GPIO_Out(Led_H6_GPIO_Port_788BS, Led_H6_Pin_788BS, GPIO_PIN_RESET);
	LedDriver_GPIO_Out(Led_H7_GPIO_Port_788BS, Led_H7_Pin_788BS, GPIO_PIN_RESET);
	LedDriver_GPIO_Out(Led_H8_GPIO_Port_788BS, Led_H8_Pin_788BS, GPIO_PIN_RESET);

	LedDriver_GPIO_Out(Led_L1_GPIO_Port_788BS, Led_L1_Pin_788BS, GPIO_PIN_SET);
	LedDriver_GPIO_Out(Led_L2_GPIO_Port_788BS, Led_L2_Pin_788BS, GPIO_PIN_SET);
	LedDriver_GPIO_Out(Led_L3_GPIO_Port_788BS, Led_L3_Pin_788BS, GPIO_PIN_SET);
	LedDriver_GPIO_Out(Led_L4_GPIO_Port_788BS, Led_L4_Pin_788BS, GPIO_PIN_SET);
	LedDriver_GPIO_Out(Led_L5_GPIO_Port_788BS, Led_L5_Pin_788BS, GPIO_PIN_SET);
	LedDriver_GPIO_Out(Led_L6_GPIO_Port_788BS, Led_L6_Pin_788BS, GPIO_PIN_SET);
	LedDriver_GPIO_Out(Led_L7_GPIO_Port_788BS, Led_L7_Pin_788BS, GPIO_PIN_SET);
	LedDriver_GPIO_Out(Led_L8_GPIO_Port_788BS, Led_L8_Pin_788BS, GPIO_PIN_SET);
}

void LedDriver_Task(void)
{
	static uint8_t Led_HCnt = 0u;
	uint8_t Led_L_GPIO_PIN_SET = 0u;

	/* 将上一次扫描清除 */
	LedDriver_Init();

	/* 按列开始扫描，sp：7 - Led_HCnt 为镜像，可改为Led_HCnt */
	LedDriver_GPIO_Out(LedGPIO_788bs_H[7 - Led_HCnt].GPIOx, LedGPIO_788bs_H[7 - Led_HCnt].GPIO_Pin, GPIO_PIN_SET);

	if(Led_HCnt < LED_788BS_H8)
	{
		Led_HCnt++;
	}
	else
	{
		Led_HCnt = 0u;
	}

	/* 解析当前列的每一行是否点亮 */
	if(NULL != GetAddr)
	{
		for(uint8_t i = 0; i < LED_788BS_H_Num; i++)
		{
			Led_L_GPIO_PIN_SET = (GetAddr[Led_HCnt] >> i) & 0x01u;
			Led_L_GPIO_PIN_SET = !Led_L_GPIO_PIN_SET;//是否取反
			LedDriver_GPIO_Out(LedGPIO_788bs_L[i].GPIOx, LedGPIO_788bs_L[i].GPIO_Pin, Led_L_GPIO_PIN_SET);
		}
	}

	LedDriver_Init();/* 将亮度调得很低 */
}

void LedDriver_SetMatrix(const unsigned char Addr[])
{
	GetAddr = Addr;
}

void LedDriver_Test(void)
{
//	static const unsigned char bitmap_bytes[] = {
//		0x00,0x04,0x3E,0x00,
//		0x20,0x32,0x32,0x2C
//	};
//	static uint8_t Led_HCnt = 0u;
//	uint8_t Led_L_GPIO_PIN_SET = 0u;
//
//	LedDriver_Init();
//	LedDriver_GPIO_Out(LedGPIO_788bs_H[7 - Led_HCnt].GPIOx, LedGPIO_788bs_H[7 - Led_HCnt].GPIO_Pin, GPIO_PIN_SET);
//
//	if(Led_HCnt < LED_788BS_H8)
//	{
//		Led_HCnt++;
//	}
//	else
//	{
//		Led_HCnt = 0u;
//	}
//
//	for(uint8_t i = 0; i < LED_788BS_H_Num; i++)
//	{
//		Led_L_GPIO_PIN_SET = (bitmap_bytes[Led_HCnt] >> i) & 0x01u;
//		Led_L_GPIO_PIN_SET = !Led_L_GPIO_PIN_SET;//是否取反
//		LedDriver_GPIO_Out(LedGPIO_788bs_L[i].GPIOx, LedGPIO_788bs_L[i].GPIO_Pin, Led_L_GPIO_PIN_SET);
//	}

}
