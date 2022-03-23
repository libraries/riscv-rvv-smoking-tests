    .text
    .balign 4
    .global vzext_vf4
vzext_vf4:
    vsetvli t0, a0, e64, m1, ta, ma
    vle16.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 1
      add a1, a1, t0
    vzext.vf4 v2, v1
    vse64.v v2, (a2)
      slli t0, t0, 2
      add a2, a2, t0
      bnez a0, vzext_vf4
      ret
