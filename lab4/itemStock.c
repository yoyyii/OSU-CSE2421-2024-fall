/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// print out all the item in stock or out of stock
int itemStock(Node* head, int indicator, Node* traverse) {
   
    // number of items in or out of stock
    int num = 0;

    // if indicator is 0, find items in stock. If indicator is 1, find items out of stock. 
    while (traverse != NULL) {
	    if(indicator == 1 && traverse->grocery_item.pricing.wholesaleQuantity - traverse->grocery_item.pricing.retailQuantity == 0) {
		    printNode(traverse);
            num++;
        } else if(indicator == 0 && traverse->grocery_item.pricing.wholesaleQuantity - traverse->grocery_item.pricing.retailQuantity > 0) {
			printNode(traverse);
            num++;
        }
	    traverse = traverse->next;
    }

    return num;
}
