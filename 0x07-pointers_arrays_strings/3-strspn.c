#include "main.h"

/**
* _strspn - return length of string that matches values consistently
* @s: string to search
* @accept: target matches
* Return: number of bytes consecutively matched
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		if (strchr(accept, *s))
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
