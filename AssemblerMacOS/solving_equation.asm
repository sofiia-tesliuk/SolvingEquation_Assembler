format ELF64

section '.text' executable
public solving_equation as 'solving_equation'
public start



solving_equation:
    add rdi, rsi
    mov rdx, rdi
    ret

start:



section '.data' writeable
