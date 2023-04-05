#include "main.h"

/**
 * wildcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Description: @s2 can contain the special character which can replace any
 * string (including an empty string)
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	if (*s2 == '*')
	{
		if (!*s1 && !*(s2 + 1))
			return (1);
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		if (!*s1)
			return (0);
		if (*(s2 + 1) == *s1)
			return (wildcmp(++s1, s2 + 2) || wildcmp(++s1, s2));
		return (wildcmp(++s1, s2));
	}
	return (0);
}
