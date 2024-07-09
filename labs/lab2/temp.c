#include <stdio.h>
#include <math.h>

int main () {
  float cels, fahr;
  int i;

  while(1) {
    printf("Enter a celsius temperature: ");
    if((scanf("%f", &cels)) != 1) {
      printf("Program Terminated.");
      return 0;
    }
    fahr = cels*(9/5) + 32;
    printf("%.2f\n", fahr);
  }
  return 0;
}