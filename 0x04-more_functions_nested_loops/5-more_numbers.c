#include "main.h"

/**
 * more_numbers - Prints the numbers, from 0 to 14, 10 times
 */
void more_numbers(void)
{
	short i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			short j1 = j / 10;
			short j2 = j % 10;

			if (j1 > 0)
				_putchar(j1 + '0');
			_putchar(j2 + '0');
		}
		_putchar('\n');
	}
}
