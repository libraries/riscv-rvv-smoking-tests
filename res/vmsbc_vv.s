    .text
    .balign 4
    .global vmsbc_vv
vmsbc_vv:
    vsetvli t0, a0, e32, m2, ta, ma
    vle32.v v2, (a1)
      sub a0, a0, t0
      slli t1, t0, 2
      add a1, a1, t1
    vle32.v v4, (a2)
      add a2, a2, t1
    vmsbc.vv v6, v2, v4
    vsm.v v6, (a3)
      srli t1, t0, 3
      add a3, a3, t1
      bnez a0, vmsbc_vv
      ret
