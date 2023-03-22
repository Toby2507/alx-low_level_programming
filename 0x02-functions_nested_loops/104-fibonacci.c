#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int a1 = 0, a2 = 0, b1 = 1, b2 = 2, c;
	unsigned long int hold1, hold2, hold3;
	int i;

	printf("%lu, %lu, ", b1, b2);
	for (i = 3; i <= 98; i++)
	{
		c = b1 + b2;
		if (c > LARGEST || a1 > 0 || a2 > 0)
		{
			hold1 = c / LARGEST;
			hold2 = c % LARGEST;
			hold3 = a1 + a2 + hold1;
			a1 = a2, a2 = hold3;
			b1 = b2, b2 = hold2;
			printf("%lu%010lu", a2, b2);
		}
		else
		{
			hold2 = c;
			b1 = b2, b2 = hold2;
			printf("%lu", b2);
		}
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}

