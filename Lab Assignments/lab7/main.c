/* Main function */

#include <stdio.h>
#include "functions.h"

void main (void)		
//		Program 1: Matrix Addition Driver Main Loop
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
	addMatrices(rows, cols, a, b, result);
	
	printMatrix(rows, cols, result);
}	
//				Program 2: Transpose Driver Program
{			
	int i, j, rows, cols;
	
	printf("\nEnter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of columns: ");
	scanf("%d", &cols);
	
	int x[rows][cols];
	int result[rows][cols];
	
	printf("\nEnter Matrix: ");
	for(i = 0;i < rows; i++) {
		for(j = 0; j < cols;j++) {
			scanf("%d", &x[i][j]);
		}
	}
	
	transposeMatrix(rows, cols, x, result);
	
	printMatrix(cols, rows, result);
}
//			Program 3: Date Converter Driver Main Loop
{
	int m, d, y;
	
	printf("Enter the date: ");
	scanf("%d/%d/%d", &m, &d, &y);

	dateconverter(m, d, y);
}
