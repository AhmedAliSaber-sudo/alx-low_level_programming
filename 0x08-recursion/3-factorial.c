#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: int number that we will get its factorial.
 * return: number factorial.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
