    .text
    .balign 4
    .global vmand_mm
vmand_mm:
    vsetvli t0, a0, e16, m1, ta, ma
    vlm.v v1, (a1)
      sub a0, a0, t0
      srli t0, t0, 3
      add a1, a1, t0
    vlm.v v2, (a2)
      add a2, a2, t0
    vmand.mm v3, v1, v2
    vsm.v v3, (a3)
      add a3, a3, t0
      bnez a0, vmand_mm
      ret
