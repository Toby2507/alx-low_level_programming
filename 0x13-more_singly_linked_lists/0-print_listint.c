#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the linked list
 *
 * Return: no of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *curr = (listint_t *)h;
	size_t i = 0;

	for (; curr; curr = curr->next)
	{
		printf("%d\n", curr->n);
		i++;
	}
	return (i);
}
