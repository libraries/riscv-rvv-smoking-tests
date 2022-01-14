    .text
    .balign 4
    .global vnsrl_wv
vnsrl_wv:
    vsetvli t0, a0, e128, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 4
      add a1, a1, t0
      add a1, a1, t0
    vle128.v v2, (a2)
      add a2, a2, t0
    vnsrl.wv v3, v0, v2
    vse128.v v3, (a3)
      add a3, a3, t0
      bnez a0, vnsrl_wv
      ret
