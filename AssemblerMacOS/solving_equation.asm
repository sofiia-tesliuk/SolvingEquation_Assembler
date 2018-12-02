format ELF64

section '.text' executable
public solving_equation as 'solving_equation'
public test_op as 'test_op'
public start


test_op:
    add esi, edi
    mov edi, eax
    ret

solving_equation:
    mov r8, rdx
    mov rdx, 0
    mov rax, [rdi]
    mov rcx, [rsi]
    div rcx
    mov [r8], rax

start:



section '.data' writeable
