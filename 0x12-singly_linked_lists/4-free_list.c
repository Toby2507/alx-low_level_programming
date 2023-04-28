#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *curr = head, *next = NULL;

	for (; curr; curr = next)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
	}
}
