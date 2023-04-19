#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function that does the printing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
