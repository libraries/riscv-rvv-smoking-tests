    .text
    .balign 4
    .global vwsubu_vv
vwsubu_vv:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vle32.v v1, (a2)
      add a2, a2, t0
    vwsubu.vv v2, v0, v1
    vse64.v v2, (a3)
      add a3, a3, t0
      add a3, a3, t0
      bnez a0, vwsubu_vv
      ret
