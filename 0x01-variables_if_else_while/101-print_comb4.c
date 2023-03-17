#include <stdio.h>

/**
 * main - Prints all possible combinations of 3 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		int i1 = i / 100;
		int i2 = (i % 100) / 10;
		int i3 = i % 10;

		if ((i1 < i2) && (i2 < i3))
		{
			putchar(i1 + '0');
			putchar(i2 + '0');
			putchar(i3 + '0');
			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
