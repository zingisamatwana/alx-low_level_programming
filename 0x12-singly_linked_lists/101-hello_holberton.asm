section .data
	hello db "Hello, Holberton",0
	fmt db "Hello, %s\n",0 ; Added newline character '\n'

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, fmt
	mov rsi, hello
	call printf
	pop rbp
	ret
