    .text
    .balign 4
    .global vmerge_vim
vmerge_vim:
    vsetvli t0, a0, e64, m4, ta, ma
    vle64.v v4, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vsm.v v0, (a2)
      srli t1, t0, 3
      add a2, a2, t1
    vmerge.vim v12, v4, 1, v0
    vse64.v v12, (a3)
      slli t1, t0, 3
      add a3, a3, t1
      bnez a0, vmerge_vim
      ret
