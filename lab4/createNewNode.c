/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// create a new node based on user's input 
void createNewNode(char* item, char* department, int stockNumber, float retailPrice, float wholesalePrice, int retailQuantity, int wholesaleQuantity, Node** head) {
    Node* newNode = malloc(sizeof(Node));

    // make the newNode's member contains all the necessary information
    strcpy(newNode->grocery_item.item, item);
    strcpy(newNode->grocery_item.department, department);
    newNode->grocery_item.stockNumber = stockNumber;
    newNode->grocery_item.pricing.retailPrice = retailPrice;
    newNode->grocery_item.pricing.wholesalePrice = wholesalePrice;
    newNode->grocery_item.pricing.retailQuantity = retailQuantity;
    newNode->grocery_item.pricing.wholesaleQuantity = wholesaleQuantity; 

    // add this new node into the list
    insert(head, newNode);
}