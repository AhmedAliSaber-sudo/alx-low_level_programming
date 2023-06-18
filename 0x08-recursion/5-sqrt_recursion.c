#include "main.h"
/**
 * _sqrt_finder - find the natural square root of the given num.
 * @n:the given number.
 * @i: the root
 * Return: natural square root or -1 if not natural root.
 */

int _sqrt_finder(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_finder(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: given number.
 * Return: the squar root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_finder(n, 0));
}
