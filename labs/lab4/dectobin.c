/*  Name: Reta Gela
    Date: 06/19/2024
    Summary: This program converts a decimal integer inputted by the user into a binary number.
*/

#include <stdio.h>
#include <math.h>

int main (void) {
  int d, rem, j, i = 0; 
  int arr[20];

  printf("Enter a decimal integer: ");
  scanf("%d", &d);

  while(d != 0) {
    rem = d % 2;
    arr[i] = rem;
    d /= 2;
    i++;
  }
  printf("Result: ");
  for(j = i-1;j >= 0;j--) {
    printf("%d", arr[j]);
  }
  printf("\n");
  return 0;
}