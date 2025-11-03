################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.c 

OBJS += \
./Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.o 

C_DEPS += \
./Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.o: ../Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.c Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I"C:/Users/1735593/Desktop/STM32-Session3/Noiseux_S/Drivers/TEP- Session 3 kit 1e" -I"C:/Users/1735593/Desktop/STM32-Session3/Noiseux_S/Drivers/TEP- Session 3 kit 1e/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Drivers/TEP- Session 3 kit 1e/Src/ecran.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-TEP-2d--20-Session-20-3-20-kit-20-1e-2f-Src

clean-Drivers-2f-TEP-2d--20-Session-20-3-20-kit-20-1e-2f-Src:
	-$(RM) ./Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.cyclo ./Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.d ./Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.o ./Drivers/TEP-\ Session\ 3\ kit\ 1e/Src/ecran.su

.PHONY: clean-Drivers-2f-TEP-2d--20-Session-20-3-20-kit-20-1e-2f-Src

