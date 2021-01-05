as --32 -ggdb boot.s -o boot.o
gcc -c -nostdlib -masm=intel kernel.c
ld -m elf_i386 -T linker.ld -o kernel kernel.o boot.o
mkdir tes
mkdir tes/boot
mkdir tes/boot/grub
cp Lava /tes/boot
cp grub.cfg tes/boot/grub
grub-mkrescue -o tes.iso tes
qemu-system-i386 -cdrom tes.iso
