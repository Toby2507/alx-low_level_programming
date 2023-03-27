#include "main.h"

/**
 * puts2 - Prints every other character in a string
 * @str: String to be printed
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
