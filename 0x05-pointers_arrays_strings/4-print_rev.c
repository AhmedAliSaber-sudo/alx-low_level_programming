#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s: pointer varivable.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int i, j;
	char temp;
	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		}
}