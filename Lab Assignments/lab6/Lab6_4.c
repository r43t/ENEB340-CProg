/* Reta Gela
 * 26 OCT 2023
 * Summary: This program takes an integer limit 'n' from the user and 
 * 			outputs an array of all the fibonacci terms up to and
 * 			including that integer. */
#include <stdio.h>

int *fibonacci(int term, int* f);

void main()
{
	int n, j; 
	int output[100];
	
	// Receive input term value from user
	printf("Enter the number of terms you wish to see: ");
	scanf("%d", &n);
	// Error Handling for special cases 0 and 1
	if(n == 0) {
		printf("\n0\n");
	}
	else if(n == 1) {
		printf("\n0 1\n");
	}
	// Pass term value and empty string to fibonacci function
	else {
		fibonacci(n, output);
		// Print output string and insert spaces between terms
		for(j = 0; j < n;j++) {
			printf("%d ", output[j]);
		}
		printf("\n\n");
	}
}

int *fibonacci(int term, int* f)	// function definition
{
	int sum, k;

	f[0] = 0;
	f[1] = 1;
	// Loop to calculate each term up to term limit specified
	for(k = 2;k < term;k++) {
		sum = f[k-1] + f[k-2];
		f[k] = sum;		// place each new term into next bit
	}
	return f;			// return completed string back to main
}