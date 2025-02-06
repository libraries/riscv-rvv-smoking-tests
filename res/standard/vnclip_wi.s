    .text
    .balign 4
    .global vnclip_wi
vnclip_wi:
    vsetvli t0, a0, e32, m1, ta, ma
    vle64.v v2, (a1)
      sub a0, a0, t0
      slli t1, t0, 3
      add a1, a1, t1
    vnclip.wi v4, v2, 15
    vse32.v v4, (a2)
      slli t1, t0, 2
      add a2, a2, t1
      bnez a0, vnclip_wi
      ret
