RISCV=${HOME}/app/riscv_rvv

res/vvaddint32:
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vvaddint32.s -o res/vvaddint32.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vvaddint32.c -o res/vvaddint32 res/vvaddint32.o
	${RISCV}/bin/riscv64-unknown-elf-objdump -d res/vvaddint32 > res/vvaddint32.dump
	${RISCV}/bin/qemu-riscv64 -cpu rv64,x-v=true res/vvaddint32

clean:
	rm res/vvaddint32
	rm res/vvaddint32.o