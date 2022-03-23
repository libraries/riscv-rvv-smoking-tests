    .text
    .balign 4
    .global vnsra_wx
vnsra_wx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle64.v v2, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
      add a1, a1, t0
    vnsra.wx v4, v2, a2
    vse32.v v4, (a3)
      add a3, a3, t0
      bnez a0, vnsra_wx
      ret
