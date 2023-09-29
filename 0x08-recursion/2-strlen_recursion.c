#include "main.h"

/**
 * _strlen_recursion -  a function that returns the length of a string
 * @s: string to be counted
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int countIt = 0;

	if (*s)
	{
		countIt++;
		countIt += _strlen_recursion(s + 1);
	}
	return (countIt);
}
