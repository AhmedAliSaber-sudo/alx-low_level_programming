#include "main.h"

/**
* _strncat - concatenates n bytes from src to destination string
* @dest: string to be appended to.
* @src: string to append.
* @n: number of bytes to be appended.
* Return: concatenated string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}



	while (i < n && *src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
		i++;
	}

	*dest_end = '\0';

	return (dest);
}
