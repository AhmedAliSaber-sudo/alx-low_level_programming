#include "main.h"
#define NULL 0

/**
 * _strchr -  locates a character in a string.
 * @s: string.
 * @c: target character.
 * Return:  pointer to the first occurrence of the character c in the string s.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
