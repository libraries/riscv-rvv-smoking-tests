    .text
    .balign 4
    .global vsrl_vv
vsrl_vv:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vle256.v v1, (a2)
      add a2, a2, t0
    vsrl.vv v2, v0, v1
    vse256.v v2, (a3)
      add a3, a3, t0
      bnez a0, vsrl_vv
      ret
