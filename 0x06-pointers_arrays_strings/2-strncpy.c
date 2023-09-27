#include "main.h"

/**
* _strncpy - copies n bytes from the source to a destination string.
* @dest: the destination.
* @src: the source to copy.
* @n: n bytes to be copied.
* Return: copied string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
