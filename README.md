# RISC-V RVV Smoking tests

Provides smoking tests and bench for RISC-V V Extension.

## Installation(way 1)

```sh
# Install RISC-V gnu toolchain
$ git clone https://github.com/Imperas/riscv-toolchains.git --branch rvv-1.0.0

# Install spike
$ git clone https://github.com/riscv-software-src/riscv-isa-sim
$ cd riscv-isa-sim
$ mkdir build
$ cd build
$ ../configure --prefix=/home/ubuntu/app/riscv
$ make
$ make install

# Create main.config
$ cp main.config.template main.config

# Build rvv-as
$ cargo build

# Build tests
$ python main.py build

# Run tests by spike. Passed if it returns 0.
$ spike --isa=RV64GCV pk vadd_vv

# Install ckb-vm/examples/int64
$ git clone -b rvv https://github.com/nervosnetwork/ckb-vm.git
$ cargo build --example int64

# Run all
$ python main.py run
```

## Installation(way 2)

Supplement for way 1. If you are using a non-Linux64 os, it means that you cannot use the precompiled gnu toolchain. So you need to compile it yourself.

```sh
# Install RISC-V gnu toolchain
$ git clone --branch rvv-intrinsic https://github.com/riscv-collab/riscv-gnu-toolchain
$ cd riscv-gnu-toolchain
$ rm -rf riscv-glibc
$ git clone --branch riscv-glibc-2.29 https://github.com/riscvarchive/riscv-glibc
$ git submodule update --init
$ ./configure --prefix=$HOME/app/riscv_rvv --with-arch=rv64gcv
$ make newlib
$ make build-qemu

# Usage of qemu
$ qemu-riscv64 -cpu rv64,x-v=true USER_PROGRAM
```

## Installation(way 3)

If you really don't want to use rvv's gnu toolchain, plain riscv64-unknown-elf-gcc can be used as an alternative.

```sh
$ cargo install rvv-as

$ vim main.config
```

```json
{
    "gcc": "riscv64-unknown-elf-gcc",
    "gcc_build_args": "-march=rv64gc",
    "as": "/home/ubuntu/.cargo/bin/rvv-as",
}
```
