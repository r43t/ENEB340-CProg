/*	Name: 		Reta Gela
	Created: 	September 21, 2023
	Summary: 	A C program that calculates the factorial of an integer n
				given by the user  */

#include <stdio.h>

int main (void)
{	
	// 1. declare necessary variables
	long long int x, i, f = 1;
	
	/*	create a block of code that would receive the x variable from
			the user */
	printf("\nFACTORIAL CALCULATOR\n\n");
	printf("Enter a non-negative integer: ");
	scanf("%lld", &x);
	
	// 3. If statement: if value is 0, return value 1. If value is 1, return 1.
	if(x == 0 || x == 1) {
		printf("The factorial equals 1\n");
		return 0;
	}
	/* 4. Create a for loop function where variable 'i' is multiplied by 
			variable f and the product is stored in variable f. the
			variable i is then decremented by 1 */
	for(i = x;i > 0;i--) {
		f = f * i;
	}		
	// Print the final value to the user
	printf("\nThe factorial %lld! equals %lld\n", x, f); 
	
	return 0;
}			