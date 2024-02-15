#include <stdio.h>

int main (void)
{
        float F, C;

        printf("\nWelcome to the Celsius-2-Fahrenheit Converter!\n\n");
        printf("Please enter a Celsius Temperature: ");
        scanf("%f", &C);

	F = (C*(9/5)) + 32;

	printf("Fahrenheit: %.2f\n\n", F);
	return 0;
}


