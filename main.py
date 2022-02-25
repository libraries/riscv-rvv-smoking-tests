import glob
import json
import os
import os.path
import sys
import subprocess

with open('main.config') as f:
    conf = json.load(f)
c_riscv_gcc = conf['gcc']
c_riscv_runner = conf['runner']
c_riscv_as = conf['as']
c_entry = sorted([os.path.splitext(os.path.basename(i))[0] for i in glob.glob('res/*.c')])


def run(entry):
    print(f'run bin/{entry}')
    s = subprocess.call(f'{c_riscv_runner} bin/{entry}', shell=True)
    assert s == 0


def build(entry):
    print(f'build bin/{entry}')
    s = subprocess.call(f'{c_riscv_as} res/{entry}.s > bin/{entry}_emit.s', shell=True)
    assert s == 0
    s = subprocess.call(f'{c_riscv_gcc} -march=rv64imcv -c bin/{entry}_emit.s -o bin/{entry}.o', shell=True)
    assert s == 0
    s = subprocess.call(f'{c_riscv_gcc} res/{entry}.c -o bin/{entry} bin/{entry}.o', shell=True)
    assert s == 0


def fmt(entry):
    print(f'fmt res/{entry}.c')
    s = subprocess.call(f'clang-format --style="{{ColumnLimit: 120}}" -i res/{entry}.c', shell=True)
    assert s == 0


if not os.path.exists('bin'):
    print('mkdir bin/')
    os.mkdir('bin')

for sub in sys.argv[1:]:
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
