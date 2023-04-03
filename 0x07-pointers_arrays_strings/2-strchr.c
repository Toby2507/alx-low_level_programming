#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to be inspected
 * @c: Character to be found
 *
 * Return: Pointer to the 1st occurrence of @c in @s or NULL if @c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
