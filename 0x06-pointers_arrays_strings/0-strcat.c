#include "main.h"

/**
 * _strcat - Concatenates 2 strings.
 * @dest: The string to be concatenated to
 * @src: The string to be concatenated from
 *
 * Return: Pointer of the string that was concatenated to (dest)
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (dest[len])
		len++;
	while (*src)
	{
		dest[len] = *src;
		len++;
		src++;
	}
	dest[len] = '\0';
	return (dest);
}
