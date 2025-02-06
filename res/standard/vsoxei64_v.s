    .text
    .balign 4
    .global vsoxei64_v
vsoxei64_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      slli t1, t0, 3
      add a1, a1, t1
    vle64.v v2, (a2)
      add a2, a2, t1
    vsoxei64.v v1, (a3), v2
      sub a0, a0, t0
      bnez a0, vsoxei64_v
      ret
