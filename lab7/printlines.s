# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFIED THAT I HAVVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT

.file "printlines.s"
.section .rodata

pl_p1:
.string "Results for entry %d:\n"

pl_p2:
.string "(%d) + (%d) = (%ld)\n"

pl_p3:
.string "(%d) - (%d) = (%ld)\n"

pl_p4:
.string "(%d) * (%d) = (%ld)\n"

pl_p5:
.string "(%d) / (%d) = (%d), (%d)\n"

.global printlines
		.type printlines @function
.text
printlines:

# save caller's rbp
pushq %rbp

# set function's frame pointer
movq %rsp, %rbp

# push calle saved registers that I need later
pushq %r12
pushq %r13
pushq %r14
pushq %r15

# move parameters in to other register
movq %rdi, %r14
movl %esi, %r15d

# int i = 1
# put i in %r11d
movl $1, %r11d

# while loop
printlines_while:

	# condition: count > 0
	cmp $0, %r15d
	je exit

	# saved %r11 since it's in caller saved register
	pushq %r11

	# value 1 is 4 bytes pass
	# put value1 in %r13d
	movl 4(%r14), %r13d

	# value 2 is 0 bytes pass
	# put value2 in %r12d
	movl (%r14), %r12d 

	# first printf (print Results...)

		# move first parameters (Resulut...)
		movq $pl_p1, %rdi

		# move second parameters (i)
		movl %r11d, %esi

		# required value in %rax says in Linux System V ABI
		movq $0, %rax

		# print out message
		call printf	

		# increment i
		incl %r11d

	# second printf (print sum)

		# move first parameters (formatter)
		movq $pl_p2, %rdi

		# move second parameters (value1)
		movl %r13d, %esi

		# move third parameters (value2)
		movl %r12d, %edx

		# move fourth parameters (sum)
		# sum is 24 bytes pass structure pointer
		movq 24(%r14), %rcx

		# required value in %rax says in Linux System V ABI
		movq $0, %rax

		# print out message
		call printf
	
	# third printf (print difference)

		# move first parameters (formatter)
		movq $pl_p3, %rdi

		# move second parameters (value1)
		movl %r13d, %esi

		# move third parameters (value2)
		movl %r12d, %edx

		# move fourth parameters (difference)
		# difference is 8 bytes pass structure pointer
		movq 8(%r14), %rcx

		# required value in %rax says in Linux System V ABI
		movq $0, %rax

		# print out message
		call printf	

	# fourth printf (print product)

		# move first parameters (formatter)
		movq $pl_p4, %rdi

		# move second parameters (value1)
		movl %r13d, %esi

		# move third parameters (value2)
		movl %r12d, %edx

		# move fourth parameters (product)
		# product is 40 bytes pass structure pointer
		movq 40(%r14), %rcx

		# required value in %rax says in Linux System V ABI
		movq $0, %rax

		# print out message
		call printf

	# fifth printf (print quotient)

		# move first parameters (formatter)
		movq $pl_p5, %rdi

		# move second parameters (value1)
		movl %r13d, %esi

		# move third parameters (value2)
		movl %r12d, %edx

		# move fourth parameters (quotient)
		# quotient is 16 bytes pass structure pointer
		movq 16(%r14), %rcx

		# move fifth parameters (remainder)
		# remainder is 32 bytes pass structure pointer
		movq 32(%r14), %r8

		# required value in %rax says in Linux System V ABI
		movq $0, %rax

		# print out message
		call printf

	# ++ Record pointer
	leaq 48(%r14), %r14

	# --count
	decl %r15d 

	# popped %r11 back out so I could use it for next iteration
	popq %r11

	# increment %r11
	incl %r11d

	# back to start of the loop
	jmp printlines_while

# return
exit:
	# pop parameters back before return
	popq %r15
	popq %r14
	popq %r13
	popq %r12

	leave 
	ret

.size printlines, .-printlines
