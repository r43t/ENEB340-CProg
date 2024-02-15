/* Reta Gela
   September 28, 2023
   Summary: This C program converts hex numbers into decimal numbers 
*/

#include <stdio.h>

int main (void)
{
	
	int i, k = 0, rem, hex;
	int array[20];
	
	printf("Enter a hex number: ");
	scanf("%x", &hex);
	
	while (hex != 0) { 
		rem = hex % 2;
		array[k] = rem;
		hex = hex / 2;
		k++;
	}
	
	printf("The binary representation is: ");
	for(i = k-1; i >= 0; i--) {
		printf("%d", array[i]);
	}
	printf("\n\n");	
	return 0;
}
