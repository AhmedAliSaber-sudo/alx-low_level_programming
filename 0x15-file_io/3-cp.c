#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - the entry point, have the code of copyin one file to another.
 * @argc: should be 3.
 * @argv: should have 3 items. first is the program name, the source file,
 * and the target file.
 * Return: 0 on sucess, and from 97 to 100 (exit values error).
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, n_read, n_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	while (n_read = read(file_from, buffer, BUFFER_SIZE) > 0)
	{
		if (n_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}

		n_written = write(file_to, buffer, n_read);
		if (n_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_to);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}

