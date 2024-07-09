#include <stdio.h>

int sum(int a);

int main () 
{
  int n, output;
  while(1) {
    printf("Enter an integer: ");
    if(scanf("%d", &n) != 1) {
      printf("Error! Program Terminated.");
      return 0;
    }
    else if(n < 0) {
      printf("Error! Program Terminated.");
      return 0;
    }
    output = sum(n);
    printf("%d\n", output);
  }
  return 0;
}
int sum(int a) 
{
  int i, sum = 0;

  for(i = 1;i <= a;i++) {
    sum += i;
  }
  return sum;
}