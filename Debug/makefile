################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include TouchGFX/target/generated/subdir.mk
-include TouchGFX/target/subdir.mk
-include TouchGFX/gui/src/screen2_screen/subdir.mk
-include TouchGFX/gui/src/screen1_screen/subdir.mk
-include TouchGFX/gui/src/model/subdir.mk
-include TouchGFX/gui/src/common/subdir.mk
-include TouchGFX/generated/texts/src/subdir.mk
-include TouchGFX/generated/images/src/subdir.mk
-include TouchGFX/generated/gui_generated/src/screen2_screen/subdir.mk
-include TouchGFX/generated/gui_generated/src/screen1_screen/subdir.mk
-include TouchGFX/generated/gui_generated/src/common/subdir.mk
-include TouchGFX/generated/fonts/src/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/touchgfx/framework/source/platform/hal/simulator/sdl2/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/touchgfx/framework/source/platform/driver/touch/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/simulator/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/gui/src/screen2_screen/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/gui/src/screen1_screen/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/gui/src/model/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/gui/src/common/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/texts/src/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/simulator/src/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/images/src/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/gui_generated/src/screen2_screen/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/gui_generated/src/screen1_screen/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/gui_generated/src/common/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/fonts/src/subdir.mk
-include TouchGFX/App/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/subdir.mk
-include Drivers/STM32G0xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

BUILD_ARTIFACT_NAME := NG071_GFXM101_OS
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
NG071_GFXM101_OS.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
NG071_GFXM101_OS.list \

OBJCOPY_BIN += \
NG071_GFXM101_OS.bin \


# All Target
all: main-build

# Main-build Target
main-build: NG071_GFXM101_OS.elf secondary-outputs

# Tool invocations
NG071_GFXM101_OS.elf: $(OBJS) $(USER_OBJS) C:\Users\alombardinilo\STM32CubeIDE\workspace_test\NG071_GFXM101_OS\STM32G071RBTX_FLASH.ld
	arm-none-eabi-g++ -o "NG071_GFXM101_OS.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0plus -T"C:\Users\alombardinilo\STM32CubeIDE\workspace_test\NG071_GFXM101_OS\STM32G071RBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="NG071_GFXM101_OS.map" -Wl,--gc-sections -static -L"C:\Users\alombardinilo\STM32CubeIDE\workspace_test\NG071_GFXM101_OS\Middlewares\ST\touchgfx\lib\core\cortex_m0\gcc" --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -lstdc++ -lsupc++ -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

NG071_GFXM101_OS.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "NG071_GFXM101_OS.list"
	@echo 'Finished building: $@'
	@echo ' '

NG071_GFXM101_OS.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "NG071_GFXM101_OS.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
