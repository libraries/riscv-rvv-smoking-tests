    .text
    .balign 4
    .global vmadc_vi
vmadc_vi:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vmadc.vi v2, v0, 15
    vsetivli t0, 1, e8, m1, ta, ma
    vse8.v v2, (a2)
      add a2, a2, t0
      bnez a0, vmadc_vi
      ret
