#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: points to a string that is about binary numbers.
 * Return: unsigned int if succeed or 0 if failed.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result * 2 + (*b++ - '0');
	}

	return (result);
