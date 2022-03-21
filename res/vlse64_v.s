    .text
    .balign 4
    .global vlse64_v
vlse64_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vlse64.v v1, (a1), a3
      sub a0, a0, t0
      mul t1, t0, a3
      add a1, a1, t1
    vse64.v v1, (a2)
      slli t1, t0, 3
      add a2, a2, t1
      bnez a0, vlse64_v
      ret
