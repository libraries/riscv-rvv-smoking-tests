    .text
    .balign 4
    .global vsse64_v
vsse64_v:
    li t3, 32
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vsse64.v v1, (a2), t3
      slli t0, t0, 2
      add a2, a2, t0
      bnez a0, vsse64_v
      ret
