#include "main.h"
#include <stdio.h>

/**
 * puts2 -  a function that prints every other character of the string.
 *
 * @str: pointer varivable.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
