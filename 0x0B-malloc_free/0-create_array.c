#include "main.h"

/**
 * create_array - Creates an array of chars and initialize it with a char.
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to created array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
