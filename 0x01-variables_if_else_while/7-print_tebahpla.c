#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse.
 * Only the putchar function is used (twice).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}

