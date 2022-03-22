    .text
    .balign 4
    .global vs1r_v
vs1r_v:
    vsetvli t0, zero, e8, m1, ta, ma
    vmv.v.i v1, 1
    vs1r.v v1, (a0)
    ret
