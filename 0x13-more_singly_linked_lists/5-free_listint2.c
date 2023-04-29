#include "lists.h"

/**
 * free_listint2 - frees a linked list memory
 * @head: list head
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head, *next = NULL;

	for (; curr; curr = next)
	{
		next = curr->next;
		free(curr);
	}
	*head = NULL;
}
