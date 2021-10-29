    .text
    .balign 4
    .global vxaddint256
    # void vxaddint256(size_t n, const int*x, const int y, int*z)
    # { for (size_t i=0; i<n; i++) { z[i]=x[i]+y; } }
    #
    # a0 = n, a1 = x, a2 = y, a3 = z
    # Non-vector instructions are indented
vxaddint256:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vadd.vx v1, v0, a2
    vse256.v v1, (a3)
      add a3, a3, t0
      bnez a0, vxaddint256
      ret
