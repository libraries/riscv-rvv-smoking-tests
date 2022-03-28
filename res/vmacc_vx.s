    .text
    .balign 4
    .global vmacc_vx
vmacc_vx:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vle64.v v3, (a3)
      add a3, a3, t0
    vmacc.vx v3, a2, v1
    vse64.v v3, (a4)
      add a4, a4, t0
      bnez a0, vmacc_vx
      ret
