/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/*traverse the list and place each node into the correct order*/
void insert(Node** head, Node* newItem){

	// case 1: insert when list is empty
	if (*head == NULL) {
		insertCase1(head, newItem);	
	} else {
	
		if (newItem->grocery_item.stockNumber > (*head)->grocery_item.stockNumber) {
			//case 2: insert the node to the front when list is not empty
			insertCase2(head, newItem);
		} else {
			//case 3: insert node somewhere between two existing nodes
			insertCase3(head, newItem);
		}
	}

}	
