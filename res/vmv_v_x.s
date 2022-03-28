    .text
    .balign 4
    .global vmv_v_x
vmv_v_x:
    vsetvli t0, a0, e64, m1, ta, ma
    vmv.v.x v1, a1
    vse64.v v1, (a2)
      sub a0, a0, t0
      slli t0, t0, 3
      add a2, a2, t0
      bnez a0, vmv_v_x
      ret
