    .text
    .balign 4
    .global vmerge_vxm
vmerge_vxm:
    vsetvli t0, a0, e64, m4, ta, ma
    vle64.v v4, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vsm.v v0, (a3)
      srli t1, t0, 3
      add a3, a3, t1
    vmerge.vxm v12, v4, a2, v0
    vse64.v v12, (a4)
      slli t1, t0, 3
      add a4, a4, t1
      bnez a0, vmerge_vxm
      ret
