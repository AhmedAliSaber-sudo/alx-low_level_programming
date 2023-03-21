#include <stdio.h>

/**
 * main - the starting point.
 *
 * Return: always 0 (success).
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'e') && (alpha != 'q'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
