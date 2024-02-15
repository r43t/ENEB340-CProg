#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main()
{
  srand(time(NULL));   // Initialize the RNG, should only be called once.
  int r, l, j = 1, i, t, w, flag;
  int tries = 7;
  char attempt;
  char s[20];
  char wordbank[20][20] = {"defeat", "gullible", "jazzy", "unique", "project","humorous",
  "haiku","haphazard","ivory", "ivyjackpot", "jaundice","twelfth", "unworthy","jinx",
  "uptown","vaporize","lymph","queue","topaz","crypt"};

  /* random int between 0 and 19 */
  r = rand() % 20;
  printf("\nrandom word #%d selected\n ", r);
  strcpy(s, wordbank[r]);
  l = strlen(s);
  char x[20];
  for(w = 0;w < l;w++) {
    x[w] = '-';
  }
  x[l] = '\0';
  printf("\n%s", x);
  
  i = tries;
  while(i > 0) {
    flag = 0;
    printf("\nEnter Attempt %d: ", i);
    char d;
    scanf("%c%c", &attempt, &d);
    for(t = 0;t < l; t++) {
      if(s[t] == attempt) {
        x[t] = attempt;
        flag = 1;
      }
    }
    printf("\n%s\n", x);
    if(flag == 0) {
        print_hangman(i-1);
        i--;
    }
  }
  if(i == 0) {
      if(strcmp(x,s) == 1) {
        printf("SORRY! YOU LOST :(");
      }
      else if(strcmp(x,s) == 0) {
        printf("CONGRATS! YOU WON :)");
      }
    }
  return 0;
}