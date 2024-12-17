/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/*print the data stroes in the node being passed*/
void printNode(Node* print) {

	// print out data in the node
	printf("%d\t", print->grocery_item.stockNumber);
	printf("%8d\t", ((print->grocery_item.pricing.wholesaleQuantity) - (print->grocery_item.pricing.retailQuantity)));
	printf("%-20s\t", print->grocery_item.department);
	printf("%s\n", print->grocery_item.item);
}
