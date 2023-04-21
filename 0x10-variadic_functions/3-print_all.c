#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints anything
 * @format: format of what to be printed
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c, *str, *validfmt = "cifs";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		c = format[i];
		if (strchr(validfmt, c))
		{
			switch (c)
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				str = str ? str : "(nil)";
				printf("%s", str);
				break;
			default:
				break;
			}
			if (format[i + 1])
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
