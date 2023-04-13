#include "main.h"

/**
 * array_range - creates and array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int range = max - min + 1, i;
	int *arr;

	if (range < 1)
		return (NULL);
	arr = malloc(range * sizeof(int));
	if (!arr)
		return (NULL);
	for (i = 0; i < range; i++)
		arr[i] = min + i;
	return (arr);
}
