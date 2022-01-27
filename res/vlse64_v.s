    .text
    .balign 4
    .global vlse64_v
vlse64_v:
    li t3, 32
    vsetvli t0, a0, e64, m1, ta, ma
    vlse64.v v1, (a1), t3
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vse64.v v1, (a2)
      srli t0, t0, 2
      add a2, a2, t0
      bnez a0, vlse64_v
      ret
