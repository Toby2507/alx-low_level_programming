#include "lists.h"

/**
 * dlistint_len - computes the no of nodes in a linked list
 * @h: head of the list
 *
 * Return: no of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next)
		nodes++;
	return (nodes);
}
