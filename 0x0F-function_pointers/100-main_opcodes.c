#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints its own opcode
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	void *main_addr;
	unsigned char *start;
	int n, i;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error");
		exit(2);
	}
	main_addr = &main;
	start = main_addr;

	for (i = 0; i < n; i++)
	{
		printf("%02x", start[i]);
		if (i !=  n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
