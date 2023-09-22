#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number.
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int last_d;

	if (n < 0)
	{
		n = n * -1;
	}

	last_d = n % 10;

	_putchar(last_d);
	return (last_d);
}
