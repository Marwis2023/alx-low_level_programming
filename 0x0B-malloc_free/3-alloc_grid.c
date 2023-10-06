#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **iya;

	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	iya = malloc(sizeof(int *) * height);

	if (iya == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		iya[m] = malloc(sizeof(int) * width);

		if (iya[m] == NULL)
		{
			for (; m >= 0; m--)
				free(iya[m]);

			free(iya);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			iya[m][n] = 0;
	}

	return (iya);
}
