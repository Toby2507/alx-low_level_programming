#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be inspected
 * @c: Character to be found
 *
 * Return: Pointer to the 1st occurrence of @c in @s or NULL if @c is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
		if (c == s[i])
			return (s + i);
	return ('\0');
}
