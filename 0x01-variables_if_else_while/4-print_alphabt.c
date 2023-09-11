#include <stdio.h>

/**
 * main - A program that prints alphabets in lowercase and omit some
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
			letters++;
		}
		putchar('\n');
	}

	return (0);
}
