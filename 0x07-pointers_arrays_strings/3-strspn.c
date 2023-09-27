#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string to search in.
* @accept: target matches.
* Return: number of bytes that matches.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int count = 0;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (count);
		}
		i++;
	}
	return (count);
}
