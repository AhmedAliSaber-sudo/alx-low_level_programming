#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a copy of string.
 * @str: string.
 * Return: pointer of char.
 */

char *_strdup(char *str)
{
	int len, i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	len = strlen(str); /* get the length of the string */

	new_str = (char *) malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';
	return (new_str);
}
