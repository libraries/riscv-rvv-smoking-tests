    .text
    .balign 4
    .global vmadc_vxm
vmadc_vxm:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vlm.v v0, (a3)
      srli t1, t0, 8
      add a3, a3, t1
    vmadc.vxm v3, v1, a2
    vsetivli t0, 1, e8, m1, ta, ma
    vse8.v v3, (a4)
      add a4, a4, t0
      bnez a0, vmadc_vxm
      ret
