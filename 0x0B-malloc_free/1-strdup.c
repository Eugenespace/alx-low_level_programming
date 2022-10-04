#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup(char *str)-returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: string
 *
 *Return: Pointer
 *
 */


char *_strdup(char *str)
{
	char *s;
	int i, z;

	if (str == NULL)
	{
		return (0);
	}

	z = 0;

	while (*(str + z))
	{
		z++;
	}

	s = malloc(sizeof(char) * (z + 1));

	if (s == 0)
	{
		return (0);
	}

	for (i = 0; i <= z ; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
