    .text
    .balign 4
    .global vwmaccu_vx
vwmaccu_vx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v2, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vle64.v v4, (a3)
    vwmaccu.vx v4, a2, v2
    vse64.v v4, (a3)
      add a3, a3, t0
      add a3, a3, t0
      bnez a0, vwmaccu_vx
      ret
