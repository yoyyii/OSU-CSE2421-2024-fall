# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.
.file "rotate_left"
.global rotate_left
		.type rotate_left @function
.text
rotate_left:

# save caller's rbp
pushq %rbp

# set function's frame pointer
movq %rsp, %rbp

# copy the value of %edi (curr_hex) into another register
movl %edi, %eax

# shift %edi 1 position to the left
sall $1, %edi

# bitwise AND %eax and 128  (curr_hex AND first_digit)
# stores the result in %eax
andl $128, %eax

# shift the result 7 bits to the right
shrl $7, %eax

# bitwise OR %eax and %edi
orl %edi, %eax

# return
leave
ret

.size rotate_left, .-rotate_left
