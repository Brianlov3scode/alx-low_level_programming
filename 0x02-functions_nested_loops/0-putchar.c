#include <unistd.h>

void _putchar(char c);

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 * using the _putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success 1. On error, -1 is returned,
 * and errno is set appropriately.
 */
void _putchar(char c)
{
    write(1, &c, 1);
}

