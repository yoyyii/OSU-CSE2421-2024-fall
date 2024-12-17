/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// delete case 3: delete between two existed node
void deleteCase3 (Node** head, int delete) {

    Node* traverse = *head;
    Node* prior;

    // walk through the list until the node to delete is found
    while(traverse->grocery_item.stockNumber != delete) {
        prior = traverse;
        traverse = traverse-> next;
    }

    // matain the list and free the traverse node
    prior->next = traverse->next;
    free(traverse);
}