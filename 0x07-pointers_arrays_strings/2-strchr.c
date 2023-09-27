#include "main.h"

/**
* _strchr -  locates a character in a string.
* @s: string.
* @c: target character.
* Return:  pointer to the first occurrence of the character c in the string s.
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) && *(s + i) != c)
	{
		i++;
	}

	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
