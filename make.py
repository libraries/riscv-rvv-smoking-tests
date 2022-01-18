import os
import os.path
import glob
import sys
import subprocess

if os.environ.get('RISCV_GCC'):
    c_riscv_gcc = os.environ['RISCV_GCC']
else:
    c_riscv_gcc = '/home/ubuntu/app/riscv_rvv/bin/riscv64-unknown-elf-gcc'
if os.environ.get('RISCV_RUNNER'):
    c_riscv_runner = os.environ['RISCV_RUNNER']
else:
    c_riscv_runner = '/home/ubuntu/src/ckb-vm/target/debug/examples/int64'
if os.environ.get('RISCV_AS'):
    c_riscv_as = os.environ['RISCV_AS']
else:
    c_riscv_as = 'target/debug/rvv-as'
c_entry = sorted([os.path.splitext(os.path.basename(i))[0] for i in glob.glob('res/*.c')])


def run(entry):
    print(f'run bin/{entry}')
    s = subprocess.call(f'{c_riscv_runner} bin/{entry}', shell=True)
    assert s == 0


def build(entry):
    print(f'build bin/{entry}')
    s = subprocess.call(f'{c_riscv_as} res/{entry}.s > bin/{entry}_emit.s', shell=True)
    assert s == 0
    s = subprocess.call(f'{c_riscv_gcc} -c bin/{entry}_emit.s -o bin/{entry}.o', shell=True)
    assert s == 0
    s = subprocess.call(f'{c_riscv_gcc} res/{entry}.c -o bin/{entry} bin/{entry}.o', shell=True)
    assert s == 0


def fmt(entry):
    print(f'fmt res/{entry}.c')
    s = subprocess.call(f'clang-format --style="{{ColumnLimit: 120}}" -i res/{entry}.c', shell=True)
    assert s == 0


for sub in sys.argv[1:]:
    if not os.path.exists('bin'):
        print('mkdir bin/')
        os.mkdir('bin')
    if sub == 'build':
        for i in c_entry:
            build(i)
    if sub == 'run':
        for i in c_entry:
            run(i)
    if sub == 'fmt':
        for i in c_entry:
            fmt(i)
    if sub in c_entry:
        build(sub)
        run(sub)
        fmt(sub)
