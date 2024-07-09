/*  Name: Reta Gela
    Date: 06/19/2024
    Summary: This program displays a multiplication table up to n x i where n is entered by the user and i goes from 1 to 10.
*/

#include <stdio.h>
#include <math.h>

int main (void) 
{
  int i, n, prod;

  printf("Enter an integer: ");
  scanf("%d", &n);

  for(i = 1;i <= 10;i++) {
    prod = i*n;
    printf("%d  x  %d =  %d\n", i, n, prod);
  }
  return 0;
}