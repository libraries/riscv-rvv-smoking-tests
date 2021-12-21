    .text
    .balign 4
    .global vmv2r_v
vmv2r_v:
    vsetvli t0, a0, e256, m2, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vmv2r.v v2, v0
    vse256.v v2, (a2)
      add a2, a2, t0
      bnez a0, vmv2r_v
      ret
