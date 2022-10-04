#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 *@width: width
 *@height: height
 *
 * Return: NULL
 */



int **alloc_grid(int width, int height)
{
	int i, j;
	int m, l;
	int **s;

	if (width <= 0)
	{
		return (0);
	}
	if (height <= 0)
	{
		return (0);
	}

	s = malloc(sizeof(int *) * height);

	if (s == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(sizeof(int) * width);
		if (*(s + i) == 0)
		{
			l = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	if (l == 1)
	{
		for (m = 0; m <= i; m++)
		{
			free(*(s + m));
		}
		free(s);
	}
	return (s);
}
