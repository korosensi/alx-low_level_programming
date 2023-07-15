
Certainly! Here's the modified code that considers the specific values of 98 and -98:

c
Copy code
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
    srand(time(0));  // Initialize random number generator

    int n = (rand() % 2 == 0) ? 98 : -98;  // Assign specific values of 98 and -98

    int last_digit = abs(n) % 10;  // Extract the last digit (absolute value)

    printf("Last digit of %d is %d and is ", n, last_digit);

    if (last_digit > 5)
        printf("greater than 5\n");
    else if (last_digit == 0)
        printf("0\n");
    else
        printf("less than 6\n");

    return 0;
}
