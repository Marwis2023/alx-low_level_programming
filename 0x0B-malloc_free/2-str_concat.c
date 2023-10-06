#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 * @s1: input string one to concatenates
 * @s2: input string two to concatenates
 *
 * Return: concatenation of s1 and s2/
 */
char *str_concat(char *s1, char *s2)
{
	char *conStr;

	int c, g;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = g = 0;

	while (s1[c] != '\0')
		c++;

	while (s2[g] != '\0')
		g++;

	conStr = malloc(sizeof(char) * (c + g + 1));

	if (conStr == NULL)
		return (NULL);

	c = g = 0;

	while (s1[c] != '\0')
	{
		conStr[c] = s1[c];
		c++;
	}
	while (s2[g] != '\0')
	{
		conStr[c] = s2[g];
		c++;
		g++;
	}
	conStr[c] = '\0';
	return (conStr);
}
