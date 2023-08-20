#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the file name.
 * @text_content: is a null terminated string to write to the file.
 * Returns: 1 on sucess, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{

	int fd, n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
		n_written = write(fd, text_content, strlen(text_content));

	close(fd);
	return (n_written == -1 ? -1 : 1);
}

