

#include <stdio.h>
#include <stdbool.h>

int main () 
{
  int i, j, n;
  bool p = true;

  printf("Enter N: ");
  scanf("%d", &n);

  for(i = 1;i <= n;i++) {
    p = 1;
    for(j = 2;j <= i;j++) {
      if(i % j == 0 && i != j) {
        p = false;
        break;
      }
    }
    if(p == true) {
      printf("%d ", i);
    }
  }
  printf("\n\n");
  return 0;
}