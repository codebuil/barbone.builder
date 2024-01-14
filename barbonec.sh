rm kernel.bin 2>/tmp/null
as -o /tmp/boot.o boot.s
gcc -c -nostdlib $1 -o /tmp/kernel.o
ld -T link.ld -nostdlib /tmp/boot.o /tmp/kernel.o -o /tmp/kernel.bin
grub-file --is-x86-multiboot /tmp/kernel.bin
mv /tmp/kernel.bin ./
