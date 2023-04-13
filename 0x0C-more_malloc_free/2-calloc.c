#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: no of members
 * @size: size of each members
 *
 * Return: pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
