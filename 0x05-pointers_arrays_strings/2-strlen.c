#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: a pointer varible of the type char.
 *
 * Return: void.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
