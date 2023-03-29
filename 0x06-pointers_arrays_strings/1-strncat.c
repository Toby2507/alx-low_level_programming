#include "main.h"

/**
 * _strncat - Concatenates 2 strings
 * @dest: String to be concatenated to
 * @src: String to be concatenated from
 * @n: At most n bytes from src
 *
 * Return: Pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; i < n && src[i]; i++)
		dest[len++] = src[i];
	dest[len] = '\0';
	return (dest);
}
