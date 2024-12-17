/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// print grocery items out of stock
float itemsOutOfStock(Node* head, int print) {

   printf("Grocery items out of stock:\n");

   printColumn();
	
   Node* traverse = head;
   // find the number of item out of stock and print it out. Item is out of stock if it has same retail quantity as its wholesale quantity. Let user know if there's no number in stock
   if (itemStock(head, 1, traverse) == 0) {
      printf("No items out of stock\n");
   }

   return 0;
}