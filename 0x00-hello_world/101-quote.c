#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the specified statement to the standard error.
 *              Returns 1 to indicate an error state.
 *
 * Return: Always 1 (indicating an error state)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
