/*  Name: Reta Gela
    Date: 06/19/2024
    Summary: This program calculates the distance between two points using the distance formula.
*/

#include <stdio.h>
#include <math.h>

int main (void) 
{
  int x2, x1, y2, y1, sum; 
  float dist;

  printf("Enter coordinate 1: ");
  scanf("%d %d", &x1, &y1);
  printf("Enter coordinate 2: ");
  scanf("%d %d", &x2, &y2);

  sum = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
  dist = sqrt((float)sum);

  printf("Distance = %.2f", dist);
  return 0;
}