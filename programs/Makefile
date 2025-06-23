%.ELF: %.c
	arm-none-eabi-gcc entry.c $< -flto -Wl,-flto -nostartfiles -specs=nano.specs -Os -Wl,-gc-sections -Wl,-strip-all -ffreestanding -march=armv8-m.main+fp+dsp -mfloat-abi=hard -mthumb -std=c11 -o $@ -Wl,--strip-all -pie -I../
	arm-none-eabi-objcopy --remove-section .persistent --remove-section .comment --remove-section .ARM.attributes $@ $@

all: SHELL.ELF TEST.ELF
	