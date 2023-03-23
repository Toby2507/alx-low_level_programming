#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Length of line
 */
void print_line(int n)
{
	short i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
