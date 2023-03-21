#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table to print
 *
 * Description: If n is greater than 15 or less than 0 the function prints
 * nothing
 */
void print_times_table(int n)
{
	short i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			short x = i * j, short x1 = x / 100;
			short x2 = (x % 100) / 10, short x3 = x % 10;

			if (x1 > 0)
			{
				_putchar(x1 + '0');
				_putchar(x2 + '0');
			}
			else
			{
				if (j > 0)
					_putchar(' ');
				if (x2 > 0)
					_putchar(x2 + '0');
				else
					if (j > 0)
						_putchar(' ');
			}
			_putchar(x3 + '0');
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}

