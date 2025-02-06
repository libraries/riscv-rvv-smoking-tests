    .text
    .balign 4
    .global vs8r_v
vs8r_v:
    vsetvli t0, a0, e8, m1, ta, ma
    vmv.v.i v8, 1
    vmv.v.i v9, 1
    vmv.v.i v10, 1
    vmv.v.i v11, 1
    vmv.v.i v12, 1
    vmv.v.i v13, 1
    vmv.v.i v14, 1
    vmv.v.i v15, 1
    vs8r.v v8, (a1)
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    add a1, a1, t0
    add a1, a1, t0
    add a1, a1, t0
    add a1, a1, t0
    add a1, a1, t0
    add a1, a1, t0
    add a1, a1, t0
    add a1, a1, t0
    bnez a0, vs8r_v
    ret
