#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: function to be used on each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
