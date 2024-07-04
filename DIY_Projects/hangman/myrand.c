#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  srand(time(NULL));   // Initialize the RNG, should only be called once.
  int r, n, i, j;
  char str[16], wordbank[20][20] = {"defeat", "gullible", "jazzy", "unique", "project","humorous", "haiku","haphazard","ivory", "ivyjackpot", "jaundice","twelfth", "unworthy","jinx", "uptown","vaporize","lymph","queue","topaz","crypt"};

  while (1) {
    /* random int between 0 and 19 */
    r = rand() % 20;
    printf("Random Word #%d selected.", r);
    }
    printf("How many tries do you want?: ");
    scanf("%d", &n);
    printf("Enter attempt #%d: ", n);
    scanf("%s", &str);
    for(i = 0;str[i] != '\n';i++) {
      if str
    }
  return 0;
}

