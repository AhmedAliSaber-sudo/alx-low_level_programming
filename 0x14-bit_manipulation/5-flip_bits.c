#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *  to get from one number to another.
 *  @n: the first number.
 *  @m: the second number.
 *  Return: returns the number of bits that need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = 0;
	int changes = 0;
	int length = sizeof(n) * 8;

	while (index < length)
	{
		if (((n >> index) & 1) != ((m >> index) & 1))
			changes++;

		index++;
	}

	return (changes);
}
