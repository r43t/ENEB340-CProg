/*	Name: Reta Gela
	Created: September 14, 2023
	Summary: A C program that identifies if the number entered by the
			user is a palindrome or not */

#include <stdio.h>

int main() {
	//declaring variables
	int n, rev = 0, p, y;
	
	//receiving the test number from user
	printf("\nPALINDROME DETECTOR\n");
	printf("Enter an integer: ");
	scanf("%d", &n);
	p = n;
    // reversed integer is stored in "rev" variable
	while (n != 0) {
		y = n % 10;
		rev = rev * 10 + y;
		n /= 10;
	}
    // prints out whether number is a palindrome or not based on the 
    // reversed integer (rev) equaling the original number (x) 
	if (p == rev) {
		printf("\n%d is a palindrome\n\n", p);
	}
	else {
		printf("\n%d is not a palindrome\n\n", p);
	}
	return 0;
}
 
