#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
		putchar('\n');
	return (0);
}
