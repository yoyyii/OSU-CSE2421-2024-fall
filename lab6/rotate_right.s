# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.
.file "rotate_right.s"
.global rotate_right
		.type rotate_right @function
.text
rotate_right:

# save caller's rbp
pushq %rbp

# set function's frame pointer
movq %rsp, %rbp

# copy the value of %edi (curr_hex) into another register
movl %edi, %eax

# shift %rdi 1 position to the right
sarl $1, %edi

# bitwise AND %rax and 1  (curr_hex AND last_digit)
# stores the result in %eax
andl $1, %eax

# shift the result 7 bits to the left
sall $7, %eax

# bitwise OR %eax and %edi
orl %edi, %eax

# return
leave
ret

.size rotate_right, .-rotate_right
