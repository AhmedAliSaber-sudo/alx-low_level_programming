#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code.
 * @argc: counter of arguments.
 * @argv: array of arguments.
 * Return: always 0 .
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *ptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (ptr = argv[1]; *ptr; ptr++)
		if (!isdigit(*ptr))
		{
			printf("Error\n");
			exit(98);
		}

	for (ptr = argv[2]; *ptr; ptr++)
		if (!isdigit(*ptr))
		{
			printf("Error\n");
			exit(98);
		}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	
	return (0);
}
