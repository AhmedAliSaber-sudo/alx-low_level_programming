#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: Absolute value of the number.
 */

int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

