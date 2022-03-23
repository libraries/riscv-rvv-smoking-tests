    .text
    .balign 4
    .global vs1r_v
vs1r_v:
    vsetvli t0, a0, e8, m1, ta, ma
    vmv.v.i v1, 1
    vs1r.v v1, (a1)
    sub a0, a0, t0
    add a1, a1, t0
    bnez a0, vs1r_v
    ret
