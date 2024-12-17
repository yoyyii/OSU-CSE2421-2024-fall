/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// find whether a stock number have already existed in the list or not
int findStock(Node* head, int stockNumber) {
    
    Node* traverse = head;
    int find = 0;

    // traverse through the list until we found the node with the stock number that we're looking for, or return 0 if it doesn't exist
    while (traverse != NULL) {
        if (traverse->grocery_item.stockNumber == stockNumber) {
            find = 1;
            break;
        }
        traverse = traverse->next;
    }

    return find;
}