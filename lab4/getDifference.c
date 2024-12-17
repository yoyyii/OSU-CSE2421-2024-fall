/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/* get the difference between user input's day and day in inentory*/
int getDifference(int currentDay, int currentYear, int fileDay, int fileYear) {

	// find the day and year difference betwen user input and inventory
	int dayDifference = currentDay - fileDay;
	int yearDifference = currentYear - fileYear;

	// calculate the number of leap year that have happened in between
	int numberOfLeap = 0;
	for(int i = fileYear; i < currentYear; i++) {
		numberOfLeap += isLeapYear(i);
	}

	// adjust difference caused by leap year
	if (currentDay < 59 && isLeapYear(currentYear)) {
		numberOfLeap -= 1;
	}

	if (numberOfLeap < 1) {
		return dayDifference + 365 * yearDifference;
	} else {
		return dayDifference + numberOfLeap + 365 * yearDifference;
	}
}
