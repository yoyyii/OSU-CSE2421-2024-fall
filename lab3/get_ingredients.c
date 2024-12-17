/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/* Get the ingredients of the day inputting from employee.*/
int get_ingredients(char*** ingredients) {
	
	// get the number of ingredients is avaliable today
	int ingredientsNum;
	printf("How many avaliable pizza ingredients do we have today?\n");
	scanf("%d", &ingredientsNum);

	// get what each ingredients are
	*ingredients = (char**) malloc(ingredientsNum * sizeof(char*));
	if (ingredients != 0) {

		get_item(ingredientsNum, *ingredients);
	} else {
		printf("Allocation for ingredients array failed");
		exit(EXIT_FAILURE);
	}

	return ingredientsNum;
}
