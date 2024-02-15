/*	Reta Gela
 * 	26 OCT 2023
 * 	Summary: This program takes an integer limit from the user and
 * 			 returns the sum of natural numbers up to and including that
 * 			 integer limit.
*/

#include <stdio.h>

int sum(int a);			// Function declaration

void main ()			// main loop that doesn't return a value
{
	int n, output;
	// receives input from user and places it into a variable
	printf("\nEnter a positive integer target: ");	
	scanf("%d", &n);
	
	output = sum(n);			// passing user input to function
	
	printf("\n%d\n\n", output);	// prints output of function to user
	
}

int sum(int a)			// Function Definition
{
	int i, sum = 0;
	
	for(i = 0;i <= a;i++) {		// loop to calculate sum 1 by 1 up to
		sum += i;				// the user's input value
	}
	return sum;					// returns total sum to main function
}