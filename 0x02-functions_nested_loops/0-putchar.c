#include <stdio.h>
#include <string.h>

/**
 * main - print _putchar
 * Return: always return 0
 */

int main(void)
{
	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
	return (0);
}
