################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/BSW/Sys/LittleOs/Config/Task.c 

OBJS += \
./Source/BSW/Sys/LittleOs/Config/Task.o 

C_DEPS += \
./Source/BSW/Sys/LittleOs/Config/Task.d 


# Each subdirectory must supply rules for building sources it contributes
Source/BSW/Sys/LittleOs/Config/%.o Source/BSW/Sys/LittleOs/Config/%.su Source/BSW/Sys/LittleOs/Config/%.cyclo: ../Source/BSW/Sys/LittleOs/Config/%.c Source/BSW/Sys/LittleOs/Config/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/a9077/Desktop/learn/miniFrame/miniFrame/Code/miniFrame/Test/miniFrameTest/Source/BSW/Sys/LittleOs/Config" -I"C:/Users/a9077/Desktop/learn/miniFrame/miniFrame/Code/miniFrame/Test/miniFrameTest/Source/BSW/Sys/LittleOs/Core" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Source-2f-BSW-2f-Sys-2f-LittleOs-2f-Config

clean-Source-2f-BSW-2f-Sys-2f-LittleOs-2f-Config:
	-$(RM) ./Source/BSW/Sys/LittleOs/Config/Task.cyclo ./Source/BSW/Sys/LittleOs/Config/Task.d ./Source/BSW/Sys/LittleOs/Config/Task.o ./Source/BSW/Sys/LittleOs/Config/Task.su

.PHONY: clean-Source-2f-BSW-2f-Sys-2f-LittleOs-2f-Config

