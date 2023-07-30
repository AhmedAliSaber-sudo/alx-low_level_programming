#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words.
 * @str: string.
 * Return: a pointer to an array of strings.
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count, start;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0, count = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
		while (str[j] == ' ')
			j++;
		start = j;
		while (str[j] && str[j] != ' ')
			j++;
		len = j - start;
		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strncpy(words[i], str + start, len);
		words[i][len] = '\0';
	}
	words[count] = NULL;
	return (words);
}
