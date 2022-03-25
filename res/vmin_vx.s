    .text
    .balign 4
    .global vmin_vx
vmin_vx:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vmin.vx v3, v1, a2
    vse64.v v3, (a3)
      add a3, a3, t0
      bnez a0, vmin_vx
      ret
