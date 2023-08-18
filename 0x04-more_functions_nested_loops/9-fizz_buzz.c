#include "main.h"
#include <stdio.h>
/**
 * main - function prints the numbers from 1-100 , but for multiples of three,
 *      Fizz is printed for the number ,for multiples of five 
 *      Buzz is printed for the numbers , for multipes of three
 *      FizzBuzz is printed for numbers which are both the multipes of both three and five 
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}


