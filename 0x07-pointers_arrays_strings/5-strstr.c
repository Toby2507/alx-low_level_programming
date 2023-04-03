#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: String under review
 * @needle: Substring to be found
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int len = 0, i = 0;

	while (needle[len])
		len++;
	while (*haystack)
	{
		if (*haystack == needle[i])
		{
			i++;
			if (i == len)
				return (haystack -= (len - 1));
		}
		else
			i = 0;
		haystack++;
	}
	return ('\0');
}
