#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 *
 * Return: the deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *popped = *head;
	int pop_data = 0;

	if (!head || !(*head))
		return (pop_data);
	*head = popped->next;
	pop_data = popped->n;
	free(popped);
	return (pop_data);
}
