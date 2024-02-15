/*	Name: 		Reta Gela
	Date:	 	September 21, 2023
	Summary: 	A C program that converts the integer inputted by the
	 			user into its english word representation  */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//Dictionary structure
struct DICT {
	int num;
	char *Eng;
};

//Dictionary of 1-19 to english
struct DICT onesAndTeens[] = 
{
	{0, ""}, {1, "One "}, {2, "Two "}, {3, "Three "}, {4, "Four "}, 
	{5, "Five "}, {6, "Six "}, {7, "Seven "}, {8, "Eight "}, {9, "Nine "},
	{10, "Ten "}, {11, "Eleven "}, {12, "Twelve "}, {13, "Thirteen "}, {14, "Fourteen "}, 
	{15, "Fifteen "}, {16, "Sixteen "}, {17, "Seventeen "}, {18, "Eighteen "}, {19, "Nineteen "},

};

//Dictionary for tens places twenty to ninety
struct DICT tens[] = 
{
	{2, "Twenty "}, {3, "Thirty "}, {4, "Fourty "}, {5, "Fifty "}, {6, "Sixty "}, {7, "Seventy "},
	{8, "Eighty "}, {9, "Ninety "}
};

//Function to search dictionary key to value
char *lookup(int key, struct DICT *dict, int length)
{
	for (int i=0; i<length; i++)
	{
		if (dict[i].num == key)
		{
			return dict[i].Eng;
		}
	}
}

//Function for tens and ones place
void Tens(int num, char *EngNum) 
{
	if (num <= 19) 
		strcat(EngNum, lookup(num, onesAndTeens, 19));
		
	else
	{
		strcat(EngNum, lookup(num/10, tens,8) );
		strcat(EngNum, lookup(num%10, onesAndTeens, 10) );
	}
}
		 
//Function for hundreds place
void Hundreds(int num, char *EngNum) {
	//Add hundreds place
	if (num >= 100)
	{
	strcat(EngNum, lookup(num/100, onesAndTeens, 10) );
	strcat(EngNum, "Hundred ");
	}
	
	Tens(num % 100, EngNum);
}

//Function for thousands place
void Thousands(int num, char *EngNum) {
	
	Hundreds(num/1000, EngNum);
	strcat(EngNum, "Thousand ");
	Hundreds(num%1000, EngNum);
}

//Function for millions place
void Millions(int num, char *EngNum) {
	Hundreds(num/1000000, EngNum);
	strcat(EngNum, "Million ");
	Thousands(num%1000000, EngNum);
}

int main() {
	//Clock to calculate execution time of program
	clock_t end, start;
	//Declare variables
	int num;
	char EngNum[100];
	start = clock();
	
	//Prompt and get input number
	printf("\nEnter number from 0 to 999999999: ");
	scanf("%d", &num);
	printf("\n");
	
	//If statements for each condition calls the corresponding function
	if (num == 0) 
		printf("Zero");
	else if (num < 100) 
		Tens(num, EngNum);
	else if (num < 1000)
		Hundreds(num, EngNum);	
	else if (num < 1000000)
		Thousands(num, EngNum);
	else 
		Millions(num, EngNum);
	end = clock(); //clock measures exe time
	
	//Print result
	printf("%s\n", EngNum);
	printf("Program Execution Time: %f\n\n", (double)(end - start) / CLOCKS_PER_SEC); 
	
	return 0;
}