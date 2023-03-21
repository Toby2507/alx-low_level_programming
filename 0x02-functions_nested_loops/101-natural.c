#include <stdio.h>
#include "main.h"

/**
 * main - Computes and prints the sum of all multiples of 3 and 5 below 1024
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	}
	printf("%d\n", res);
	return (0);
}

