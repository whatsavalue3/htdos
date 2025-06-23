LOOPMOUNT=`sudo losetup --partscan --show --find ./disk.img`

mkdir -p bap

sudo mount ${LOOPMOUNT} ./bap

sudo rm -rf ./bap/*

sudo cp ./programs/*.ELF ./bap/

sudo umount ./bap

sudo losetup -d ${LOOPMOUNT}

arm-none-eabi-objcopy -I binary -O elf32-littlearm ./disk.img ./disk.o