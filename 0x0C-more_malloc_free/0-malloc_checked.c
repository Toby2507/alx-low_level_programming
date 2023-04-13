#include "main.h"

/**
 * malloc_checked - allocates memory and returns a valid pointer using malloc
 * @b:size of memory to be allocated
 *
 * Return: pointer to allocated memory (success), otherwise terminate with 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
