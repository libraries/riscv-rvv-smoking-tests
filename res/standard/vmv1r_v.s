    .text
    .balign 4
    .global vmv1r_v
vmv1r_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vmv1r.v v2, v1
    vse64.v v2, (a2)
      add a2, a2, t0
      bnez a0, vmv1r_v
      ret
