#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array to be reversed
 * @n: Size of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	if (n <= 1)
		return;
	n--;
	for (i = 0; i <= (n / 2); i++)
	{
		int temp = a[i];

		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
