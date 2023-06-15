#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at nth index in a linked list
 * @h: head of the list
 * @idx: index under review
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	dlistint_t *curr = *h;
	unsigned int i;

	if (!h || !(*h))
		return (-1);
	if (idx == 0)
	{
		*h = (*h)->next;
		if (*h)
			(*h)->prev = NULL;
		free(curr);
		return (1);
	}
	for (i = 0; curr && i < idx; i++)
		curr = curr->next;
	if (curr && i == idx)
	{
		if (curr->prev)
			curr->prev->next = curr->next;
		if (curr->next)
			curr->next->prev = curr->prev;
		free(curr);
		return (1);
	}
	return (-1);
}
