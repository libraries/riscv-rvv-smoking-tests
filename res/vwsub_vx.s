    .text
    .balign 4
    .global vwsub_vx
vwsub_vx:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vwsub.vx v2, v0, a2
    vse512.v v2, (a3)
      add a3, a3, t0
      add a3, a3, t0
      bnez a0, vwsub_vx
      ret
