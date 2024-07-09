/*  Name: Reta Gela
    Date: 06/19/2024
    Summary: This program finds the factorial of an integer inputted by the user.
*/

#include <stdio.h>
#include <math.h>

int main (void)
{
  int n, i, fac = 1;

  printf("Enter an integer: ");
  scanf("%d", &n);

  for(i = n;i >= 1;i--) {
    fac = fac*i;
  }
  printf("Result: %d", fac);
  return 0;
}