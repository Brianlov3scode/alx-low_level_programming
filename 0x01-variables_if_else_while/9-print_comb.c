#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers are separated by ", " and printed in ascending order.
 * Only the putchar function is used (four times maximum).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	putchar('0'); /* Print first number (0) */

	for (int num = 1; num < 10; num++)
	{
		putchar(','); /* Print comma */
		putchar(' '); /* Print space */
		putchar(num + '0'); /* Print the digit as character */
	}

	putchar('\n'); /* Print newline */

	return (0);
}

