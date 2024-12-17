/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERISTY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/*prompt user to enter which option they want to do and call that specific function to perform the job*/
void options(Node** head, char* outFile, char* inputDate) {

	int option;

	float (*rArr[9])(Node*, int) = {totalRevenue, totalWholesaleCost, currentInvestment, totalProfit, totalSales, averageProfit, itemsInStock, itemsOutOfStock, getDepartment};
	void (*wArr[3])(Node**, char*, char*) = {addNewItem, deleteItem, outprintList};

	// repetively print out avaliable options and ask user what they want to do until they quit the program
	do {
		printOptions();

		printf("Option:\n");
		scanf("%d", &option);

		if (option < RARRLENGTH) {
			rArr[option - 1](*head, FLAG);
		} else {
			wArr[option - RARRLENGTH](head, outFile, inputDate);
		}

	} while(option != 12);

}
