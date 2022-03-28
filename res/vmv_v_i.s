    .text
    .balign 4
    .global vmv_v_i
vmv_v_i:
    vsetvli t0, a0, e64, m1, ta, ma
    vmv.v.i v1, 1
    vse64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
      bnez a0, vmv_v_i
      ret
