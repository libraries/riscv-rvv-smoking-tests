    .text
    .balign 4
    .global vs2r_v
vs2r_v:
    vsetvli t0, zero, e8, m1, ta, ma
    vmv.v.i v2, 2
    vmv.v.i v3, 3
    vs2r.v v2, (a0)
    ret
