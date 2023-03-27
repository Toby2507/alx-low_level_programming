#include "main.h"

/**
 * _strcpy - Copies a string into a buffer
 * @dest: Buffer when the string would be copied to
 * @src: String to be copied
 *
 * Return: The pointer to the buffer
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len])
		len++;
	for (i = 0; i <= len; i++)
		*(dest + i) = src[i];
	return (dest);
}
