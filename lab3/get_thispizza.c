/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/* get what ingredients customer want to have on their pizza.*/
int get_thispizza (char**** thispizza, char** ingredients, int ingredientsNum) {

	// welcome customers and let them know what are today's ingredients
	printf("\nWelcome to our Pizza ordering System!\nToday we have the following fresh ingredients avaliable:\n");
	print_ingredients(ingredientsNum, ingredients);

	// get what ingredients customer want on their pizza
	int orderNum;
	printf("\nOf our %d avaliable ingredients, how many do you plan to put on your pizza? ", ingredientsNum);
	scanf("%d", &orderNum);
	*thispizza = (char***)malloc(orderNum * sizeof(char**));

	if(*thispizza != 0) {
		get_customer_ingredients(orderNum, *thispizza, ingredients);
	} else {
		printf("allocation for thispizza failed");
	}

	return orderNum;

}
