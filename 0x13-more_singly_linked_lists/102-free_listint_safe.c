#include "lists.h"

/**
 * free_listint_safe - free a linked list
 * @h: head of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	size_t bytes = 0;

	if (!h || !(*h))
		return (bytes);
	curr = *h;
	while (curr)
	{
		next = curr->next;
		free(curr);
		bytes++;
		if (next >= curr)
		{
			*h = NULL;
			return (bytes);
		}
		curr = next;
	}
	*h = NULL;
	return (bytes);
}
