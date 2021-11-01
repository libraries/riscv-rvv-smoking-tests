RISCV=${HOME}/app/riscv_rvv

res/viaddint256:
	cargo run --bin rvv-as -- res/viaddint256.s > res/viaddint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/viaddint256_emit.s -o res/viaddint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/viaddint256.c -o res/viaddint256 res/viaddint256.o

res/vvaddint32:
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vvaddint32.s -o res/vvaddint32.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vvaddint32.c -o res/vvaddint32 res/vvaddint32.o
	${RISCV}/bin/riscv64-unknown-elf-objdump -d res/vvaddint32 > res/vvaddint32.dump
	${RISCV}/bin/qemu-riscv64 -cpu rv64,x-v=true res/vvaddint32

res/vvaddint256:
	cargo run --bin rvv-as -- res/vvaddint256.s > res/vvaddint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vvaddint256_emit.s -o res/vvaddint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vvaddint256.c -o res/vvaddint256 res/vvaddint256.o

res/vvsubint256:
	cargo run --bin rvv-as -- res/vvsubint256.s > res/vvsubint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vvsubint256_emit.s -o res/vvsubint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vvsubint256.c -o res/vvsubint256 res/vvsubint256.o

res/vxaddint256:
	cargo run --bin rvv-as -- res/vxaddint256.s > res/vxaddint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vxaddint256_emit.s -o res/vxaddint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vxaddint256.c -o res/vxaddint256 res/vxaddint256.o

res/vxsubint256:
	cargo run --bin rvv-as -- res/vxsubint256.s > res/vxsubint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vxsubint256_emit.s -o res/vxsubint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vxsubint256.c -o res/vxsubint256 res/vxsubint256.o

clean:
	rm -f res/*.dump
	rm -f res/*.o
	rm -f res/*_emit.s
	rm -f res/viaddint256
	rm -f res/vvaddint32
	rm -f res/vvaddint256
	rm -f res/vvsubint256
	rm -f res/vxaddint256
	rm -f res/vxsubint256
