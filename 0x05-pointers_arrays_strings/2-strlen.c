#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the first character of the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
