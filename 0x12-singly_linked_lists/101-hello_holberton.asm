section .data
format db 'Hello, Holberton', 0

section .text
global main
extern printf

main:
mov edi, format 	; Move the address of the format string into EDI register
xor eax, eax	 ;Clear EAX register (necessary for some calling conventions)
call printf		 ;Call the printf function
mov eax, 0		;Set the return value of the main function to 0 (success)
ret	 ;Return from the main function

