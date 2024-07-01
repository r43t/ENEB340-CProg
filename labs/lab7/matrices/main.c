
#include <stdio.h>
#include "functions.h"

int main (void)		
//Program 1: Matrix Addition Driver Main Loop
{
	int i, j, rows, cols;
	
	printf("\nEnter number of rows: ");
	scanf("%d", &rows);
	printf("\nEnter number of columns: ");
	scanf("%d", &cols);
	
	int a[rows][cols];
	int b[rows][cols];
	int result[rows][cols];
	
	printf("\nEnter Matrix A: ");
	for(i = 0;i < rows; i++) {
		for(j = 0; j < cols;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter Matrix B: ");
	for(i = 0;i < rows; i++) {
		for(j = 0; j < cols;j++) {
			scanf("%d", &b[i][j]);
		}
	}
	addMatrices(a, b, result, rows, cols);
	
	printMatrix(result, rows, cols);
	
	return 0;

}