#include "lists.h"

/**
 * print_list - prints all the elements in a list_t list
 * @h: current node in the linked list (initially the head)
 *
 * Return: no of elements in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *node = (list_t*)h;

	while (node)
	{
		if (!node->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		node = node->next;
		count++;
	}
	return (count);
}
