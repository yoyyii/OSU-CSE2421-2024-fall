/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERISTY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// current investment in grocery items
float currentInvestment(Node* head, int print) {

    // current investment = sum of all wholesale price * (wholesale quantity - retail quantity)
    float sum = 0;
    Node* traverse = head;
	while (traverse != NULL) {
		sum += (traverse->grocery_item.pricing.wholesalePrice) * ((traverse->grocery_item.pricing.wholesaleQuantity) - (traverse->grocery_item.pricing.retailQuantity));
		traverse = traverse->next;
    }

    if (print) {
        printf("Total Wholesale Investment: $%'.2f\n", sum);
    }
    
	return sum;
}
