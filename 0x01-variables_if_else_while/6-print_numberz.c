#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
		putchar(n++ + '0');
	putchar('\n');
	return (0);
}
