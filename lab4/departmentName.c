/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// traverse through the list to find all nodes with department that contains the substring of user's input
int departmentName(Node* head, char* department) {

    int count = 0;
    Node* traverse = head;
	while(traverse != NULL) {
		if (strcasestr(traverse->grocery_item.department, department)){
			printNode(traverse);
            count++;
		}
		traverse = traverse->next;
	}

    return count;
}