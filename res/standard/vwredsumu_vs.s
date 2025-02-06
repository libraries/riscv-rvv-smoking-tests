    .text
    .balign 4
    .global vwredsumu_vs
vwredsumu_vs:
    vsetvli t0, a0, e32, m2, ta, ma
    vle32.v v2, (a1)
    vle64.v v4, (a2)
    vle64.v v8, (a3)
    vwredsumu.vs v8, v2, v4
    vse64.v v8, (a3)
    ret
