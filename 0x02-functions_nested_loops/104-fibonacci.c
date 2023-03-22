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

	long double a = 1, b = 2, c;

	printf("%.0Lf, %.0LF, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%.0Lf", c);
		if (i != 98)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

