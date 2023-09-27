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
	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				return (s);

		}
		accept = accept - strlen(accept) + 1;
	}
	return (NULL);
}
