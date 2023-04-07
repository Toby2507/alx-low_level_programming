#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on if number is valid, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num, i = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	num = atoi(argv[1]);
	while (num > 0)
	{
		if (num >= 25)
		{
			i += num / 25;
			num %= 25;
		}
		else if (num >= 10)
		{
			i += num / 10;
			num %= 10;
		}
		else if (num >= 5)
		{
			i += num / 5;
			num %= 5;
		}
		else if (num >= 2)
		{
			i += num / 2;
			num %= 2;
		}
		else
		{
			i++;
			num %= 1;
		}
	}
	printf("%d\n", i);
	return (0);
}
