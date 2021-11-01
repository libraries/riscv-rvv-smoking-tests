RISCV=${HOME}/app/riscv_rvv
RISCV_RUNNER=~/src/ckb-vm/target/debug/examples/int64

res/viaddint256:
	cargo run --bin rvv-as -- res/viaddint256.s > res/viaddint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/viaddint256_emit.s -o res/viaddint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/viaddint256.c -o res/viaddint256 res/viaddint256.o

res/virsubint256:
	cargo run --bin rvv-as -- res/virsubint256.s > res/virsubint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/virsubint256_emit.s -o res/virsubint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/virsubint256.c -o res/virsubint256 res/virsubint256.o

res/vvaddint32:
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vvaddint32.s -o res/vvaddint32.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vvaddint32.c -o res/vvaddint32 res/vvaddint32.o
	${RISCV}/bin/riscv64-unknown-elf-objdump -d res/vvaddint32 > res/vvaddint32.dump
	${RISCV}/bin/qemu-riscv64 -cpu rv64,x-v=true res/vvaddint32

res/vvaddint256:
	cargo run --bin rvv-as -- res/vvaddint256.s > res/vvaddint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vvaddint256_emit.s -o res/vvaddint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vvaddint256.c -o res/vvaddint256 res/vvaddint256.o

res/vvmulint256:
	cargo run --bin rvv-as -- res/vvmulint256.s > res/vvmulint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vvmulint256_emit.s -o res/vvmulint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vvmulint256.c -o res/vvmulint256 res/vvmulint256.o

res/vvsubint256:
	cargo run --bin rvv-as -- res/vvsubint256.s > res/vvsubint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vvsubint256_emit.s -o res/vvsubint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vvsubint256.c -o res/vvsubint256 res/vvsubint256.o

res/vxaddint256:
	cargo run --bin rvv-as -- res/vxaddint256.s > res/vxaddint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vxaddint256_emit.s -o res/vxaddint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vxaddint256.c -o res/vxaddint256 res/vxaddint256.o

res/vxmulint256:
	cargo run --bin rvv-as -- res/vxmulint256.s > res/vxmulint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vxmulint256_emit.s -o res/vxmulint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vxmulint256.c -o res/vxmulint256 res/vxmulint256.o

res/vxrsubint256:
	cargo run --bin rvv-as -- res/vxrsubint256.s > res/vxrsubint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vxrsubint256_emit.s -o res/vxrsubint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vxrsubint256.c -o res/vxrsubint256 res/vxrsubint256.o

res/vxsubint256:
	cargo run --bin rvv-as -- res/vxsubint256.s > res/vxsubint256_emit.s
	${RISCV}/bin/riscv64-unknown-elf-gcc -c res/vxsubint256_emit.s -o res/vxsubint256.o
	${RISCV}/bin/riscv64-unknown-elf-gcc res/vxsubint256.c -o res/vxsubint256 res/vxsubint256.o

build: \
	clean \
	res/viaddint256 \
	res/virsubint256 \
	res/vvaddint32 \
	res/vvaddint256 \
	res/vvmulint256 \
	res/vvsubint256 \
	res/vxaddint256 \
	res/vxmulint256 \
	res/vxrsubint256 \
	res/vxsubint256
	${RISCV_RUNNER} res/viaddint256
	${RISCV_RUNNER} res/virsubint256
	${RISCV_RUNNER} res/vvaddint32
	${RISCV_RUNNER} res/vvaddint256
	${RISCV_RUNNER} res/vvmulint256
	${RISCV_RUNNER} res/vvsubint256
	${RISCV_RUNNER} res/vxaddint256
	${RISCV_RUNNER} res/vxmulint256
	${RISCV_RUNNER} res/vxrsubint256
	${RISCV_RUNNER} res/vxsubint256


clean:
	rm -f res/*.dump
	rm -f res/*.o
	rm -f res/*_emit.s
	rm -f res/viaddint256
	rm -f res/virsubint256
	rm -f res/vvaddint32
	rm -f res/vvaddint256
	rm -f res/vvmulint256
	rm -f res/vvsubint256
	rm -f res/vxaddint256
	rm -f res/vxmulint256
	rm -f res/vxrsubint256
	rm -f res/vxsubint256
