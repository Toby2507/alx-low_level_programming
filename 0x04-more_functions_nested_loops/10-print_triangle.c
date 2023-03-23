#include "main.h"

/**
 * print_triangle - Prints a triangle on the terminal
 * @size: opp and adj of the triangle
 */
void print_triangle(int size)
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
		{
			if (j > (size - i))
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
