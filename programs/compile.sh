arm-none-eabi-gcc -c test.c -o test.o
arm-none-eabi-objcopy -O binary --change-section-address .text=0 ./test.o ./test