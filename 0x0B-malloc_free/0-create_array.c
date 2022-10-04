#include<stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char
 *
 * @c: character c
 * @size: size of array
 *
 * Return: Pointer
 *
 */


char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	ch = malloc(sizeof(char) * size);

	if (ch == 0)
		return (0);

	for (i = 0; size > i; i++)
	{
		*(ch + i) = c;
	}

	*(ch + i) = '\0';

	return (ch);
}


