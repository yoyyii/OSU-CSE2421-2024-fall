/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// delete the item from the list
void deleteItem (Node** head, char* outFile, char* inputDate) {

    int delete;

    // ask user what item they wish to delete
    printf("What item do you wish to delete?");
    scanf("%d", &delete);

    if (findStock(*head, delete) != 0) {
        if (*head == NULL) { // case 1: delete when list is empty
            printf("Error: trying to delete an non-existing node");
        } else if ((*head)->grocery_item.stockNumber == delete) {
            //case 2: delete the node to the front when list is not empty
            deleteCase2(head);
        } else {
            //case 3: delete node somewhere between two existing nodes
            deleteCase3(head, delete);
        }
    } else {
        // let user know they try to delete something that doesn't exist
        printf("Item doesn't exist in the list\n");
    }

}
