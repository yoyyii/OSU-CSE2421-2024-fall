/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/* convert userinput date into a number between 1-366*/
int getCurrentDay(int month, int day, int year) {

	int convert = 0;

	// add the amount of day in each month to get a number betwenn 1-366
	for (int i = 1; i < month; i++) {
		if((i % 2 == 0 && (i != 8 && i != 2)) || i >= 9) {
			convert += 30; // even months except Feb. and Aug. has 30 days. Odd months starting from Sep. also has 30 days
		} else if (i != 2) {
			convert += 31; // odd months before Sep. and August has 31 days
		} else {
			// find the day of Feburary based on whether it's leap year or not
			if (isLeapYear(year)) {
				convert += 29; // Feb. in leap year has 29 days
			} else {
				convert += 28; //Feb has 28 days otherwise
			}	
		}
	}

	return convert + day;
}
