/*	Reta Gela
 * 	26 OCT 2023
 * 	Summary: This program takes a month and year specification from the
 * 			 user and computes the number of days for that month in that
 * 			 given year.
*/

#include <stdio.h>
int countDays(int month, int year);

void main ()
{
	int m, y, output;
	
	// Receive the month and year input from user
	printf("Enter the month number: ");
	scanf("%d", &m);
	printf("Enter the year: ");
	scanf("%d", &y);
	
	// Error Handling performed with if-else statements
	if(m < 1 && m > 12) {			
		printf("ERROR: Invalid month number");
	}
	else if(y < 0) {				
		printf("ERROR: Invalid year");
	}
	output = countDays(m, y);		// Calling the function
	
	printf("\n%d days\n\n", output);	// Printing output array
}

int countDays(int month, int year)	// Defining the function
{
	int days;
	// If month is not February, function uses regular day conditions
	if(month != 2) {				
		if(month == 1 || month == 3 || month == 5 || month == 7 || 
		   month == 8 || month == 10 || month == 12) {	
			days = 31;				// months with 31 days
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11) {
			days = 30;				// months with 30 days
		}
	}
	else if(month == 2) {			// if February, check for leap year
		if(year % 4 == 0 && year % 400 == 0) {	
			days = 29;
		}
		else {
			days = 28;
		}
	}
	return days;					// Return days variable to main
}
