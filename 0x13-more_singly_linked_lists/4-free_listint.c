#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head, *next = NULL;

	for (; curr; curr = next)
	{
		next = curr->next;
		free(curr);
	}
}
