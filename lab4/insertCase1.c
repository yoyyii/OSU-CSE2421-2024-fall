/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// case 1: insert when list is empty
void insertCase1(Node** head, Node* newItem){

	// make new item the new head and make its next NULL
	*head = newItem;
	newItem->next = NULL;
}
