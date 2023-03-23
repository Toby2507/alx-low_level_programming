#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i, max = -1, num = 612852475143;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max = i;
			num /= i;
		}
	}
	if (num > 2)
		max = num;
	printf("%ld\n", max);
	return (0);
}
