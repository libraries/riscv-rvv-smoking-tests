    .text
    .balign 4
    .global vnsra_wi
vnsra_wi:
    vsetvli t0, a0, e32, m1, ta, ma
    vle64.v v2, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
      add a1, a1, t0
    vnsra.wi v4, v2, 0x17
    vse32.v v4, (a2)
      add a2, a2, t0
      bnez a0, vnsra_wi
      ret
