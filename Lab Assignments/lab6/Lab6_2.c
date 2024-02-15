/*	Reta Gela
 * 	26 OCT 2023
 * 	Summary: This program takes a string of characters and organizes
 * 			 and places all the vowels and consonants in 2 separate
 * 			 arrays in the order they are encountered in the string
 * 			 before outputting both arrays to the user. 
*/

#include <stdio.h>

#define MAX_STR_SIZE 100
// Declarations for Vowel and Consonant Functions
char* extractVowels(char string[MAX_STR_SIZE], char vowel[MAX_STR_SIZE]);
char* extractConsonants(char string[MAX_STR_SIZE], char c[MAX_STR_SIZE]);

int main (void)
{

	char string[MAX_STR_SIZE], vowel[MAX_STR_SIZE], c[MAX_STR_SIZE];
	// Receive input string from user
	printf("Enter any string: ");
	scanf("%s", string);
	// Change all characters in string to lowercase
	for(u = 0;string[u] != '\0';u++) {
		if(string[u] <= 90 && string[u] >= 65) {
			string[u] += 32;
		}
	}
	// Pass string and consonant and vowel arrays to the functions 
	extractVowels(string, vowel);
	extractConsonants(string, c);
	// Take the outputs from the functions and display to user
	printf("\n Input String: %s\n", string);
	printf("\nVowel Characters: %s", vowel);
	printf("\nConsonant Characters: %s\n", c);
}

char* extractVowels(char string[MAX_STR_SIZE], char vowel[MAX_STR_SIZE])
{
	int x = 0, y = 0;
	// Loop puts any character that is a vowel into vowel array
	// and skips the character if it is not
	while(string[x] != '\0') {
		if(string[x] == 'a' || string[x] == 'e' || string[x] == 'i' ||
		string[x] == 'o' || string[x] == 'u') {
			vowel[y] = string[x];
			y++;
			x++;
		}
		else {
			x++;
		}
	}
	vowel[y] = '\0';
	return vowel;
}
char* extractConsonants(char string[MAX_STR_SIZE], char c[MAX_STR_SIZE])
{
	int x = 0, y = 0;
	// Loop places any character that is not a vowel into consonant array
	// and skips the character if it is not
	while(string[x] != '\0') {
		if(string[x] != 'a' && string[x] != 'e' && string[x] != 'i' &&
		&& string[x] != 'o' && string[x] != 'u') {
			c[y] = string[x];
			y++;
			x++;
		}
		else {
			x++;
		}
	}	
	c[y] = '\0';
	return c;
}