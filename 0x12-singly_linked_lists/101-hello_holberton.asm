extern printf

section .text
   global main

main:
   push rbp

   move rdi,fmt
   move rsi,msg
   move rax,0
   call printf

    pop rbp

    mov rax,0
    ret

section .data
   msg: db "Hello, Hoberton", 0
   fmt: db "%s", 10, 0


