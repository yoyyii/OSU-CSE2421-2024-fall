# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFIED THAT I HAVVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT

.file "compute.s"

.global compute
		.type compute @function
.text
compute:

# save caller's rbp
pushq %rbp

# set function's frams pointer
movq %rsp, %rbp

# while loop
compute_while:

	# condition: count > 0
	cmp $0, %esi
	je exit

	# sign extend value1 from int to long
	# value 1 is 4 bytes pass
	# put value1 in %r11
	movl 4(%rdi), %r11d
	movslq %r11d, %r11

	# sign extend value2 from int to long
	# value 2 is 0 bytes pass
	# put value2 in %r10
	movl (%rdi), %r10d 
	movslq %r10d, %r10

	# calculate sum (24 bytes pass)

		# move value 1 into %r9
		movq %r11, %r9

		# value1 + value 2
		addq %r10, %r9

		# calculate memory address of sum variable in structure
		# sum is 24 bytes pass
		# move sum of the two into sum variable in structure
		movq %r9, 24(%rdi)

	# calculate difference (0 byte pass)

		# move value 1 into %r9
		movq %r11, %r9

		# value1 - value 2
		subq %r10, %r9

		# calculate memory address of difference variable in structure
		# difference is 8 bytes pass
		# move difference of the two into difference variable in structure
		movq %r9, 8(%rdi)

	# calculate product (40 byte pass)

		# move value 1 into %r9
		movq %r11, %r9

		# value1 * value2
		imulq %r10, %r9

		# calculate memory address of product variable in structure
		# product is 40 bytes pass
		# move product of the two into product variable in structure
		movq %r9, 40(%rdi)

	# calculate quotient (40 byte pass)

		# put value 1 in %r9d
		movl %r11d, %r9d 

		# move r10d into eax
		movl %r9d, %eax

		# sign extend
		cdq

		# value 1 is now sign extended into (edx;eax)

		# value1 / value2
		idivl %r10d

		# my quotient should be in %eax
		# remainder in %edx

		# calculate memory address of quotient variable in structure
		# quotient is 16 bytes pass
		# move quotient of the two into quotient variable in structure
		movl %eax, 16(%rdi)

		# calculate memory address of remainder variable in structure
		# remainder is 32 bytes pass
		movl %edx, 32(%rdi)

	# ++ Record pointer
	leaq 48(%rdi), %rdi

	# -- count
	decl %esi

	# back to start of the loop
	jmp compute_while

# return
exit:
	leave 
	ret

.size compute, .-compute
