/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT */

#include "lab4.h"

/* build a new linked list based on the information in the inventory*/
int buildNewList(Node** head, FILE* file) {
	Node* curr;
	curr = malloc (sizeof(Node));

	int listLength = 0;

	// read the information in inventory directly to curr node
	if (curr != 0) {
			while (fscanf(file, "%[^\t]\t%[^\t]\t%d\t%f\t%f\t%d\t%d\n", curr->grocery_item.item, curr->grocery_item.department, &curr->grocery_item.stockNumber, &curr->grocery_item.pricing.retailPrice, &curr->grocery_item.pricing.wholesalePrice, &curr->grocery_item.pricing.retailQuantity, &curr->grocery_item.pricing.wholesaleQuantity) != EOF) {
			listLength++;
			// insert the node in to correct order
			insert(head, curr);

			//printNode(curr);
			curr = malloc(sizeof(Node));
		}
	} else {
		printf("Allocate space failed\n");
		exit (EXIT_FAILURE);
	}
	

	// free the last node created before exiting while loop since we didn't actually used it
	free(curr);
	return listLength;
}
