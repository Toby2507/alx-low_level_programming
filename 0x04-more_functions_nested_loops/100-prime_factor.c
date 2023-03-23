#include <stdio.h>
#include <stdbool.h>

/**
 * is_prime - Checks if a number is a prime number
 * @n: number to be checked
 *
 * Return: true if n is a prime number, otherwise false
 */
bool is_prime(int n)
{
	int i;

	if (n < 2)
		return (false);
	for (i = (n / 2); i >= 2; i--)
		if (n % i == 0)
			return (false);
	return (true);
}

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i, num = 612852475143;

	for (i = (num / 2); i >= 2; i--)
	{
		if (num % i == 0)
			if (is_prime(i))
			{
				printf("%ld\n", i);
				break;
			}
	}
	return (0);
}
