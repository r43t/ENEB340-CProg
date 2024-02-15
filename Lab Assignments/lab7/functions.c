/*	Reta Gela
 * 	26 OCT 2023
 * 	Summary: functions file
*/

#include <stdio.h>
#include "functions.h"

void addMatrices(int rows, int cols, int A[rows][cols], int B[rows][cols], int result[rows][cols])
{
	int n, i, sum;
	
	for(n = 0;n < rows; n++) {
		for(i = 0;i < cols;i++) {
			result[n][i] = A[n][i] + B[n][i];
		}
	}
}

void printMatrix(int rows, int cols, int matrix[rows][cols])
{
	int k, p;
	
	printf("\nResult:\n");
	for(k = 0;k < rows;k++) {
		for(p = 0; p < cols; p++) {
			printf("%d ", matrix[k][p]);
		}
		printf("\n");
	}
	printf("\n");
}

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int transpose[cols][rows])
{
	int n, i;
	
	for(n = 0;n < cols;n++) {
		for(i = 0;i < rows; i++) {
			transpose[n][i] = matrix[i][n];
		}
	}
	
}

void dateconverter (int m, int d, int y)
{
	 
	int month = 0, day = 0;
	
	if(m == 1) {
		printf("\nJanuary ");
	}
	else if(m == 2) {
		printf("\nFebruary ");
	}
	else if(m == 3) {
		printf("\nMarch ");
	}
	else if(m == 4) {
		printf("\nApril ");
	}
	else if(m == 5) {
		printf("\nMay ");
	}
	else if(m == 6) {
		printf("\nJune ");
	}
	else if(m == 7) {
		printf("\nJuly ");
	}
	else if(m == 8) {
		printf("\nAugust ");
	}
	else if(m == 9) {
		printf("\nSeptember ");
	}
	else if(m == 10) {
		printf("\nOctober ");
	}
	else if(m == 11) {
		printf("\nNovember ");
	}
	else if(m == 12) {
		printf("\nDecember ");
	}
	printf("%d, %d\n", d, y);
}
