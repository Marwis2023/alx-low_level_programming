#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A program that prints alphabets in lowercase and omit some
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int letters;

	for (letters = 97; letters < 123; letters++)
	{
		if (letters != 101 && letters != 113)
		{
			putchar(letters);
		}
	}
	putchar('\n');

	return (0);
}
