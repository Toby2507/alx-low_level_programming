#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node in a linked list
 * @h: head of the linked list
 * @idx: index to lookup
 *
 * Return: node at index, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int idx)
{
	dlistint_t *curr = h;
	unsigned int i;

	for (i = 0; curr && i < idx; i++)
		curr = curr->next;
	return (i == idx ? curr : NULL);
}
