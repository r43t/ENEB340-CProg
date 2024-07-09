

#include <stdio.h>

int main () 
{
  int hex, rem, i = 0, j;
  int arr[25];

  printf("Enter a hex number: ");
  scanf("%x", &hex);

  while(hex != 0) {
    rem = hex % 2;
    arr[i] = rem;
    hex = hex / 2;
    i++;
  }
  printf("Binary representation: ");
  for(j = i-1;j >= 0;j--) {
    printf("%d", arr[j]);
  }
  printf("\n");
  return 0;
}