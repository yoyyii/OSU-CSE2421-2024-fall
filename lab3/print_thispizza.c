/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/*outprint all ingredients customer chose to put on their pizza*/
void print_thispizza(int orderNum, char*** thispizza) {

	// loop through the array to outprint thispizza
	for(int i = 0; i < orderNum; i++) {
		printf("%d. %s\n", (i + 1), *(*(thispizza + i)));
	}
}
