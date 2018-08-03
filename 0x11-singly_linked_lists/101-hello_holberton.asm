section	.data
str:	db	"Hello, Holberton", 10

section	.text
global	main
main:
	push	rbp

	mov	rax, 1		;syscall for sys_write
	mov	rdi, 1		;..
	mov	rsi, str	;..
	mov	rdx, 17		;..
	syscall			;write(1, str, 17);

	pop	rbp
	mov	rax, 0
	ret
