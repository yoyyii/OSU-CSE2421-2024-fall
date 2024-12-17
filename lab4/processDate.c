/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT*/

#include "lab4.h"

/* conver user input date into a number between 1-366, the find the difference bettwen current date and date in inventory*/
void processDate(FILE* file, char* inputDate, char* inventoryInput) {

	// get current date provided by user and convert it to a number between 1-366
	int currentDate, currentMonth, currentYear;
	sscanf(inputDate, "%d/%d/%d", &currentMonth, &currentDate, &currentYear);
	int currentDay = getCurrentDay(currentMonth, currentDate, currentYear);

	// printf("current day %d\n", currentDay);
	// get day in inventory
	int fileDay, fileYear;
	fscanf(file, "%d%d", &fileDay, &fileYear);

	int dayDifference = getDifference(currentDay, currentYear, fileDay, fileYear);

	// printf("day difference %d\n", dayDifference);
	continueProcess(file, dayDifference, inventoryInput);
}
