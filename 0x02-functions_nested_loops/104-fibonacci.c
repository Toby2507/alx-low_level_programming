#include <stdio.h>
#include <limits.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		if (b > (INT_MAX - a))
		{
			printf("%d, %d, ", a, b);
			a = 1;
			b = 2;
		}
		else
		{
			c = a + b;
			printf("%d", c);
			if (i != 98)
				printf(", ");
			a = b;
			b = c;
		}
	}
	printf("\n");
	return (0);
}
