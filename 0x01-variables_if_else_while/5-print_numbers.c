#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers of base 10 from 0 to 9.
 * Only the putchar function is used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}

	putchar('\n');

	return (0);
}

