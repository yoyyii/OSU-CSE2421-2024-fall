/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERISTY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

// total profit for all grocery items
float totalProfit(Node* head, int print) {

	// total profit = total revenue - total wholesale cost + current investment;
    float sum = 0;
	float totalRev = totalRevenue(head, 0);
	float ttllWholesaleCost = totalWholesaleCost(head, 0);
	float currentInvest = currentInvestment(head, 0);
	sum = totalRev - ttllWholesaleCost + currentInvest;
	
	if (print) {
	    printf("Total profit: $%'.2f\n", sum);
	}
    return sum;
}
