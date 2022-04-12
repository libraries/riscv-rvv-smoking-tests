    .text
    .balign 4
    .global _start
_start:
    vsetvli t0, a0, e32, m8, ta, ma
    vle64.v v0, (a1)
    li a0, 0
    li a7, 93
    ecall
