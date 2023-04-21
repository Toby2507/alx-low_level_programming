#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: no of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strs, char*);

		str = str ? str : "(nil)";
		printf("%s", str);
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	va_end(strs);
	printf("\n");
}
