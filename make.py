import glob
import sys
import subprocess


c_riscv = '/home/ubuntu/app/riscv_rvv'
c_riscv_runner = '/home/ubuntu/src/ckb-vm/target/debug/examples/int64'
c_entry = [
    'vadd_vi',
    'vadd_vv_32',
    'vadd_vv',
    'vadd_vx',
    'vdivu_vv',
    'vdivu_vx',
    'vmseq_vi',
    'vmseq_vv',
    'vmseq_vx',
    'vmsgt_vi',
    'vmsgt_vx',
    'vmsgtu_vi',
    'vmsgtu_vx',
    'vmsltu_vv',
    'vmsltu_vx',
    'vmsne_vi',
    'vmsne_vv',
    'vmsne_vx',
    'vmul_vv',
    'vmul_vx',
    'vremu_vv',
    'vremu_vv_512',
    'vremu_vx',
    'vrsub_vi',
    'vrsub_vx',
    'vsll_vi',
    'vsll_vv',
    'vsll_vx',
    'vsra_vi',
    'vsra_vv',
    'vsra_vx',
    'vsrl_vi',
    'vsrl_vv',
    'vsrl_vx',
    'vsub_vv',
    'vsub_vx',
]

assert len(glob.glob('res/*.c')) == len(c_entry)


for sub in sys.argv[1:]:
    if sub == 'build':
        for i in c_entry:
            print(f'build bin/{i}')
            s = subprocess.call(f'target/debug/rvv-as res/{i}.s > bin/{i}_emit.s', shell=True)
            assert s == 0
            s = subprocess.call(f'{c_riscv}/bin/riscv64-unknown-elf-gcc -c bin/{i}_emit.s -o bin/{i}.o', shell=True)
            assert s == 0
            s = subprocess.call(f'{c_riscv}/bin/riscv64-unknown-elf-gcc res/{i}.c -o bin/{i} bin/{i}.o', shell=True)
            assert s == 0
    if sub == 'run':
        for i in c_entry:
            print(f'run bin/{i}')
            s = subprocess.call(f'{c_riscv_runner} bin/{i}', shell=True)
            assert s == 0
    if sub == 'fmt':
        for i in c_entry:
            print(f'fmt res/{i}.c')
            s = subprocess.call(f'clang-format --style="{{ColumnLimit: 120}}" -i res/{i}.c', shell=True)
            assert s == 0
