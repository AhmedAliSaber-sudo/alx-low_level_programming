#include "main.h"

/**
* _strpbrk -  locates the first occurrence in the string s of any of
* the bytes in the string accept
* @s: string to search.
* @accept: target matches.
* Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
*/


char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
