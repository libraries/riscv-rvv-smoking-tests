    .text
    .balign 4
    .global vrgatherei16_vv
vrgatherei16_vv:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v1, (a1)
      sub a0, a0, t0
      slli t1, t0, 2
      add a1, a1, t1
    vle16.v v2, (a2)
      slli t1, t0, 1
      add a2, a2, t1
    vrgatherei16.vv v3, v1, v2
    vse32.v v3, (a3)
      slli t1, t0, 2
      add a3, a3, t1
      bnez a0, vrgatherei16_vv
      ret
