    .text
    .balign 4
    .global vmsgtu_vi
vmsgtu_vi:
    vsetvli t0, a0, e64, m4, ta, ma
    vle64.v v4, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vmsgtu.vi v0, v4, 1
    vsm.v v0, (a2)
      srli t1, t0, 3
      add a2, a2, t1
      bnez a0, vmsgtu_vi
      ret
