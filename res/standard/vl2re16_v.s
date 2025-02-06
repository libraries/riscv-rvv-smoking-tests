    .text
    .balign 4
    .global vl2re16_v
vl2re16_v:
    vsetvli t0, a0, e64, m1, ta, ma
    slli t1, t0, 3

    vl2re16.v v2, (a1)
    add a1, a1, t1
    add a1, a1, t1

    vs1r.v v2, (a2)
    add a2, a2, t1

    vs1r.v v3, (a2)
    add a2, a2, t1

    sub a0, a0, t0
    sub a0, a0, t0
    bnez a0, vl2re16_v
    ret
