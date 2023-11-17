section .data
    hello db "Hello, Holberton", 10 ; 10 is ASCII code for newline character

section .text
    global _start

_start:
    ; Prepare the arguments for printf
    mov     rdi, hello    ; Set the format string
    xor     rax, rax      ; Clear RAX for syscall number (printf uses syscall number 0)
    call    printf        ; Call printf function

    ; Exit the program
    mov     eax, 60       ; syscall number for exit
    xor     edi, edi      ; Exit status 0
    syscall               ; Perform syscall
