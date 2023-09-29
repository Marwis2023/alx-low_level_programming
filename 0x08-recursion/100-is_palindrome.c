#include "main.h"

int check_palidrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: string to reverse
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palidrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - a function that calculate the length of a string
 * @s: string to calculate the length of
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palidrome - a funtion that checks for palidrome
 * @s: string to be checked
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 if palidrome, 0 if not
 */
int check_palidrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palidrome(s, i + 1, len - 1));
}
