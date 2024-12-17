/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// sum for all grocery items sold
float totalRevenue(Node* head, int print) {
	
	float sum = 0;
    Node* traverse = head;

	// total revenue = sum of all item's retail price * item's retail quantity
	while(traverse != NULL) {
		sum += (traverse->grocery_item.pricing.retailPrice) * (traverse->grocery_item.pricing.retailQuantity);
		traverse = traverse->next;
    } 

	if (print) {
    	printf("Total revenue: $%'.2f\n", sum);
	}
	return sum;
}
