#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string to search in.
* @accept: target matches.
* Return: number of bytes that matches.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		if (_strchr(s, *accept))
		{
			count++;
		}
		else
		{
			break;
		}
		s++;
	}

	return (count);
}
