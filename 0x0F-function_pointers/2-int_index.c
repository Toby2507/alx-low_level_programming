#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: comparing function to use on the integers
 *
 * Return: index of first int that matches, -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
