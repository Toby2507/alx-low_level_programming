#include <string.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: String under review
 *
 * Return: Pointer to the string
 */
char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; s[i]; i++)
		if ((s[i] >= 'a' && s[i] <= 'z') && strchr(sep, s[i - 1]))
			s[i] -= 32;
	return (s);
}
