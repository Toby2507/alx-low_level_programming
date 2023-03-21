#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The print starting point
 */
void print_to_98(int n)
{
	for (; n != 98;)
	{
		if (n < 98)
			printf("%d, ", n++);
		else
			printf("%d, ", n--);
	}
	printf("98\n");
}

