    .text
    .balign 4
    .global vslide1up_vx
vslide1up_vx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v1, (a1)
    vslide1up.vx v2, v1, a2
    vse32.v v2, (a3)
    ret
