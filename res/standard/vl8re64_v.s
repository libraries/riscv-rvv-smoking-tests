    .text
    .balign 4
    .global vl8re64_v
vl8re64_v:
    vsetvli t0, a0, e64, m1, ta, ma
    slli t1, t0, 3

    vl8re64.v v8, (a1)
    add a1, a1, t1
    add a1, a1, t1
    add a1, a1, t1
    add a1, a1, t1
    add a1, a1, t1
    add a1, a1, t1
    add a1, a1, t1
    add a1, a1, t1

    vs1r.v v8, (a2)
    add a2, a2, t1

    vs1r.v v9, (a2)
    add a2, a2, t1

    vs1r.v v10, (a2)
    add a2, a2, t1

    vs1r.v v11, (a2)
    add a2, a2, t1

    vs1r.v v12, (a2)
    add a2, a2, t1

    vs1r.v v13, (a2)
    add a2, a2, t1

    vs1r.v v14, (a2)
    add a2, a2, t1

    vs1r.v v15, (a2)
    add a2, a2, t1

    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    sub a0, a0, t0
    bnez a0, vl8re64_v
    ret
