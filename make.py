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

    if sub in c_entry:
        i = sub
        print(f'build bin/{i}')
        s = subprocess.call(f'target/debug/rvv-as res/{i}.s > bin/{i}_emit.s', shell=True)
        assert s == 0
        s = subprocess.call(f'{c_riscv}/bin/riscv64-unknown-elf-gcc -c bin/{i}_emit.s -o bin/{i}.o', shell=True)
        assert s == 0
        s = subprocess.call(f'{c_riscv}/bin/riscv64-unknown-elf-gcc res/{i}.c -o bin/{i} bin/{i}.o', shell=True)
        assert s == 0
        print(f'run bin/{i}')
        s = subprocess.call(f'{c_riscv_runner} bin/{i}', shell=True)
        assert s == 0
        print(f'fmt res/{i}.c')
        s = subprocess.call(f'clang-format --style="{{ColumnLimit: 120}}" -i res/{i}.c', shell=True)
        assert s == 0
