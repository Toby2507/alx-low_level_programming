#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: Acceptable bytes
 *
 * Return: a pointer in @s that matches 1 of the bytes in @accept, NULL if no
 * such byte
 */
char *_strpbrk(char *s, char *accept)
{
	short i;

	while (*s)
	{
		i = 0;
		while (accept[i])
			if (accept[i++] == *s)
				return (s);
		s++;
	}
	return ('\0');
}
