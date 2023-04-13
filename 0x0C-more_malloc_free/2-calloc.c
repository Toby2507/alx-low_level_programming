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
	void *arr;

	if (nmemb < 1 || size < 1)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*((char *)arr + i) = 0;
	return (arr);
}
