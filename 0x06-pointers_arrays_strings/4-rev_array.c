#include "main.h"

/**
* reverse_array - reverse array elements.
* @a: array.
* @n: number of elements in array.
*/

void reverse_array(int *a, int n)
{
	int *first = a;
	int *last = a + n - 1;
	int temp;

	while (first < last)
	{
		temp = *first;
		*first = *last;
		*last = temp;

		first++;
		last--;
	}
}
