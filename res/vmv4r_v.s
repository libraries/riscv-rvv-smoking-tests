    .text
    .balign 4
    .global vmv4r_v
vmv4r_v:
    vsetvli t0, a0, e256, m4, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vmv4r.v v4, v0
    vse256.v v4, (a2)
      add a2, a2, t0
      bnez a0, vmv4r_v
      ret
