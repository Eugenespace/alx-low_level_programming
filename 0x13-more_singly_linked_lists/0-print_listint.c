#include "lists.h"
#include <stdio.h>

/**
 *print_listint- prints all the elements of a list_t list
 *@h: pointer to the next node
 *Return: Always 0
 */



size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h ; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
