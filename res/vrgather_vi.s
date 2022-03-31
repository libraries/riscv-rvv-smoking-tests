    .text
    .balign 4
    .global vrgather_vi
vrgather_vi:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vrgather.vi v2, v1, 0x01
    vse32.v v2, (a2)
      add a2, a2, t0
      bnez a0, vrgather_vi
      ret
