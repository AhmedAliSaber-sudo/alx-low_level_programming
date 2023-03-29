#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s: pointer varivable.
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
