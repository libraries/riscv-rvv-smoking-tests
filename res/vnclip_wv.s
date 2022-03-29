    .text
    .balign 4
    .global vnclip_wv
vnclip_wv:
    vsetvli t0, a0, e32, m1, ta, ma
    vle64.v v2, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vle32.v v4, (a2)
      slli t1, t0, 2
      add a2, a2, t1
    vnclip.wv v6, v2, v4
    vse32.v v6, (a3)
      slli t1, t0, 2
      add a3, a3, t1
      bnez a0, vnclip_wv
      ret
