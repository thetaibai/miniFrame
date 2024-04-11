################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/APP_JP/APP_JP.c 

OBJS += \
./Source/APP_JP/APP_JP.o 

C_DEPS += \
./Source/APP_JP/APP_JP.d 


# Each subdirectory must supply rules for building sources it contributes
Source/APP_JP/%.o Source/APP_JP/%.su Source/APP_JP/%.cyclo: ../Source/APP_JP/%.c Source/APP_JP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/a9077/Desktop/learn/miniFrame/miniFrame/Code/miniFrame/Test/miniFrameTest_FBL/Source/APP_JP" -I"C:/Users/a9077/Desktop/learn/miniFrame/miniFrame/Code/miniFrame/Test/miniFrameTest_FBL/Source" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Source-2f-APP_JP

clean-Source-2f-APP_JP:
	-$(RM) ./Source/APP_JP/APP_JP.cyclo ./Source/APP_JP/APP_JP.d ./Source/APP_JP/APP_JP.o ./Source/APP_JP/APP_JP.su

.PHONY: clean-Source-2f-APP_JP

