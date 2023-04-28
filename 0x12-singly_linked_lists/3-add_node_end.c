#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the linked list
 * @str: value to be added to the list
 *
 * Return: the head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t)), *curr = *head;

	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
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
