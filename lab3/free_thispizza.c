/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TNEURES OF THE OHIO STAE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/* free memory borrowed for ingredients and set ingredients to null*/
void free_thispizza(char*** thispizza) {

	// loop through entire ingredients array to make sure every indecies are free
	if(thispizza != NULL) {
		free(thispizza);
	}
	thispizza = NULL;
}
