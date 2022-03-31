    .text
    .balign 4
    .global vrgather_vx
vrgather_vx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vrgather.vx v3, v1, a2
    vse32.v v3, (a3)
      add a3, a3, t0
      bnez a0, vrgather_vx
      ret
