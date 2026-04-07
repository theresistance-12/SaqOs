MB_MAGIC    equ 0x1BADB002
MB_FLAGS    equ 1 << 0 | 1 << 1
MB_CHECKSUM equ -(MB_MAGIC + MB_FLAGS)

section .multiboot
    dd MB_MAGIC
    dd MB_FLAGS
    dd MB_CHECKSUM

section .text
extern saqker_main
global _start

_start:
    mov esp, stack_space
    call saqker_main

.halt:
    hlt
    jmp .halt

section .bss
resb 8192
stack_space: