section .data
buf times 100 db 0

section .text

global _ft_cat
extern _read

_ft_cat:
	enter 0, 0
	push r12
	push r13
	cmp edi, 0
	jl exit
	mov r12, rdi
	
loop:
	mov rdi, r12
	mov rsi, buf
	mov rdx, 99
	mov rax, 0x2000003
	syscall
	jc exit
	cmp rax, 0
	je exit
	mov rdi, 1
	mov rsi, buf
	mov rdx, rax
	mov rax, 0x2000004
	syscall
	jmp loop
exit:
	pop r13
	pop r12
	leave
	ret
	
	