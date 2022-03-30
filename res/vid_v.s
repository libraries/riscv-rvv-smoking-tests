    .text
    .balign 4
    .global vid_v
vid_v:
    vsetvli t0, a0, e8, m1, ta, ma
    vmv.s.x v0, a1
    vid.v v1, v0.t
    vse8.v v1, (a2)
    ret
