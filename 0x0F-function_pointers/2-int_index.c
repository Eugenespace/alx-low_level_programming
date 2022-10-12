#include<stdio.h>

/**
 * int_index-function that searches for an integer
 * @size: size of array
 * @array: pointer to int
 * @cmp:func pointer
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}

	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
