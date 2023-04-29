#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: head of linked list
 * @index: index in view
 *
 * Return: 1 (success), -1 otherwise;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *curr = *head;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	while (curr->next && i < index - 1)
	{
		curr = curr->next;
		i++;
	}
	if (curr->next && i == index - 1)
	{
		node = curr->next;
		curr->next = node->next;
		free(node);
		return (1);
	}
	return (-1);
}
