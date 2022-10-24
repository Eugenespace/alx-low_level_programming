#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked listint_t list.
 * @h: pointer of type listint_t
 * @next:pointer to the next node
 * Return: Always return 0
 */



size_t listint_len(const listint_t *h)
{
	size_t i;
	for (i = 0 ; h ; i++)
	{
		h = h->next;
       	}
	return (i);
}
