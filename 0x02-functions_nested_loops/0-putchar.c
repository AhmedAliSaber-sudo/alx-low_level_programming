#include <stdio.h>

/**
 * main - print _putcahr
 * @str: an array that hold a stream of chars to make a string
 *
 * Return: alwaus return 0
 */

int main(void)
{

	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < sizeof(str); i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
	return (0);
}
