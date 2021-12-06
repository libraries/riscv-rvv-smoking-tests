# RVV Playground

## Installation

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

```sh
$ git clone https://github.com/TheWaWaR/riscv-v-spec
$ cd riscv-v-spec/example
$ make
```