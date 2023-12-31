#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines if a number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;  /* Declare the variable n */

	srand(time(0));  /* Initialize random number generator */

	n = rand() - RAND_MAX / 2;  /* Generate a random number */

	printf("%d is", n);

	if (n > 0)
	{
		printf(" positive\n");
	}
	else if (n < 0)
	{
		printf(" negative\n");
	}
	else
	{
		printf(" zero\n");
	}

	return (0);
}
