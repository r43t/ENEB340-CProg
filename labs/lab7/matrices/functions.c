
#include <stdio.h>
#include "functions.h"
#define MAX_SIZE 10

void addMatrices(int A[][MAX_SIZE], int B[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
  int i, j;
  
  for(i = 0;i < rows;i++) {
    for(j = 0;j < cols;j++) {
      result[i][j] = A[i][j] + B[i][j];
    }
  }
}

void transposeMatrix(int matrix[][MAX_SIZE], int transpose[][MAX_SIZE], int rows, int cols) {

}

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
  int i, j;

  for(i = 0;i < rows;i++) {
    for(j = 0;j < rows;j++) {
      printf("%d", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
