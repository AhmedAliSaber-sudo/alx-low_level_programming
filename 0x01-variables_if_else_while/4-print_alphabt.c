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
		if ((alpha == 'e') || (alpha == 'q'))
		{
			continue;
			alpha++;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}
	
	putchar('\n');
	return (0);
}
