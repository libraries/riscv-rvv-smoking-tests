    .text
    .balign 4
    .global vslidedown_vx
vslidedown_vx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v1, (a1)
    vslidedown.vx v2, v1, a2
    vse32.v v2, (a3)
    ret
