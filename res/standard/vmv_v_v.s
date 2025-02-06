    .text
    .balign 4
    .global vmv_v_v
vmv_v_v:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vmv.v.v v2, v1
    vse64.v v2, (a2)
      add a2, a2, t0
      bnez a0, vmv_v_v
      ret
