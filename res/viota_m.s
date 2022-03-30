    .text
    .balign 4
    .global viota_m
viota_m:
    vsetvli t0, a0, e8, m1, ta, ma
    vmv.s.x v1, a1
    vmv.s.x v0, a2
    viota.m v2, v1, v0.t
    vse8.v v2, (a3)
    ret
