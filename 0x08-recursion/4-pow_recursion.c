#include "main.h"

/**
 * _pow_recursion - computes the value of x raised to the power of y
 * @x: first operand
 * @y: second operand
 *
 * Return: value of the exponential, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
