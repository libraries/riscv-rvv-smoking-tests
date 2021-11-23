    .text
    .balign 4
    .global vremu_vv_512
vremu_vv_512:
    vsetvli t0, a0, e512, m1, ta, ma
    vle512.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 6
      add a1, a1, t0
    vle512.v v1, (a2)
      add a2, a2, t0
    vremu.vv v2, v0, v1
    vse512.v v2, (a3)
      add a3, a3, t0
      bnez a0, vremu_vv_512
      ret
