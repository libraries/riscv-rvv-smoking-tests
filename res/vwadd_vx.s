    .text
    .balign 4
    .global vwadd_vx
vwadd_vx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vwadd.vx v2, v1, a2
    vse64.v v2, (a3)
      add a3, a3, t0
      add a3, a3, t0
      bnez a0, vwadd_vx
      ret
