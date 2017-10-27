    section .data
fmt     db "Hello, Holberton",10,0

    section .text
    extern printf
    global main

main:
    mov  edi,fmt
    mov  eax, 0     ; no f.p. args
    call printf

    mov  ebx, 0     ; return value
    mov  eax, 0
    xor eax,eax
    ret
