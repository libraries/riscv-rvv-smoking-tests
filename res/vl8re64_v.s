    .text
    .balign 4
    .global vl8re64_v
vl8re64_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vl8re64.v v8, (a1)
    vs1r.v v8, (a2)
    sub a0, a0, t0
    slli t0, t0, 3
    add a1, a1, t0
    add a2, a2, t0
    bnez a0, vl8re64_v
    ret
