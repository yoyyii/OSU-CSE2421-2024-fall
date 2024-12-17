/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

//case 2: insert the node to the front when list is not empty
void insertCase2(Node** head, Node* newItem){

	// make the old head new item's next, and make new item new head
	newItem->next = *head;
	*head = newItem;
}
