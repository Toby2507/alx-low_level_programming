#include "main.h"

/**
 * puts2 - Prints every other character in a string
 * @str: String to be printed
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len])
	{
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
