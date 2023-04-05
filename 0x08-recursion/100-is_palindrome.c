#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: string to be checked
 *
 * Return: string length
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(++s));
}

/**
 * _is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @i: iterate num 1 (initiate with 0)
 * @j: iterate num 2 (initiate with strlen)
 *
 * Return: 1 if @s is a palindrome, otherwise 0
 */
int _is_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (_is_palindrome(s, ++i, --j));
}

/**
 * is_palindrome - returns if a string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_is_palindrome(s, 0, (_strlen(s) - 1)));
}
