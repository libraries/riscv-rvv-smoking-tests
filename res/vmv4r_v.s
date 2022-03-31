    .text
    .balign 4
    .global vmv4r_v
vmv4r_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v4, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vmv4r.v v8, v4
    vse64.v v8, (a2)
      add a2, a2, t0
      bnez a0, vmv4r_v
      ret
