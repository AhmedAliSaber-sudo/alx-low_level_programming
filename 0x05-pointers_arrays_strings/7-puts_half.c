#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: pointer varivable.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start = length / 2;

	if (length % 2 != 0)
	{
		start = (length - 1) / 2;
	}

	for (int i = start; i < length; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
