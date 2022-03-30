    .text
    .balign 4
    .global vcpop_m
vcpop_m:
    vsetvli t0, a0, e32, m1, ta, ma
    vmv.v.x v2, a1
    vmv.v.x v0, a2
    vsetvli t0, a0, e8, m2, ta, ma
    vcpop.m a0, v2, v0.t
    ret
