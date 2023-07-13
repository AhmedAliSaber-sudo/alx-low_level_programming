#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	size_t len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL) /* validate input */
		return (NULL);

	/* find length to malloc */
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += (ac + 1); /* add space for newlines and null terminator */

	/* allocate memory and free if error */
	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	/* insert each arg into *str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}
