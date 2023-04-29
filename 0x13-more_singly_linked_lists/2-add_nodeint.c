#include "lists.h"

/**
 * add_nodeint - adds a new node to the head of a linked list
 * @head: head of the list
 * @n: val of the new node
 *
 * Return: new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
