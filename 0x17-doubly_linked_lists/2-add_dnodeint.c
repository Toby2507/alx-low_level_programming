#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @h: head of the list
 * @n: value of the new node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *h;
	new_node->prev = NULL;
	if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
}
