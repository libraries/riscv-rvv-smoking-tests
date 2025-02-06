    .text
    .balign 4
    .global vnclipu_wx
vnclipu_wx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle64.v v2, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vnclipu.wx v6, v2, a2
    vse32.v v6, (a3)
      slli t1, t0, 2
      add a3, a3, t1
      bnez a0, vnclipu_wx
      ret
