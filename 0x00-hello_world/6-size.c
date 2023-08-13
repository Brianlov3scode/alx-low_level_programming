#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Sixe of char: %lu byte(s)\n", sizeof(char));
	printf("Sixe of int: %lu byte(s)\n", sizeof(int));
	printf("Sixe of long int: %lu byte(s)\n", sizeof(long int));
	printf("Sixe of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Sixe of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
