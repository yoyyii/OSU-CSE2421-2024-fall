/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// check whether an item already in the list or not
int checkExist(char* item, char* department, int* stockNumber, Node* head) {

    // prompt user to enter needed information
    printf("Enter grocery item name:\n");
    scanf(" %[^\n]s", item);

    printf("Enter Department:\n");
    scanf(" %[^\n]s", department);

    printf("Enter item stock number:\n");
    scanf("%d", stockNumber);

    // check whether the stock number (item) user entered have already exist in the list. If so, let user know
    if (findStock(head, *stockNumber) != 0) {
        printf("Item already exist\n");
    }

    return findStock(head, *stockNumber);
}