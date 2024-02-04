################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Source/STD/Startup/startup_stm32f103c6tx.s 

OBJS += \
./Source/STD/Startup/startup_stm32f103c6tx.o 

S_DEPS += \
./Source/STD/Startup/startup_stm32f103c6tx.d 


# Each subdirectory must supply rules for building sources it contributes
Source/STD/Startup/%.o: ../Source/STD/Startup/%.s Source/STD/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m3 -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Source-2f-STD-2f-Startup

clean-Source-2f-STD-2f-Startup:
	-$(RM) ./Source/STD/Startup/startup_stm32f103c6tx.d ./Source/STD/Startup/startup_stm32f103c6tx.o

.PHONY: clean-Source-2f-STD-2f-Startup

