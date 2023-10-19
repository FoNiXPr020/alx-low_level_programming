section .data
	holberton db "Hello, Holberton", 10, 0
	format db "%s", 0

section .text
	global main
	extern printf

main:
    push rbp
    mov rbp, rsp

	mov rdi, format
	mov rsi, holberton
	call printf

    pop rbp
	mov rax, 60
	xor rdi, rdi
	syscall
