#include <stdio.h>







void array_iterator(int *array, size_t size, void (*action)(int))
{
	(*array)(*action);
}
