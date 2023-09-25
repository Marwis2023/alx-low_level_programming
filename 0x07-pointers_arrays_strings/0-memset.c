#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: starting address of memory to befilled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
