#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previous allocated memory
 * @old_size: @ptr old size
 * @new_size: new size
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i, j;

	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	newptr = malloc(new_size);
	if (!newptr)
		return (NULL);
	j = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < j; i++)
		*((char *)newptr + i) = *((char *)ptr + i);
	free(ptr);
	return (newptr);
}
