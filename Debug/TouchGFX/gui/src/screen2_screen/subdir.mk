################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/screen2_screen/Screen2Presenter.cpp \
../TouchGFX/gui/src/screen2_screen/Screen2View.cpp 

OBJS += \
./TouchGFX/gui/src/screen2_screen/Screen2Presenter.o \
./TouchGFX/gui/src/screen2_screen/Screen2View.o 

CPP_DEPS += \
./TouchGFX/gui/src/screen2_screen/Screen2Presenter.d \
./TouchGFX/gui/src/screen2_screen/Screen2View.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/screen2_screen/Screen2Presenter.o: ../TouchGFX/gui/src/screen2_screen/Screen2Presenter.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m0plus -std=gnu++14 -g3 -DSTM32G071xx -DUSE_HAL_DRIVER '-DCMSIS_device_header=<stm32g0xx.h>' -DDEBUG -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"TouchGFX/gui/src/screen2_screen/Screen2Presenter.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
TouchGFX/gui/src/screen2_screen/Screen2View.o: ../TouchGFX/gui/src/screen2_screen/Screen2View.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m0plus -std=gnu++14 -g3 -DSTM32G071xx -DUSE_HAL_DRIVER '-DCMSIS_device_header=<stm32g0xx.h>' -DDEBUG -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"TouchGFX/gui/src/screen2_screen/Screen2View.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

