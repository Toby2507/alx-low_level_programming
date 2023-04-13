#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char);
int _strlen(char *);
char *_realloc(char *, unsigned int);
void strrev(char *, int);
char *stradd(char *, char *);
char *strmul(char *, char, int, int);
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
	int len1, len2, i, j = 0;
	char *s1, *s2, *res = malloc(1);

	if (argc != 3)
		err();
	s1 = argv[1];
	s2 = argv[2];
	*res = '\0';
	len1 = _strlen(s1) - 1;
	len2 = _strlen(s2) - 1;
	for (i = len2; i >= 0; i--)
		res = stradd(res, strmul(s1, s2[i], len1, j++));
	print(res);
	free(res);
	return (0);
}

/**
 * _putchar - prints a char to the stdout
 * @c: character
 *
 * Return: 0 (success), 1 (failure)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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
			err();
		i++;
	}
	return (i);
}

/**
 * _realloc - increase the size of a memory block
 * @ptr: memory block
 * @size: new size
 *
 * Return: pointer to the new memory block
 */
char *_realloc(char *ptr, unsigned int size)
{
	char *newptr;
	unsigned int i;

	newptr = malloc(size);
	if (!newptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size - 1; i++)
		newptr[i] = ptr[i];
	free(ptr);
	return (newptr);
}

/**
 * strrev - reverses a string
 * @s: string
 * @n: size of string
 */
void strrev(char *s, int n)
{
	int i;

	for (i = 0; i <= n / 2; i++)
	{
		char temp = s[i];

		s[i] = s[n - i];
		s[n - i] = temp;
	}
}

/**
 * stradd - adds 2 strings together
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the result
 */
char *stradd(char *s1, char *s2)
{
	char *res;
	int carry = 0, i = 0, n1 = _strlen(s1), n2 = _strlen(s2);

	res = malloc(i + 1);
	if (!res)
	{
		free(s1);
		free(s2);
		err();
	}
	while (n1 > 0 || n2 > 0 || carry)
	{
		int sum = carry;

		res = _realloc(res, i + 2);
		if (!res)
		{
			free(s1);
			free(s2);
			err();
		}
		if (n1 > 0)
			sum += s1[--n1] - '0';
		if (n2 > 0)
			sum += s2[--n2] - '0';
		carry = sum / 10;
		res[i++] = sum % 10 + '0';
	}
	res[i] = '\0';
	strrev(res, i - 1);
	free(s1);
	free(s2);
	return (res);
}

/**
 * strmul - multiply a string by a character
 * @s: string
 * @c: character
 * @n: size of @s
 * @pad: no of prefix 0 padding
 *
 * Return: pointer to the result
 */
char *strmul(char *s, char c, int n, int pad)
{
	char *res;
	int carry = 0, i = 0, j = 0;

	res = malloc(pad + 1);
	if (!res)
		err();
	for (i = 0; i < pad; i++)
		res[i] = '0';
	while (n >= 0 || carry)
	{
		int mul = carry;

		res = _realloc(res, pad + j + 2);
		if (!res)
			err();
		if (n >= 0)
			mul += (s[n--] - '0') * (c - '0');
		carry = mul / 10;
		res[pad + j++] = mul % 10 + '0';
	}
	res[pad + j] = '\0';
	strrev(res, pad + j - 1);
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
