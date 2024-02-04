################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/Src/main.c \
../Source/Src/stm32f1xx_hal_msp.c \
../Source/Src/stm32f1xx_it.c \
../Source/Src/syscalls.c \
../Source/Src/sysmem.c \
../Source/Src/system_stm32f1xx.c \
../Source/Src/tim.c 

OBJS += \
./Source/Src/main.o \
./Source/Src/stm32f1xx_hal_msp.o \
./Source/Src/stm32f1xx_it.o \
./Source/Src/syscalls.o \
./Source/Src/sysmem.o \
./Source/Src/system_stm32f1xx.o \
./Source/Src/tim.o 

C_DEPS += \
./Source/Src/main.d \
./Source/Src/stm32f1xx_hal_msp.d \
./Source/Src/stm32f1xx_it.d \
./Source/Src/syscalls.d \
./Source/Src/sysmem.d \
./Source/Src/system_stm32f1xx.d \
./Source/Src/tim.d 


# Each subdirectory must supply rules for building sources it contributes
Source/Src/%.o Source/Src/%.su Source/Src/%.cyclo: ../Source/Src/%.c Source/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Source-2f-Src

clean-Source-2f-Src:
	-$(RM) ./Source/Src/main.cyclo ./Source/Src/main.d ./Source/Src/main.o ./Source/Src/main.su ./Source/Src/stm32f1xx_hal_msp.cyclo ./Source/Src/stm32f1xx_hal_msp.d ./Source/Src/stm32f1xx_hal_msp.o ./Source/Src/stm32f1xx_hal_msp.su ./Source/Src/stm32f1xx_it.cyclo ./Source/Src/stm32f1xx_it.d ./Source/Src/stm32f1xx_it.o ./Source/Src/stm32f1xx_it.su ./Source/Src/syscalls.cyclo ./Source/Src/syscalls.d ./Source/Src/syscalls.o ./Source/Src/syscalls.su ./Source/Src/sysmem.cyclo ./Source/Src/sysmem.d ./Source/Src/sysmem.o ./Source/Src/sysmem.su ./Source/Src/system_stm32f1xx.cyclo ./Source/Src/system_stm32f1xx.d ./Source/Src/system_stm32f1xx.o ./Source/Src/system_stm32f1xx.su ./Source/Src/tim.cyclo ./Source/Src/tim.d ./Source/Src/tim.o ./Source/Src/tim.su

.PHONY: clean-Source-2f-Src

