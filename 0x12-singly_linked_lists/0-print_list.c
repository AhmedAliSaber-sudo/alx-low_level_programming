#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: Head of list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
