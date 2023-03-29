#include "main.h"
void rev_string(char *, int);

/**
 * infinite_add - Adds 2 numbers. P.S. The numbers and result should be strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store result
 * @size_r: Size of the buffer
 *
 * Return: pointer to the result or 0 if the result is greater than the buffer
 * size
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, i = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	len1--;
	len2--;
	while (len1 >= 0 || len2 >= 0 || carry)
	{
		int sum = carry;

		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';
		carry = sum / 10;
		if (i < size_r - 1)
			r[i++] = sum % 10 + '0';
		else
			return (0);
	}
	r[i] = '\0';
	rev_string(r, i - 1);
	return (r);
}

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 * @len: String length
 */
void rev_string(char *s, int len)
{
	int i;

	for (i = 0; i <= (len / 2); i++)
	{
		char temp = s[i];

		s[i] = s[len - i];
		s[len - i] = temp;
	}
}
