    .text
    .balign 4
    .global vsub_vv
vsub_vv:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vle64.v v1, (a2)
      add a2, a2, t0
    vsub.vv v2, v0, v1
    vse64.v v2, (a3)
      add a3, a3, t0
      bnez a0, vsub_vv
      ret
