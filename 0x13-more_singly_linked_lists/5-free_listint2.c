#include "lists.h"

/**
 * free_listint2 - frees a linked list memory
 * @head: list head
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = NULL, *next = NULL;

	if (!head)
		return;
	curr = *head;
	for (; curr; curr = next)
	{
		next = curr->next;
		free(curr);
	}
	*head = NULL;
}
