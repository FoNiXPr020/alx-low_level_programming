global main
extern printf

	section .text
main:
	push rbp
	mov rdi, format
	mov rsi, hello
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret
hello: db "Hello, Holberton", 0
format:	db "%s", 10, 0
