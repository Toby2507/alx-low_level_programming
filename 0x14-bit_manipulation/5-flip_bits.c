#include "main.h"

/**
 * flip_bits - computes the number of bits to be flipped to get from 1
 * number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: no of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (!n && !m)
		return (0);
	return (((n & 1) ^ (m & 1)) + flip_bits(n >> 1, m >> 1));
}
