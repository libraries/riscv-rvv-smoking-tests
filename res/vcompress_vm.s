    .text
    .balign 4
    .global vcompress_vm
vcompress_vm:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v1, (a1)
    vle32.v v2, (a3)
    vmv.s.x v0, a2
    vcompress.vm v2, v1, v0
    vse32.v v2, (a3)
    ret
