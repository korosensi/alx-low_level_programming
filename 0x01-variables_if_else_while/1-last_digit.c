#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines the last digit of a specified number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));
    n = (rand() % 2 == 0) ? 98 : -98;

    last_digit = abs(n) % 10;

    printf("Last digit of %d is %d and is ", n, last_digit);

    if (last_digit > 5)
        printf("greater than 5\n");
    else if (last_digit == 0)
        printf("0\n");
    else
        printf("less than 6\n");

    return 0;
}
