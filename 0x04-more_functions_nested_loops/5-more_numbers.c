#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times.
 */

void more_numbers(void)
{
	char i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
