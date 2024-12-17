/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

// Author: Yoyi Liao

#include "lab4.h"

/*Reads in the date, inventory file, and output file provided in the command line. Convert items data in inventory into linked list that's sorted by stock number. After conversion, perform actions requested by client on linked list. After the client is done, convert the information in linked list back to the inventory format and outprint it in the output file provided*/
int main(int argc, char* argv[]) {
	
	// set locale so I could print the format I want
	setlocale(LC_NUMERIC,"");

	// let user know if the number of command line argument is wrong
	if (argc != 4) {
		printf("Error: wrong number of command line argument");
	}

	// read inventory and build the list
	Node *head = NULL;
	readInventory(argv[1], argv[2], &head);

	// let user choose what options they want to do
	options(&head, argv[3], argv[1]);

	return 0;
}
