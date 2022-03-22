    .text
    .balign 4
    .global vs8r_v
vs8r_v:
    vsetvli t0, zero, e8, m1, ta, ma
    vmv.v.i v8, 8
    vmv.v.i v9, 9
    vmv.v.i v10, 10
    vmv.v.i v11, 11
    vmv.v.i v12, 12
    vmv.v.i v13, 13
    vmv.v.i v14, 14
    vmv.v.i v15, 15
    vs8r.v v8, (a0)
    ret
