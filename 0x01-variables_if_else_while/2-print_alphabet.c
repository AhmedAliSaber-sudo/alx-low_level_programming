#include <stdio.h>

/**
 * main - the starting point of the program.
 *
 * Return: always return 0.
 */

int main(void)
{
	char alphapet = 'a';

	while (alphapet <= 'z')
	{
		putchar(alphapet);
		alphapet++;
	}

	putchar('\n');

	return (0);
}
