#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;  /* Declare the variable n */

    srand(time(0));  /* Initialize random number generator */

    n = rand() % 201 - 100;  /* Generate a random number between -100 and 100 */

    printf("The number %d is ", n);

    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return 0;
}
