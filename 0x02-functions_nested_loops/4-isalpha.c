#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: character letter.
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
