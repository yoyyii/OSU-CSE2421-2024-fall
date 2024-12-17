/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// ask user to prompt in the item they want to add into the list
void addNewItem (Node** head, char* outFile, char* inputDate) {

    char item[50];
    char department[30];
    int stockNumber;
    float retailPrice;
    float wholesalePrice;
    int retailQuantity;
    int wholesaleQuantity;

    // create a new node with user provide information if the item user want to add doesn't exist already
    if (checkExist(item, department, &stockNumber, *head) == 0) {
        printf("Enter item retail price:\n");
        scanf("%f", &retailPrice);

        printf("Enter item wholesale price:\n");
        scanf("%f", &wholesalePrice);

        printf("Enter item retail quantity:\n");
        scanf("%d", &retailQuantity);
        
        printf("Enter item wholesale quantity:\n");
        scanf("%d", &wholesaleQuantity);
        
        // create a new node based on user's input 
        createNewNode(item, department, stockNumber, retailPrice, wholesalePrice,retailQuantity, wholesaleQuantity, head);
    } 
}