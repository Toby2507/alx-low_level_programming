#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @h: head of the linked list
 * @idx: index to insert new node
 * @n: value of the new node
 *
 * Return: new node or NULL if not possible
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	listint_t *node = NULL, *curr = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	while (i < idx - 1 && curr)
	{
		curr = curr->next;
		i++;
	}
	if ((i == idx - 1 && curr) || idx == 0)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = idx == 0 ? *h : curr->next;
		if (idx == 0)
			*h = node;
		else
			curr->next = node;
	}
	return (node);
}
