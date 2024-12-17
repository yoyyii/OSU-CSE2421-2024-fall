/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERISTY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// sum for all grocery items
float totalWholesaleCost(Node* head, int print) {

    float sum = 0;
    Node* traverse = head;

    // total wholesale cost = sum of all item's wholesale price * wholesale quantity
	while (traverse != NULL) {
		sum += (traverse->grocery_item.pricing.wholesalePrice) * (traverse->grocery_item.pricing.wholesaleQuantity);
		traverse = traverse->next;
    }
    if (print) {
        printf("Total Wholesale cost: $%'.2f\n", sum);
    }
	return sum;

}
