#include "lists.h"

/**
 * listint_len - computes the no of nodes in a linked list
 * @h: current node in list (initially head of the list)
 *
 * Return: no to nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);
	if (!h->next)
		return (1);
	return (1 + listint_len(h->next));
}
