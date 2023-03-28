#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: pointer varible.
 * @b: pointer varible.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int swapper = *a;

	*a = *b;
	*b = swapper;
}
