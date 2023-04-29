#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the tail of the list
 * @head: head of the list
 * @n: val of the new node
 *
 * Return: head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t)), *curr = *head;

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!(*head))
	{
		*head = node;
		return (*head);
	}
	while (curr->next)
		curr = curr->next;
	curr->next = node;
	return (*head);
}
