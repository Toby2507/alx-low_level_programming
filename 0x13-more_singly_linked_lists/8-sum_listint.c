#include "lists.h"

/**
 * sum_listint - computes the sum of all data in the linked list
 * @head: head of the list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_listint(head->next));
}
