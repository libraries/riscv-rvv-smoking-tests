    .text
    .balign 4
    .global vmv8r_v
vmv8r_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v8, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vmv8r.v v16, v8
    vse64.v v16, (a2)
      add a2, a2, t0
      bnez a0, vmv8r_v
      ret
