#include "main.h"
#include <stdio.h>


int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: number to calculate square root of
 *
 * Return: Result of square root
 */
int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - recurses to find natural square root of a number
 * @n: number to calculate square root of
 * @i: itertor
 *
 * Return: Result of square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
