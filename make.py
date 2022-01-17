#!/usr/bin/env python

import os
import glob
import sys
import subprocess

c_entry = [
    'vadd_vi',
    'vadd_vv_32',
    'vadd_vv',
    'vadd_vx',
    'vdiv_vv',
    'vdiv_vx',
    'vdivu_vv',
    'vdivu_vx',
    'vmax_vv',
    'vmax_vx',
    'vmaxu_vv',
    'vmaxu_vx',
    'vmin_vv',
    'vmin_vx',
    'vminu_vv',
    'vminu_vx',
    'vmseq_vi',
    'vmseq_vv',
    'vmseq_vx',
    'vmsgt_vi',
    'vmsgt_vx',
    'vmsgtu_vi',
    'vmsgtu_vx',
    'vmsle_vi',
    'vmsle_vv',
    'vmsle_vx',
    'vmslt_vv',
    'vmslt_vx',
    'vmsltu_vv',
    'vmsltu_vx',
    'vmsne_vi',
    'vmsne_vv',
    'vmsne_vx',
    'vmul_vv',
    'vmul_vx',
    'vrem_vv',
    'vrem_vx',
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
    'vand_vi',
    'vand_vx',
    'vand_vv',
    'vor_vi',
    'vor_vx',
    'vor_vv',
    'vxor_vi',
    'vxor_vx',
    'vxor_vv',
    'vmv1r_v',
    'vmv2r_v',
    'vmv4r_v',
    'vmv8r_v',
    'vsaddu_vv',
    'vsaddu_vx',
    'vsaddu_vi',
    'vsadd_vv',
    'vsadd_vx',
    'vsadd_vi',
    'vssubu_vv',
    'vssubu_vx',
    'vssub_vv',
    'vssub_vx',
    'vwaddu_vv',
    'vwsubu_vv',
    'vwadd_vv',
    'vwsub_vv',
    'vzext_vf2',
    'vzext_vf4',
    'vzext_vf8',
    'vsext_vf2',
    'vsext_vf4',
    'vsext_vf8',
    'vwaddu_vx',
    'vwsubu_vx',
    'vwadd_vx',
    'vwsub_vx',
    'vwaddu_wv',
    'vwsubu_wv',
    'vwadd_wv',
    'vwsub_wv',
    'vwaddu_wx',
    'vwsubu_wx',
    'vwadd_wx',
    'vwsub_wx',
]

assert len(glob.glob('res/*.c')) == len(c_entry)

def run(entry):
    print(f'run bin/{entry}')
    s = subprocess.call(f"int64 bin/{entry}", shell=True)
    assert s == 0

def build(entry):
    print(f'build bin/{entry}')
    s = subprocess.call(f'rvv-as res/{entry}.s > bin/{entry}_emit.s', shell=True)
    assert s == 0
    s = subprocess.call(f'riscv64-unknown-elf-gcc -c bin/{entry}_emit.s -o bin/{entry}.o', shell=True)
    assert s == 0
    s = subprocess.call(f'riscv64-unknown-elf-gcc res/{entry}.c -o bin/{entry} bin/{entry}.o', shell=True)
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
