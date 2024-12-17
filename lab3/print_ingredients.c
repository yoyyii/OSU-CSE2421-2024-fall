/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/*outprint all the ingredients stores in the array.*/
void print_ingredients(int ingredientsNum, char** ingredients) {
		
	// loop through the entire array to outprint all the ingredients
	for(int i = 0; i < ingredientsNum; i++) {
		printf("%d. %s\n", (i + 1), *(ingredients + i));
	}
}
