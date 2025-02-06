    .text
    .balign 4
    .global vluxei64_v
vluxei64_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v2, (a2)
      slli t1, t0, 3
      add a2, a2, t1
    vluxei64.v v1, (a1), v2
      sub a0, a0, t0
    vse64.v v1, (a3)
      add a3, a3, t1
      bnez a0, vluxei64_v
      ret
