/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// outprint the current list to the file user wish
void outprintList(Node** head, char* outFile, char* inputDate) {

    // open the file user entered
    //Node* curr = *head;
    FILE* file = fopen(outFile, "w");

    if (file != NULL) {

        // print today's day in the file
        int currentDate, currentMonth, currentYear;
	    sscanf(inputDate, "%d/%d/%d", &currentMonth, &currentDate, &currentYear);
       	int currentDay = getCurrentDay(currentMonth, currentDate, currentYear);

        fprintf(file, "%d\t%d\n", currentDay, currentYear);

        // traverse through the entire list and print each item in to the file

        while((*head) != NULL) {
            fprintf(file, "%s\t%s\t%d\t%.2f\t%.2f\t%d\t%d\n", (*head)->grocery_item.item, (*head)->grocery_item.department, (*head)->grocery_item.stockNumber, (*head)->grocery_item.pricing.retailPrice, (*head)->grocery_item.pricing.wholesalePrice, (*head)->grocery_item.pricing.retailQuantity, (*head)->grocery_item.pricing.wholesaleQuantity);
            (*head) = (*head)->next;
        }
	    
        // free the spaces we allocated for the list
        freeList(head);

    } else {
        // exit program if file failed to open
		printf("Can't open file %s", outFile);
		exit(EXIT_FAILURE);
	}

    if (fclose(file) != 0) {
        // exit program if file failed to close
		printf("Closing file %s failed\n", outFile);
		exit(EXIT_FAILURE);
	}
}
