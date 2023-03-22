#include <stdio.h>

/**
 * main - the starting point.
 *
 * Return: always 0 (success).
 */

int main(void)
{
	char lower_alpha = 'a';
	char capital_alpha = 'A';

	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}
	while (capital_alpha <= 'Z')
	{
		putchar(capital_alpha);
		capital_alpha++;
	}

	putchar('\n');

	return (0);
}
