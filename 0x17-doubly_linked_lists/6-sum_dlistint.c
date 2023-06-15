#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data in a linked list
 * @h: head of the list
 *
 * Return: sum of all the data in the list
 */
int sum_dlistint(dlistint_t *h)
{
	int sum = 0;
	dlistint_t *curr = h;

	for (; curr; curr = curr->next)
		sum += curr->n;
	return (sum);
}
