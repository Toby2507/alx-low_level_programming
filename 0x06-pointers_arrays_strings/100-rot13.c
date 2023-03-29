#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: String to be encoded
 *
 * Return: Pointer to the string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		char c = s[i];

		if (c >= 'A' && c <= 'Z')
			s[i] = (((c - 'A') + 13) % 26) + 'A';
		else if (c >= 'a' && c <= 'z')
			s[i] = (((c - 'a') + 13) % 26) + 'a';
		i++;
	}
	return (s);
}
