#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main()
{
  
  srand(time(NULL));   // Initialize the RNG, should only be called once.
  int l, i, t, r, flag;
  int tries = 10;
  char attempt;
  char chosen[20], x[20];
  char wordbank[20][20] = {"defeat", "gullible", "jazzy", "unique", "project","humorous","haiku","haphazard","ivory", "ivyjackpot", "jaundice","twelfth","unworthy","jinx", "uptown","vaporize","lymph","queue","topaz","crypt"};
  /* random int between 0 and 19 */
  r = rand() % 20;
  // random word selected and copied into array and measured
  printf("\nrandom word #%d selected\n ", r);
  strcpy(chosen, wordbank[r]);
  l = strlen(chosen);
  // printf("%s : %d", chosen, l);
  // array of underscores used to represented hidden word 
  for(i = 0;i < l;i++) {
    x[i] = '-';
  }
  x[l] = '\0';
  printf("%s\n", x);
  // Loop begins using number of tries left
  while(tries > 0 && (strcmp(chosen, x) != 0)) {
    flag = 0;
    printf("\nEnter Attempt %d: ", tries);
    scanf(" %c", &attempt);              // attempt stored in char
    for(t = 0;t < l; t++) {             // looping through chosen word
      if(chosen[t] == attempt) {        
        x[t] = attempt;                 // reveal letter in-place
        flag = 1;
      }
    }
    printf("\n%s\n", x);
    if(flag == 0) {
        print_hangman(tries-1);
        tries--;
    }
  }
  if(strcmp(chosen, x) == 0) {
    printf("CONGRATULATIONS! YOU WIN!");
  }
  else {
    printf("SORRY! YOU LOST!\n");
    printf("The word was %s\n", chosen);
  }
  return 0; 
}