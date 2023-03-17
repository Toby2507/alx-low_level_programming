#include <stdio.h>

/**
 * main - Prints all possible different combinations of 2 digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		int i1 = i / 10;
		int i2 = i % 10;

		if (i1 < i2)
		{
			putchar(i1 + '0');
			putchar(i2 + '0');
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
