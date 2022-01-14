    .text
    .balign 4
    .global vnsra_wx
vnsra_wx:
    vsetvli t0, a0, e128, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 4
      add a1, a1, t0
      add a1, a1, t0
    vnsra.wx v2, v0, a2
    vse128.v v2, (a3)
      add a3, a3, t0
      bnez a0, vnsra_wx
      ret
