section .data
	hello db "Hello, Holberton",0
	fmt db "Hello, %s",10,0 ; Use 10 (newline character) here

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
	
