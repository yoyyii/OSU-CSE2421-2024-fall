/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TNEURES OF THE OHIO STAE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/* free all the memory borrowed from calling malloc()*/
void free_dmem(char** ingredients, char*** thispizza, int ingredientsNum) {
	
	// free memory borrowed for ingredients and set ingredients to null
	free_ingredients(ingredients, ingredientsNum);

	// free memory borrowed for thispizza and set thispizza to null
	free_thispizza(thispizza);
}
