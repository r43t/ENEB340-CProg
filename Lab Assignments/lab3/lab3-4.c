/*	Name: Reta Gela
	Created: September 14, 2023
	Summary: A C program that prints an equilateral triangle with
			asterisks (*) of a height specified by the user */

#include <stdio.h>

int main (void)
{
	// declaring the variables
	int x, y, i, h;
	//receives the height value from user and assigns to 'h'
	printf("Enter the height of the triangle: ");
	scanf("%d",&h);
	//	formulates the triangle level by level until height is reached
	printf("\n");
	for(i=1;i<=h;i++) {
		for(x = 1;x <= h-i;x++) {
			printf(" ");
		}
		for(y = 1;y <= ((2*i)-1);y++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
