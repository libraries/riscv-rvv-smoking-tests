    .text
    .balign 4
    .global vmulh_vx
vmulh_vx:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vmulh.vx v2, v1, a2
    vse256.v v2, (a3)
      add a3, a3, t0
      bnez a0, vmulh_vx
      ret
