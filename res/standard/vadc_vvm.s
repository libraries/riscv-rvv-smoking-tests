    .text
    .balign 4
    .global vadc_vvm
vadc_vvm:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vle64.v v2, (a2)
      add a2, a2, t0
    vlm.v v0, (a3)
      srli t1, t0, 8
      add a3, a3, t1
    vadc.vvm v3, v1, v2, v0
    vse64.v v3, (a4)
      add a4, a4, t0
      bnez a0, vadc_vvm
      ret
