/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/* free all the space of node in my linked list*/
void freeList(Node** head) {

	Node* traverse = *head;

	// free all the node as i traverse through the list
	while (traverse != NULL) {
		Node* prior = traverse;
		traverse = traverse->next;
		free(prior);	
	}

}
