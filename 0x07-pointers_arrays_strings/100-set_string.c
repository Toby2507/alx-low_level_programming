#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: pointer whose value is to be set
 * @to: char to set @s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
