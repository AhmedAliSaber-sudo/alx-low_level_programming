#include "main.h"

/**
* print_alphabet - function that prints the alphabet, in lowercase,
* followed by a new line.
*/

void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
