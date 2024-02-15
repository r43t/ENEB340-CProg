/*	Reta Gela
	September 28, 2023
	Summary: This C program reverses a string inputted by the user */
	
#include <stdio.h>
#include <string.h>

int main (void)
{
	char phrase[30], rev[30]; //Declare the variables needed
	int l = 0, i = 0;

	//Prompt user for phrase that will be used
	printf("\n\nPlease Enter a String: ");
	fgets(phrase, strlen(phrase), stdin);
	
	//loop to assign the length of string to variable l
	while (phrase[l] != '\n') {
		l++;
	}
	// loop to reverse and place each letter in the string and place into
	// a new array
	while(l >= 0) {
		rev[i] = phrase[l];
		l--;
		i++;
	}
	//print the reversed string
	printf("%s\n\n", rev);
	return 0; // terminate program
}
	
