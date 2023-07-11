#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to allocated space which contain a copy of string
 * @str: string.
 * Return: pointer of char.
 */

char *_strdup(char *str)
{
	int length, i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	length = strlen(str); /* get the length of the string */

	new_str = (char *) malloc((length + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i];
	}
	new_str[length] = '\0';
	return (new_str);
