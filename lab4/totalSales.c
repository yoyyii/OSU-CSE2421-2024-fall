/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERISTY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// total number of grocery items sold
float totalSales(Node* head, int print) {

    int sum = 0;
    Node* traverse = head;

    // total sales = sum of all item's retail quantity
	while (traverse != NULL) {
		sum += traverse->grocery_item.pricing.retailQuantity;
		traverse = traverse->next;
    }
	
    if (print) {
        printf("Total number of grocery items sold: %d\n", (int) sum);
    }

	return sum;
}
