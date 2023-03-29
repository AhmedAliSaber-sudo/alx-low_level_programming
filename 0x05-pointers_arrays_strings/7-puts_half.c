#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that prints half of a string, followed by a new line.
 *
 * @str: pointer varivable.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		putchar(str[i]);
		i++;
		str++;
	}

	putchar('\n');
}
