#include "main.h"

/**
 * _memset - fills the first n bytes of the memory with a constant value.
 * @s: pointer to memory area.
 * @b: constant byte.
 * @n: number of bytes to fill.
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
