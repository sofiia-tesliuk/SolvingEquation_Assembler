format ELF64

section '.text' executable
public solver as 'solver'
public start


solver:
    jmp division


division:
    dec rcx ; decrease counter (n)

    fld dword [rsi + 4*rcx]  ; st(0), load number from b array and push it onto the fpu stack
    fld dword [rdi + 4*rcx]  ; st(0), load number from a array and push it onto the fpu stack

    fdivp      ; st(0) = st(1)/st(0), pop two numbers, divide them, push result on the stack
    fchs       ; st(0) = -st(0), changes sign of last value in stack
    fstp  dword [rdx + 4*rcx]

    jnz division

start:



section '.data' writeable
