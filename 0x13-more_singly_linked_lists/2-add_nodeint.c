#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint- Node to be added
 * @newptr: pointer to the head of the list
 * @n: integer
 * Return: Always 0
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newptr;
	newptr = *head;
	newptr = malloc(sizeof(listint_t));
	if (newptr == NULL)
	{
		return (NULL);
	}
	newptr->n = n;
	newptr->next = *head;
	*head = newptr; 
	return (*head);
}
