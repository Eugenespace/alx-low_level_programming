#include <stdio.h>

/**
 * array_iterator- iterates the array
 * @action:function pointer
 * @array:array to iterate
 * @size: size of array
 *
 * Return: Always 0
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
