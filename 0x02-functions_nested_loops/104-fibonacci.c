#include <stdio.h>
#include <limits.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long a = 1, b = 2, c;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		if (c < b)
		{
			unsigned long carry = a >> (sizeof(unsigned long) * 8 - 1);
			printf("%lu, %lu, ", a, b);
			a = b - carry;
			b = c - carry;
		}
		else
		{
			printf("%lu", c);
			if (i != 98)
				printf(", ");
			a = b;
			b = c;
		}
	}
	printf("\n");
	return (0);
}
