  /*Name: 		Reta Gela
	Created: 	September 21, 2023
	Summary: 	A C program that converts a decimal non-negative number
	 			inputted by the user into its binary representation  */

#include <stdio.h>

int main (void)
{
	// declaring all necessary variables
	int rem, i, decimal;
	int k = 0;
	int array[30];
	// receive the input of a decimal number from the user and store it into a variable
	printf("\nDECIMAL TO BINARY CONVERTER\n");
	printf("\nEnter a non-negative integer: ");
	scanf("%d", &decimal);
	//Construct a loop that would constantly divide the variable by 2 until the decimal equalled 0
	//(in C, the division of a number less than its divisor returns a 0 value) 
	while (decimal != 0) { 
		rem = decimal % 2;		// stores the remainder of the division operation by 2 into a variable
		array[k] = rem; 		// stores each remainder into array value corresponding to the place
		decimal = decimal / 2; 	// divides the decimal into new value before cycle repeats
		k++; 					// increments variable k by 1 each time to organize remainder values
	}							// in array
	
	printf("The binary representation is: "); // initial print statement before array is displayed 1 by 1
	//for loop to display each value of the array 1 by 1 using a variable that decrements by 1
	for(i = k-1; i >= 0; i--) {				
		printf("%d", array[i]);
	}
	printf("\n\n");	
	return 0;
}
	
