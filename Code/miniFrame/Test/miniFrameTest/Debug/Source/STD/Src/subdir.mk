################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/STD/Src/main.c \
../Source/STD/Src/stm32f1xx_hal_msp.c \
../Source/STD/Src/stm32f1xx_it.c \
../Source/STD/Src/syscalls.c \
../Source/STD/Src/sysmem.c \
../Source/STD/Src/system_stm32f1xx.c \
../Source/STD/Src/tim.c 

OBJS += \
./Source/STD/Src/main.o \
./Source/STD/Src/stm32f1xx_hal_msp.o \
./Source/STD/Src/stm32f1xx_it.o \
./Source/STD/Src/syscalls.o \
./Source/STD/Src/sysmem.o \
./Source/STD/Src/system_stm32f1xx.o \
./Source/STD/Src/tim.o 

C_DEPS += \
./Source/STD/Src/main.d \
./Source/STD/Src/stm32f1xx_hal_msp.d \
./Source/STD/Src/stm32f1xx_it.d \
./Source/STD/Src/syscalls.d \
./Source/STD/Src/sysmem.d \
./Source/STD/Src/system_stm32f1xx.d \
./Source/STD/Src/tim.d 


# Each subdirectory must supply rules for building sources it contributes
Source/STD/Src/%.o Source/STD/Src/%.su Source/STD/Src/%.cyclo: ../Source/STD/Src/%.c Source/STD/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Source/STD/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Source-2f-STD-2f-Src

clean-Source-2f-STD-2f-Src:
	-$(RM) ./Source/STD/Src/main.cyclo ./Source/STD/Src/main.d ./Source/STD/Src/main.o ./Source/STD/Src/main.su ./Source/STD/Src/stm32f1xx_hal_msp.cyclo ./Source/STD/Src/stm32f1xx_hal_msp.d ./Source/STD/Src/stm32f1xx_hal_msp.o ./Source/STD/Src/stm32f1xx_hal_msp.su ./Source/STD/Src/stm32f1xx_it.cyclo ./Source/STD/Src/stm32f1xx_it.d ./Source/STD/Src/stm32f1xx_it.o ./Source/STD/Src/stm32f1xx_it.su ./Source/STD/Src/syscalls.cyclo ./Source/STD/Src/syscalls.d ./Source/STD/Src/syscalls.o ./Source/STD/Src/syscalls.su ./Source/STD/Src/sysmem.cyclo ./Source/STD/Src/sysmem.d ./Source/STD/Src/sysmem.o ./Source/STD/Src/sysmem.su ./Source/STD/Src/system_stm32f1xx.cyclo ./Source/STD/Src/system_stm32f1xx.d ./Source/STD/Src/system_stm32f1xx.o ./Source/STD/Src/system_stm32f1xx.su ./Source/STD/Src/tim.cyclo ./Source/STD/Src/tim.d ./Source/STD/Src/tim.o ./Source/STD/Src/tim.su

.PHONY: clean-Source-2f-STD-2f-Src

