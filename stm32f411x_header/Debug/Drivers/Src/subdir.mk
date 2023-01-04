################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Src/stm32f411x_driver_gpio.c 

OBJS += \
./Drivers/Src/stm32f411x_driver_gpio.o 

C_DEPS += \
./Drivers/Src/stm32f411x_driver_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Src/%.o Drivers/Src/%.su: ../Drivers/Src/%.c Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F411RE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I"C:/Users/PHY202209EF06/STM32CubeIDE/workspace_1.10.1/stm32f411x_header/Drivers/Inc" -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Src

clean-Drivers-2f-Src:
	-$(RM) ./Drivers/Src/stm32f411x_driver_gpio.d ./Drivers/Src/stm32f411x_driver_gpio.o ./Drivers/Src/stm32f411x_driver_gpio.su

.PHONY: clean-Drivers-2f-Src

