#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	short i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			short x = i * j;
			short x1 = x / 10;
			short x2 = x % 10;

			if (x1 > 0)
				_putchar(x1 + '0');
			_putchar(x2 + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (x < 10 && x1 == 0)
					_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

