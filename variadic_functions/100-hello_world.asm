; ----------------------------------------------------------------------
; 100-hello_world.asm
;
; This is the program that writes "Hello, World"
; ----------------------------------------------------------------------

global _start

section .text
	global main
main:
	mov eax, 0x4
	mov ebx, 0x1
	mov ecx, msg
	mov edx, msglen
	int 0x80
	
	mov eax, 0

;	mov eax, 0x1
;	mov ebx, 0x2
;	int 0x80

section .data
	msg: db "Hello, World", 0xA
	msglen equ $ -msg
