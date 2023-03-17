#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10;)
		putchar(i++ + '0');
	for (i = 'a'; i <= 'f';)
		putchar(i++);
	putchar('\n');
	return (0);
}
