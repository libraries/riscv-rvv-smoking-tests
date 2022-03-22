    .text
    .balign 4
    .global vwsub_wx
vwsub_wx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle64.v v2, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
      add a1, a1, t0
    vwsub.wx v1, v2, a2
    vse64.v v1, (a3)
      add a3, a3, t0
      add a3, a3, t0
      bnez a0, vwsub_wx
      ret
