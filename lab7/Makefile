# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT

# Author: Yoyi Liao

gcc_Copt = -std=c99 -pedantic -g -Wimplicit-function-declaration -Wreturn-type -Wformat -c
gcc_Sopt = -lc -m64 -c -g
all: lab7.zip readrec

lab7.zip: Makefile lab7Readme main.s readlines.s compute.s printlines.s
	zip lab7.zip Makefile lab7Readme main.s readlines.s compute.s printlines.s

readrec: main.o readlines.o compute.o printlines.o
	gcc main.o readlines.o compute.o printlines.o -o readrec 

main.o: main.s
	gcc $(gcc_Sopt) main.s

readlines.o: readlines.s
	gcc $(gcc_Sopt) readlines.s

compute.o: compute.s
	gcc $(gcc_Sopt) compute.s

printlines.o: printlines.s
	gcc $(gcc_Sopt) printlines.s

clean:
	rm -rf *.o readrec lab7.zip

test:
	./verify
