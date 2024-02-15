/*	Name: Reta Gela
	Created: September 14, 2023
	Summary: A C program that finds the GCD of 2 numbers inputted by the user*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	//	declaring variables
	int n, m, q1, q2, GCD, i;
	//	receives 2 input values from user
	printf("\nWELCOME TO THE GCD CALCULATOR!\n");
	printf("\nEnter the first number: ");
	scanf("%d", &n);
	printf("Enter the second number: ");
	scanf("%d", &m);
	//	calculates the GCD of the 2 inputs
	for(i = 1;i < 100;i++) {
		q1 = n % i;
		q2 = m % i;
		if(n == 0 && m == 0) {
			GCD = 0;
			break;
		}	
		if(q1 == 0 && q2 == 0) {
			GCD = i;
		}	
	}
	//	displays the GCD to the user
	printf("\nThe GCD is %d\n\n", GCD);
	return 0;
}
	
	
	
