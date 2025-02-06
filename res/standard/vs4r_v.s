    .text
    .balign 4
    .global vs4r_v
vs4r_v:
    vsetvli t0, a0, e8, m1, ta, ma
    vmv.v.i v4, 1
    vmv.v.i v5, 1
    vmv.v.i v6, 1
    vmv.v.i v7, 1
    vs4r.v v4, (a1)
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    add a1, a1, t0
    add a1, a1, t0
    add a1, a1, t0
    add a1, a1, t0
    bnez a0, vs4r_v
    ret
