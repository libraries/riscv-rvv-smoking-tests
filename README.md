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

### Install `ckb-debugger-rvv`
```sh
$ git clone -b rvv https://github.com/mohanson/ckb-standalone-debugger
$ cd ckb-standalone-debugger/bins
$ cargo install --path . -f --locked
```

### Install `rvv-as`
```sh
$ cargo install rvv-as
```

### Build and Run the tests
```sh
$ mkdir bin
$ python make.py build
$ python make.py run
```
