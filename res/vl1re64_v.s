    .text
    .balign 4
    .global vl1re64_v
vl1re64_v:
    vsetivli t0, 1, e8, m1, ta, ma
    vl1re64.v v1, (a0)
    vs1r.v v1, (a1)
    ret
