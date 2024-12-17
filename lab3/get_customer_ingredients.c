/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/*ask customer to input what ingredients they want, then store this information into an array.*/
void get_customer_ingredients(int orderNum, char*** thispizza, char** ingredients) {

	printf("\nEnter the number next to each ingredient you want on your pizza:\n");

	// map customer's choice of ingredients from ingredients array to thispizza array so customer get their pizza ingredients choice
	for(int i = 0; i < orderNum; i++) {
		int ingredientsChoice;
		scanf("%d", &ingredientsChoice);
		*(thispizza + i) = (ingredients + ingredientsChoice - 1);
	}

	printf("\nThe ingredients on your pizza will be:\n");
}
