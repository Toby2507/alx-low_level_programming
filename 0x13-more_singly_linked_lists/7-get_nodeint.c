#include "lists.h"

/**
 * get_nodeint_at_index - gets the data of the nth node in a linked list
 * @head: head of the node
 * @index: index of the node to look for
 *
 * Return: node or NULL if node not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (!head)
		return (NULL);
	while (n < index && head)
	{
		head = head->next;
		n++;
	}
	return ((n == index) ? head : NULL);
}
