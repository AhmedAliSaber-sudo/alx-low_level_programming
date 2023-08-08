#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number.
 * @index: the index of the bit.
 * Return: 1 if worked, 0 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1Ul << index);
	return (1);
}
