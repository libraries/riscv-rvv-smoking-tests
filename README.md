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

### Install `ckb-vm/examples/int64`

```sh
$ git clone -b rvv https://github.com/nervosnetwork/ckb-vm.git
cargo install --example int64 --path .
```

### Install `rvv-as`

```sh
$ cargo install rvv-as
```

## Build and Run the tests

```sh
$ mkdir bin
$ python make.py build
$ python make.py run
```
