#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	return (0);
}
