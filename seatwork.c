#include <stdio.h>

int main()
{
  int i, len = 0;
  char str[20];
  char str2[20];

  // TODO
  // get user input
  printf("Enter a string: ");
  fgets(str, 20, stdin);
  // count string length
  while(str[len] != '\n') {
    len++;
  }
  printf("Len: %d\n", len);	
  // TODO: Copy str to str2, display str2
  for(i = 0; i < len;i++) {
    str2[i] = str[i];
  }
  printf("%s\n", str2);
  // TODO: Remove any space in str and store into str2, display str2
  int j = 0;
  for(i = 0;i < len;i++) {
    if(str[i] != ' ') {
      str2[j] = str[i];
      j++;
    }
    else {
      continue;
    }
  }
  str2[j] = '\0';
  printf("%s\n", str2);
  // TODO: Convert str to all uppercase, display the resulting string
  for(i = 0;i < len;i++) {
    if(str[i] > 96 && str[i] < 123) {
      str[i] -= 32;
    }
    else {
      continue;
    }
  }
  printf("%s", str);
  // TODO: Compare str and str2, indicate whether equal or not.:
  for(i = 0;i < len;i++) {
    if (str[i] != str2[i]) {
      printf("Not Equal.");
      return 0;
    }
    else {
      continue;
    }
  }
  printf("Equal.\n");
  return 0;
}