    .text
    .balign 4
    .global vs2r_v
vs2r_v:
    vsetvli t0, a0, e8, m1, ta, ma
    vmv.v.i v2, 1
    vmv.v.i v3, 1
    vs2r.v v2, (a1)
    sub a0, a0, t0
    sub a0, a0, t0
    add a1, a1, t0
    add a1, a1, t0
    bnez a0, vs2r_v
    ret
