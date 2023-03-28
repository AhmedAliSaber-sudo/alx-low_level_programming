#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line.
 *
 * @s: pointer varivable.
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (j != *(s + i))
	{
		putchar(*(s + i));
		i--;
		j++;
	}

}

