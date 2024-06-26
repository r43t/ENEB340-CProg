
#include <stdio.h>

int countDays(int month, int year);

int main (void) {
  int y, m, days;

  printf("Enter month number: ");
  scanf("%d", &m);
  printf("Enter year: ");
  scanf("%d", &y);

  days = countDays(m, y);

  printf("Output: %d", days);
  return 0;
}

int countDays(int month, int year) {
  int i, days;
  
  if (month == 2) {
    if(year % 4 == 0) {
      if (year % 100 == 0) {
        if (year % 400 == 0) {
          days = 29;
        }
        else {
          days = 28;
        }
      }
      else {
        days = 29;
      }
    }
    else if(year % 4 != 0) {
      days = 28;
    }
  }
  else if((month % 2 != 0 && month < 8) || month == 12) {
    days = 31;
  }
  else if(month == 4 || month == 6 || month == 9 || month == 11) {
    days = 30;
  }
  return days;
}