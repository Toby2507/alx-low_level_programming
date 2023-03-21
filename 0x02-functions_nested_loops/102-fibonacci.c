#include <stdio.h>

/**
 * fib - Computes the first 50 Fibonacci numbers
 * @n: The nth number in the fib sequence
 *
 * Return: All 50 computed fib numbers
 */
long int fib(int n)
{
	static long int memo[50] = {0};

	if (n == 1 || n == 2)
		return (1);
	if (memo[n])
		return (memo[n]);
	memo[n] = fib(n - 2) + fib(n - 1);
	return (memo[n]);
}

/**
 * main - Prints first 50 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	short i;

	for (i = 2; i <= 51; i++)
		if (i < 51)
			printf("%ld, ", fib(i));
		else
			printf("%ld", fib(i));
	printf("\n");
	return (0);
}

