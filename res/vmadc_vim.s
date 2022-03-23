    .text
    .balign 4
    .global vmadc_vim
vmadc_vim:
    vsetvli t0, a0, e32, m2, ta, ma
    vle32.v v2, (a1)
      sub a0, a0, t0
      slli t1, t0, 2
      add a1, a1, t1
    vlm.v v0, (a2)
      srli t1, t0, 3
      add a2, a2, t1
    vmadc.vim v4, v2, 15, v0
    vsm.v v4, (a3)
      add a3, a3, t1
      bnez a0, vmadc_vim
      ret
