#include "lists.h"

/**
 * list_len - computes the no of elements in a linked list
 * @h: current node in list (initially the head)
 *
 * Return: no of nodes in linked list
 */
size_t list_len(const list_t *h)
{
	if (!h->next)
		return (1);
	return (1 + list_len(h->next));
}
