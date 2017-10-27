    section .data
fmt     db "%s %s",10,0
msg1    db "Hello,",0
msg2    db "Holberton",0

    section .text
    extern printf
    global main

main:
    mov  edx, msg2
    mov  esi, msg1
    mov  edi,fmt
    mov  eax, 0     ; no f.p. args
    call printf

    mov  ebx, 0     ; return value
    mov  eax, 0
    int  0x80
