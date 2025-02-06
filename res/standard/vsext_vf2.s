    .text
    .balign 4
    .global vsext_vf2
vsext_vf2:
    vsetvli t0, a0, e64, m1, ta, ma
    vle32.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vsext.vf2 v2, v1
    vse64.v v2, (a2)
      add a2, a2, t0
      add a2, a2, t0
      bnez a0, vsext_vf2
      ret
