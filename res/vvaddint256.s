    .text
    .balign 4
    .global vvaddint256
vvaddint256:
    # vsetvli t0, a0, e256, m1, ta, ma
    .byte 0xd7, 0x72, 0x85, 0x0e
    # vle256.v v0, (a1)
    .byte 0x07, 0x90, 0x05, 0x12
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    # vle256.v v1, (a2)
    .byte 0x87, 0x10, 0x06, 0x12
      add a2, a2, t0
    vadd.vv v2, v0, v1
    # vse256.v v2, (a3)
    .byte 0x27, 0x91, 0x06, 0x12
      add a3, a3, t0
      bnez a0, vvaddint256
      ret
