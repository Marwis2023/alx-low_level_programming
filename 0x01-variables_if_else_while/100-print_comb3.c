#include <stdio.h>

/**
 * main - a program that prints all possible different
 * combinations of two digits
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int g, w;

	for (g = 48; g <= 56; g++)
	{
		for (w = 49; w <= 57; w++)
		{
			if (w > g)
			{
				putchar(g);
				putchar(w);
				if (w != 56 || g != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
