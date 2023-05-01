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
	const listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
				printf("[%p] %d\n", (void *)fast, fast->n);
				fast = fast->next;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (count + 1);
		}
		count++;
	}
	for (; slow; slow = slow->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	return (count);
}
