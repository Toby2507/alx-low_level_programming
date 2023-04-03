#include "main.h"

/**
 * _memcpy - Copies memory area from a source to a different memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: number of bytes to be copied
 *
 * Return: Pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		dest[i++] = src[i];
	return (dest);
}
