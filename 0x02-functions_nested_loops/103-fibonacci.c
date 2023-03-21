#include <stdio.h>

/**
 * fib - Computes the nth number in the fib sequence
 * @n: The nth number
 *
 * Return: The nth number in the fib sequence
 */
int fib(int n)
{
	static int memo[50] = {0};

	if (n == 1 || n == 2)
		return (1);
	if (memo[n])
		return (memo[n]);
	memo[n] = fib(n - 2) + fib(n - 1);
	return (memo[n]);
}

/**
 * main - Prints the sum of numbers in the fib sequence
 *
 * Description: The numbers need to be even-valued and under 4,000,000
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int curr = 0, finalsum = 0;

	for (i = 1; curr <= 4000000; i++)
	{
		curr = fib(i);
		if (curr % 2 == 0)
			finalsum += curr;
	}
	printf("%d\n", finalsum);
	return (0);
}
