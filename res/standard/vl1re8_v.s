    .text
    .balign 4
    .global vl1re8_v
vl1re8_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vl1re8.v v1, (a1)
    vs1r.v v1, (a2)
    sub a0, a0, t0
    slli t0, t0, 3
    add a1, a1, t0
    add a2, a2, t0
    bnez a0, vl1re8_v
    ret
