    .text
    .balign 4
    .global vl4re32_v
vl4re32_v:
    vsetvli t0, a0, e64, m1, ta, ma
    slli t1, t0, 3

    vl4re32.v v4, (a1)
    add a1, a1, t1
    add a1, a1, t1
    add a1, a1, t1
    add a1, a1, t1

    vs1r.v v4, (a2)
    add a2, a2, t1

    vs1r.v v5, (a2)
    add a2, a2, t1

    vs1r.v v6, (a2)
    add a2, a2, t1

    vs1r.v v7, (a2)
    add a2, a2, t1

    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    bnez a0, vl4re32_v
    ret
