#include "main.h"

/**
 * print_binary - prints the binary represntation of a number.
 * @n: integer.
 */

void print_binary(unsigned long int n)
{

	unsigned long int copy = n, mask = 1;
	int length = 0;

	while (copy > 0)
	{
		length++;
		copy >>= 1;
	}
	length -= 1;

	if (length > 0)
		mask = mask << length;

	while (mask > 0)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');

		mask >>= 1;
	}
}
