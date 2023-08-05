#include "main.h"

/**
 * print_binary - prints the binary represntation of a number.
 * @n: integer.
 */

void print_binary(unsigned long int n)
{

	unsigned long int mask = 1UL << (sizeof(n) * CHAR_BIT - 1);

	while (mask > 0)
	{
		if ((n & mask) == 0)
			printf("0");
		else
			printf("1");

		mask >>= 1;
	}
}
