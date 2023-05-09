#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int ac, char **av)
{
	int fd_in, fd_out, w_byte, r_byte;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_in = open(av[1], O_RDONLY);
	if (fd_in == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_out = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	while ((r_byte = read(fd_in, buffer, 1024)) > 0)
	{
		w_byte = write(fd_out, buffer, r_byte);
		if (w_byte != r_byte || w_byte == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (r_byte == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd_in) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_in);
	}
	if (close(fd_out) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_out);
	}
	return (0);
}
