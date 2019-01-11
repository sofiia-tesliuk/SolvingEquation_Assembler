format ELF64

section '.text' executable
public solver as 'solver'
public start


solver:
    ;mov r8d, dword [rdi] ;rdi - a array
    ;mov r9d, dword [rsi] ; rsi - b array
    call main
    ret

main:
    jmp next_values
    jmp division
    jnz main
    ret

next_values:
    mov r8d, dword [rdi + 4*rcx]
    mov r9d, dword [rsi + 4*rcx]
    dec rcx

division:
    mov r10d, dword [r8d]
    add r10d, dword [r9d]
    mov [rdx + 4*rcx], r10d ; rdx - c array

start:



section '.data' writeable
