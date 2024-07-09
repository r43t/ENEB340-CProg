/*  Name: Reta Gela
    Date: 06/19/2024
    Summary: This program finds the greatest common divisor of two numbers inputted by the user.
*/

#include <stdio.h>
#include <math.h>

int main () {
  int a, b, gcd, rem;
  printf("Enter 2 integers separated by spaces: ");
  scanf("%d %d", &a, &b);

  if(a == 0) { 
    gcd = b; 
  }
  else if(b == 0) {
    gcd = a; 
  }
  else {
    while(b != 0) {
      rem = b;
      b = a % b;
      a = rem;
    }
    gcd = a;
  }
  printf("The GCD is %d", gcd);
  return 0;

}