    .text
    .balign 4
    .global vadd_vv
vadd_vv:
    vsetvli t0, a0, e256, m8, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vle256.v v8, (a2)
      add a2, a2, t0
    vadd.vv v16, v0, v8
    vse256.v v16, (a3)
      add a3, a3, t0
      bnez a0, vadd_vv
      ret
