section .data
    msg db "Hello, Holberton!", 0
    fmt db "%s\n", 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [msg]
    lea rsi, [fmt]
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
