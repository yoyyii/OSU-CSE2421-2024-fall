/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

//case 3: insert node somewhere between two existing nodes
void insertCase3(Node** head, Node* newItem){

	// set a traverse node so we could walk through the list and place newItem in the correct position
	Node* traverse = *head;

	// traverse the list until we reach the correct position to insert the newItem
	Node *priorNode;
		
	while (traverse != NULL && traverse->grocery_item.stockNumber > newItem->grocery_item.stockNumber) {
		priorNode = traverse;
		traverse = traverse->next;
	}

	// add the node 
	newItem->next = traverse;
	priorNode->next = newItem;
}
