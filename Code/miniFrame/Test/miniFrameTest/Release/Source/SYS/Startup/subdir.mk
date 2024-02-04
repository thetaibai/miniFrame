################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Source/SYS/Startup/startup_stm32f103c6tx.s 

OBJS += \
./Source/SYS/Startup/startup_stm32f103c6tx.o 

S_DEPS += \
./Source/SYS/Startup/startup_stm32f103c6tx.d 


# Each subdirectory must supply rules for building sources it contributes
Source/SYS/Startup/%.o: ../Source/SYS/Startup/%.s Source/SYS/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m3 -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Source-2f-SYS-2f-Startup

clean-Source-2f-SYS-2f-Startup:
	-$(RM) ./Source/SYS/Startup/startup_stm32f103c6tx.d ./Source/SYS/Startup/startup_stm32f103c6tx.o

.PHONY: clean-Source-2f-SYS-2f-Startup

