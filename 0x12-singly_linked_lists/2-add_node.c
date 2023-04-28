#include "lists.h"

/**
 * add_node - adds a new node at to the head of a linked list
 * @head: head of the linked list
 * @str: value of new node
 *
 * Return: new head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (*head);
}
