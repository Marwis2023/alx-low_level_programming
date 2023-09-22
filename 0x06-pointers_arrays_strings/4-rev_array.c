#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int g;

	for (i = 0; i < n--; i++)
	{
		g = a[i];
		a[i] = a[n];
		a[n] = g;
	}
}
