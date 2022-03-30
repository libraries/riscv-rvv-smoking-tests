    .text
    .balign 4
    .global vmsbf_m
vmsbf_m:
    vsetvli t0, a0, e32, m1, ta, ma
    vmv.v.x v2, a1
    vmv.v.x v0, a2
    vsetvli t0, a0, e8, m2, ta, ma
    vmxor.mm v4, v4, v4
    vmsbf.m v4, v2, v0.t
    vsetvli t0, a0, e32, m1, ta, ma
    vmv.x.s a0, v4
    ret
