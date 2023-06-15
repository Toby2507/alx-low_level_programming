#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @h: head of the list
 * @n: value of new node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *l_node = *h, *n_node = malloc(sizeof(dlistint_t));

	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	n_node->prev = NULL;
	if (*h == NULL)
	{
		*h = n_node;
		return (n_node);
	}
	while (l_node->next)
		l_node = l_node->next;
	n_node->prev = l_node;
	l_node->next = n_node;
	return (n_node);
}
