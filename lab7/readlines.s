# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFIED THAT I HAVVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT

.file "readlines.s"
.section .rodata
rl_p1:
.string "%d %d"

.global readlines
		.type readlines @function
.text
readlines:

# save caller's rbp
pushq %rbp

# set function's frame pointer
movq %rsp, %rbp

# push calle saved registers that I need later
pushq %r13
pushq %r14
pushq %r15

# push %r12 so stack is 16 bytes aligned and fscanf will be happy
pushq %r12

# move parameters in to other register

movq %rdi, %r13
movq %rsi, %r14
movl %edx, %r15d

# while loop
readlines_while:

	# condition: count > 0
	cmp $0, %r15d 
	je exit

	# fscanf
	
		# move fp to rdi
		movq %r13, %rdi

		movq $0, %rax # please work, delete it if not
		# move formater to %rsi
		movq $rl_p1, %rsi

		# move the address of value1 into %rdx
		leaq 4(%r14), %rdx  # maybe change back to leaq

		# move the address of values2 into %rcx
		leaq (%r14), %rcx # maybe change back to leaq

		# call fscanf
		call fscanf

	# ++ Record pointer
	addq $48, %r14

	# --count
	decl %r15d  

	# back to start of the loop
	jmp readlines_while

# return
exit:

	# pop parameters back before return
	popq %r12
	popq %r15
	popq %r14
	popq %r13
	
	leave 
	ret

.size readlines, .-readlines
