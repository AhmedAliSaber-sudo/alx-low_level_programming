#include <string.h>

/**
 * is_palindrome_recursive - check if the characters at the
 * start and end of the string are equal.
 * @s: the string.
 * @start: the start of the string.
 * @end: the end of the string.
 * Return: 1 or 0 or recursivly call the function.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - check if the string is palindrome or not.
 * @s: the string to be checked.
 * Return: retrun the result of function is_palindrome_recursive.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
