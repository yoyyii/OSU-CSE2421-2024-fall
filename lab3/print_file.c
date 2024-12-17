/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIBERRSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/*save today's ingredients and customer's order into a local file.*/
void print_file(char** ingredients, int ingredientsNum, char*** thispizza, int orderNum, char* fileName) {

	FILE* file = fopen(fileName, "w");

	if (file != NULL) {
		// write today's ingredient to the file
		fprintf(file, "Avaliable Pizza Ingredients today:\n");
		for(int i = 0; i < ingredientsNum; i++) {
			fprintf(file, "%d. %s\n", (i+1), *(ingredients + i));
		}	

		// write customer's order to the file
		fprintf(file, "\n\nIngredients on This Pizza are:\n");
		for(int i = 0; i < orderNum; i++) {
			fprintf(file, "%d. %s\n", (i+1), *(*(thispizza + i)));
		}
	} else {
		printf("Can't open file %s", fileName);
		exit(EXIT_FAILURE);	
	}

	if(fclose(file) != 0) {
		printf("fclose failed\n");
		exit(EXIT_FAILURE);
	}
}
