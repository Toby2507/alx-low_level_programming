#include "main.h"

/**
 * includes - Checks if a character is in a string
 * @str: String to be checked
 * @c: character
 *
 * Return: 1 if string in character, 0 otherwise
 */
int includes(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to be inspected
 * @accept: accepted bytes
 *
 * Return: number of bytes which consists of only the accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s)
	{
		if (includes(accept, *s))
		{
			i++;
			s++;
		}
		else
			return (i);
	}
	return (i);
}
