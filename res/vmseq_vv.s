    .text
    .balign 4
    .global vmseq_vv
vmseq_vv:
    vsetvli t0, a0, e64, m4, ta, ma
    vle64.v v4, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vle64.v v8, (a2)
      add a2, a2, t1
    vmseq.vv v0, v4, v8
    vsm.v v0, (a3)
      srli t1, t0, 3
      add a3, a3, t1
      bnez a0, vmseq_vv
      ret
