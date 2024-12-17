# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFIED THAT I HAVVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT

.file "main.s"

.section .rodata
main_p1:
.string "Usage: %s filename count\n"

main_p2:
.string "r"

.global main
		.type main @function
.text
main:

# save caller's rbp
pushq %rbp

# set function's frame pointer
movq %rsp, %rbp

# argc in %edi
# argv in %rsi

# save all called saved register

pushq %r12
pushq %r13
pushq %r14
pushq %r15

# copy argv to %r15
movq %rsi, %r15

# test whether argc is 3
ifArgcNot3:

	cmpl $3, %edi

	# jump if argc is 3
	je argcIs3

	# followings are what's inside the if statement
	
		# address of string p1
		movq $main_p1, %rdi

		# put address of argv[0] in %rsi
		movq (%rsi), %rsi	

		# required value in %rax says in Linux System V ABI
		movq $0, %rax

		# print out message
		call printf

		jmp exit_success

# skip over if statement
argcIs3:

# get count from argv[2]
# int count = atoi(argv[2])
getCount:

	# find the address of argv[2]
	leaq 16(%r15), %r11

	# move the value of argv[2] into %edi
	movq (%r11), %rdi

	# convert argv[2] from string to int
	call atoi

	# count is now in %eax, move it to another register (%r14)
	movl %eax, %r14d

# create structure array
# struct Record R_values[count]
creatArr:

	# calculate the alignment & total size of each Record element
	# int(4) + int(4) + long(8) +int(4) + long(8) + int(4) + long(8) = 48 bytes
	# calculate the total chunk of space needed of entire array
	# 48 bytes * count
	imulq $48, %rax

	# allocate space
	subq %rax, %rsp

	# using %rax as base register for array
	leaq (%rsp), %rax 

	# store R_value in another register
	movq %rax, %r13

	# best practice
	movq $0, (%r13)	

# get file pointer
# FILE *fp = fopen(argv[1], "r")
filePointer:
	
	# calculate the address of argv[1]
	leaq 8(%r15), %r11

	# move address of argv[1] into %rdi
	movq (%r11), %rdi

	# put "r" into %rsi
	movq $main_p2, %rsi

	# open file and get file pointer in %rax
	call fopen

	# store fp in %r12
	movq %rax, %r12

# call readlines
call_readlines:
	
	# push fp into %rdi
	movq %r12, %rdi

	# push R_values into %rsi
	movq %r13, %rsi	

	# push count into %edx
	movl %r14d, %edx

	# call readlines
	call readlines

# call fclose(fp)
call_fclose:
	
	# push fp in to %rdi
	movq %r12, %rdi

	# call fclose
	call fclose

# call compute
call_compute:
	
	# push R_value into %rdi
	movq %r13, %rdi

	# push count into %esi
	movl %r14d, %esi

	# call compute
	call compute

# call printlines
call_printlines:

	# move R_values in %rdi
	movq %r13, %rdi

	# move count in %esi
	movl %r14d, %esi

	# call printlines
	call printlines

# return
exit_success:

	# pop all callee saved register
	popq %r15
	popq %r14
	popq %r13
	popq %r12

	# EXIT_SUCCESS evaluate to 0 according to manuel
	# put the return value into %eax before return
	movl $0, %eax

	leave 
	ret

.size main, .-main

