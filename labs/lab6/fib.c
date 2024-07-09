
#include <stdio.h>

int fibonacci(int term);

int main (void) {
  int i, term;

  printf("Enter an integer: ");
  scanf("%d", &term);

  for (int i = 0; i < term; i++) {
    printf("%d ", fibonacci(i));
  }
  return 0;

}

int fibonacci(int term) {

  if (term == 1 || term == 0) {
    return 1;
  }
  else {
    return fibonacci(term - 1) + fibonacci(term - 2);
  }
}