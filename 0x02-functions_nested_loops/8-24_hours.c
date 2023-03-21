#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	short i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			short i1 = i / 10;
			short i2 = i % 10;
			short j1 = j / 10;
			short j2 = j % 10;

			_putchar(i1 + '0');
			_putchar(i2 + '0');
			_putchar(':');
			_putchar(j1 + '0');
			_putchar(j2 + '0');
			_putchar('\n');
		}
	}
}

