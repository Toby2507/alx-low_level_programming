#include "main.h"

/**
 * read_textfile - reads a text file and prints to the standard output
 * @filename: file name
 * @letters: no of letters to read and print
 *
 * Return: no of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, r_bytes, w_bytes;

	if (!filename || !letters)
		return (0);
	fd  = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	r_bytes = read(fd, buffer, letters);
	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	if (w_bytes != r_bytes || w_bytes < 0 || r_bytes < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w_bytes);
}
