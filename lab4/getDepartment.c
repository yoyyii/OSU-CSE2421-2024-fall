/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// print all grocery items from a specific department
float getDepartment(Node* head, int print) {

	// ask the user what department they want to search in
	char department[30];
	printf("What department you want to search item in?");
	scanf("%s", department);

	// traverse through the entire list, print out the node that contains the substring of user's input in its department
	int count = departmentName(head, department);

	if (count == 0) {
		printf("No item exist in this department\n");
	}

	return 0;
}
