/*	Name: Reta Gela
	Created: September 14, 2023
	Summary: A C program that calculates the Euclidean distance between 
			 2 points denoted by their respective coordinates (x1, y1)
			 and (x2, y2) which are entered by the user*/

#include <stdio.h>
#include <math.h>

int main (void)
{
	// declaring the variables
	int x1, x2, y1, y2;
	float xp, yp, d;
	
	//receiving the coordinate points from the user
	printf("\nEUCLIDEAN DISTANCE CALCULATOR\n");
	printf("Enter the 1st coordinate (separate x1 and y1 with a space): ");
	scanf("%d %d", &x1, &y1);
	printf("Enter the 2nd coordinate (separate x2 and y2 with a space): ");
	scanf("%d %d", &x2, &y2);
	
	//calculating the distance
	xp = (x2 - x1)*(x2 - x1);
	yp = (y2 - y1)*(y2 - y1);
	d = sqrt((xp + yp));
	
	//displaying the calculated distance
	printf("\nThe distance between the 2 points is %f\n\n", d);
	return 0;
}
