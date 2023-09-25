#include "main.h"

/**
* print_line - draws a line in the terminal.
* @n: number of characters to draw.
*/

void print_line(int n)
{
	int line_long = n;

	for (line_long = n; line_long > 0; line_long--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
