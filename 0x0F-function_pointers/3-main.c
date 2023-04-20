#include "3-calc.h"

/**
 * main - performs a simple arithmetic operation
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int (*action)(int, int);
	char *op, *ops = "+-*/%";
	int num1, num2, res;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (!strchr(ops, *op))
	{
		puts("Error");
		exit(99);
	}
	if ((strcmp(op, "/") || strcmp(op, "%")) && num2 == 0)
	{
		puts("Error");
		exit(100);
	}
	action = get_op_func(op);
	res = (*action)(num1, num2);
	printf("%d\n", res);
	return (0);
}
