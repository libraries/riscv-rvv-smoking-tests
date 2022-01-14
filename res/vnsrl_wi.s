    .text
    .balign 4
    .global vnsrl_wi
vnsrl_wi:
    vsetvli t0, a0, e128, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 4
      add a1, a1, t0
      add a1, a1, t0
    vnsrl.wi v2, v0, 0x17
    vse128.v v2, (a2)
      add a2, a2, t0
      bnez a0, vnsrl_wi
      ret
