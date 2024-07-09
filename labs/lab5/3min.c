/*  Calculates the minimum integer out of 3 integers entered by the user.
*/
#include <stdio.h>

int main () {
  int a, b, c, min;

  printf("Enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a < b) {
    if(a < c) {
      min = a;
    }
    else {
      min = c;
    }
  }
  else if(b < a) {
    if(b < c) {
      min = b;
    }
    else {
      min = c;
    }
  }
  printf("The smallest integer is %d", min);
  return 0;
}