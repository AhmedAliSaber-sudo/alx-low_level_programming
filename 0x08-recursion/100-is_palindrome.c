#include <string.h>

/**
 * is_palindrome - check if the string is palindrome or not.
 * @s: the string to be checked.
 * Return: 0 if false. and 1 if true.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len / 2; i++)	
	{
		if (s[i] != s[len - i - 1])
		{
			return 0;
		}
	}
	return 1;
}
