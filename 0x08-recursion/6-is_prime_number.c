#include "main.h"
#include <stdio.h>

int _prime(int n, int i);
/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: number to be checked
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - a function that checks if a number is prime
 * @n: number to be checked
 * @i: iterative number
 *
 * Return: 0 or 1
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
