#include "main.h"

/**
 * print_rev -  a function that prints a string,
 * in reverse, followed by a new line
 * @s: input string
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
