#include <stdio.h>

int main (void) 
{
  int h, i, s, a;

  printf("Enter a height for the triangle: ");
  scanf("%d", &h);

  for(i = 1;i <= h;i++) {
    for(s = 1;s <= h-i;s++) {
      printf(" ");
    }
    for(a = 1;a <= ((2*i)-1);a++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}