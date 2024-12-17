/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// find average profit of items in list
float averageProfit(Node* head, int print) {
    
	// find average, where average = total profit / total number of sales
    float average;
	float profit = totalProfit(head, 0);
	float totalNumberSales = totalSales(head, 0);
	
	average = profit / totalNumberSales;

	if (print) {
		printf("Average profit: $%'.2f\n", average);
	}
	return average;
}
