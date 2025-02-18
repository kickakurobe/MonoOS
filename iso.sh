#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/mono.kernel isodir/boot/mono.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "MonoOS" {
	multiboot /boot/mono.kernel
}
EOF
grub-mkrescue -o mono.iso isodir
