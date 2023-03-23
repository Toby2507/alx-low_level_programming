#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	short i, j;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
