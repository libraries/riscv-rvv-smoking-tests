    .text
    .balign 4
    .global vmnand_mm
vmnand_mm:
    vsetvli t0, a0, e8, m1, ta, ma
    vlm.v v1, (a1)
      sub a0, a0, t0
      srli t0, t0, 3
      add a1, a1, t0
    vlm.v v2, (a2)
      add a2, a2, t0
    vmnand.mm v3, v1, v2
    vsm.v v3, (a3)
      add a3, a3, t0
      bnez a0, vmnand_mm
      ret
