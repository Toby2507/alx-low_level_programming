#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head of list
 *
 * Return: no of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		temp = head;
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (98);
		}
	}
	return (count);
}
