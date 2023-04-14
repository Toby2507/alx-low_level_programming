#include <stdio.h>
#include <stdlib.h>
int _putchar(char);
int _strlen(char *);
char *strmul(char *, char *);
void print(char *);
void err(void);

/**
 * main - multiplies 2 positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	char *res;

	if (argc != 3 || !_strlen(argv[1]) || !_strlen(argv[2]))
		err();
	res = strmul(argv[1], argv[2]);
	print(res);
	free(res);
	return (0);
}

/**
 * _strlen - computes the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (i);
}

/**
 * strmul - multiply 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the result
 */
char *strmul(char *s1, char *s2)
{
	int len1 = _strlen(s1), len2 = _strlen(s2), size, i, j;
	char *res, *temp;

	size = len1 + len2;
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		err();
	for (i = 0; i < size; i++)
		res[i] = '0';
	res[size] = '\0';
	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			int prod = (s1[i] - '0') * (s2[j] - '0');

			prod += (res[i + j + 1] - '0') + carry;
			res[i + j + 1] = prod % 10 + '0';
			carry = prod / 10;
		}
		res[i] += carry;
	}
	temp = res;
	while (*temp == '0' && *(temp + 1))
		temp++;
	if (temp != res)
	{
		int diff = temp - res;

		size -= diff;
		res = malloc(sizeof(char) * (size + 1));
		if (!res)
		{
			free(temp - diff);
			err();
		}
		for (i = 0; i < size; i++)
			res[i] = temp[i];
		res[size] = '\0';
		free(temp - diff);
	}
	return (res);
}

/**
 * print - print a string to the stdout
 * @s: string
 */
void print(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);
	_putchar('\n');
}

/**
 * err - prints Error and exits with a status of 98
 */
void err(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
