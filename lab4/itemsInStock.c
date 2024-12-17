/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// print grocery items in stock
float itemsInStock(Node* head, int print) {

   printf("Grocery items in Stock:\n");
   printColumn();
   Node* traverse = head;	

   // traverse through the list to find the number of item in stock and print it out. Item is in stock if it has more wholesale quantity than its retail quantity. Let user know if there's no number in stock
   if (itemStock(head, 0, traverse) == 0) {
      printf("No items in stock\n");
   }

   return 0;
}
