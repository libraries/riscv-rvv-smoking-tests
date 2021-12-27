    .text
    .balign 4
    .global vzext_vf2
vzext_vf2:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vzext.vf2 v1, v0
    vse256.v v1, (a2)
      add a2, a2, t0
      bnez a0, vzext_vf2
      ret
