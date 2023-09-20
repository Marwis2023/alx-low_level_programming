#include "main.h"

/**
 * print_array -  a function that prints n
 * elements of an array of integers, followed by a new line
 * @a: array name
 * @n: number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < (n - 1); f++)
	{
		printf("%d, ", a[f]);
	}
	if (f == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
