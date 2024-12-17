/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// delete case 2: delete from the front of the list
void deleteCase2 (Node** head) {

    // change the head to head->next, then free the original head
    Node* traverse = *head;
    (*head) = traverse->next;
    free(traverse);
}