/*!
 **********************************************************
 *@file Wdg_Cfg.h
 *@brief Wdg Cfg mode' head file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2024.4.7
 *
 *
 **********************************************************
 **/
#ifndef WDG_CFG_H
#define WDG_CFG_H


#define SelfCheckValue0    0x11
#define SelfCheckValue1    0x22
#define SelfCheckValue2    0x33
#define SelfCheckValue3    0x44
#define SelfCheckValue4    0x55
#define SelfCheckValue5    0x66
#define SelfCheckValue6    0x77
#define SelfCheckValue7    0x88

#define Wdg_Task_ms            8             /* Wdg function Task ms */
#define Wdg_FeedDog_Time_ms    40
#define Wdg_FeedDogIndex       (uint8_t)((Wdg_FeedDog_Time_ms)/(Wdg_Task_ms))

#define Wdg_Os_Check_Cycle     50    /* limit 255 */
#define Wdg_Os_Run_Limitmin    48
#define Wdg_Os_Run_Limitmax    52

extern const unsigned char SelfCheckValueCheck[8];

#endif
