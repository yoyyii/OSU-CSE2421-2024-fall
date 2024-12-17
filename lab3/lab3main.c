/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

// Author: Yoyi Liao

#include "lab3.h"

/* The program will build an array of the pizza shop's ingredients of the day inputting by employee. Customers will then be able to build their own pizza by choosing what ingredients they want to include based on today's avaliable ingredients. Customer's pizza will be store in a separate array and can choose whether to save the ordering to a local file or not*/
int main() {

	// declared variables that will be used 
	char** ingredients;
	char*** thispizza;
	
	// get the ingredients of the day and print it out
	int ingredientsNum = get_ingredients(&ingredients);
	print_ingredients(ingredientsNum, ingredients);

	// get the ingredients customer wants and print it out
	int orderNum = get_thispizza(&thispizza, ingredients, ingredientsNum);
	print_thispizza(orderNum, thispizza);

	// ask the customer whether they want to save the ordering info or not
	save_info(ingredients, ingredientsNum, thispizza, orderNum);

	// free memory
	free_dmem(ingredients, thispizza, ingredientsNum);
	
	return 0;
}
