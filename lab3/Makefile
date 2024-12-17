# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT

# Author: Yoyi Liao

gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# all targets currently defined in this file
all: lab3.zip lab3

# .zip file submitted to Carmen
lab3.zip: Makefile LAB3README lab3main.c get_ingredients.c get_item.c get_thispizza.c save_info.c free_dmem.c lab3.h print_ingredients.c get_customer_ingredients.c print_file.c free_ingredients.c free_thispizza.c print_thispizza.c
	 zip lab3.zip Makefile LAB3README lab3main.c get_ingredients.c get_item.c get_thispizza.c save_info.c free_dmem.c lab3.h print_ingredients.c get_customer_ingredients.c print_file.c free_ingredients.c free_thispizza.c print_thispizza.c

# binary converter executable
lab3: lab3main.o get_ingredients.o get_item.o get_thispizza.o save_info.o free_dmem.o lab3.h print_ingredients.o get_customer_ingredients.o print_file.o free_ingredients.o free_thispizza.o print_thispizza.o
	gcc lab3main.o get_ingredients.o get_item.o get_thispizza.o save_info.o free_dmem.o print_ingredients.o get_customer_ingredients.o print_file.o free_ingredients.o free_thispizza.o print_thispizza.o -o lab3

# execute if lab3main changed
lab3main.o: lab3main.c lab3.h
	gcc $(gcc_opt) lab3main.c

# execute if get_ingredients change
get_ingredients.o: get_ingredients.c lab3.h
	gcc $(gcc_opt) get_ingredients.c

# execute if get_thispizza change
get_thispizza.o: get_thispizza.c lab3.h
	gcc $(gcc_opt) get_thispizza.c

# execute if save_info change
save_info.o: save_info.c lab3.h
	gcc $(gcc_opt) save_info.c

# execute if free_dmem change
free_dmem.o: free_dmem.c lab3.h
	gcc $(gcc_opt) free_dmem.c

# execute if print_ingredients change
print_ingredients.o: print_ingredients.c lab3.h
	gcc $(gcc_opt) print_ingredients.c

# execute if get_item change
get_item.o: get_item.c lab3.h
	gcc $(gcc_opt) get_item.c

# execute if get_customer_ingredients change
get_customer_ingredients.o: get_customer_ingredients.c lab3.h
	gcc $(gcc_opt) get_customer_ingredients.c

# execute if print_file change
print_file.o: print_file.c lab3.h
	gcc $(gcc_opt) print_file.c
# execute if free_ingredients change
free_ingredients.o: free_ingredients.c lab3.h
	gcc $(gcc_opt) free_ingredients.c

# execute if free_thispizza change
free_thispizza.o: free_thispizza.c lab3.h
	gcc $(gcc_opt) free_thispizza.c

# execute if print_thispizza change
print_thispizza.o: print_thispizza.c lab3.h
	gcc $(gcc_opt) print_thispizza.c

# clean
clean:
	rm -rf *.o lab3 lab3.zip

test:
	./verify
