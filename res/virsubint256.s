    .text
    .balign 4
    .global virsubint256
    # void virsubint256(size_t n, const int*x, int*y)
    # { for (size_t i=0; i<n; i++) { y[i]=0-x[i]; } }
    #
    # a0 = n, a1 = x, a2 = y
    # Non-vector instructions are indented
virsubint256:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vrsub.vi v1, v0, 0
    vse256.v v1, (a2)
      add a2, a2, t0
      bnez a0, virsubint256
      ret
