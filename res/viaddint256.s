    .text
    .balign 4
    .global viaddint256
    # void viaddint256(size_t n, const int*x, int*y)
    # { for (size_t i=0; i<n; i++) { y[i]=x[i]-1; } }
    #
    # a0 = n, a1 = x, a2 = y
    # Non-vector instructions are indented
viaddint256:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vadd.vi v1, v0, 1
    vse256.v v1, (a2)
      add a2, a2, t0
      bnez a0, viaddint256
      ret
