#include "main.h"
/**
 * is_prime_helper - recursively divide by higher divisor.
 * @n: number to check if prime.
 * @i: divisor.
 * Return: 1 if prime, 0 if not prime, or recursive the function.
 */

int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return 0;
	if (i * i == n)
		return 1;
	if (n % i == 0)
		return 0;
	return is_prime_helper(n, i + 1);
}

/**
 * is_prime_number - check if prime.
 * @n: number to check.
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	return is_prime_helper(n, 2);
}
