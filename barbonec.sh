rm kernel.bin 2>/tmp/null
as -o /tmp/boot.o ./file/boot.s
gcc -c -I./file -nostdlib $1 -o /tmp/kernel.o
ld  -T ./file/link.ld -nostdlib /tmp/boot.o /tmp/kernel.o -o /tmp/kernel.bin
grub-file --is-x86-multiboot /tmp/kernel.bin
mv /tmp/kernel.bin ./
