/*	Name: 		Reta Gela
	Created:	September 14, 2023
	Summary: 	A C program that displays the multiplication table of an
				integer entered by the user*/

#include <stdio.h>

int main (void)
{
	//	declare variable n
	int n;
	//	receives input value from user
	printf("MULTIPLICATION TABLE GENERATOR\n");
	printf("Please enter a positive integer: ");
	scanf("%d", &n);
	//	calculates and displays multiplication table
	for (int x = 1; x <= 10; ++x) {
		printf("%d * %d = %d \n", n, x, n * x);
	}
	return 0;
}
