# Pointers, Arrays and Strings part 2

## 0-strcat.c

This function concatenates two strings.

## 1-strncat.c

This function concatenates two strings.
- The _strncat function is similar to the _strcat function, except that
		- it will use at most n bytes from src; and
		- src does not need to be null-terminated if it contains n or more bytes

## 2-strncpy.c

This function copies a string. Works exactly like strncpy from the standard library.

## 3-strcmp.c

This function compares two strings. Works exactly like strcmp from the standard
library.

## 4-rev_array.c

This function reverses the content of an array of integers.

## 5-string_toupper.c

This function changes all lowercase letters of a string to uppercase.

## 6-cap_string.c

This function capitalizes all words of a string.

## 7-leet.c

This function encodes a string into 1337.
- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1

## 100-rot13.c

This function encodes a string using rot13

## 101-print_number.c

This function prints an integer as a string.

## 102-magic.c

Updates the file to print a different result.

## 103-infinite_add.c

This function adds 2 numbers. Both the numbers and the result is a string.

## 104-print_buffer.c

This function prints a buffer.
- The function must print the content of size bytes of the buffer pointed by b
- The output should print 10 bytes per line
- Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
- Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
- Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
- Each line ends with a new line \n
- If size is 0 or less, the output should be a new line only \n

