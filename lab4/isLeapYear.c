/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/*determine whether the provided year is a leap year*/
int isLeapYear(int year) {

	// it's leap year if it's divisible by 4 but not by 100, with the exception of if the year is divisible by 400
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return 1;
	} else {
		return 0;	
	}
}
