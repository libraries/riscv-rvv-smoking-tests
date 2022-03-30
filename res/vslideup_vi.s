    .text
    .balign 4
    .global vslideup_vi
vslideup_vi:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v1, (a1)
    vslideup.vi v2, v1, 1
    vse32.v v2, (a2)
    ret
