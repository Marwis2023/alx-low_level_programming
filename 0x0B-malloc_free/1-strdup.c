#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a paramete
 * @str: string of characters
 *
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *g;
	int f, w = 0;

	if (str == NULL)
		return (NULL);
	f = 0;
	while (str[f] != '\0')
		f++;
	g = malloc(sizeof(char) * (f + 1));

	if (g == NULL)
		return (NULL);
	for (w = 0; str[w]; w++)
		g[w] = str[w];
	return (g);
}

