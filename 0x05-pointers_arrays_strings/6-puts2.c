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
	
	while (*str != '\0')
	{
		putchar(*str);
		str += 2;
	}

	putchar('\n');
}
