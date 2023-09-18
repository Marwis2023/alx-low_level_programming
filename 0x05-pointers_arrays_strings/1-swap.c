#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 * @a: integer 1 to swap
 * @b: integer 2 to swap
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
