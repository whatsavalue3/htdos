%.SYS: %.c
	arm-none-eabi-gcc entry.c 8_GFX.o $< -flto -Wl,-flto -nostartfiles -specs=nano.specs -Os -Wl,-gc-sections -Wl,-strip-all -ffreestanding -march=armv8-m.main+fp+dsp -mfloat-abi=hard -mthumb -std=c11 -o $@ -Wl,--strip-all -pie -I../ -I../baremetal/include
	arm-none-eabi-objcopy --remove-section .persistent --remove-section .comment --remove-section .ARM.attributes $@ $@

all: SCREEN.SYS
	