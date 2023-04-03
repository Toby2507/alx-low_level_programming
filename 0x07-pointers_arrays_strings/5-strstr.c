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
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
