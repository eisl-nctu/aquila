	.file	"boot.c"
	.option nopic
	.text
	.align	2
	.globl	boot
	.type	boot, @function
boot:
 #APP
# 20 "boot.c" 1
	lui sp, %hi(__stack_top)
# 0 "" 2
 #NO_APP
	tail	main
	.size	boot, .-boot
	.ident	"GCC: (GNU) 8.2.0"
