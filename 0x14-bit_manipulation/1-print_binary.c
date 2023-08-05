#include "main.h"

/**
 * print_binary - prints the binary represntation of a number.
 * @n: integer.
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	for (i = (sizeof(n) * 8 - 1); i >= 0; i--)
	{
		mask = (1 << i);

		putchar((n & mask) ? '1' : '0');
	}
}
