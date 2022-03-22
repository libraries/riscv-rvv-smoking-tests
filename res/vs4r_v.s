    .text
    .balign 4
    .global vs4r_v
vs4r_v:
    vsetvli t0, zero, e8, m1, ta, ma
    vmv.v.i v4, 4
    vmv.v.i v5, 5
    vmv.v.i v6, 6
    vmv.v.i v7, 7
    vs4r.v v4, (a0)
    ret
