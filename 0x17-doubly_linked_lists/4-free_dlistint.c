#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @h: head of the list
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *curr = h, *next = NULL;

	for (; curr; curr = next)
	{
		next = curr->next;
		free(curr);
	}
}
