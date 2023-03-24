#include <stdio.h>

/**
 * main - the starting point of the program
 *
 * Return: always 0
 */

int main(void)
{
	int i = '0';
	char alpha = 'a';

	while (alpha <= 'f')
	{
		while (i <= '9')
		{
			putchar(i);
			i++;
		}

		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
