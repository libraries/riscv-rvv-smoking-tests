    .text
    .balign 4
    .global vmsgtu_vx
vmsgtu_vx:
    vsetvli t0, a0, e64, m4, ta, ma
    vle64.v v4, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vmsgtu.vx v0, v4, a2
    vsm.v v0, (a3)
      srli t1, t0, 3
      add a3, a3, t1
      bnez a0, vmsgtu_vx
      ret
