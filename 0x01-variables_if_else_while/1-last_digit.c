#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));  /* Initialize random number generator */

	n = rand();  /* Generate a random number */
	last_digit = n % 10;  /* Extract the last digit of the number */

	printf("Last digit of %d is %d and is", n, last_digit);

	if (last_digit > 5)
	{
		printf(" greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" 0\n");
	}
	else
	{
		printf(" less than 6 and not 0\n");
	}

	return (0);
}
