/*	Reta Gela
	September 28, 2023
	Summary: This C program finds the minimum of 3 unique integers */	
#include <stdio.h>

int main (void)
{
	long int x, y, z, m; // Declare Variables
	
	// Ask and receive 3 unique numbers for comparison from the user
	printf("\nEnter 3 unique integers: ");
	scanf("%d %d %d", &x, &y, &z);
		//	If statement to compare the first variable with the others
	if(x <= y) {
		m = x;
		if(x <= z) { //	if-else loop to compare 1st and 3rd variable 
		m = x;		 // before assigning the minimum variable	
		}
		else {
		m = z;
		}
	}	
	else if(y <= x) {//	if statement to address other condition
		m = y;
		if(y <= z) { // if statement to compare 2nd and 3rd variable
		m = y;		 //	on the pretense that the 2nd is less than the 1st
		}
		else {
		m = z;
		}
	}
	//Send the identified minimum value to the user
	printf("\nThe minimum value is %d\n\n", m);
	return 0;
}
	
