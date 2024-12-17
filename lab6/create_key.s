# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.
.file "create_key.s"

.section .rodata
printf_askKey:
.string "Enter 4 digits key: "

.global create_key
	.type create_key @function
.text
create_key:

# setup stack frame
pushq %rbp
movq %rsp, %rbp

# no parameters
# return 8 bit key in rax

pushq %r12 # key

# set key to 0
movl $0, %r12d

# address of string "enter 4 digits key"
movq $printf_askKey, %rdi

# required value in %rax says in Linux System V ABI
movq $0, %rax

# ask user to input key
call printf

char1:
	# get user's input key a digit at a time
	call getchar

	# test whether getchar returns '1' character
	cmpl $49, %eax 
	jne char2

	# bitwise OR 1 with key if getchar returns 1
	orl $1, %r12d
	
char2:
	
	#shift 1 bit to the left
	sall $1, %r12d
	
	# get user's input key a digit at a time
	call getchar

	# test whether getchar returns '1' character
	cmpl $49, %eax 
	jne char3

	# bitwise OR 1 with key if getchar returns 1
	orl $1, %r12d

char3:

	#shift 1 bit to the left
	sall $1, %r12d
	
	# get user's input key a digit at a time
	call getchar

	# test whether getchar returns '1' character
	cmpl $49, %eax 
	jne char4

	# bitwise OR 1 with key if getchar returns 1
	orl $1, %r12d

char4:
	#shift 1 bit to the left
	sall $1, %r12d
	
	# get user's input key a digit at a time
	call getchar

	# test whether getchar returns '1' character
	cmpl $49, %eax 
	jne exit

	# bitwise OR 1 with key if getchar returns 1
	orl $1, %r12d
exit:

	# make a copy of key into retunred register
	movl %r12d, %eax

	# shift key 4 bits to the left
	sall $4, %r12d

	# bitwise OR key with returned register to exten 4 bits key to 8 bits
	orl %r12d, %eax

	# pop callee saved register back before return to caller function 
	popq %r12

#return
leave
ret

.size create_key, .-create_key
