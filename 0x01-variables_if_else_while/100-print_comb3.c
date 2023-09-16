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

	for (g = 48; g < 57; g++)
	{
		for (w = 49; w < 58; w++)
		{
			if (g > w)
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
