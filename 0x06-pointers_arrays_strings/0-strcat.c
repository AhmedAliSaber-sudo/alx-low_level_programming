#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: string to be appended to.
* @src: string to append.
* Return: the concatenated string.
*/

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
