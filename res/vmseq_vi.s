    .text
    .balign 4
    .global vmseq_vi
vmseq_vi:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vmseq.vi v1, v0, 1
    vsetivli t0, 1, e8, m1, ta, ma
    vse256.v v1, (a2)
      addi a2, a2, 1
      bnez a0, vmseq_vi
      ret
