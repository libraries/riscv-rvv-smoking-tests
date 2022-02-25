# RVV Playground

## Installation

### Install gnu toolchain

```sh
$ git clone --branch rvv-intrinsic https://github.com/riscv-collab/riscv-gnu-toolchain
$ cd riscv-gnu-toolchain
$ rm -rf riscv-glibc
$ git clone --branch riscv-glibc-2.29 https://github.com/riscvarchive/riscv-glibc
$ git submodule update --init
$ ./configure --prefix=$HOME/app/riscv_rvv --with-arch=rv64gcv
$ make newlib
$ make build-qemu
```

### Usage of qemu

```sh
$ qemu-riscv64 -cpu rv64,x-v=true USER_PROGRAM
```

### Usage of spike

```sh
$ spike --isa=RV64GCV pk vadd_vv_32
```

### Install `ckb-vm/examples/int64`

```sh
$ git clone -b rvv https://github.com/nervosnetwork/ckb-vm.git
$ cargo build --example int64
```

### Install `rvv-as`

```sh
$ git clone https://github.com/TheWaWaR/rvv-encoder
$ cargo build
```

## Build and Run the tests

```sh
$ python main.py build
$ python main.py run
```
