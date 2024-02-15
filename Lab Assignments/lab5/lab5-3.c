/*	Reta Gela
	September 28, 2023
	Summary: This C program displays the prime numbers up to integer n
			 which is inputted by user */
	
#include <stdio.h>

int main (void)
{
	
	int n, i, h, prime; // declare variables
	// take integer from user
	printf("\nPlease enter an integer limit: ");
	scanf("%d", &n);

	for(i = 2;i <= n;i++) {
		prime = 1;
		for(h = 2; h <= i;h++) {
			if(i % h == 0 && i != h) {
				prime = 0;
				break;
			}
			
		}
		if (prime == 1) {
			printf("%d ", i);
		}
	}
	printf("\n\n");
	return 0;
}
