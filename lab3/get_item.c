/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/* ask employee to inputting in the ingredients of the day and store it in an array.*/
void get_item(int ingredientsNum, char** ingredients) {

	printf("Enter the %d ingredients one to a line:\n", ingredientsNum);
	
	// add each ingredients into the array
	for(int i = 0; i < ingredientsNum; i++) {
		*(ingredients + i) = (char*)malloc(61 * sizeof(char));

		if(*(ingredients + i) != 0) {
			scanf(" %[^\n]", *(ingredients + i));
		} else {
			printf("Allocation for ingredient items failed");
			exit(EXIT_FAILURE);		
		}	
	}
	printf("\nAvliable ingredients today are:\n");			
}
