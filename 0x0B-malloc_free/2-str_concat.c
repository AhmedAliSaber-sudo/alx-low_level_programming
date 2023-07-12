#include <stdlib.h>
#include <string.h>
#include "main.h"
/*
 * str_concat - concatenating two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to the new string.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	new_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= (len1 + len2); i++)
	{
		if (i < len1)
			new_str[i] = s1[i];

		else
			new_str[i] = s2[i - len1];
	}
	new_str[i] = '\0';
	return (new_str);
}
