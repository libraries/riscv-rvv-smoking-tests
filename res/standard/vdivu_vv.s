    .text
    .balign 4
    .global vdivu_vv
vdivu_vv:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vle64.v v2, (a2)
      add a2, a2, t0
    vdivu.vv v3, v1, v2
    vse64.v v3, (a3)
      add a3, a3, t0
      bnez a0, vdivu_vv
      ret
