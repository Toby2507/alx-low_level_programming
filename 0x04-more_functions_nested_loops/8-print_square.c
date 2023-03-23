#include "main.h"

/**
 * print_square - Prints a square using the # character
 * @size: dimensions of the square
 */
void print_square(int size)
{
	short i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
