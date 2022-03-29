    .text
    .balign 4
    .global vredsum_vs
vredsum_vs:
    vsetvli t0, a0, e64, m4, ta, ma
    vle64.v v4, (a1)
    vle64.v v8, (a2)
    vle64.v v12, (a3)
    vredsum.vs v12, v4, v8
    vse64.v v12, (a3)
    ret
