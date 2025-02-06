    .text
    .balign 4
    .global vadd_vi
vadd_vi:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vadd.vi v1, v0, 1
    vse64.v v1, (a2)
      add a2, a2, t0
      bnez a0, vadd_vi
      ret
