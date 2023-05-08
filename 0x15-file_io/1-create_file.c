#include "main.h"

/**
 * create_file - creates a file.
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_bytes = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
		w_bytes = write(fd, text_content, strlen(text_content));
	if (w_bytes < 0)
		return (-1);
	close(fd);
	return (1);
}
