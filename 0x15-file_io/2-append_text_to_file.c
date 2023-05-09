#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: file name
 * @text_content: text content to be appended
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_bytes = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		w_bytes = write(fd, text_content, strlen(text_content));
	if (w_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
