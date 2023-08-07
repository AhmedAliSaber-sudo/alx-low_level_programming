#include "main.h"

/**
 * print_binary - prints the binary represntation of a number.
 * @n: integer.
 */

void print_binary(unsigned long int n)
{
	int length = 0;
	unsigned long int copy = n;
	unsigned long int mask = 1;

	while (n > 0)
	{
		length++;
		copy >>= 1;
	}

	mask <<= length;

	while (length > 0)
	{
		if (n & mask)
			printf("1");
		else
			printf("0");

		mask >>= 1;
	}
	printf("\n");
}
