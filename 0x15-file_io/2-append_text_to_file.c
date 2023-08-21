#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_written, exist;

	exist = access(filename, F_OK);

	if (!filename)
		return (-1);

	if (exist)
		fd = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content)
		n_written = write(fd, text_content, strlen(text_content));

	close(fd);
	return (n_written == -1 ? -1 : 1);
}

