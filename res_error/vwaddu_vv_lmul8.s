    .text
    .balign 4
    .global _start
_start:
    vsetvli t0, a0, e32, m8, ta, ma
    vle32.v v16, (a1)
    vle32.v v24, (a2)
    vwaddu.vv v0, v16, v24
    li a0, 0
    li a7, 93
    ecall
