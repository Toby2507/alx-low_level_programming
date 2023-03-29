#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_buffer - Prints a buffer
 * @b: pointer to the buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);
		for (j = i; j < (i + 10); j++)
		{
			if (j % 2 == 0)
				printf(" ");
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");
		}
		putchar(' ');
		for (j = i; j < (i + 10) && j < size; j++)
		{
			if (isprint(b[j]))
				putchar(b[j]);
			else
				putchar('.');
		}
		putchar('\n');
	}
}
