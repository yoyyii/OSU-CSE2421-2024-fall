/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/*reads in data from the inventory*/
void readInventory(char* currentDate, char* inventoryInput, Node** head) {

	// open the inventory
	FILE *file = fopen(inventoryInput, "r");
	if (file != NULL) {

		int listLength;
		// process the day difference between user's input and date in inventory and build a new list
		processDate(file, currentDate, inventoryInput);
		listLength = buildNewList(head,file);
		
		printf("Reading inventory from file \"%s\"\nA total of %d grocery items were read into inventory from the file \"%s\"\n", inventoryInput, listLength, inventoryInput);
	} else {
		// exit program if file failed to open
		printf("Can't open file %s", inventoryInput);
		exit(EXIT_FAILURE);
	}

	if (fclose(file) != 0) {
		// exit program if file failed to close
		printf("Closing file %s failed\n", inventoryInput);
		exit(EXIT_FAILURE);
	}
}
