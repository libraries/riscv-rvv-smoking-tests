    .text
    .balign 4
    .global vl1re16_v
vl1re16_v:
    vsetivli t0, 1, e8, m1, ta, ma
    vl1re16.v v1, (a0)
    vs1r.v v1, (a1)
    ret
