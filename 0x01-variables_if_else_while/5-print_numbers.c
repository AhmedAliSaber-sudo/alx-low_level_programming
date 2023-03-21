#include <stdio.h>

/**
 * main - print from 0 to 9.
 *
 * Return: always 0 (success).
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}

	putchar('\n');
	return (0);
}
