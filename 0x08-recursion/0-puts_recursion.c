#include "main.h"
/**
 * _puts_recursion - print string with new line.
 * @s: string to print
 */

void puts_recursion(char *s)
	{
		if (*s == '\0')
		{
			putchar('\n');
			return;
		}
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
