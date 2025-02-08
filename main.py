import glob
import json
import os
import os.path
import sys
import subprocess

with open('main.json') as f:
    conf = json.load(f)
c_riscv_gcc = conf['gcc']
c_riscv_gcc_build_args = conf['gcc_build_args']
c_riscv_runner = conf['runner']
c_riscv_as = conf['as']


def call(c: str):
    print('$', c)
    return subprocess.run(c, check=True, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)


if not os.path.exists('bin'):
    os.mkdir('bin')
if not os.path.exists('bin/bn'):
    os.mkdir('bin/bn')
if not os.path.exists('bin/standard'):
    os.mkdir('bin/standard')

for sub in sys.argv[1:]:
    if sub == 'fmt':
        for e in sorted([os.path.splitext(os.path.basename(i))[0] for i in glob.glob('res/bn/*.c')]):
            call(f'clang-format --style="{{ColumnLimit: 120}}" -i res/bn/{e}.c')
        for e in sorted([os.path.splitext(os.path.basename(i))[0] for i in glob.glob('res/standard/*.c')]):
            call(f'clang-format --style="{{ColumnLimit: 120}}" -i res/standard/{e}.c')
    if sub == 'build':
        for e in sorted([os.path.splitext(os.path.basename(i))[0] for i in glob.glob('res/bn/*.c')]):
            call(f'{c_riscv_as} res/bn/{e}.s > bin/bn/{e}.s')
            call(f'{c_riscv_gcc} {c_riscv_gcc_build_args} -c bin/bn/{e}.s -o bin/bn/{e}.o')
            call(f'{c_riscv_gcc} res/bn/{e}.c bin/bn/{e}.o -o bin/bn/{e}')
        for e in sorted([os.path.splitext(os.path.basename(i))[0] for i in glob.glob('res/standard/*.c')]):
            call(f'{c_riscv_gcc} {c_riscv_gcc_build_args} -c res/standard/{e}.s -o bin/standard/{e}.o')
            call(f'{c_riscv_gcc} res/standard/{e}.c bin/standard/{e}.o -o bin/standard/{e}')
    if sub == 'run':
        for e in sorted([os.path.splitext(os.path.basename(i))[0] for i in glob.glob('res/standard/*.c')]):
            call(f'{c_riscv_runner} bin/standard/{e}')
