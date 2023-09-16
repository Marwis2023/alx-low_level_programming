#include "main.h"

/**
 * print_triangle -  a program that prints a triangle using the '#' character
 *
 * @size: size of the triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int h, i;

	if (size > 0)
	{
		for  (h = 1; h <= size; h++)
		{
			for (i = size - h; i > 0; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i < h; i++)
			{
				_putchar('#');
			}
			if (h == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
