/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/* ask user whether they want to continue process the inventory if there's a date difference*/
void continueProcess(FILE* file, int dayDifference, char* inventoryInput) {

	// ask user whether they want to continue the program 
	char  process;
	printf("There are %d days difference between the date entered and the date in the file. Do you wish to continue?\n ", dayDifference);
	scanf("%c", &process);

	// close the file and exit the program if they don't want to continue
	if(process == 'n' || process == 'N') {
		printf("not equals to yes. Quitting\n");
		if (fclose(file) != 0) {
			printf("Closing file %s failed\n", inventoryInput);
			exit(EXIT_FAILURE);
		}
		exit(1);
	}

}
