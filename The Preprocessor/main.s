	.file	"main.c"
	.text
	.section	.rodata
.LC0:
	.string	"called with : %s\n"
	.text
	.globl	Action_call
	.type	Action_call, @function
Action_call:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	Action_call, .-Action_call
	.section	.rodata
.LC1:
	.string	"cut with : %s\n"
	.text
	.globl	Action_cut
	.type	Action_cut, @function
Action_cut:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	Action_cut, .-Action_cut
	.section	.rodata
.LC2:
	.string	"copy with : %s\n"
	.text
	.globl	Action_copy
	.type	Action_copy, @function
Action_copy:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	Action_copy, .-Action_copy
	.section	.rodata
.LC3:
	.string	"paste with : %s\n"
	.text
	.globl	Action_paste
	.type	Action_paste, @function
Action_paste:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	Action_paste, .-Action_paste
	.section	.rodata
.LC4:
	.string	"ERROR"
.LC5:
	.string	"WARNING"
.LC6:
	.string	"\nLine : %d, WARNING : \n"
.LC7:
	.string	"MIN : %d\n"
.LC8:
	.string	"MAX : %d\n"
.LC9:
	.string	"Apr 15 2022"
.LC10:
	.string	"main.c"
	.align 8
.LC11:
	.string	"Program '%s' Sucessfully Compiled at %s!\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC4(%rip), %rdi
	call	Action_call
	leaq	.LC4(%rip), %rdi
	call	Action_copy
	leaq	.LC5(%rip), %rdi
	call	Action_paste
	leaq	.LC5(%rip), %rdi
	call	Action_cut
	movl	$57, %esi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdout(%rip), %rax
	movl	$4, %edx
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movl	$58, %esi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdout(%rip), %rax
	movl	$12, %edx
	leaq	.LC8(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	leaq	.LC9(%rip), %rdx
	leaq	.LC10(%rip), %rsi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
