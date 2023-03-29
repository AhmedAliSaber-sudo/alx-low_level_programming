#include "main.h"

/**
 * _strcpy -a function that copies the string from a variable to another.
 *
 * @src: char pointer varivable.
 * @dest: char pointer variable.
 *
 * Return: char pointer.
 */

char *_strcpy(char *dest, char *src)
{
	char *temp;
	temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return temp;
}
