#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: idx to add the node
 * @n: value of the new node
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *n_node;
	unsigned int i;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; curr && i < idx; i++)
		curr = curr->next;
	if (i == idx)
	{
		if (curr == NULL)
			return (add_dnodeint_end(h, n));
		n_node = malloc(sizeof(dlistint_t));
		if (!n_node)
			return (NULL);
		n_node->n = n;
		n_node->next = curr;
		n_node->prev = curr->prev;
		curr->prev->next = n_node;
		curr->prev = n_node;
		return (n_node);
	}
	return (NULL);
}
