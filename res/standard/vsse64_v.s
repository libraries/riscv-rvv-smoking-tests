    .text
    .balign 4
    .global vsse64_v
vsse64_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vsse64.v v1, (a2), a3
      mul t1, t0, a3
      add a2, a2, t1
      bnez a0, vsse64_v
      ret
