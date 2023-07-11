#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - create array of chars (string).
 * @size: the size of the array.
 * @char: intitalize the array using this char.
 * Return: pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;
       	arr = malloc(sizeof(char) * size); /* allocat memory */

	if (size <= 0 || arr == NULL) /* validate the size and memory */
		return (NULL);

	while (i < (int)size) /* set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
