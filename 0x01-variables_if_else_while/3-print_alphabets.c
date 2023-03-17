#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower_c = 'a';
	char upper_c = 'A';

	while (lower_c <= 'z')
	{
		putchar(lower_c);
		lower_c++;
	}
	while (upper_c <= 'Z')
	{
		putchar(upper_c);
		upper_c++;
	}
	putchar('\n');
	return (0);
}
