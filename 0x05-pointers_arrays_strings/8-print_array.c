#include "main.h"
#include <stdio.h>

/**
 * puts2 -  a function that prints n elements of an array of integers, followed by a new line.
 *
 * @a: pointer varivable that point to the first element of the array.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
    int i;
    
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
