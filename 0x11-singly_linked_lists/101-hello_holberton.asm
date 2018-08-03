section	.data
str:	db	"Hello Holberton",10

section	.text
global	main
main:
	push	rbp

	mov	rax, 1		;syscall for sys_write
	mov	rdi, 1		;..
	mov	rsi, str	;..
	mov	rdx, 16		;..
	syscall			;write(1, msg, 17);

	pop	rbp
	mov	rax, rdx
	ret
