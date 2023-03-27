#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len])
		len++;
	i = (len % 2) ? (len / 2) + 1 : (len / 2);
	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
