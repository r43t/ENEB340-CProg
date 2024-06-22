#include <stdio.h>
#include <string.h>

int main (void) {
  char str[30], rev[30]; 
  int len = 0, i = 0;
  
  printf("Enter a String: ");
  fgets(str, 30, stdin);
  
  while (str[len] != '\n') {
    len++;
  }
  while(len >= 0) {
    rev[i] = str[len];
    len--;
    i++;
  }
  printf("%s\n", rev);
  return 0; // terminate program
}