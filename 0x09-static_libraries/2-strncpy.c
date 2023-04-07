#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Where string is copied to
 * @src: Where string is copied from
 * @n: How many bytes of the string is copied
 *
 * Return: pointer of the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
