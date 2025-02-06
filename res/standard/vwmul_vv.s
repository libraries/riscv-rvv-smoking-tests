    .text
    .balign 4
    .global vwmul_vv
vwmul_vv:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v2, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vle32.v v4, (a2)
      add a2, a2, t0
    vwmul.vv v6, v2, v4
    vse64.v v6, (a3)
      add a3, a3, t0
      add a3, a3, t0
      bnez a0, vwmul_vv
      ret
