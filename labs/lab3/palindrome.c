/*  Name: Reta Gela
    Date: 06/19/2024
    Summary: This program takes an integer from the user and determined whether it is a palindrome or not
*/

#include <stdio.h>
#include <math.h>

int main () {
  int orig, num, rem, rev = 0;

  printf("Enter an integer: ");
  scanf("%d", &num);

  orig = num;
  while(num != 0) {
    rem = num % 10;
    rev = rev*10 + rem;
    num /= 10;
  }
  (rev == orig) ? printf("Is a palindrome.\n"): printf("Not a palindrome.\n");

  return 0;
}