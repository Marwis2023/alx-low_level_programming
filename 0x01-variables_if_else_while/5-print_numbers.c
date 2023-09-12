#include <stdio.h>

/**
 * main - A program that print all single digit numbers in base 10
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
