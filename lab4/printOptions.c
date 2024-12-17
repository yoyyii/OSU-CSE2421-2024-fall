/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERISTY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/*prompt user to enter which option they want to do*/
void printOptions() {

	/*Since there are more than one line of options, I'm printing each options out one by one. I could've done that in a single printf statement, but it'll just be terrible for everyone. I have talked with professor Jones about it and she said to count this as one line and leave a comment. So, please count the following print statements for options as 1 line. Thank you.*/
	printf("\nPlease enter an integer between 1 and 12:\n");
	printf("1) Print Total Revenue\n");
	printf("2) Print Total Wholesale Cose\n");
	printf("3) Print Current Grocery Item Investment\n");
	printf("4) Print Current Profit\n");
	printf("5) Print Total Number of Grocery Items Sold\n");
	printf("6) Print Average Profit per Grocery Item\n");
	printf("7) Print Grocery Items In Stock\n");
	printf("8) Print Out of Stock Grocery Items\n");
	printf("9) Print Grocery Items for a Department\n");
	printf("10) Add Grocery Item to Inventory\n");
	printf("11) Delete Grocery Item from Inventory\n");
	printf("12) Exit Program\n\n");
}
