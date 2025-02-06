# RISC-V RVV Smoking tests

Provides smoking tests and bench for RISC-V V Extension.

## Usage

```sh
# Install RISC-V RVV gnu toolchain
$ git clone https://github.com/Imperas/riscv-toolchains.git --branch rvv-1.0.0

# Install qemu-riscv64
$ apt install qemu-riscv64

# Build tests
$ python main.py build

# Run tests by qemu.
$ python main.py run
```
