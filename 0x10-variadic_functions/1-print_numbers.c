#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: number separator
 * @n: no of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
