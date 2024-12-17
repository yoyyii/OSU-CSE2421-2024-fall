/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab3.h"

/* ask customer whether they want to save today's info and save it to a local file if customer chose to.*/
void save_info(char** ingredients, int ingredientsNum, char*** thispizza, int orderNum) {

	// ask customer whether they want to save their order
	int save;
	printf("\nDo you want to save them? (1=yes, 2=no):\n");
	scanf("%d", &save);

	// save the file if customer chose to
	if(save != 2) {
		char fileName[256];
		printf("What file name do you want to use?");
		scanf("%s", fileName);
		print_file(ingredients, ingredientsNum, thispizza, orderNum, fileName);
		printf("\nToday's avaliable ingredients and what was ordered for this pizza have been saved to the file %s", fileName);
	}
}
